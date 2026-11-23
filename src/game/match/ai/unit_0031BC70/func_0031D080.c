/* compiler: mwcc-3.0.1b210 */
#include "types.h"
#include "pes6/bitset.h"
#include "pes6/match_condition.h"

extern s32 func_00325C20(s32 kind), func_00333710(void *, s32), func_00325FE0(s32 *, s32 *, s32);

s32 func_0031D080(struct Pes6BitSet *flags, ConditionContext *context) {
    ConditionPossession *pos = context->possession;
    ConditionMode *event = context->event;
    s32 shotState;
    s32 kind = func_00333710(context->sides, pos->side);
    s32 high = kind >= 14, low = kind < 13;
    s32 selected;
    func_00325FE0(&shotState, &event->kind, pos->side);
    selected = kind == 15 || kind == 11;
    Pes6BitSet_Write(flags, 2, (kind >= 14) & ((shotState != 1) & func_00325C20(event->kind)));
    Pes6BitSet_Write(flags, 4, pos->side == 1);
    Pes6BitSet_Write(flags, 5, shotState == 1);
    Pes6BitSet_Write(flags, 6, shotState == 2);
    Pes6BitSet_Write(flags, 7, shotState == 3);
    Pes6BitSet_Write(flags, 8, pos->side == 0);
    Pes6BitSet_Write(flags, 9, shotState == 1);
    Pes6BitSet_Write(flags, 0xA, shotState == 2);
    Pes6BitSet_Write(flags, 0xB, shotState == 3);
    Pes6BitSet_Write(flags, 0xD, selected);
    Pes6BitSet_Write(flags, 0x10, selected);
    Pes6BitSet_Write(flags, 0x12, high);
    Pes6BitSet_Write(flags, 0x13, low);
    Pes6BitSet_Write(flags, 0x14, kind == 13);
    Pes6BitSet_Write(flags, 0x15, selected);
    Pes6BitSet_Write(flags, 0x16, high);
    Pes6BitSet_Write(flags, 0x17, low);
    return 1;
}
