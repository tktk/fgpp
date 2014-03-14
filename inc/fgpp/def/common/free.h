#ifndef FGPP_DEF_COMMON_FREE_H
#define FGPP_DEF_COMMON_FREE_H

#define FGPP_DEFINE_FREE( _type ) \
    template<> \
    inline void Free< _type * >::operator()( \
        _type * _this \
    ) const \
    { \
        return free( *_this ); \
    } \

namespace fg {
    template< typename T >
    struct Free
    {
        void operator()(
            T
        ) const;
    };
}

#endif  // FGPP_DEF_COMMON_FREE_H
