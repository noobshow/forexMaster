#include <unistd.h>
#include <sys/types.h>
#include <sys/time.h>
int main(int argc, char** argv)
{
  struct timeval tv;
  tv.tv_sec = 0;
  tv.tv_usec = 1;
  select(0,0,0,0,&tv);
  return tv.tv_usec != 1 ? 0 : 1;
}
