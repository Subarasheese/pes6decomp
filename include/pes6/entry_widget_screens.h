#ifndef PES6_ENTRY_WIDGET_SCREENS_H
#define PES6_ENTRY_WIDGET_SCREENS_H

#include "pes6/menu_widget_groups.h"

/* The entry screens use different offsets for the phase and display flags. */
typedef struct {
    void *widgets, *labels;
    u8 transition[8];
    u32 phase;
    u8 reserved14[8];
    unsigned char active : 1, labelsOpen : 1;
} EntryScreen1C;

typedef struct {
    void *widgets, *labels;
    u8 transition[8];
    u32 phase;
    u8 reserved14[12];
    unsigned char active : 1, labelsOpen : 1;
} EntryScreen20;

typedef struct {
    void *widgets, *labels;
    u8 transition[8];
    s8 available[6];
    u8 reserved16[2];
    u32 phase;
    u8 reserved1C[12];
    unsigned char active : 1, labelsOpen : 1;
} EntryOptionScreen;

typedef struct {
    void *widgets, *labels;
    u8 transition[8];
    u8 reserved10[0x18];
    unsigned char active : 1, labelsOpen : 1;
    u8 reserved29[3];
    s16 animation;
} EntryAnimationScreen;

typedef s32 (*EntryScreenPhase)(void);
extern s32 func_002D5870(void *transition);
extern s32 func_002D58A0(void *transition);

#endif
