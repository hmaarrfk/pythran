#ifndef PYTHONIC_INCLUDE_NUMPY_ARCTAN_HPP
#define PYTHONIC_INCLUDE_NUMPY_ARCTAN_HPP

#include "pythonic/include/utils/functor.hpp"
#include "pythonic/include/types/ndarray.hpp"
#include "pythonic/include/utils/numpy_traits.hpp"

#include <xsimd/xsimd.hpp>

PYTHONIC_NS_BEGIN

namespace numpy
{

#define TRIGO_FUN atan
#include "pythonic/include/numpy/trigo.hpp"

#define NUMPY_NARY_FUNC_NAME arctan
#define NUMPY_NARY_FUNC_SYM wrapper::atan
#include "pythonic/include/types/numpy_nary_expr.hpp"
}
PYTHONIC_NS_END

#endif
