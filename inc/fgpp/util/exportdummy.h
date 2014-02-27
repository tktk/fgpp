#ifndef FGPP_UTIL_EXPORT_H
#define FGPP_UTIL_EXPORT_H

#include "fgpp/util/exportcommon.h"

#define FGPP_DEFINE_FUNCTION( _func, _returnType, _dummyProc ) \
    FGPPEXPORT _returnType _func { _dummyProc };
#define FGPP_FUNCTION_VOID( _func ) \
    FGPP_DEFINE_FUNCTION( _func, void, )
#define FGPP_FUNCTION_BOOL( _func ) \
    FGPP_DEFINE_FUNCTION( _func, Bool, return false; )
#define FGPP_FUNCTION_NUM( _func, _returnType ) \
    FGPP_DEFINE_FUNCTION( _func, _returnType, return 0; )
#define FGPP_FUNCTION_PTR( _func, _returnType ) \
    FGPP_DEFINE_FUNCTION( _func, _returnType *, return nullptr; )
#define FGPP_FUNCTION_REF( _func, _returnType ) \
    FGPP_DEFINE_FUNCTION( _func, _returnType &, _returnType * tmp = nullptr; return *tmp; )
#define FGPP_FUNCTION_ENUM( _func, _returnType, _dummyReturn ) \
    FGPP_DEFINE_FUNCTION( _func, _returnType, return _dummyReturn; )

#endif  // FGPP_UTIL_EXPORT_H
