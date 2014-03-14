#ifndef FGPP_DEF_COMMON_WEAK_H
#define FGPP_DEF_COMMON_WEAK_H

#include <memory>

namespace fg {
    template< typename T >
    using Weak = std::weak_ptr< T >;

    template< typename T >
    Weak< typename T::element_type > weak(
        T   _sharedPtr
    )
    {
        return Weak< typename T::element_type >(
            _sharedPtr
        );
    }
}

#endif  // FGPP_DEF_COMMON_WEAK_H
