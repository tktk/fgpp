#ifndef FGPP_DEF_COMMON_PRIMITIVES_H
#define FGPP_DEF_COMMON_PRIMITIVES_H

#include <cstddef>

namespace fg {
    typedef bool Bool;

    typedef std::size_t Size;

    typedef char Byte;
    typedef unsigned char UByte;
    typedef short Short;
    typedef unsigned short UShort;
    typedef int Int;
    typedef unsigned int UInt;
    typedef long long Long;
    typedef unsigned long long ULong;

    typedef float Float;
    typedef double Double;

    typedef char StringChar;
    typedef char Utf8Char;
    typedef char16_t Utf16Char;
    typedef char32_t Utf32Char;
}

#endif  // FGPP_DEF_COMMON_PRIMITIVES_H
