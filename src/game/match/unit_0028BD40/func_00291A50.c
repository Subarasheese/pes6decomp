/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on

#include "pes6/partial_005a2330.h"

extern void *memset(void *, s32, u32);
extern void func_002B8F40(void);
extern void (*D_005A22F0[7])(s32, s16, s16);
extern s32 (*D_005A2310[7])(s32, s16, s16);

static inline void setMatchOption(u8 *field, u8 value) { *field = value; }
static inline void setMatchSlotFlags(s32 side, u8 keep, u8 bits) {
    PartialState005A2330 *state = &D_005A2330;
    if (state) {
        state->flags[side] &= keep;
        state->flags[side] |= bits;
    }
}

void func_00291A50(void) {
    PartialState005A2330 *state = &D_005A2330;
    if (!state)
        return;
    memset(state, 0, sizeof(*state));
    state->header = 0;
    {
        PartialState005A2330 *p = &D_005A2330;
        if (p)
            setMatchOption(&p->setting03, 23);
    }
    {
        PartialState005A2330 *p = &D_005A2330;
        if (p)
            setMatchOption(&p->field04, 255);
    }
    {
        PartialState005A2330 *p = &D_005A2330;
        if (p)
            setMatchOption(&p->field05, 255);
    }
    setMatchSlotFlags(0, 0xf8, 3);
    setMatchSlotFlags(1, 0xf8, 3);
    setMatchSlotFlags(0, 0xc7, 24);
    setMatchSlotFlags(1, 0xc7, 24);
    setMatchSlotFlags(0, 0x3f, 0);
    memset(D_005A2310, 0, sizeof(D_005A2310));
    memset(D_005A22F0, 0, sizeof(D_005A22F0));
    func_002B8F40();
}
