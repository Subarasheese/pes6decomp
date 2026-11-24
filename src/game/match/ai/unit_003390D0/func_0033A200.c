/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_period_message.h"
typedef struct {
    u8 reserved00[0x18];
    s32 stage;
    u8 reserved1c[0x10];
    s32 type, subMode;
    u8 reserved34[12];
    s32 state[2];
    u8 reserved48[0x888];
    u8 active[2];
} TeamRankState;
typedef struct {
    u8 reserved00[0x44];
    TeamRankState *ranks;
} TeamRankJob;
extern s32 func_00326070(TeamRankState *ranks);
s32 func_0033A200(struct Pes6BitSet *bits, TeamRankJob *job) {
    TeamRankState *r = job->ranks;
    s32 selected = (u8)Pes6Job_GetArg(job, 0);
    s32 rank = Pes6Job_GetArg(job, 2);
    s32 mode = Pes6Job_GetArg(job, 1);
    s32 side = (u8)selected;
    s32 home = side == 0;
    s32 highRank = rank >= 14;
    s32 inactive = r->active[side] == 0;
    Pes6BitSet_Write(bits, 0x4, func_00326070(r));
    Pes6BitSet_Write(bits, 0x6, mode == 2 && (r->type == 41 || r->type == 43 || r->type == 44));
    Pes6BitSet_Write(bits, 0x7, 0);
    Pes6BitSet_Write(bits, 0x1a, r->stage == 5 && highRank);
    Pes6BitSet_Write(bits, 0x1b, r->stage == 4 && highRank);
    Pes6BitSet_Write(bits, 0x1c, r->stage == 3 && highRank);
    Pes6BitSet_Write(bits, 0x1d,
                     (mode == 2 || r->state[side] == 10) && r->type == 44 && r->subMode == 6);
    Pes6BitSet_Write(bits, 0x1e, mode == 2 && (r->type == 41 || r->type == 43));
    Pes6BitSet_Write(bits, 0xb, r->subMode == 2);
    Pes6BitSet_Write(bits, 0xc, 0);
    Pes6BitSet_Write(bits, 0xd, 0);
    Pes6BitSet_Write(bits, 0xf, !home && inactive);
    Pes6BitSet_Write(bits, 0x10, home && !inactive);
    Pes6BitSet_Write(bits, 0x11, home && inactive);
    Pes6BitSet_Write(bits, 0x12, !home && !inactive);
    Pes6BitSet_Write(bits, 0xe,
                     (Pes6BitSet_Lookup(bits, 0xf) | Pes6BitSet_Lookup(bits, 0x10) |
                      Pes6BitSet_Lookup(bits, 0x11) | Pes6BitSet_Lookup(bits, 0x12)) &&
                         r->subMode != 6 && r->type == 41);
    Pes6BitSet_Write(bits, 0xa,
                     (Pes6BitSet_Lookup(bits, 0xb) | Pes6BitSet_Lookup(bits, 0xc) |
                      Pes6BitSet_Lookup(bits, 0xd) | Pes6BitSet_Lookup(bits, 0xe) |
                      Pes6BitSet_Lookup(bits, 0x1a) | Pes6BitSet_Lookup(bits, 0x1b) |
                      Pes6BitSet_Lookup(bits, 0x1d) | Pes6BitSet_Lookup(bits, 0x1e)));
    Pes6BitSet_Write(bits, 0x5, Pes6BitSet_Lookup(bits, 10));
    return 1;
}
