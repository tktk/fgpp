#ifndef FGPP_BOOT_CONFIG_H
#define FGPP_BOOT_CONFIG_H

#include "fgpp/def/boot/config.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/def/common/free.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        newBootConfig(
        )
        , BootConfig
    )

    FGPP_FUNCTION_VOID(
        free(
            BootConfig &
        )
    )

    FGPP_DEFINE_FREE( BootConfig )

    FGPP_FUNCTION_BOOL(
        setMainFile(
            BootConfig &
            , const Utf32 &
        )
    )

    FGPP_FUNCTION_BOOL(
        setMainType(
            BootConfig &
            , const Utf32 &
        )
    )

    FGPP_FUNCTION_BOOL(
        setMain(
            BootConfig &
            , const Utf32 &
        )
    )
}

#endif  // FGPP_BOOT_CONFIG_H
