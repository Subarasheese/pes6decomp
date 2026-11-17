/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00251C30(void);
s64 sceSifCallRpc(s64, s64, s64, s64, s64, s64, s64, s64);

s64 func_00255C10(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    s0 = a3; v0 = func_00251C30();
    a0 = s3;
    a1 = s2;
    a2 = s1;
    a3 = s0;
    { u32 t_ = (u32) v0; a4 = (s32) ((u32) gp + 0xffffa894U); v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    v1 = (*(volatile s32 *) (u32) (gp + -22380));
    v0 = 1;
    if (v1 != v0) goto L_00255C6C;
    v0 = 0; goto L_00255CCC;
L_00255C6C:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14716)) = (u32) s2;
    a0 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a3 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14712)) = (u32) s1;
    a4 = 16;
    v0 = (s32) 0x590000U;
    a5 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14708)) = (u32) s0;
    a0 = (s32) ((u32) a0 + 0xffffc690U);
    v0 = (s32) 0x200000U;
    (*(volatile u32 *) (u32) (v1 + -14720)) = (u32) s3;
    a1 = s3 | v0;
    a2 = 0;
    a3 = (s32) ((u32) a3 + 0xffffc680U);
    a5 = (s32) ((u32) a5 + 0xffffc640U);
    a6 = a4;
    a7 = 0;
    (*(volatile u64 *) (u32) sp) = (u64) 0; v0 = sceSifCallRpc(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -14784));
L_00255CCC:;
    return v0;
}
