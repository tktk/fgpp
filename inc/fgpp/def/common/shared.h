#ifndef FGPP_DEF_COMMON_SHARED_H
#define FGPP_DEF_COMMON_SHARED_H

#include "fgpp/def/common/functional.h"

#include <memory>
#include <type_traits>

namespace fg {
    template< typename T >
    using Shared = std::shared_ptr< T >;

    template< typename T >
    Shared< typename std::remove_pointer< T >::type > shared(
        T   _ptr
    )
    {
        return Shared< typename std::remove_pointer< T >::type >(
            _ptr
            , Free< T >()
        );
    }
}

#endif  // FGPP_DEF_COMMON_SHARED_H
