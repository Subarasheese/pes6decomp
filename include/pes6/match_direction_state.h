#ifndef PES6_MATCH_DIRECTION_STATE_H
#define PES6_MATCH_DIRECTION_STATE_H

#include "pes6/match_player.h"
enum { PASS_DIRECTION_COUNT = 8, SUPPORT_ORDER_COUNT = 10 };
typedef struct {
    s32 kind;
    u8 reserved04[4], owner;
    u8 reserved09[0x40 - 9];
} SupportOrder;
typedef struct {
    u8 reserved00[0xd4], costs[PASS_DIRECTION_COUNT];
    u8 reservedDC[0x43c - 0xdc];
    SupportOrder orders[SUPPORT_ORDER_COUNT];
} MatchDirectionState;
extern MatchDirectionState D_00CB52A0;
typedef char check_support_order_stride[sizeof(SupportOrder) == 0x40 ? 1 : -1];

#endif
