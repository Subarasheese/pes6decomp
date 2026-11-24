#ifndef PES6_MATCH_OPTION_SLOTS_H
#define PES6_MATCH_OPTION_SLOTS_H

#include "types.h"

enum { MATCH_OPTION_SLOTS = 8 };
typedef struct {
    u8 bank[2][8];
    u8 extra[5];
} MatchOptionBindings;
typedef union {
    u8 bytes[36];
    struct {
        u8 mode;
        u8 options[5];
        u8 reserved06[9];
        MatchOptionBindings bindings;
    } fields;
} MatchOptionPreset;
typedef struct {
    MatchOptionPreset preset;
    u8 extra[18];
} MatchOptionSlot;
extern MatchOptionPreset D_00591970[];
extern MatchOptionSlot D_0053C3C0[], D_0053C590[];
extern MatchOptionPreset *func_00245190(s32 slot);
extern MatchOptionSlot *func_00221280(s32 slot);
extern void *func_001C4730(void *dest, const void *source, u32 bytes);

#endif
