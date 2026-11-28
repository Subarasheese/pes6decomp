/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_period_message.h"

extern s32 func_0022CEF0(void);
extern s32 func_00325E40(void *round);
extern s32 func_00325B90(s32 *selection);

static inline s32 allowsMode(s32 mode) {
    s32 allow = 0;
    u32 index = (u32)mode - 1;
    /* Mode numbers 1-5, 7, 8, 10 and 58 are selectable. */
    if (index < 58 && ((1ULL << index) & 0x02000000000002dfULL))
        allow = 1;
    return allow;
}

s32 func_008FDFF0(struct Pes6BitSet *bits, TeamCompetition *options) {
    s32 selection, category, available, allow;
    s32 mode;
    category = (u8)func_0022CEF0();
    func_00325B90(&selection);
    mode = options->competition;
    available = func_00325930(options);
    allow = 1;
    if (!func_00325E40(options) && !allowsMode(mode))
        allow = 0;
    Pes6BitSet_Write(bits, 9, allow);
    Pes6BitSet_Write(bits, 10, category < 15);
    Pes6BitSet_Write(bits, 11, category == 0);
    Pes6BitSet_Write(bits, 12, selection == 0);
    Pes6BitSet_Write(bits, 13, selection == 1);
    Pes6BitSet_Write(bits, 14, category == 1);
    Pes6BitSet_Write(bits, 15, category == 2);
    Pes6BitSet_Write(bits, 16, category == 3);
    Pes6BitSet_Write(bits, 17, category == 4);
    Pes6BitSet_Write(bits, 18, category == 5);
    Pes6BitSet_Write(bits, 19, category == 6);
    Pes6BitSet_Write(bits, 20, category == 7);
    Pes6BitSet_Write(bits, 21, category == 8);
    Pes6BitSet_Write(bits, 22, category == 9);
    Pes6BitSet_Write(bits, 23, category == 10);
    Pes6BitSet_Write(bits, 24, category == 11);
    Pes6BitSet_Write(bits, 25, category == 12);
    Pes6BitSet_Write(bits, 26, category == 13);
    Pes6BitSet_Write(bits, 27, available);
    Pes6BitSet_Write(bits, 28, available);
    Pes6BitSet_Write(bits, 29, options->stage == 3);
    return 1;
}
