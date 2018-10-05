/****************************************************************************
** Copyright (c) 2001-2014
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "FileLog.h"

namespace FIX
{
Log* COLDSECTION FileLogFactory::create()
{
  m_globalLogCount++;
  if( m_globalLogCount > 1 ) return m_globalLog;

  try
  {
    if ( m_path.size() ) return new FileLog( m_path );
    std::string path;
    std::string backupPath;
    std::string rollover;

    Dictionary settings = m_settings.get();
    path = settings.getString( FILE_LOG_PATH );
    backupPath = path;
    if( settings.has( FILE_LOG_BACKUP_PATH ) )
      backupPath = settings.getString( FILE_LOG_BACKUP_PATH );
    if( settings.has( FILE_LOG_ROLLOVER ) )
      rollover = settings.getString( FILE_LOG_ROLLOVER );

    return m_globalLog = new FileLog( path, backupPath, FileLog::getRollover(rollover) );
  }
  catch( ConfigError& )
  {
  m_globalLogCount--;
  throw;  
  }
}

Log* COLDSECTION FileLogFactory::create( const SessionID& s )
{
  if ( m_path.size() && m_backupPath.size() )
    return new FileLog( m_path, m_backupPath, s );
  if ( m_path.size() ) 
    return new FileLog( m_path, s );

  std::string path;
  std::string backupPath;
  std::string rollover;
  Dictionary settings = m_settings.get( s );
  path = settings.getString( FILE_LOG_PATH );
  backupPath = path;
  if( settings.has( FILE_LOG_BACKUP_PATH ) )
    backupPath = settings.getString( FILE_LOG_BACKUP_PATH );
  if( settings.has( FILE_LOG_ROLLOVER ) )
    rollover = settings.getString( FILE_LOG_ROLLOVER );

  return new FileLog( path, backupPath, s, FileLog::getRollover(rollover) );
}

void COLDSECTION FileLogFactory::destroy( Log* pLog )
{
  if( pLog == m_globalLog )
  {
    m_globalLogCount--;
    if( m_globalLogCount == 0 )
    {
      delete pLog;
      m_globalLogCount = 0;
    }  
  }
  else
  {
    delete pLog;
  }
}

static bool cncasecmp(char a, char b) { return Util::Char::toupper(a) == Util::Char::toupper(b); }
static bool sncasecmp(const std::string& a, const std::string& b) {
	return (a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin(), cncasecmp));
}

FileLog::Rollover FileLog::getRollover(const std::string& value) {
  if (sncasecmp(value, "HOURLY")) return HOURLY_ROLLOVER;
  if (sncasecmp(value, "DAILY")) return DAILY_ROLLOVER;
  if (sncasecmp(value, "WEEKLY")) return WEEKLY_ROLLOVER;
  return NO_ROLLOVER;
}

void FileLog::rollover(const UtcTimeStamp& current, UtcTimeStamp& last, const std::string& filename, std::ofstream& s) {
  switch(m_rollover) {
    case HOURLY_ROLLOVER:
	if (LIKELY(current .getHour() == last.getHour())) return;
	last.setHMS(last.getHour(), 0, 0, 0);
	break;
    case DAILY_ROLLOVER:
	if (LIKELY(current.getDay() == last.getDay())) return;
	last.setHMS(0, 0, 0, 0);
	break;
    case WEEKLY_ROLLOVER:
	if (LIKELY(current.getDay() == last.getDay()) || current.getWeekDay() != last.getWeekDay()) return;
	last.setHMS(0, 0, 0, 0);
	break;
    case NO_ROLLOVER: return;
  }
  std::string newfilename = filename + "." + UtcTimeStampConvertor::convert(last, false);
  s.close(); 
  file_rename( filename.c_str(), newfilename.c_str() );
  s.open( filename.c_str(), std::ios::out | std::ios::trunc );
  last = current;
}

COLDSECTION FileLog::FileLog( const std::string& path, Rollover r )
: m_rollover(r)
{
  init( path, path, "GLOBAL" );
}

COLDSECTION FileLog::FileLog( const std::string& path, const std::string& backupPath, Rollover r )
: m_rollover(r)
{
  init( path, backupPath, "GLOBAL" );
}

COLDSECTION FileLog::FileLog( const std::string& path, const SessionID& s, Rollover r )
: m_rollover(r)
{
  init( path, path, generatePrefix(s) );
}

COLDSECTION FileLog::FileLog( const std::string& path, const std::string& backupPath, const SessionID& s, Rollover r )
: m_rollover(r)
{
  init( path, backupPath, generatePrefix(s) );
}

COLDSECTION std::string FileLog::generatePrefix( const SessionID& s )
{
  const std::string& begin =
    s.getBeginString().dupString();
  const std::string& sender =
    s.getSenderCompID().dupString();
  const std::string& target =
    s.getTargetCompID().dupString();
  const std::string& qualifier =
    s.getSessionQualifier();

  std::string prefix = begin + "-" + sender + "-" + target;
  if( qualifier.size() )
    prefix += "-" + qualifier;

  return prefix;
}

COLDSECTION void FileLog::init( std::string path, std::string backupPath, const std::string& prefix )
{
  m_timeStamp.reserve(32);
	
  m_messages.rdbuf()->pubsetbuf(m_messageBuf, BufSize);
  m_event.rdbuf()->pubsetbuf(m_eventBuf, BufSize);

  file_mkdir( path.c_str() );
  file_mkdir( backupPath.c_str() );

  if ( path.empty() ) path = ".";
  if ( backupPath.empty() ) backupPath = path;

  m_fullPrefix
    = file_appendpath(path, prefix + ".");
  m_fullBackupPrefix
    = file_appendpath(backupPath, prefix + ".");

  m_messagesFileName = m_fullPrefix + "messages.current.log";
  m_eventFileName = m_fullPrefix + "event.current.log";

  m_messages.open( m_messagesFileName.c_str(), std::ios::out | std::ios::app );
  if ( !m_messages.is_open() ) throw ConfigError( "Could not open messages file: " + m_messagesFileName );
  m_event.open( m_eventFileName.c_str(), std::ios::out | std::ios::app );
  if ( !m_event.is_open() ) throw ConfigError( "Could not open event file: " + m_eventFileName );
}

COLDSECTION FileLog::~FileLog()
{
  m_messages.close();
  m_event.close();
}

COLDSECTION void FileLog::clear()
{
  m_messages.close();
  m_event.close();

  m_messages.open( m_messagesFileName.c_str(), std::ios::out | std::ios::trunc );
  m_event.open( m_eventFileName.c_str(), std::ios::out | std::ios::trunc );
}

COLDSECTION void FileLog::backup()
{
  m_messages.close();
  m_event.close();

  int i = 0;
  while( true )
  {
    std::stringstream messagesFileName;
    std::stringstream eventFileName;
 
    messagesFileName << m_fullBackupPrefix << "messages.backup." << ++i << ".log";
    eventFileName << m_fullBackupPrefix << "event.backup." << i << ".log";
    std::FILE* messagesLogFile = file_fopen( messagesFileName.str().c_str(), "r" );
    std::FILE* eventLogFile = file_fopen( eventFileName.str().c_str(), "r" );

    if( messagesLogFile == NULL && eventLogFile == NULL )
    {
      file_rename( m_messagesFileName.c_str(), messagesFileName.str().c_str() );
      file_rename( m_eventFileName.c_str(), eventFileName.str().c_str() );
      m_messages.open( m_messagesFileName.c_str(), std::ios::out | std::ios::trunc );
      m_event.open( m_eventFileName.c_str(), std::ios::out | std::ios::trunc );
      return;
    }
    
    if( messagesLogFile != NULL ) file_fclose( messagesLogFile );
    if( eventLogFile != NULL ) file_fclose( eventLogFile );
  }
}

} //namespace FIX
