AC_DEFUN([AX_LIB_BOOST],
[
has_boost=false
AC_ARG_WITH(boost,
    [  --with-boost=<path>     prefix of boost installation. e.g. /usr/local/include/boost-1_33_1], 
    [if test $withval == "no"
     then
       has_boost=false
     else
       has_boost=true
     fi],
    has_boost=false
)
BOOST_PREFIX=$with_boost
AC_SUBST(BOOST_PREFIX)

if test $has_boost = true
then
    BOOST_LIBS="-L${BOOST_PREFIX}/lib -lboost_system -lboost_thread"
    BOOST_CFLAGS="-I${BOOST_PREFIX}/include"
    AC_SUBST(BOOST_CFLAGS)
    AC_DEFINE(HAVE_BOOST, 1, Define if you have boost framework)
fi
])
AC_DEFUN([AX_LIB_BOOST_CHECK],
[
if test $has_boost = true
then
    AC_MSG_CHECKING(for Boost)
    AC_TRY_COMPILE(
                [#include <boost/version.hpp>],
                [int v = BOOST_VERSION;],
                AC_MSG_RESULT(yes),
                AC_MSG_ERROR(no))
    PREVLIBS=$LIBS
    LIBS=$BOOST_LIBS
    not_linked=false
    AC_MSG_CHECKING(how to link Boost)
    AC_TRY_LINK(
                [#include <boost/thread.hpp>],
                [boost::thread t;],
                AC_MSG_RESULT(yes),
                not_linked=true)
    if test $not_linked = true 
    then
      LIBS="-L${BOOST_PREFIX}/lib -lboost_system-mt -lboost_thread-mt"
      AC_TRY_LINK(
                [#include <boost/thread.hpp>],
                [boost::thread t;],
                AC_MSG_RESULT(needs -mt),
                AC_MSG_ERROR(no))
      BOOST_LIBS=$LIBS
    fi
    LIBS=$PREVLIBS
fi
])
