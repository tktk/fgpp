#ifndef FGPP_DEF_COMMON_STRING_H
#define FGPP_DEF_COMMON_STRING_H

#include "fgpp/def/common/primitives.h"

#include <string>

namespace fg {
    class BString : public std::basic_string< StringChar >
    {
    public:
        using std::basic_string< StringChar >::basic_string;
    };

    class BUtf8 : public std::basic_string< Utf8Char >
    {
    public:
        using std::basic_string< Utf8Char >::basic_string;
    };

    class BUtf16 : public std::basic_string< Utf16Char >
    {
    public:
        using std::basic_string< Utf16Char >::basic_string;
    };

    class BUtf32 : public std::basic_string< Utf32Char >
    {
    public:
        using std::basic_string< Utf32Char >::basic_string;
    };
}

#endif  // FGPP_DEF_COMMON_STRING_H
