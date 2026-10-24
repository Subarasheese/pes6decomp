#ifndef PES6_PARTIAL_005A2330_H
#define PES6_PARTIAL_005A2330_H

#include "types.h"

/* Only the fields used by the recovered accessors are described here. */
typedef struct {
    u8 header;
    u8 flags[2];
    u8 padding[0x13B];
    u8 values[2];
} PartialState005A2330;

extern PartialState005A2330 D_005A2330;

#endif
