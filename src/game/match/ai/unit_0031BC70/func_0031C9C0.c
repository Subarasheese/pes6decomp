/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_condition.h"
#include "pes6/bitset.h"
extern s32 func_003414D0(u8 *side, s32 type, s32 maximum);
extern s16 func_0030DAF0(s32 side);
extern s32 func_00333740(ConditionSides *, s32);
extern s32 func_00325CE0(s32 *, ConditionMode *, s32);
extern s32 Pes6MatchContext_GetHalf(void);
extern s32 func_003395B0(void *), func_00340C80(float);
extern s32 Pes6MatchClock_GetRemaining(void);
extern s32 func_003197C0(ConditionPossession *, s32);
s32 func_0031C9C0(struct Pes6BitSet *flags, ConditionContext *context) {
    void *clock = context->clock;
    ConditionSides *sides = context->sides;
    ConditionPossession *pos = context->possession;
    ConditionMode *event = context->event;
    u8 side;
    s32 shotKind, eventState;
    u8 phase;
    s32 total;
    s32 ticks;
    if (func_003414D0(&side, 1, 0xff) != 0)
        shotKind = func_00333740(sides, side);
    else
        shotKind = 13;
    total = func_0030DAF0(0) + func_0030DAF0(1);
    func_00325CE0(&eventState, event, pos->side);
    phase = func_003197C0(pos, pos->side);
    Pes6BitSet_Write(flags, 0x29, (Pes6MatchContext_GetHalf() == 0) && (total == 1));
    Pes6BitSet_Write(flags, 0x2A, (phase < 11) && (4 < eventState));
    ticks = func_003395B0(clock);
    Pes6BitSet_Write(flags, 0x2B, ticks < func_00340C80(40.0f));
    Pes6BitSet_Write(flags, 0xAC, (phase % 45 == 0) && (Pes6MatchClock_GetRemaining() != 0));
    Pes6BitSet_Write(flags, 0x2C, total == 1);
    Pes6BitSet_Write(flags, 0x30, shotKind < 13);
    Pes6BitSet_Write(flags, 0x31, (total == 2) && (func_00333740(sides, pos->side) == 17));
    return 1;
}
