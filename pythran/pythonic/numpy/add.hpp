#ifndef PYTHONIC_NUMPY_ADD_HPP
#define PYTHONIC_NUMPY_ADD_HPP

#include "pythonic/utils/proxy.hpp"
#include"pythonic/types/ndarray.hpp"
#include "pythonic/types/numpy_broadcast.hpp"
#include "pythonic/utils/numpy_traits.hpp"
#include "pythonic/operator_/add.hpp"

namespace pythonic {

    namespace numpy {

    #define NUMPY_BINARY_FUNC_NAME add
    #define NUMPY_BINARY_FUNC_SYM pythonic::operator_::add
    #include "pythonic/types/numpy_binary_expr.hpp"

    }

}

#endif

