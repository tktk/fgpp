#ifndef FGPP_STRCONV_TOUTF32_H
#define FGPP_STRCONV_TOUTF32_H

#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    enum {
        MAX_UTF32_CHAR_COUNT = 1,
    };

    FGPP_FUNCTION_BOOL(
        toUtf32(
            Utf32 &
            , const String &
        )
    )

    FGPP_FUNCTION_BOOL(
        toUtf32(
            Utf32 &
            , const Utf8 &
        )
    )

    FGPP_FUNCTION_BOOL(
        toUtf32(
            Utf32 &
            , const Utf16 &
        )
    )
}

#endif  // FGPP_STRCONV_TOUTF32_H
