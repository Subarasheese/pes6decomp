#ifndef PES6_MATCH_PLAYER_ORDERS_H
#define PES6_MATCH_PLAYER_ORDERS_H

#include "pes6/match_player.h"
enum { MATCH_ORDER_SLOTS = 22, MATCH_ORDER_TEAM_PLAYERS = 11 };
typedef struct {
    s32 kind, age, remaining;
    s16 x, z;
    u8 owner, priority;
    u8 pad12[0x28 - 0x12];
    union {
        s32 target;
        struct {
            u8 pad28, selection;
            s16 aimX, aimZ;
            union {
                s16 side;
                u8 sideByte;
            };
        } point;
    } details;
    u8 pad30[0x40 - 0x30];
} MatchOrder;
typedef struct {
    u8 pad00[0x6bc];
    MatchOrder orders[MATCH_ORDER_SLOTS];
} MatchOrderPool;
extern MatchOrderPool D_00CB52A0;
extern u8 D_00591BE4[];

/* Each actor order occupies 0x40 bytes in the shared pool. */
typedef char check_match_order_size[sizeof(MatchOrder) == 0x40 ? 1 : -1];

static inline MatchOrder *findFreeOrder(void) {
    s32 i;
    for (i = 0; i < MATCH_ORDER_SLOTS; ++i) {
        if (D_00CB52A0.orders[i].kind == 0)
            return &D_00CB52A0.orders[i];
    }
    return 0;
}

static inline s32 hasPlayerOrder(u8 id, s32 kind) {
    s32 i;
    for (i = 0; i < MATCH_ORDER_SLOTS; ++i) {
        if (D_00CB52A0.orders[i].owner == id && D_00CB52A0.orders[i].kind == kind)
            return 1;
    }
    return 0;
}

static inline MatchOrder *findPlayerOrder(const Pes6MatchPlayer *player, s32 kind) {
    s32 i;
    for (i = 0; i < MATCH_ORDER_SLOTS; ++i) {
        if (D_00CB52A0.orders[i].owner == player->id && D_00CB52A0.orders[i].kind == kind)
            return &D_00CB52A0.orders[i];
    }
    return 0;
}

typedef struct {
    u8 pad00[0x10];
    u8 control;
} OrderActorControl;

#endif
