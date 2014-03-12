#ifndef FGPP_STRCONV_TOUTF8_H
#define FGPP_STRCONV_TOUTF8_H

#include "fgpp/def/strconv/toutf8.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPP_FUNCTION_BOOL(
        toUtf8(
            Utf8 &
            , const String &
            , Size &
            , Size &
        )
    )

    FGPP_FUNCTION_BOOL(
        toUtf8(
            Utf8 &
            , const Utf16 &
            , Size &
            , Size &
        )
    )

    FGPP_FUNCTION_BOOL(
        toUtf8(
            Utf8 &
            , const Utf32 &
            , Size &
            , Size &
        )
    )
}

#endif  // FGPP_STRCONV_TOUTF8_H
