#ifndef PES6_ENDING_WIDGET_SCREEN_H
#define PES6_ENDING_WIDGET_SCREEN_H

#include "pes6/menu_widget_groups.h"

typedef struct {
    void *widgets, *labels;
    u8 transition[8];
    u8 reserved10[0x10];
    s32 counter[2];
    unsigned char active : 1, labelsOpen : 1;
    u8 reserved29[0x17];
} EndingScreen;

extern EndingScreen D_00908DB0[];
extern s32 D_003EA6B4;

static inline EndingScreen *currentEndingScreen(void) { return &D_00908DB0[D_003EA6B4]; }

static inline void *endingLabels(EndingScreen *screen) { return screen->labels; }

#endif
