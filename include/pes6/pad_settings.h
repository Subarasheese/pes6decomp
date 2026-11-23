#ifndef PES6_PAD_SETTINGS_H
#define PES6_PAD_SETTINGS_H

#include "types.h"

typedef struct {
    u8 assignment;
    s8 option, nameMode, setting33;
    u8 reserved04[20];
} SavedPadSettings;

extern SavedPadSettings *func_00221230(s32 pad);
extern u8 *func_00225160(s32 row);
extern void func_002250C0(u8 row, const void *settings);

#endif
