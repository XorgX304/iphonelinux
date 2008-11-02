#ifndef HW_NAND_H
#define HW_NAND_H

#include "hardware/s5l8900.h"

// Device
#define NAND 0x38A00000
#define NAND_CLOCK_GATE1 0x8
#define NAND_CLOCK_GATE2 0xC

// Registers
#define NAND_CONFIG 0x0
#define NAND_CON 0x4
#define NAND_CONFIG2 0x8
#define NAND_CONFIG3 0xC
#define NAND_CONFIG4 0x2C
#define NAND_CONFIG5 0x30
#define NAND_STATUS 0x48
#define NAND_ID 0x80
#define NAND_SETUP 0x100

// Values

#define NAND_CONFIG_DEFAULTS 0x801
#define NAND_CONFIG_SETTING1SHIFT 12
#define NAND_CONFIG_SETTING2SHIFT 16
#define NAND_CONFIG_SETTING1MASK 0x7
#define NAND_CONFIG_SETTING2MASK 0x7

#define NAND_CONFIG2_RESET 0xFF
#define NAND_CONFIG2_SETTING1 0x90
#define NAND_CON_SETTING1 0xC0

#define NAND_STATUS_READY 0x1

#define NAND_NUM_BANKS 8

#endif

