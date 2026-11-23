#ifndef PES6_ENDING_FLAGS_H
#define PES6_ENDING_FLAGS_H

#include "types.h"

extern const s16 *D_003EA690;

static inline s8 ending_flag(s32 bit) {
    if (D_003EA690 == 0)
        return -1;
    return (s8)((D_003EA690[0] >> bit) & 1);
}

#endif
