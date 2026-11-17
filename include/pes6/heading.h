#ifndef PES6_HEADING_H
#define PES6_HEADING_H

#include "types.h"

enum { PES6_HALF_TURN = 0x8000, PES6_FULL_TURN = 0x10000 };

static inline u16 Pes6Heading_Distance(u16 first, u16 second)
{
    u16 delta = second - first + PES6_FULL_TURN;

    if (delta > PES6_HALF_TURN) {
        delta = PES6_FULL_TURN - delta;
    }
    return delta;
}

#endif
