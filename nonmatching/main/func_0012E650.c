/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00105360(void);
void func_00146C70(s32, s32, s32, s32, s32, s32, s32, s32);
s32 sceSifBindRpc(s32, s32, s32);
void sceSifInitRpc(void);

s32 func_0012E650(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = 1;
    a0 = (s32) ((u32) sp + 0x10U);
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 20)) = (u32) v0; v0 = func_00105360();
    v1 = -1;
    { s32 c_ = v0 != v1; (*(volatile u32 *) (u32) (gp + -23512)) = (u32) v0; if (c_) goto L_0012E6A0; }
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x6810U); func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
L_0012E684:;
    goto L_0012E684;
L_0012E6A0:;
    a0 = 0; sceSifInitRpc();
L_0012E6A8:;
    a0 = (s32) 0x400000U;
    v0 = (s32) 0x80000000U;
    a0 = (s32) ((u32) a0 + 0xffffb6a0U);
    a1 = v0 | 0x211;
    a2 = 0; v0 = sceSifBindRpc(a0, a1, a2);
    if (v0 >= 0) goto L_0012E6F0;
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x6828U); func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
L_0012E6D4:;
    goto L_0012E6D4;
L_0012E6F0:;
    v0 = (s32) 0x400000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -18748));
    if (v0 == 0) goto L_0012E6A8;
    v0 = 0;
    return v0;
}
