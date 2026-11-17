/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00BC6A60(s32);

void func_00BC9520(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = (s32) 0xcc0000U;
    s2 = (s32) ((u32) s2 + 0xffffd5d0U);
    s0 = 0;
L_00BC9540:;
    s1 = (s32) ((u32) s2 + 0x14U);
    if (s1 == 0) goto L_00BC96D0;
    v1 = (*(volatile s32 *) (u32) s1);
    a3 = 1;
    if (v1 != a3) goto L_00BC96D0;
    if (s1 == 0) goto L_00BC96E8;
    if (v1 != a3) goto L_00BC96E8;
    v1 = (*(volatile u8 *) (u32) (s1 + 6));
    a2 = 0;
    a1 = 0;
    a0 = 0;
    a5 = 0;
    at = v1 < 0;
    { s32 c_ = at != 0; a4 = 0; if (c_) goto L_00BC96F0; }
    at = v1 < 6;
    if (at == 0) goto L_00BC96F0;
    a4 = a3; goto L_00BC96F0;
L_00BC95A0:;
    a3 = v1 & 0xff;
    a4 = (s32) ((u32) a3 << 2);
    a3 = (s32) 0xcc0000U;
    a3 = (s32) ((u32) a3 + 0xffffd390U);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (*(volatile s32 *) (u32) a3);
    if (a3 == 0) goto L_00BC95C8;
    a5 = 1;
L_00BC95C8:;
    if (a5 == 0) goto L_00BC9608;
    a5 = v1 & 0xff;
    a3 = (s32) 0xcc0000U;
    a4 = (s32) ((u32) a5 << 1);
    a3 = (s32) ((u32) a3 + 0xffffd3b0U);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a6 = (*(volatile s32 *) (u32) (s1 + 8));
    a4 = (s32) ((u32) a4 << 2);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a4 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (*(volatile s32 *) (u32) (a3 + 44));
    if (a6 != a3) goto L_00BC9608;
    a0 = 1;
L_00BC9608:;
    if (a0 == 0) goto L_00BC9648;
    a5 = v1 & 0xff;
    a3 = (s32) 0xcc0000U;
    a4 = (s32) ((u32) a5 << 1);
    a3 = (s32) ((u32) a3 + 0xffffd3b0U);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a0 = 6;
    a4 = (s32) ((u32) a4 << 2);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a4 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (*(volatile u8 *) (u32) (a3 + 7));
    if (a3 != a0) goto L_00BC9648;
    a1 = 1;
L_00BC9648:;
    if (a1 == 0) goto L_00BC9688;
    a3 = v1 & 0xff;
    a0 = (s32) 0xcc0000U;
    a1 = (s32) ((u32) a3 << 1);
    a0 = (s32) ((u32) a0 + 0xffffd3b0U);
    a1 = (s32) ((u32) a1 + (u32) a3);
    v1 = 89;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a1 + (u32) a3);
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a0 + 10));
    if (a0 != v1) goto L_00BC9688;
    a2 = 1;
L_00BC9688:;
    if (a2 == 0) goto L_00BC96C8;
    a0 = (*(volatile u8 *) (u32) (s1 + 7));
    v1 = 1;
    if (a0 != v1) goto L_00BC9700;
    a1 = (*(volatile u8 *) (u32) (s1 + 6));
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffd3b0U);
    a0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) (v1 + 10)) = (u8) 0;
L_00BC96C8:;
    (*(volatile u32 *) (u32) s1) = (u32) 0;
L_00BC96D0:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 6;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x3cU); if (c_) goto L_00BC9540; }
    goto L_00BC9710;
L_00BC96E8:;
    a2 = 0; goto L_00BC9688;
L_00BC96F0:;
    if (a4 == 0) goto L_00BC95C8;
    goto L_00BC95A0;
L_00BC9700:;
    a0 = (*(volatile u8 *) (u32) (s1 + 6)); func_00BC6A60(a0);
    goto L_00BC96C8;
L_00BC9710:;
    return;
}
