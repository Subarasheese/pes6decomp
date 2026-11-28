#ifndef PES6_MATCH_PLAYER_STATE_ROWS_H
#define PES6_MATCH_PLAYER_STATE_ROWS_H

#include "pes6/match_player.h"

typedef struct {
    u16 playerId;
    s16 field02, field04;
    s16 status, field08, field0A, count, field0E;
    u8 field10, field11, reserved12[2];
    s32 field14, field18, flags;
} PlayerStateEntry;

typedef struct {
    s32 mode;
    u8 reserved04[0x24 - 4];
    s16 scores[2];
    u8 previous, current, rating, reserved2B[0x3c - 0x2b];
} MatchStateSide;

typedef struct {
    s32 kind;
    u8 reserved04[8], field0C, field0D, reserved0E[0x2c - 0x0e];
    s32 mode;
    u8 reserved30[0x50 - 0x30];
    MatchStateSide sides[2];
    PlayerStateEntry players[2][32];
} MatchPlayerStateRows;

typedef struct {
    u8 reserved00[0x2c], team[2];
} MatchStateTeamIds;

extern MatchStateTeamIds *D_003E77B0;

extern s32 func_00326B70(s16 *value, MatchPlayerStateRows *state, u8 player);
extern s32 func_00326E40(s16 *value, MatchPlayerStateRows *state, u8 player);
extern s32 func_00326790(MatchPlayerStateRows *state, u8 player, s32 mask);
extern s32 func_00326890(MatchPlayerStateRows *state, u8 side, u8 slot, s32 mask);

static inline s32 findPlayerState(PlayerStateEntry **row, MatchPlayerStateRows *state, s32 side,
                                  s32 slot) {
    s32 i;
    for (i = 0; i < 32; ++i) {
        if (state->players[side][i].playerId == Pes6MatchSquads[side].setupPlayers[slot].playerId &&
            Pes6MatchSquads[side].setupPlayers[slot].playerId) {
            *row = &state->players[side][i];
            return 1;
        }
    }
    return 0;
}

typedef char check_match_state_side[sizeof(MatchStateSide) == 0x3c ? 1 : -1];
typedef char check_match_state_players[sizeof(MatchPlayerStateRows) == 0x8c8 ? 1 : -1];
typedef char check_match_player_state_entry[sizeof(PlayerStateEntry) == 0x20 ? 1 : -1];

#endif
