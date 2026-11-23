/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002937A0(s32);
void func_002CA080(s32);
void func_008BC9B0(s32, s32);
void func_008BCB20(s32, s32);
void func_008BD2E0(s32, s32);

void func_008BC540(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[32];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    a0 = (s32) ((u32) sp + 0x70U);
    (*(volatile u8 *) (u32) (sp + 144)) = (u8) 0;
    s0 = 1; func_002CA080(a0);
    a1 = (*(volatile u8 *) (u32) (s3 + 1854));
    a0 = (s32) ((u32) sp + 0xc6U);
    v1 = 53;
    v0 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s3);
    a1 = (s32) ((u32) v0 + 0x7d6U);
L_008BC5A4:;
    v0 = (*(volatile s8 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 > 0) goto L_008BC5A4;
    s5 = 0;
    s4 = (s32) ((u32) sp + 0x90U);
L_008BC5C8:;
    v0 = 3;
    (*(volatile u8 *) (u32) (s4 + 21)) = (u8) v0;
    a0 = (*(volatile u8 *) (u32) (s4 + 74)); v0 = func_002937A0(a0);
    v0 = v0 & 0xff;
    s5 = (s32) ((u32) s5 + 0x1U);
    a0 = (s32) ((u32) v0 + (u32) sp);
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = (*(volatile s8 *) (u32) (a0 + 118));
    v0 = s5 < 11;
    v1 = (s32) ((u32) v1 + 0x1U);
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (a0 + 118)) = (u8) v1; if (c_) goto L_008BC5C8; }
    s4 = 0;
    v0 = 4;
L_008BC604:;
    if (s4 == v0) goto L_008BC640;
    v0 = 3;
    if (s4 == v0) goto L_008BC640;
    v0 = 2;
    if (s4 == v0) goto L_008BC640;
    v0 = 1;
    if (s4 == v0) goto L_008BC640;
    if (s4 == 0) goto L_008BC640;
    goto L_008BC650;
L_008BC640:;
    a1 = s4 & 0xff;
    a0 = (s32) ((u32) sp + 0x90U); func_008BD2E0(a0, a1);
L_008BC650:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 14;
    if (v0 != 0) { v0 = 4; goto L_008BC604; }
    if (s2 == 0) { a0 = (s32) ((u32) sp + 0x90U); goto L_008BC67C; }
    a0 = (s32) ((u32) sp + 0x90U);
    a1 = (s32) ((u32) sp + 0x70U); func_008BC9B0(a0, a1);
    goto L_008BC6D8;
L_008BC67C:;
    a1 = (s32) ((u32) sp + 0x70U); func_008BCB20(a0, a1);
    s5 = 1;
    s4 = (s32) ((u32) sp + 0x91U);
    s2 = (s32) ((u32) sp + 0x92U);
L_008BC690:;
    a0 = (*(volatile u8 *) (u32) (s4 + 21)); v0 = func_002937A0(a0);
    v1 = v0 & 0xff;
    v0 = 3;
    if (v1 != v0) goto L_008BC6C0;
    v0 = (*(volatile u8 *) (u32) (s2 + -1));
    at = v0 < 12;
    if (at != 0) goto L_008BC6C0;
    v0 = 11;
    (*(volatile u8 *) (u32) (s2 + -1)) = (u8) v0;
L_008BC6C0:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 11;
    s4 = (s32) ((u32) s4 + 0x1U);
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x2U); if (c_) goto L_008BC690; }
L_008BC6D8:;
    if (s1 == 0) goto L_008BC728;
    v0 = (s32) 0x3d0000U;
    a0 = 0xffff;
    v0 = (*(volatile u16 *) (u32) (v0 + 11464));
    if (v0 == a0) goto L_008BC728;
    v1 = (*(volatile u16 *) (u32) s3);
    a1 = (s32) 0x3d0000U;
    a1 = (s32) ((u32) a1 + 0x2cc8U);
    v0 = (*(volatile u16 *) (u32) a1);
L_008BC704:;
    if (v1 != v0) { a1 = (s32) ((u32) a1 + 0x2U); goto L_008BC718; }
    (*(volatile u8 *) (u32) (sp + 144)) = (u8) 0;
    s0 = 0; goto L_008BC728;
L_008BC718:;
    v0 = (*(volatile u16 *) (u32) a1);
    if (v0 != a0) { v0 = (*(volatile u16 *) (u32) a1); goto L_008BC704; }
L_008BC728:;
    v1 = (*(volatile u8 *) (u32) (sp + 144));
    v0 = 11;
    if (v1 != v0) { v0 = s0; goto L_008BC780; }
    a0 = (*(volatile u8 *) (u32) (s3 + 1854));
    a1 = (s32) ((u32) sp + 0x91U);
    v1 = 53;
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s3);
    a0 = (s32) ((u32) v0 + 0x7d6U);
L_008BC760:;
    v0 = (*(volatile s8 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 > 0) goto L_008BC760;
    v0 = s0;
L_008BC780:;
    return;
}
