#ifndef PES6_MATCH_SUBMODE_H
#define PES6_MATCH_SUBMODE_H

#include "types.h"

extern u8 D_00591C09[];
extern s32 D_00591C0C[], D_00591C10[];

static inline s32 match_submode(void) {
    s32 mode = D_00591C09[0] == 5 ? D_00591C0C[0] : 5;
    return mode == 0 ? D_00591C10[0] : 5;
}

#endif
