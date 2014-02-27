#ifndef FGPP_UTIL_IMPORT_H
#define FGPP_UTIL_IMPORT_H

#ifndef FGPPEXPORT

#   if defined COMPILER_TYPE_CLANG  // COMPILER_TYPE
#       define FGPPEXPORT extern
#   elif defined COMPILER_TYPE_MSVC // COMPILER_TYPE
#       define FGPPEXPORT extern __declspec( dllimport )
#   else    // COMPILER_TYPE
#       error 未対応のコンパイラタイプ
#   endif   // COMPILER_TYPE

#   define FGPP_DECLARE_FUNCTION( _func, _returnType ) \
        FGPPEXPORT _returnType _func;
#   define FGPP_FUNCTION_VOID( _func ) \
        FGPP_DECLARE_FUNCTION( _func, void )
#   define FGPP_FUNCTION_BOOL( _func ) \
        FGPP_DECLARE_FUNCTION( _func, Bool )
#   define FGPP_FUNCTION_NUM( _func, _returnType ) \
        FGPP_DECLARE_FUNCTION( _func, _returnType )
#   define FGPP_FUNCTION_PTR( _func, _returnType ) \
        FGPP_DECLARE_FUNCTION( _func, _returnType * )
#   define FGPP_FUNCTION_REF( _func, _returnType ) \
        FGPP_DECLARE_FUNCTION( _func, _returnType & )
#   define FGPP_FUNCTION_ENUM( _func, _returnType, _dummyValue ) \
        FGPP_DECLARE_FUNCTION( _func, _returnType )

#endif  // FGPPEXPORT

#endif  // FGPP_UTIL_IMPORT_H
