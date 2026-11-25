#ifndef PES6_GAME_SLOT_FIELDS_H
#define PES6_GAME_SLOT_FIELDS_H

#include "types.h"

typedef struct {
    u8 reserved00[0x10];
    u8 field10[16];
    u8 reserved20[0xB8];
    u8 fieldD8[16];
    u8 reservedE8[0x58];
} GameSlotFields;

extern GameSlotFields D_00CCC200[];
extern void *func_001C47E0(void *dest, const void *src, u32 size);

#endif
