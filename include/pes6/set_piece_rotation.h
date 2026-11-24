#ifndef PES6_SET_PIECE_ROTATION_H
#define PES6_SET_PIECE_ROTATION_H

#include "pes6/paired_player_action.h"

extern u8 D_00CBCD82[];
extern u8 D_00CBCAD2[];
extern u16 D_00CBCAFC[];
extern f32 D_00CBCB00[], D_00CBCB04[], D_00CBCAF4[], D_00CBCAF8[];

enum { SET_PIECE_QUEUE_START = 1, SET_PIECE_QUEUE_COUNT = 10 };

static inline s32 pairedApproachLimit(void) {
    s32 speed;
    switch (D_00CBCAD1[0]) {
    default:
        speed = 0xC00;
        break;
    case 8:
        speed = 0xA00;
        break;
    case 7:
        speed = 0xA00;
        break;
    case 9:
        speed = 0xC00;
        break;
    case 6:
        speed = 0xC00;
        break;
    }
    return speed;
}

static inline void captureSetPiece(PairedContext *ctx) {
    ctx->control->enabled = 1;
    ctx->actor->actionGroup = 0xff;
    ctx->control->countdown = 0;
    ctx->control->flag0e = 0;
    ctx->control->state = 0;
    D_00CBCB00[0] = ctx->actor->x;
    D_00CBCB04[0] = ctx->actor->z;
    D_00CBCAFE[0] = ctx->actor->heading;
    D_00CBCAF4[0] = ctx->actor->x;
    D_00CBCAF8[0] = ctx->actor->z;
    D_00CBCAFC[0] = ctx->actor->heading;
    D_00CBCAD2[0] = 0;
}

static inline void exchangeSetPieceActors(PairedContext *ctx, PairedControl *control) {
    PairedContext *partner;
    u8 next = (D_00CBCD82 + SET_PIECE_QUEUE_START)[D_00CBCD82[SET_PIECE_QUEUE_COUNT]];
    D_00CBCD82[control->alternate] = next;
    partner = func_00B2A420(next);
    partner->control->alternate = ctx->control->alternate;
    (D_00CBCD82 + SET_PIECE_QUEUE_START)[D_00CBCD82[SET_PIECE_QUEUE_COUNT]] = ctx->actor->id;
    ++D_00CBCD82[SET_PIECE_QUEUE_COUNT];
    ctx->control->alternate = D_00CBCD82[SET_PIECE_QUEUE_COUNT];
}

#endif
