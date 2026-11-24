/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_period_message.h"
typedef struct {
    u8 reserved00[0x44];
    void *state, *match;
} CountJob;
extern s32 func_003395B0(void *state), func_00340C80(float seconds);
s32 func_003362F0(struct Pes6BitSet *bits, CountJob *job, const s32 *counts, u8 side) {
    void *match = job->match;
    void *state = job->state;
    s32 recent, enabled, minute, deadline;
    if (!Pes6Job_GetArg(job, 3))
        return 0;
    deadline = func_003395B0(state);
    recent = deadline < func_00340C80(60.0f);
    enabled = func_003336F0(match);
    minute = func_0030EA70();
    Pes6BitSet_Write(bits, 0x1, Pes6MatchContext_GetHalf() == 0);
    Pes6BitSet_Write(bits, 0x2, recent & (counts[side] == 2));
    Pes6BitSet_Write(bits, 0x3, enabled & (counts[side ^ 1] == 0));
    Pes6BitSet_Write(bits, 0x8, enabled & !counts[side ^ 1]);
    Pes6BitSet_Write(bits, 0xc, recent & (counts[side] == 3));
    Pes6BitSet_Write(bits, 0xf,
                     enabled & ((minute >= 24) & (counts[side] + counts[side ^ 1] == 1)));
    Pes6BitSet_Write(bits, 0xb8, recent);
    return 1;
}
