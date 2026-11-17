/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Job_CopyPayloadOut(s32, s32, s32);
s32 Pes6Job_Create(s32, s32, s32);
s32 Pes6Job_SetArg(s32, s32, s32);
s32 func_00311BA0(s32);
s32 func_00338720(s32, s32);
s32 func_00340C80(f32);

s32 func_00355E40(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };

    s3 = a0;
    s1 = 0;
    s0 = (s32) 0x590000U;
    s0 = (s32) ((u32) s0 + 0xffffe7f0U);
L_00355E68:;
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_00311BA0(a0);
    if (v0 == 0) { s1 = (s32) ((u32) s1 + 0x1U); goto L_00355ED4; }
    a1 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 249));
    if (v0 == 0) goto L_00355ED0;
    s2 = (*(volatile u8 *) (u32) s0);
    v0 = 1; goto L_00355EE4;
L_00355ED0:;
    s1 = (s32) ((u32) s1 + 0x1U);
L_00355ED4:;
    v0 = s1 < 22;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_00355E68; }
    v0 = 0;
L_00355EE4:;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s3 + 44)); goto L_00355EF4; }
    v0 = 0; goto L_00355F80;
L_00355EF4:;
    s0 = s2 & 0xff;
    if (s0 != v0) { a2 = (*(volatile s32 *) (u32) (s3 + 8)); goto L_00355F08; }
    v0 = 0; goto L_00355F80;
L_00355F08:;
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x350000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0x5d00U);
    a0 = v0 | 0x67;
    a3 = (s32) ((u32) a3 + 0x6448U); v0 = Pes6Job_Create(a0, a1, a2);
    s1 = v0;
    a1 = s3;
    a0 = s1; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
    a2 = s0;
    a0 = s1;
    a1 = 0; v0 = Pes6Job_SetArg(a0, a1, a2);
    v0 = (s32) 0x40600000U;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    a0 = s1;
    a1 = v0; v0 = func_00338720(a0, a1);
    v0 = (s32) 0x40a00000U;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    a0 = s3;
    a1 = v0; v0 = func_00338720(a0, a1);
    v0 = 1;
L_00355F80:;
    return v0;
}
