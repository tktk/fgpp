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
    class StringTmpl
    {
    private:
        CHAR_T *    ptr;
        Size        length;

    public:
        StringTmpl(
        ) = default;

        StringTmpl(
            decltype( ptr )         _ptr
            , decltype( length )    _length
        )
            : ptr( _ptr )
            , length( _length )
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

        StringTmpl(
            std::basic_string< CHAR_T > &   _string
        )
            : StringTmpl(
                const_cast< CHAR_T * >( _string.data() )
                , _string.length()
            )
        {
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

    class String : public StringTmpl< StringChar >
    {
    public:
        using StringTmpl< StringChar >::StringTmpl;
    };

    class Utf8 : public StringTmpl< Utf8Char >
    {
    public:
        using StringTmpl< Utf8Char >::StringTmpl;
    };

    class Utf16 : public StringTmpl< Utf16Char >
    {
    public:
        using StringTmpl< Utf16Char >::StringTmpl;
    };

    class Utf32 : public StringTmpl< Utf32Char >
    {
    public:
        using StringTmpl< Utf32Char >::StringTmpl;
    };
}

#endif  // FGPP_DEF_COMMON_PRIMITIVES_H
