AC_DEFUN([AX_THROW_DECL],
[
enable_throw_decl=true
AC_ARG_WITH(throw-decl,
    [  --with-throw-decl       use dynamic exception specifications], 
    [if test x$withval == "xno"
     then
       enable_throw_decl=false
     fi
     has_throw_decl=true],
     has_throw_decl=false
)
])
AC_DEFUN([AX_THROW_DECL_CHECK],
[
if test $has_throw_decl != true
then
    AC_TRY_COMPILE(
        [template <bool> struct s{};
         template <> struct s<true> { typedef int type; };],
         [s<__cplusplus < 201103>::type v;],
         enable_throw_decl=true,
         enable_throw_decl=false)
fi
if test $enable_throw_decl = true
then
    AC_MSG_CHECKING(for dynamic exception specifications)
    AC_TRY_COMPILE(
                [struct s { void f() throw ( bool ) {} };],
                [],
                AC_MSG_RESULT(yes),
                AC_MSG_ERROR(no))
   AC_DEFINE_UNQUOTED(ENABLE_THROW_DECL, 1, Define to enable short string optimization)
fi
])
