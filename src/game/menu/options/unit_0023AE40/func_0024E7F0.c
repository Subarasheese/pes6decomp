/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

typedef struct {
    u8 pad, side, peer, assignment, option, nameMode, setting, pad07, alternate;
    u8 reserved09[31];
} TeamPad;
typedef struct {
    TeamPad slots[8];
    u8 pad140[27], captain[2];
} MatchTeamPads;

extern MatchTeamPads D_00592800;

s32 func_0024E7F0(u8 side) {
    s32 i;
    if (D_00591C09[0] == 5)
        return 0;
    for (i = 0; i < MATCH_PAD_COUNT; i++) {
        u32 pad;
        if (D_00592800.captain[(u8)side] == i)
            return i;
        pad = D_00592800.slots[i].pad;
        if (pad != 0xFF && (u8)side == D_00592800.slots[i].side && matchPadConnected(pad) &&
            pad != MATCH_PAD_COUNT && !D_00592800.slots[i].alternate)
            return i;
    }
    for (i = 0; i < MATCH_PAD_COUNT; i++) {
        u32 pad = D_00592800.slots[i].pad;
        if (pad != 0xFF && (u8)side == D_00592800.slots[i].side && matchPadConnected(pad) &&
            pad != MATCH_PAD_COUNT)
            return i;
    }
    return 255;
}
