/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6TextureCache_Invalidate(s32);
s32 Pes6Texture_GetClut(s32);
s32 func_00145750(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0014E580(s32, s32, s32, s32, s32);
s32 func_00150110(s32);
s32 func_00150FF0(s32, s32, s32);
s32 func_001515E0(s32, s32, s32, s32, s32, s32, s32);
s32 func_00188710(s32, s32);

s32 func_0019EFA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a4;
    s1 = a1;
    s0 = a3;
    a0 = a2;
    a1 = (s32) ((u32) sp + 0x7cU); v0 = func_00188710(a0, a1);
    a0 = 0;
    a1 = s0;
    a2 = 2;
    a3 = 0;
    a4 = 0; v0 = func_001515E0(a0, a1, a2, a3, a4, a5, a6);
    s5 = v0;
    a1 = s3;
    a0 = s5; v0 = func_00150FF0(a0, a1, a2);
    a0 = s5; v0 = func_00145750(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s5; v0 = Pes6Texture_GetClut(a0);
    s3 = v0;
    a0 = s5; v0 = func_00150110(a0);
    a0 = s3;
    s4 = (s32) ((u32) sp + 0x7eU);
    s3 = (s32) ((u32) sp + 0x7dU);
    a2 = (*(volatile u8 *) (u32) (sp + 124));
    a3 = (*(volatile u8 *) (u32) s3);
    a4 = (*(volatile u8 *) (u32) s4);
    a1 = v0; v0 = func_0014E580(a0, a1, a2, a3, a4);
    v0 = (s32) 0x520000U;
    s2 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + 0x320U);
    a0 = s0;
    v0 = (s32) ((u32) v0 + (u32) s2);
    (*(volatile u32 *) (u32) v0) = (u32) s5; v0 = Pes6TextureCache_Invalidate(a0);
    a1 = (s32) ((u32) s0 + 0x1U);
    a0 = 0;
    a2 = 2;
    a3 = 0;
    a4 = 0; v0 = func_001515E0(a0, a1, a2, a3, a4, a5, a6);
    s5 = v0;
    a1 = s1;
    a0 = s5; v0 = func_00150FF0(a0, a1, a2);
    a0 = s5; v0 = func_00145750(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s5; v0 = Pes6Texture_GetClut(a0);
    s1 = v0;
    a0 = s5; v0 = func_00150110(a0);
    a3 = (*(volatile u8 *) (u32) s3);
    a0 = s1;
    a4 = (*(volatile u8 *) (u32) s4);
    a2 = (*(volatile u8 *) (u32) (sp + 124));
    a1 = v0; v0 = func_0014E580(a0, a1, a2, a3, a4);
    v0 = (s32) 0x520000U;
    a0 = (s32) ((u32) s0 + 0x1U);
    v0 = (s32) ((u32) v0 + 0x324U);
    v0 = (s32) ((u32) v0 + (u32) s2);
    (*(volatile u32 *) (u32) v0) = (u32) s5; v0 = Pes6TextureCache_Invalidate(a0);
    return v0;
}
