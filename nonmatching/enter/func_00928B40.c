/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E6500(s32);
s32 func_001E6530(s32);
void func_001EF900(s32, s32);
s32 func_002F96F0(s32, s32);
void func_002F9B80(s32, s32, s32, s32, s32, s32, s32);
s32 func_003663E0(s32);

void func_00928B40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff798U);
    s3 = a0;
    s2 = a2;
    s1 = a3;
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
    a0 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) v0 + (u32) a1);
    at = a1 < 32;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_00928BB8; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + 0xfffff7a8U);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 < 0) { v0 = 1; goto L_00928BBC; }
    a2 = 1;
L_00928BB8:;
    v0 = 1;
L_00928BBC:;
    if (a2 != v0) { a0 = s3; goto L_00928C9C; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + 0xfffff7a8U);
    v0 = (s32) ((u32) v0 + (u32) a1);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) sp + 0x58U);
    a0 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_00928C0C; }
L_00928BF0:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_00928BF0;
L_00928C0C:;
    v0 = func_003663E0(a0);
    s0 = v0;
    if (s0 == 0) { a0 = s3; goto L_00928C8C; }
    a0 = s0; v0 = func_001E6530(a0);
    (*(volatile u16 *) (u32) (sp + 92)) = (u16) v0;
    a0 = s0; v0 = func_001E6500(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
    (*(volatile u16 *) (u32) (sp + 94)) = (u16) v0;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    v1 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a1 = s0;
    a4 = v0;
    a5 = s2;
    a6 = s1;
    a0 = s3;
    a2 = (s32) ((u32) sp + 0x58U);
    a3 = 0; func_002F9B80(a0, a1, a2, a3, a4, a5, a6);
    a0 = s3;
    a1 = 1; func_001EF900(a0, a1);
    goto L_00928CA8;
L_00928C8C:;
    a1 = 0; func_001EF900(a0, a1);
    goto L_00928CA4;
L_00928C9C:;
    a1 = 0; func_001EF900(a0, a1);
L_00928CA4:;
L_00928CA8:;
    return;
}
