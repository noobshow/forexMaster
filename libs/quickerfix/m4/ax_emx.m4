AC_DEFUN([AX_EMX],
[
has_emx=false
AC_ARG_WITH(emx,
    [  --with-emx      enable EMX message header extension], 
    [if test $withval == "no"
     then
       has_emx=false
     else
       has_emx=true
     fi],
    has_emx=false
)

])
AC_DEFUN([AX_EMX_CHECK],
[
AC_MSG_CHECKING(if EMX type should be present)
if test $has_emx = true
then
   AC_DEFINE_UNQUOTED(HAVE_EMX, 1, Define to enable EMX message header extension)
   AC_MSG_RESULT(yes)
else
   AC_MSG_RESULT(no)
fi
])
