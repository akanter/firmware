#ifndef __CONFIG_GLOBALS_H__
#define __CONFIG_GLOBALS_H__

// Includes:

    #include "fsl_common.h"
    #include "eeprom.h"
    #include "basic_types.h"

// Macros:

    #define HARDWARE_CONFIG_SIZE 64
    #define USER_CONFIG_SIZE (EEPROM_SIZE - HARDWARE_CONFIG_SIZE)

// Typedefs:

    typedef enum {
        ConfigBufferId_HardwareConfig,
        ConfigBufferId_StagingUserConfig,
        ConfigBufferId_ValidatedUserConfig,
    } config_buffer_id_t;

// Variables:

    extern bool ParserRunDry;
    extern config_buffer_t HardwareConfigBuffer;
    extern config_buffer_t StagingUserConfigBuffer;
    extern config_buffer_t ValidatedUserConfigBuffer;

#endif
