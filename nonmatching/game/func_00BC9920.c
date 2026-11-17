/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002CA200(s32, s32);
void func_0093FDF0(s32);
s32 func_009A00D0(s32, s32);

void func_00BC9920(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 hi = 0, lo = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    a0 = a0 & 0xff;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffd390U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s7 = 1;
    s5 = 0;
    fp = 0;
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v0;
    v0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffd3b0U);
    v1 = (s32) ((u32) v1 << 2);
    s0 = (s32) ((u32) v0 + (u32) v1);
    s2 = s0;
    s6 = (s32) ((u32) s0 + 0x2cU);
L_00BC999C:;
    v0 = 255;
    if (s7 == v0) { a0 = 1; goto L_00BC99B8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) fp / (s32) v0); hi = (s32) ((s32) fp % (s32) v0); lo = q_; }
    v0 = hi;
    a0 = (s32) ((u32) v0 + 0x1U);
L_00BC99B8:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) a0);
    at = (s32) 0x10000U;
    a0 = (s32) ((u32) v0 << 6);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = (*(volatile s32 *) (u32) (sp + 160));
    at = at | 0x6da4;
    s4 = 0;
    s3 = (s32) ((u32) v1 + (u32) a0);
    s1 = (s32) ((u32) v0 + (u32) at);
L_00BC99E4:;
    v0 = (*(volatile u8 *) (u32) s0);
    (*(volatile u8 *) (u32) (s3 + 19)) = (u8) s5;
    v1 = s5 ^ v0;
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_00BC9A04; }
    if (v0 == 0) goto L_00BC9A04;
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00BC9A04:;
    (*(volatile u8 *) (u32) (s3 + 18)) = (u8) v0;
    v1 = 21;
    v0 = (s32) ((u32) s2 + (u32) s4);
    a1 = s1;
    v0 = (*(volatile u8 *) (u32) (v0 + 12));
    (*(volatile u8 *) (u32) (s3 + 17)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s3 + 4));
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x30U);
L_00BC9A28:;
    v0 = (*(volatile s16 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) a0) = (u16) v0;
    a1 = (s32) ((u32) a1 + 0x2U);
    a0 = (s32) ((u32) a0 + 0x2U);
    if (v1 > 0) goto L_00BC9A28;
    a1 = (*(volatile s32 *) (u32) s6);
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_009A00D0(a0, a1);
    a1 = v0;
    a0 = s3; func_002CA200(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x2aU);
    v0 = s4 < 11;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x240U); if (c_) goto L_00BC99E4; }
    v0 = (*(volatile s32 *) (u32) (sp + 160));
    s5 = (s32) ((u32) s5 + 0x1U);
    s7 = (s32) ((u32) s7 + 0xbU);
    fp = (s32) ((u32) fp + 0xbU);
    v0 = (s32) ((u32) v0 + 0x1ceU);
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v0;
    v0 = s5 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0xbU); if (c_) goto L_00BC999C; }
    func_0093FDF0(a0);
    return;
}
