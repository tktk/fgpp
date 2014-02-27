#ifndef FGPP_STRCONV_TOUTF16_H
#define FGPP_STRCONV_TOUTF16_H

#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    enum {
        MAX_UTF16_CHAR_COUNT = 2,
    };

    FGPP_FUNCTION_BOOL(
        toUtf16(
            Utf16 &
            , const String &
        )
    )

    FGPP_FUNCTION_BOOL(
        toUtf16(
            Utf16 &
            , const Utf8 &
        )
    )

    FGPP_FUNCTION_BOOL(
        toUtf16(
            Utf16 &
            , const Utf32 &
        )
    )
}

#endif  // FGPP_STRCONV_TOUTF16_H
