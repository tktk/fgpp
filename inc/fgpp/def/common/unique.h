#ifndef FGPP_DEF_COMMON_UNIQUE_H
#define FGPP_DEF_COMMON_UNIQUE_H

#include "fgpp/def/common/free.h"

#include <memory>
#include <type_traits>

namespace fg {
    template< typename T >
    using Unique = std::unique_ptr<
        T
        , Free< T * >
    >;

    template< typename T >
    Unique< typename std::remove_pointer< T >::type > unique(
        T   _ptr
    )
    {
        return Unique< typename std::remove_pointer< T >::type >(
            _ptr
        );
    }
}

#endif  // FGPP_DEF_COMMON_UNIQUE_H
