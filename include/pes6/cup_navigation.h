#ifndef PES6_CUP_NAVIGATION_H
#define PES6_CUP_NAVIGATION_H

#include "types.h"

typedef struct {
    u8 active, phase, busy;
} CupNavigation;

extern void SD_call(u32 sound);

static inline void cup_confirm(CupNavigation *nav) {
    if (nav->busy) {
        nav->phase = 1;
        SD_call(0x84008401U);
    } else {
        nav->phase = 5;
        nav->active = 1;
        SD_call(0x84008401U);
    }
}

#endif
