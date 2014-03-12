#ifndef FGPP_STRCONV_TOUTF32_H
#define FGPP_STRCONV_TOUTF32_H

#include "fgpp/def/strconv/toutf32.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPP_FUNCTION_BOOL(
        toUtf32(
            Utf32 &
            , const String &
            , Size &
            , Size &
        )
    )

    FGPP_FUNCTION_BOOL(
        toUtf32(
            Utf32 &
            , const Utf8 &
            , Size &
            , Size &
        )
    )

    FGPP_FUNCTION_BOOL(
        toUtf32(
            Utf32 &
            , const Utf16 &
            , Size &
            , Size &
        )
    )
}

#endif  // FGPP_STRCONV_TOUTF32_H
