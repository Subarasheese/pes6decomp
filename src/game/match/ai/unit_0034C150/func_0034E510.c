/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 reserved00[0x37], side;
} SideMatchState;
typedef struct {
    u8 reserved00[5], side, status, reserved07[0x31];
    struct {
        u8 minute, secondary;
    } team[2];
} TeamMinutes;
typedef struct {
    s32 kind;
    u8 reserved04[0x10];
    s32 stage;
    u8 reserved18[0x14];
    s32 competition, mode;
    u8 reserved34[0x0c];
    s32 team[2];
} TeamCompetition;
typedef struct {
    u8 reserved00[0x30];
    s32 minute;
    u8 reserved34[0x0c];
    SideMatchState *match;
    TeamMinutes *times;
    TeamCompetition *competition;
} TeamMinuteJob;
extern s32 func_0030EA70(void), func_00333710(void *match, s32 side),
    func_00333740(void *match, s32 side);
extern s32 func_003336F0(void *match), func_003414D0(u8 *side, s32 kind, s32 player);
extern s16 func_00310340(s16 *value, s32 side);
s32 func_0034E510(TeamMinuteJob *job) {
    u8 side;
    s16 values[2];
    u32 storage[2];
    struct Pes6BitSet flags;
    struct Pes6BitSet *bits;
    TeamCompetition *c;
    SideMatchState *match;
    s32 minute = func_0030EA70();
    s32 rank, special, nonzeroTie, bothScored;
    if (minute < 10 || minute > 19)
        return 0;
    func_003414D0(&side, 2, 0xff);
    bits = &flags;
    Pes6BitSet_Initialize(bits, 56, storage);
    c = job->competition;
    match = job->match;
    func_00310340(&values[0], 0);
    func_00310340(&values[1], 1);
    rank = func_00333710(match, side);
    Pes6BitSet_Write(bits, 0x2, func_003336F0(match));
    Pes6BitSet_Write(bits, 0x3, (c->team[side] == 1 || c->stage == 5) && (values[0] && values[1]));
    Pes6BitSet_Write(bits, 0x5, c->team[side] == 1 && c->kind == 6);
    Pes6BitSet_Write(bits, 0x6, c->stage == 5);
    special = c->mode == 2 || (c->stage == 1 && (c->kind == 10 || c->kind == 12));
    Pes6BitSet_Write(bits, 0x9, special);
    Pes6BitSet_Write(bits, 0xd, values[0] + values[1] == 0);
    nonzeroTie = 0;
    if (values[0] == values[1] && values[0])
        nonzeroTie = 1;
    Pes6BitSet_Write(bits, 0x14, nonzeroTie);
    Pes6BitSet_Write(bits, 0x1c, (values[0] == 0) || (values[1] == 0));
    Pes6BitSet_Write(bits, 0x1f, values[side]);
    Pes6BitSet_Write(bits, 0x20, (values[side] == 0));
    Pes6BitSet_Write(bits, 0x22, values[side]);
    Pes6BitSet_Write(bits, 0x23, (values[side] == 0));
    {
        s32 away, home;
        away = values[1];
        home = values[0];
        bothScored = 0;
        if ((home - away > 0 ? home - away : -(home - away)) > 0 &&
            (away < home ? away : home) != 0)
            bothScored = 1;
    }
    Pes6BitSet_Write(bits, 0x25, bothScored);
    Pes6BitSet_Write(bits, 0x2c, values[side] > values[side ^ 1]);
    Pes6BitSet_Write(bits, 0x2d, values[side] < values[side ^ 1]);
    Pes6BitSet_Write(bits, 0x2e, rank == 16 || rank == 10);
    Pes6BitSet_Write(bits, 0x2f, rank == 16);
    Pes6BitSet_Write(bits, 0x34, rank == 10);
    return Pes6Job_SendMessage(0x5f, bits, 1);
}
