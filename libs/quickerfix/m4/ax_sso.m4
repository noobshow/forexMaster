AC_DEFUN([AX_SSO],
[
has_sso=false
AC_ARG_WITH(sso,
    [  --with-sso              short string optimization], 
    [if test $withval == "no"
     then
       has_sso=false
     else
       has_sso=true
     fi],
    has_sso=false
)

])
AC_DEFUN([AX_SSO_CHECK],
[
if test $has_sso = true
then
    sso_level=3
    sso_bytes=32
    if test "x$with_sso" == "x1"
    then
      sso_level=1
      sso_bytes=16
    elif test "x$with_sso" == "x2"
    then
      sso_level=2
      sso_bytes=24
    elif test "x$with_sso" == "x3"
    then
      sso_level=3
      sso_bytes=32
    elif test "x$with_sso" != "xyes"
    then 
      AC_MSG_ERROR([invalid value: $with_sso])
    fi
    AC_MSG_CHECKING(for short string optimization)
    AC_TRY_COMPILE(
                [#include <string>
                 #include <stdint.h>
                 template <bool> struct s{};
                 template <> struct s<true> { typedef int type; };],
                [s<(sizeof(std::string) < 2 * sizeof(intptr_t))>::type v;],
                AC_MSG_RESULT($sso_bytes bytes),
                AC_MSG_ERROR(no))
   AC_DEFINE_UNQUOTED(ENABLE_SSO, ${sso_level}, Define to enable short string optimization)
fi
])
