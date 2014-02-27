#ifndef FGPP_UTIL_EXPORTCOMMON_H
#define FGPP_UTIL_EXPORTCOMMON_H

#if defined COMPILER_TYPE_CLANG // COMPILER_TYPE
#   define FGPPEXPORT extern __attribute__( ( visibility( "default" ) ) )
#elif defined COMPILER_TYPE_MSVC    // COMPILER_TYPE
#   define FGPPEXPORT extern __declspec( dllexport )
#else   // COMPILER_TYPE
#   error 未対応のコンパイラタイプ
#endif  // COMPILER_TYPE

#endif  // FGPP_UTIL_EXPORTCOMMON_H
