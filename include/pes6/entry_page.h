#ifndef PES6_ENTRY_PAGE_H
#define PES6_ENTRY_PAGE_H

#include "types.h"

typedef struct {
    union {
        u8 values[0x160];
        char text[0x160];
    } storage;
    s8 primary[16], secondary[16];
    u8 reserved180[4];
    u8 flags;
} EntryPage;
extern EntryPage *D_003EA5D0[2];
extern s32 D_003EA5CC;

#endif
