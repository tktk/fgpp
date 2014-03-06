#ifndef FGPP_STRCONV_TOUTF16_H
#define FGPP_STRCONV_TOUTF16_H

#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPP_FUNCTION_BOOL(
        toUtf16(
            Utf16 &
            , const String &
            , Size &
            , Size &
        )
    )

    FGPP_FUNCTION_BOOL(
        toUtf16(
            Utf16 &
            , const Utf8 &
            , Size &
            , Size &
        )
    )

    FGPP_FUNCTION_BOOL(
        toUtf16(
            Utf16 &
            , const Utf32 &
            , Size &
            , Size &
        )
    )
}

#endif  // FGPP_STRCONV_TOUTF16_H
