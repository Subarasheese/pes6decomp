/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
s32 func_001F08B0(s32);
void func_0063AD20(s32, s32, s32, s32);
s32 func_00645820(s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_006306B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    s0 = a1;
    a0 = 131; v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 408));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (s1 + 44));
    v0 = 1;
    if (v1 != v0) { a0 = 144; goto L_006306F0; }
    a0 = 143;
L_006306F0:;
    v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 444));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (s32) 0x350000U;
    a0 = v0 | 0x38; v0 = func_001F08B0(a0);
    a2 = (*(volatile s32 *) (u32) (s1 + 48));
    at = (s32) 0x980000U;
    at = at | 0x9680;
    at = a2 < at;
    if (at != 0) goto L_00630734;
    v1 = (s32) 0x980000U;
    a2 = v1 | 0x967f; goto L_00630740;
L_00630734:;
    if (a2 >= 0) { a4 = (*(volatile u16 *) (u32) (s1 + 52)); goto L_00630744; }
    a2 = 0;
L_00630740:;
    a4 = (*(volatile u16 *) (u32) (s1 + 52));
L_00630744:;
    a0 = (s32) 0x650000U;
    a1 = (s32) 0x660000U;
    a3 = v0;
    a0 = (s32) ((u32) a0 + 0x78a0U);
    a1 = (s32) ((u32) a1 + 0xffffae20U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s0 + 448));
    a1 = (s32) 0x650000U;
    a1 = (s32) ((u32) a1 + 0x78a0U); func_0063AD20(a0, a1, a2, a3);
    a2 = (*(volatile u8 *) (u32) (s0 + 596));
    v1 = (s32) 0x650000U;
    v1 = (s32) ((u32) v1 + 0x7818U);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (s32) ((u32) a2 << 1);
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001D7D60(a0, a1);
    return;
}
