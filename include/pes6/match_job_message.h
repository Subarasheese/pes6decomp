#ifndef PES6_MATCH_JOB_MESSAGE_H
#define PES6_MATCH_JOB_MESSAGE_H

#include "types.h"
#include "pes6/bitset.h"
#include "pes6/match_player_state_rows.h"
typedef struct {
    u8 reserved00[0x2c];
    union {
        u32 word;
        u8 byte;
    } arg[2];
} MatchJob;
extern int Pes6Job_SendMessage(s32 id, struct Pes6BitSet *, s32 mode);
extern void Pes6Job_SetDone(MatchJob *);

typedef struct {
    u8 reserved00[14];
    u8 player;
    u8 reserved0f[5];
    void *roster;
} RosterMessage;
static inline s32 sendRosterFlag(RosterMessage *ctx, s32 message, s32 mask) {
    struct Pes6BitSet result;
    u32 storage;
    Pes6BitSet_Initialize(&result, 1, &storage);
    Pes6BitSet_Write(&result, 0, func_00326790(ctx->roster, ctx->player, mask));
    if (Pes6Job_SendMessage(message, &result, 2))
        return 3;
    return 1;
}

#endif
