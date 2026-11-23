/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0028F230(s32, s32, s32, s32, s32);
s32 func_002937A0(s32);
void func_002CA0F0(s32);

s32 func_0028F780(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    s0 = a1;
    a0 = (s32) ((u32) sp + 0x30U); func_002CA0F0(a0);
    a0 = s0; v0 = func_002937A0(a0);
    v0 = v0 & 0xff;
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9de0U);
    v0 = (s32) 0x3e0000U;
    a3 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffff9d60U);
    a5 = 0;
    a2 = (s32) ((u32) v0 + (u32) a0);
    a4 = (s32) ((u32) sp + 0x40U);
    v0 = (s32) 0x3e0000U;
    v1 = 1;
    v0 = (s32) ((u32) v0 + 0xffff9da0U);
    a1 = (s32) ((u32) v0 + (u32) a0);
    a0 = 2;
L_0028F7E4:;
    if (a5 == a0) goto L_0028F808;
    if (a5 == v1) goto L_0028F800;
    goto L_0028F810;
L_0028F800:;
    v0 = (*(volatile s32 *) (u32) a3); goto L_0028F818;
L_0028F808:;
    v0 = (*(volatile s32 *) (u32) a2); goto L_0028F818;
L_0028F810:;
    v0 = (*(volatile s32 *) (u32) a1);
L_0028F818:;
    (*(volatile u32 *) (u32) a4) = (u32) v0;
    a5 = (s32) ((u32) a5 + 0x1U);
    v0 = a5 < 3;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x4U); if (c_) goto L_0028F7E4; }
    a1 = s1;
    a2 = s0;
    a0 = (s32) ((u32) sp + 0x30U);
    a3 = (s32) ((u32) sp + 0x40U);
    a4 = 100; v0 = func_0028F230(a0, a1, a2, a3, a4);
    return v0;
}
