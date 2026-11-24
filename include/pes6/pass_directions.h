#ifndef PES6_PASS_DIRECTIONS_H
#define PES6_PASS_DIRECTIONS_H

#include "types.h"
enum { DIRECTION_COUNT = 8, ORDER_LENGTH = 9 };
typedef struct {
    u8 pad00[0xd4];
    u8 costs[DIRECTION_COUNT];
    u8 padDC[0x168 - 0xdc];
    u8 preference[10][ORDER_LENGTH];
} LanePriorities;
extern LanePriorities D_00CB52A0;
/* Some callers take the cost table's address directly. */
extern u8 D_00CB5374[];
extern u16 D_00CA9950[];
static inline s32 headingSector(u16 heading) { return ((heading + 0x1000) & 0xe000) / 0x2000; }

#endif
