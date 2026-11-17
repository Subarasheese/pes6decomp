/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0022D460(s32, s32);

void func_00324F60(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 gp = 0x3ef370;

    s6 = (s32) 0x590000U;
    s5 = 0;
    s6 = (s32) ((u32) s6 + 0x2980U);
    s2 = a0;
L_00324F94:;
    s3 = 0;
    s1 = s6;
    { s32 c_ = s5 >= 0; s0 = s5 & 0x1; if (c_) goto L_00324FB0; }
    if (s0 == 0) goto L_00324FB0;
    s0 = (s32) ((u32) s0 + 0xfffffffeU);
L_00324FB0:;
    v1 = (*(volatile u16 *) (u32) (s1 + 70));
    a1 = 0;
    a0 = s2;
L_00324FC0:;
    v0 = (*(volatile u16 *) (u32) (a0 + 200));
    if (v0 != v1) goto L_00324FE8;
    if (v1 == 0) goto L_00324FE8;
    v0 = (s32) ((u32) a1 << 5);
    v1 = 1;
    v0 = (s32) ((u32) s2 + (u32) v0);
    s4 = (s32) ((u32) v0 + 0xc8U); goto L_00325000;
L_00324FE8:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 32;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x20U); if (c_) goto L_00324FC0; }
    v1 = 0;
L_00325000:;
    if (v1 == 0) goto L_003250A8;
    v0 = (*(volatile s32 *) (u32) (gp + -31680));
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) (v0 + 44));
    a1 = (*(volatile u16 *) (u32) s4); v0 = func_0022D460(a0, a1);
    v0 = v0 & 0xffff;
    at = (u64) v0 < (u64) (s64) 11;
    if (at == 0) goto L_003250A8;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x1670U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x325048U) goto L_00325048; if (t_ == 0x325058U) goto L_00325058; if (t_ == 0x325068U) goto L_00325068; if (t_ == 0x325078U) goto L_00325078; if (t_ == 0x325088U) goto L_00325088; if (t_ == 0x325098U) goto L_00325098; if (t_ == 0x3250a8U) goto L_003250A8; }
L_00325048:;
    v0 = (*(volatile s32 *) (u32) (s4 + 28));
    v0 = v0 | 0x400;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) v0; goto L_003250A8;
L_00325058:;
    v0 = (*(volatile s32 *) (u32) (s4 + 28));
    v0 = v0 | 0x800;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) v0; goto L_003250A8;
L_00325068:;
    v0 = (*(volatile s32 *) (u32) (s4 + 28));
    v0 = v0 | 0x1000;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) v0; goto L_003250A8;
L_00325078:;
    v0 = (*(volatile s32 *) (u32) (s4 + 28));
    v0 = v0 | 0x2000;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) v0; goto L_003250A8;
L_00325088:;
    v0 = (*(volatile s32 *) (u32) (s4 + 28));
    v0 = v0 | 0x4000;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) v0; goto L_003250A8;
L_00325098:;
    v0 = (*(volatile s32 *) (u32) (s4 + 28));
    v0 = v0 | 0x8000;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) v0;
L_003250A8:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 32;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x348U); if (c_) goto L_00324FB0; }
    s5 = (s32) ((u32) s5 + 0x1U);
    s6 = (s32) ((u32) s6 + 0x6900U);
    v0 = s5 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x400U); if (c_) goto L_00324F94; }
    v0 = 1;
    return;
}
