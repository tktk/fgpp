#ifndef FGPP_BOOT_CONFIG_H
#define FGPP_BOOT_CONFIG_H

#include "fgpp/def/boot/config.h"
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
}

#include "fgpp/def/common/free.h"

#endif  // FGPP_BOOT_CONFIG_H
