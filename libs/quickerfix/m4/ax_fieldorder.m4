AC_DEFUN([AX_FIELD_ORDER],
[
has_field_order=false
AC_ARG_WITH(field-order,
    [  --with-field-order      enable dictionary field order for message header/body/trailer], 
    [if test $withval == "no"
     then
       has_field_order=false
     else
       has_field_order=true
     fi],
    has_field_order=false
)

])
AC_DEFUN([AX_FIELD_ORDER_CHECK],
[
AC_MSG_CHECKING(for dictionary field order)
if test $has_field_order = true
then
   AC_DEFINE_UNQUOTED(ENABLE_DICTIONARY_FIELD_ORDER, 1, Define to enable dictionary field order)
   AC_MSG_RESULT(yes)
else
   AC_MSG_RESULT(no)
fi
])
