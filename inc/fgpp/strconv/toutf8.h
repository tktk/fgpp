#ifndef FGPP_STRCONV_TOUTF8_H
#define FGPP_STRCONV_TOUTF8_H

#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    enum {
        MAX_UTF8_CHAR_COUNT = 6,
    };

    FGPP_FUNCTION_BOOL(
        toUtf8(
            Utf8 &
            , const String &
        )
    )

    FGPP_FUNCTION_BOOL(
        toUtf8(
            Utf8 &
            , const Utf16 &
        )
    )

    FGPP_FUNCTION_BOOL(
        toUtf8(
            Utf8 &
            , const Utf32 &
        )
    )
}

#endif  // FGPP_STRCONV_TOUTF8_H
