/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6GfxRing_Alloc(s64);

void func_001426C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;

    a2 = 384;
    s2 = (*(volatile s32 *) (u32) (a0 + 68));
    v1 = (*(volatile s32 *) (u32) (a0 + 20));
    a1 = (*(volatile s32 *) (u32) (a0 + 12));
    v0 = (s32) ((u32) s2 << 4);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) a1 << 6);
    s1 = (s32) ((u32) a2 + (u32) a0);
    s0 = (s32) ((u32) s1 + (u32) v1);
    s3 = (s32) ((u32) s0 + (u32) v0);
    a0 = s3; v0 = Pes6GfxRing_Alloc(a0);
    { s32 c_ = s2 == 0; (*(volatile u32 *) (u32) (gp + -23412)) = (u32) v0; if (c_) goto L_00142744; }
    a1 = (s64) ((u64) v0 << 32);
    v1 = (s32) 0x500000U;
    a1 = a1 >> 32;
    a0 = (s32) ((u32) a1 + 0x180U);
    (*(volatile u32 *) (u32) a1) = (u32) a0;
    a1 = (*(volatile s32 *) (u32) (gp + -23412));
    a0 = (s32) ((u32) a1 + (u32) s1);
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) a0;
    a1 = (*(volatile s32 *) (u32) (gp + -23412));
    a0 = (s32) ((u32) a1 + (u32) s0);
    (*(volatile u32 *) (u32) (a1 + 8)) = (u32) a0;
    (*(volatile u32 *) (u32) (v1 + -8896)) = (u32) 0; goto L_0014279C;
L_00142744:;
    a4 = (s32) ((u32) v0 + 0x180U);
    v1 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) (v1 + -8892)) = (u32) a4;
    a3 = (s32) ((u32) v0 + (u32) s1);
    a0 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) (a0 + -8888)) = (u32) a3;
    at = (s32) 0x70000000U;
    a0 = (s32) 0x70000000U;
    (*(volatile u32 *) (u32) (v1 + -8896)) = (u32) a4;
    v1 = a0 | 0x2000;
    at = at | 0x1e80;
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    a2 = (s32) ((u32) s1 + (u32) at);
    a0 = (*(volatile s32 *) (u32) (gp + -23412));
    a1 = (s32) ((u32) s3 + 0xfffffe80U);
    v1 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) a2;
    a2 = (*(volatile s32 *) (u32) (gp + -23412));
    a0 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) (a2 + 8)) = (u32) a0;
    (*(volatile u32 *) (u32) (v1 + -8884)) = (u32) a1;
L_0014279C:;
    v1 = (s32) 0x500000U;
    v1 = (s32) ((u32) v1 + 0xffffdd50U);
    (*(volatile u32 *) (u32) (gp + -23416)) = (u32) v1;
    return;
}
