#ifndef PES6_ENTRY_PAGE_H
#define PES6_ENTRY_PAGE_H

#include "pes6/entry_wait.h"

typedef struct {
    void *widgets, *labels;
    u8 transition[8];
    u8 reserved10[0x100];
    u32 phase;
    u8 reserved114[0x0c];
    unsigned char active : 1, labelsOpen : 1;
} EntryPageDisplay;

typedef struct {
    union {
        u8 values[0x160];
        char text[0x160];
        EntryPageDisplay display;
        struct {
            u8 reserved[0x118];
            struct Counter counter;
        } timing;
    } storage;
    s8 primary[16], secondary[16];
    u8 reserved180[4];
    u8 flags;
} EntryPage;
extern EntryPage *D_003EA5D0[2];
extern s32 D_003EA5CC;

#endif
