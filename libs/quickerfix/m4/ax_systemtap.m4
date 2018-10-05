AC_DEFUN([AX_SYSTEMTAP],
[
has_systemtap=false
AC_ARG_WITH(systemtap,
    [  --with-systemtap        enable SystemTap probing], 
    [if test $withval == "no"
     then
       has_systemtap=false
     else
       has_systemtap=true
     fi],
    has_systemtap=false
)
SYSTEMTAP_PREFIX=$with_systemtap

if test $has_systemtap = true
then
    SYSTEMTAP_CFLAGS=
    if test "x$with_systemtap" != xyes
    then
      SYSTEMTAP_CFLAGS="-I${SYSTEMTAP_PREFIX}/include"
    fi
    AC_SUBST(SYSTEMTAP_CFLAGS)
    AC_DEFINE(HAVE_SYSTEMTAP, 1, Define to enable SystemTap probing)
fi
])
AC_DEFUN([AX_SYSTEMTAP_CHECK],
[
if test $has_systemtap = true
then
    AC_MSG_CHECKING(for SystemTap)
    AC_TRY_COMPILE(
                [#include <sys/sdt.h>],
                [STAP_PROBE(test, in_main);],
                AC_MSG_RESULT(yes),
                AC_MSG_ERROR(no))
fi
])
