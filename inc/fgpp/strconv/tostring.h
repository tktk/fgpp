#ifndef FGPP_STRCONV_TOSTRING_H
#define FGPP_STRCONV_TOSTRING_H

#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPP_FUNCTION_NUM(
        getMaxStringCharCount(
        )
        , Size
    )

    FGPP_FUNCTION_BOOL(
        toString(
            String &
            , const Utf8 &
        )
    )

    FGPP_FUNCTION_BOOL(
        toString(
            String &
            , const Utf16 &
        )
    )

    FGPP_FUNCTION_BOOL(
        toString(
            String &
            , const Utf32 &
        )
    )
}

#endif  // FGPP_STRCONV_TOSTRING_H
