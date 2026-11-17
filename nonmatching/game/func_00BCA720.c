/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0093FB30(s32, s32, s32);
void func_00BCA680(s32, s32);

void func_00BCA720(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0;

    v1 = (s32) ((u32) a0 << 1);
    a1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) ((u32) a1 << 2);
    v1 = (s32) 0xcc0000U;
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffd3b0U);
    a0 = (s32) ((u32) a0 << 2);
    t4 = (s32) ((u32) v1 + (u32) a0);
    a3 = (s32) 0xcc0000U;
    a2 = (*(volatile u8 *) (u32) t4);
    a5 = 0;
    a3 = (s32) ((u32) a3 + 0xffffd4f0U);
    a0 = 255;
L_00BCA768:;
    a4 = 0;
L_00BCA770:;
    a1 = (s32) ((u32) a3 + (u32) a4);
    (*(volatile u8 *) (u32) a1) = (u8) a0;
    a4 = (s32) ((u32) a4 + 0x6U);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) a0;
    v1 = a4 < 18;
    (*(volatile u8 *) (u32) (a1 + 2)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 3)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 4)) = (u8) a0;
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (a1 + 5)) = (u8) a0; if (c_) goto L_00BCA770; }
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 2;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x12U); if (c_) goto L_00BCA768; }
    a7 = a2 & 0xff;
    t6 = 0;
L_00BCA7B0:;
    v1 = t6 ^ a7;
    t5 = 0;
    { s32 c_ = v1 >= 0; a6 = v1 & 0x1; if (c_) goto L_00BCA7CC; }
    if (a6 == 0) goto L_00BCA7CC;
    a6 = (s32) ((u32) a6 + 0xfffffffeU);
L_00BCA7CC:;
L_00BCA7D0:;
    v1 = (s32) ((u32) t4 + (u32) t5);
    a1 = (*(volatile u8 *) (u32) (v1 + 12));
    a0 = a6 & 0xff; func_00BCA680(a0, a1);
    t5 = (s32) ((u32) t5 + 0x1U);
    v1 = t5 < 11;
    if (v1 != 0) goto L_00BCA7D0;
    t6 = (s32) ((u32) t6 + 0x1U);
    v1 = t6 < 2;
    { s32 c_ = v1 != 0; t4 = (s32) ((u32) t4 + 0xbU); if (c_) goto L_00BCA7B0; }
    s1 = (s32) 0xcc0000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0xffffd4f0U);
L_00BCA80C:;
    s2 = 0;
L_00BCA810:;
    v1 = (s32) ((u32) s1 + (u32) s2);
    a2 = (*(volatile u8 *) (u32) v1);
    v1 = 255;
    if (a2 != v1) { a0 = 1; goto L_00BCA850; }
L_00BCA828:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 18;
    if (v1 != 0) goto L_00BCA810;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 2;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x12U); if (c_) goto L_00BCA80C; }
    goto L_00BCA860;
L_00BCA850:;
    a1 = s0; func_0093FB30(a0, a1, a2);
    goto L_00BCA828;
L_00BCA860:;
    return;
}
