#ifndef PES6_UNIT_0030F470_H
#define PES6_UNIT_0030F470_H

#include "types.h"

/* Keep the address operands in the order used by the recovered accessors. */
static inline s32 pes6_record_address(s32 offset, s32 base) {
    return offset + base;
}

extern s16 func_002C1D20(s32, s32, s32, s32);

static inline s16 pes6_call_002C1D20(u8 lower, u8 upper, s32 value) {
    return func_002C1D20(lower & 0x7F, upper & 0x7F, value, 6);
}

#endif
