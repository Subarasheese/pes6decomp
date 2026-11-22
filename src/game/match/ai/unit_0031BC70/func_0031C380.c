/* compiler: mwcc-3.0.1b210 */
#include "types.h"
#include "pes6/bitset.h"
#include "pes6/match_condition.h"

extern s16 func_0030DAF0(s32);
extern s32 Pes6MatchContext_GetHalf(void), func_0030EA70(void), func_00325C20(s32);
extern s32 func_003336B0(s32), func_00333710(void *, s32), func_00341010(s32),
    func_003414D0(u8 *, s32, s32);

static inline void writeEventKindFlags(struct Pes6BitSet *flags, s32 first, s32 sideBit, s32 kind) {
    Pes6BitSet_Write(flags, first, kind == 0xF);
    Pes6BitSet_Write(flags, first + 3, kind == 0xD);
    Pes6BitSet_Write(flags, first + 6, kind == 0xB);
    Pes6BitSet_Write(flags, first + 9, Pes6BitSet_Lookup(flags, sideBit));
    Pes6BitSet_Write(flags, first + 10, kind == 0x10);
    Pes6BitSet_Write(flags, first + 13, kind == 0x11);
    Pes6BitSet_Write(flags, first + 16, kind == 0x12);
    Pes6BitSet_Write(flags, first + 19, kind == 0x13);
    Pes6BitSet_Write(flags, first + 22, Pes6BitSet_Lookup(flags, sideBit));
    Pes6BitSet_Write(flags, first + 23, kind == 0xA);
    Pes6BitSet_Write(flags, first + 26, kind == 9);
    Pes6BitSet_Write(flags, first + 29, kind == 8);
    Pes6BitSet_Write(flags, first + 32, kind == 7);
}

s32 func_0031C380(struct Pes6BitSet *flags, ConditionContext *context) {
    ConditionMode *event = context->event;
    ConditionPossession *pos = context->possession;
    ConditionSides *sides = context->sides;
    u8 selected;
    s32 otherSide;
    s32 phase = func_0030EA70();
    s32 kind, secondHalfOrLater, interval;
    func_003414D0(&selected, 2, 0xff);
    kind = func_00333710(sides, selected);
    secondHalfOrLater = Pes6MatchContext_GetHalf() >= 2;
    interval = (phase >= 45) & (phase < 81);
    Pes6BitSet_Write(flags, 0xAD, interval);
    Pes6BitSet_Write(flags, 0xAE, interval);

    Pes6BitSet_Write(flags, 0xAF, (func_0030DAF0(0) + func_0030DAF0(1)) == 1);
    Pes6BitSet_Write(flags, 0xB4, func_00325C20(event->kind));
    Pes6BitSet_Write(flags, 0xB5, pos->side == selected);
    writeEventKindFlags(flags, 0xB6, 0xB5, kind);
    Pes6BitSet_Write(flags, 0xD9, !Pes6BitSet_Lookup(flags, 0xB5));
    writeEventKindFlags(flags, 0xDA, 0xD9, kind);
    Pes6BitSet_Write(flags, 0xFD, secondHalfOrLater & ((event->mode == 2) & (kind == 0x11)));
    Pes6BitSet_Write(flags, 0x100, secondHalfOrLater & ((event->mode == 2) & (kind == 0x10)));
    Pes6BitSet_Write(flags, 0x106, (sides->side == selected) & func_00341010(kind));
    otherSide = sides->side == (selected ^ 1);
    Pes6BitSet_Write(flags, 0x10A, otherSide & func_003336B0(kind));
    Pes6BitSet_Write(flags, 0x10E, kind == 0x11);
    Pes6BitSet_Write(flags, 0x10F, pos->side == selected);
    Pes6BitSet_Write(flags, 0x113, pos->side == (selected ^ 1));
    Pes6BitSet_Write(flags, 0x116, kind == 0x12);
    Pes6BitSet_Write(flags, 0x117, pos->side == selected);
    Pes6BitSet_Write(flags, 0x11B, pos->side == (selected ^ 1));
    return 1;
}
