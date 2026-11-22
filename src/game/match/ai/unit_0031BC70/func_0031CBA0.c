/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_condition.h"
#include "pes6/bitset.h"
extern s32 func_003414D0(u8 *side, s32 type, s32 maximum);
extern s16 func_0030DAF0(s32 side);
extern s32 func_00333710(ConditionSides *, s32);
extern s32 Pes6MatchContext_GetHalf(void);
extern s32 func_003395B0(void *), func_00340C80(float), func_0030EA70(void);
extern s32 func_00339640(void *, s32);
extern s32 func_0031C9C0(struct Pes6BitSet *, ConditionContext *);
extern s32 func_0031C840(struct Pes6BitSet *, ConditionContext *);
extern s16 func_00310340(s16 *, s32);
extern s32 func_00341010(s32);
s32 func_0031CBA0(struct Pes6BitSet *flags, ConditionContext *context) {
    func_0031C9C0(flags, context);
    {
        ConditionPossession *pos = context->possession;
        s16 opposingValue;
        s32 phase = func_0030EA70();
        func_00310340(&opposingValue, (u8)(pos->side ^ 1));
        Pes6BitSet_Write(flags, 0x38, phase >= 35);
        Pes6BitSet_Write(flags, 0x3A, opposingValue == 0);
    }
    func_0031C840(flags, context);
    {
        ConditionPossession *pos = context->possession;
        ConditionSides *sides = context->sides;
        void *clock = context->clock;
        s32 kind = func_00333710(sides, pos->side);
        s32 half = Pes6MatchContext_GetHalf();
        s32 elapsed;
        Pes6BitSet_Write(flags, 0x4B, half == 1);
        elapsed = func_003395B0(clock);
        elapsed -= func_00339640(clock, half);
        Pes6BitSet_Write(flags, 0x4C, elapsed < func_00340C80(60.0f));
        Pes6BitSet_Write(flags, 0x4D, (func_0030DAF0(0) + func_0030DAF0(1) == 1));
        Pes6BitSet_Write(flags, 0x52, (func_00341010(kind) != 0) && (sides->side == pos->side));
        Pes6BitSet_Write(flags, 0x55, kind == 17);
    }
    {
        ConditionPossession *pos = context->possession;
        ConditionSides *sides = context->sides;
        s32 kind = func_00333710(sides, pos->side);
        u8 selected;
        func_003414D0(&selected, 0, 255);
        Pes6BitSet_Write(flags, 0x58, func_0030EA70() >= 80);
        Pes6BitSet_Write(flags, 0x59, (kind == 16 || kind == 15) && (sides->side == pos->side));
        Pes6BitSet_Write(flags, 0x5C, (func_0030DAF0(0) + func_0030DAF0(1) == 1));
        Pes6BitSet_Write(flags, 0x62, pos->side == selected);
        Pes6BitSet_Write(flags, 0x63, pos->side == (selected ^ 1));
        Pes6BitSet_Write(flags, 0x5F,
                         (kind == 13) && ((Pes6BitSet_Lookup(flags, 0x62) |
                                           Pes6BitSet_Lookup(flags, 0x63)) != 0));
        Pes6BitSet_Write(flags, 0x68, kind == 17);
    }
    {
        ConditionMode *event = context->event;
        ConditionPossession *pos = context->possession;
        ConditionSides *sides = context->sides;
        s32 kind;
        func_0030EA70();
        kind = func_00333710(sides, pos->side);
        Pes6BitSet_Write(flags, 0x6B, (Pes6MatchContext_GetHalf() >= 2) && (event->mode == 2));
        Pes6BitSet_Write(flags, 0x6C, kind == 16);
        Pes6BitSet_Write(flags, 0x6D, pos->state == 1);
        Pes6BitSet_Write(flags, 0x70, pos->state >= 2);
        Pes6BitSet_Write(flags, 0x73, kind == 13);
    }
    return 1;
}
