#ifndef PES6_CONTROLLER_LAYOUT_H
#define PES6_CONTROLLER_LAYOUT_H

#include "pes6/match_option_slots.h"
enum { PAD_LAYOUT_STANDARD, PAD_LAYOUT_ALTERNATE, PAD_LAYOUT_CUSTOM };
typedef struct {
    s8 reserved00;
    s8 options[MATCH_OPTION_SLOTS][8];
} ControllerOptions;
extern s32 D_0053C840[][8], D_0053C740[][8];
extern ControllerOptions D_0053C940;
extern s8 D_003E9AC0, D_003E9AE4;
extern u8 D_008DEFE0[];
extern void func_008B9950(void), func_00245390(void);
extern s8 func_008B9070(s32 slot);
static inline void resetControllerOptions(s32 slot) {
    D_0053C940.options[slot][0] = 0;
    D_0053C940.options[slot][7] = 0;
    D_0053C940.options[slot][2] = 1;
    D_0053C940.options[slot][4] = 0;
    D_0053C940.options[slot][1] = 0;
}
static inline void setStandardLayout(s32 slot) {
    D_0053C840[slot][0] = 13;
    D_0053C840[slot][1] = 14;
    D_0053C840[slot][2] = 12;
    D_0053C840[slot][3] = 15;
    D_0053C840[slot][4] = 10;
    D_0053C840[slot][5] = 11;
    D_0053C840[slot][6] = 8;
    D_0053C840[slot][7] = 9;
    D_0053C740[slot][0] = 17;
    D_0053C740[slot][1] = 18;
    D_0053C740[slot][2] = 16;
    D_0053C740[slot][3] = 19;
    D_0053C740[slot][4] = 10;
    D_0053C740[slot][5] = 11;
    D_0053C740[slot][6] = 8;
    D_0053C740[slot][7] = 9;
    resetControllerOptions(slot);
}
static inline void setAlternateLayout(s32 slot) {
    D_0053C840[slot][0] = 15;
    D_0053C840[slot][1] = 14;
    D_0053C840[slot][2] = 12;
    D_0053C840[slot][3] = 13;
    D_0053C840[slot][4] = 9;
    D_0053C840[slot][5] = 10;
    D_0053C840[slot][6] = 8;
    D_0053C840[slot][7] = 11;
    D_0053C740[slot][0] = 18;
    D_0053C740[slot][1] = 19;
    D_0053C740[slot][2] = 16;
    D_0053C740[slot][3] = 17;
    D_0053C740[slot][4] = 9;
    D_0053C740[slot][5] = 10;
    D_0053C740[slot][6] = 8;
    D_0053C740[slot][7] = 11;
    resetControllerOptions(slot);
}

#endif
