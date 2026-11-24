#ifndef PES6_UNIT_0030F470_H
#define PES6_UNIT_0030F470_H

#include "types.h"

/* Keep the address operands in the order used by the recovered accessors. */
static inline s32 pes6_record_address(s32 offset, s32 base) {
    return offset + base;
}

#endif
