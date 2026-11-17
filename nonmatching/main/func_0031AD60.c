/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Job_CopyPayloadOut(s32, s32, s32);
s32 Pes6Job_Create(s32, s32, s32);
void Pes6Job_SetArg(s32, s32, s32);
void Pes6Job_SetField4(s32, s32);
s32 func_003384E0(s32, s32);
void func_00338990(s32, s32, s32);
s32 func_00991F40(s32, s32, s32, s32);

s32 func_0031AD60(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = 255;
    s0 = (*(volatile s32 *) (u32) (a0 + 68));
    (*(volatile u8 *) (u32) (sp + 63)) = (u8) 0;
    v1 = (*(volatile s32 *) (u32) (a0 + 44));
    { s32 c_ = v1 == v0; s1 = a0; if (c_) goto L_0031AD9C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_0031ADA4;
L_0031AD9C:;
    a0 = 1;
    v1 = (s32) ((u32) a0 << 3);
L_0031ADA4:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a1 = (s32) ((u32) sp + 0x3fU);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00991F40(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) goto L_0031AE80;
    v0 = 2;
    if (v1 == v0) goto L_0031ADF0;
    v0 = 1;
    if (v1 == v0) goto L_0031ADF0;
    goto L_0031AE9C;
L_0031ADF0:;
    a1 = (s32) 0x330000U;
    a0 = 12;
    a1 = (s32) ((u32) a1 + 0xffff9560U); v0 = func_003384E0(a0, a1);
    if (v0 != 0) goto L_0031AE60;
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    if (v0 != 0) goto L_0031AE60;
    a2 = (*(volatile s32 *) (u32) (s1 + 8));
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x320000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffffa9d0U);
    a0 = v0 | 0x6;
    a3 = (s32) ((u32) a3 + 0x1510U); v0 = Pes6Job_Create(a0, a1, a2);
    s0 = v0;
    a1 = s1;
    a0 = s0; Pes6Job_CopyPayloadOut(a0, a1, a2);
    a0 = s0;
    a1 = s1; func_00338990(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (sp + 63));
    a0 = s0;
    a1 = 2; Pes6Job_SetArg(a0, a1, a2);
L_0031AE60:;
    a1 = (s32) 0x320000U;
    a2 = (s32) 0x3e0000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffffaeb0U);
    a2 = (s32) ((u32) a2 + 0x1510U); Pes6Job_SetField4(a0, a1);
    goto L_0031AE98;
L_0031AE80:;
    a1 = (s32) 0x320000U;
    a2 = (s32) 0x3e0000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffffaeb0U);
    a2 = (s32) ((u32) a2 + 0x1510U); Pes6Job_SetField4(a0, a1);
L_0031AE98:;
L_0031AE9C:;
    v0 = 1;
    return v0;
}
