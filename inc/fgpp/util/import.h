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

#   include "fgpp/util/declarefunction.h"

#endif  // FGPPEXPORT

#endif  // FGPP_UTIL_IMPORT_H
