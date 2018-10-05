AC_DEFUN([AX_VMA],
[
has_vma=false
AC_ARG_WITH(vma,
    [  --with-vma              enable use of Mellanox VMA zerocopy receive], 
    [if test $withval == "no"
     then
       has_vma=false
     else
       has_vma=true
     fi],
    has_vma=false
)
VMA_PREFIX=$with_vma

if test $has_vma = true
then
    VMA_CFLAGS=
    if test "x$with_vma" != xyes
    then
      VMA_CFLAGS="-I${VMA_PREFIX}/include"
    fi
    AC_SUBST(VMA_CFLAGS)
    AC_DEFINE(HAVE_VMA, 1, Define to enable Mellanox VMA)
fi
])
AC_DEFUN([AX_VMA_CHECK],
[
if test $has_vma = true
then
    AC_MSG_CHECKING(for Mellanox VMA)
    AC_TRY_COMPILE(
                [#include <mellanox/vma_extra.h>],
                [vma_packet_t v;],
                AC_MSG_RESULT(yes),
                AC_MSG_ERROR(no))
fi
])
