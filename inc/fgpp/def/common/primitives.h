#ifndef FGPP_DEF_COMMON_PRIMITIVES_H
#define FGPP_DEF_COMMON_PRIMITIVES_H

#include <cstddef>
#include <string>

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

    template< typename CHAR_T >
    class StringViewTmpl
    {
    private:
        CHAR_T *    ptr;
        Size        length;

    public:
        StringViewTmpl(
        ) = default;

        StringViewTmpl(
            decltype( ptr )         _ptr
            , decltype( length )    _length
        )
            : ptr( _ptr )
            , length( _length )
        {
        }

        StringViewTmpl(
            std::basic_string< CHAR_T > &   _string
        )
            : StringViewTmpl(
                const_cast< CHAR_T * >( _string.data() )
                , _string.length()
            )
        {
        }

        decltype( length ) getLength(
        ) const
        {
            return this->length;
        }

        void setLength(
            decltype( length )  _length
        )
        {
            this->length = _length;
        }

        const decltype( *ptr ) & operator[](
            decltype( length )  _index
        ) const
        {
            return this->ptr[ _index ];
        }

        decltype( *ptr ) & operator[](
            decltype( length )  _index
        )
        {
            return this->ptr[ _index ];
        }

        void assign(
            decltype( ptr )         _ptr
            , decltype( length )    _length
        )
        {
            this->ptr = _ptr;
            this->length = _length;
        }

        void assign(
            std::basic_string< CHAR_T > &   _string
        )
        {
            this->assign(
                const_cast< CHAR_T * >( _string.data() )
                , _string.length()
            );
        }
    };

    typedef StringViewTmpl< StringChar > StringView;
    typedef StringViewTmpl< Utf8Char > Utf8View;
    typedef StringViewTmpl< Utf16Char > Utf16View;
    typedef StringViewTmpl< Utf32Char > Utf32View;

    typedef std::basic_string< StringChar > String;
    typedef std::basic_string< Utf8Char > Utf8;
    typedef std::basic_string< Utf16Char > Utf16;
    typedef std::basic_string< Utf32Char > Utf32;
}

#endif  // FGPP_DEF_COMMON_PRIMITIVES_H
