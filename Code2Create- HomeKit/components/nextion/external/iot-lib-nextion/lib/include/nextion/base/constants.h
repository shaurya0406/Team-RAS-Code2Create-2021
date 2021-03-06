#ifndef __NEXTION_CONSTANTS_H__
#define __NEXTION_CONSTANTS_H__

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * Minimum baud rate accepted.
 */
#define NEX_SERIAL_BAUD_RATE_MIN 2400U

/**
 * Maximum baud rate accepted.
 */
#define NEX_SERIAL_BAUD_RATE_MAX 921600U

/**
 * Number of bytes used to identify a response type.
 */
#define NEX_DVC_CMD_START_LENGTH 1U

/**
 * Number of bytes used to identify the end of a response.
 */
#define NEX_DVC_CMD_END_LENGTH 3U

/**
 * Character used to identify the end of a response.
 * All commands end with {0xFF, 0xFF, 0xFF}
 * i.e: {255, 255, 255} or {ÿ, ÿ, ÿ}
 */
#define NEX_DVC_CMD_END_VALUE ((uint8_t)0xFFU)

/**
 * Sequence that determines the end of a command and response.
 */
#define NEX_DVC_CMD_END_SEQUENCE NEX_DVC_CMD_END_VALUE, NEX_DVC_CMD_END_VALUE, NEX_DVC_CMD_END_VALUE

/**
 * Minimum response size, in bytes.
 * i.e: NEX_DVC_CMD_START_LENGTH + NEX_DVC_CMD_END_LENGTH.
 */
#define NEX_DVC_CMD_ACK_LENGTH (NEX_DVC_CMD_START_LENGTH + NEX_DVC_CMD_END_LENGTH)

/**
 * Maximum number of bytes a event can return.
 */
#define NEX_DVC_EVT_MAX_RESPONSE_LENGTH 9U

/**
 * Maximum length of a page name.
 */
#define NEX_DVC_PAGE_MAX_NAME_LENGTH 14U

/**
 * Maximum length of a component name.
 */
#define NEX_DVC_COMPONENT_MAX_NAME_LENGTH 14U

/**
 * Maximum reference length: (max page name length + "." + max component name length).
 */
#define NEX_DVC_REFERENCE_MAX_LENGTH (NEX_DVC_PAGE_MAX_NAME_LENGTH + 1 + NEX_DVC_COMPONENT_MAX_NAME_LENGTH)

/**
 * Character used to separate a object from its attribute.
 * e.g.: page1.component2 / comp1.txt
 */
#define NEX_DVC_CMD_ATTRIBUTE_SEPARATOR '.'

/**
 * Character used to separate the params from the command.
 * e.g.: addt 1,0,320ÿÿÿ
 */
#define NEX_DVC_CMD_PARAMS_DIVISOR ' '

/**
 * Character used to separate params from other params.
 * e.g.: wept 1,0,320ÿÿÿ
 */
#define NEX_DVC_CMD_PARAMS_SEPARATOR ','

/**
 * Maximum size, in bytes, that can be sent using the
 * "Transaprent Data" mode.
 * Size: (all commands + terminations + data).
 */
#define NEX_DVC_TRANSPARENT_DATA_MAX_DATA_SIZE 1024U

/**
 * Size, in bytes, of the EEPROM.
 */
#define NEX_DVC_EEPROM_SIZE 1024U

/**
 * Maximum EEPROM address.
 */
#define NEX_DVC_EEPROM_MAX_ADDRESS (NEX_DVC_EEPROM_SIZE - 1U)

/**
 * Time, in milliseconds, that a device needs
 * to enter the "Transparent Data" mode.
 */
#define NEX_DVC_TRANSPARENT_DATA_WAIT_TIME_MS 5U

#ifdef __cplusplus
}
#endif

#endif //__NEXTION_CONSTANTS_H__