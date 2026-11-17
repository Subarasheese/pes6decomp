/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001CDA50(s64);

s64 func_002FC2B0(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;

    s0 = a0;
    a0 = 0; v0 = func_001CDA50(a0);
    at = (u64) v0 < (u64) (s64) 9;
    if (at == 0) goto L_002FC5C8;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffcbf0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2fc2f0U) goto L_002FC2F0; if (t_ == 0x2fc35cU) goto L_002FC35C; if (t_ == 0x2fc3c8U) goto L_002FC3C8; if (t_ == 0x2fc434U) goto L_002FC434; if (t_ == 0x2fc4a0U) goto L_002FC4A0; if (t_ == 0x2fc50cU) goto L_002FC50C; if (t_ == 0x2fc578U) goto L_002FC578; if (t_ == 0x2fc5c8U) goto L_002FC5C8; }
L_002FC2F0:;
    a1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (gp + -21748)) = (u32) 0;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0x4c50U);
    v1 = 128;
L_002FC304:;
    v0 = (*(volatile s32 *) (u32) a1);
    if (s0 != v0) { v0 = (s64) ((u64) a0 << 32); goto L_002FC340; }
    v0 = (*(volatile s32 *) (u32) (a1 + 4));
    if (v0 == v1) goto L_002FC33C;
    v1 = (s64) ((u64) a0 << 32);
    v0 = (s32) 0x3b0000U;
    v1 = v1 >> 32;
    v0 = (s32) ((u32) v0 + 0x4c54U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_002FC61C;
L_002FC33C:;
    v0 = (s64) ((u64) a0 << 32);
L_002FC340:;
    a1 = (s32) ((u32) a1 + 0x40U);
    v0 = v0 >> 32;
    a0 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (gp + -21748)) = (u32) a0; if (c_) goto L_002FC304; }
    goto L_002FC5C8;
L_002FC35C:;
    a1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (gp + -21748)) = (u32) 0;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0x4c90U);
    v1 = 128;
L_002FC370:;
    v0 = (*(volatile s32 *) (u32) a1);
    if (s0 != v0) { v0 = (s64) ((u64) a0 << 32); goto L_002FC3AC; }
    v0 = (*(volatile s32 *) (u32) (a1 + 4));
    if (v0 == v1) goto L_002FC3A8;
    v1 = (s64) ((u64) a0 << 32);
    v0 = (s32) 0x3b0000U;
    v1 = v1 >> 32;
    v0 = (s32) ((u32) v0 + 0x4c94U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_002FC61C;
L_002FC3A8:;
    v0 = (s64) ((u64) a0 << 32);
L_002FC3AC:;
    a1 = (s32) ((u32) a1 + 0x40U);
    v0 = v0 >> 32;
    a0 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (gp + -21748)) = (u32) a0; if (c_) goto L_002FC370; }
    goto L_002FC5C8;
L_002FC3C8:;
    a1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (gp + -21748)) = (u32) 0;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0x4cd0U);
    v1 = 128;
L_002FC3DC:;
    v0 = (*(volatile s32 *) (u32) a1);
    if (s0 != v0) { v0 = (s64) ((u64) a0 << 32); goto L_002FC418; }
    v0 = (*(volatile s32 *) (u32) (a1 + 4));
    if (v0 == v1) goto L_002FC414;
    v1 = (s64) ((u64) a0 << 32);
    v0 = (s32) 0x3b0000U;
    v1 = v1 >> 32;
    v0 = (s32) ((u32) v0 + 0x4cd4U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_002FC61C;
L_002FC414:;
    v0 = (s64) ((u64) a0 << 32);
L_002FC418:;
    a1 = (s32) ((u32) a1 + 0x40U);
    v0 = v0 >> 32;
    a0 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (gp + -21748)) = (u32) a0; if (c_) goto L_002FC3DC; }
    goto L_002FC5C8;
L_002FC434:;
    a1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (gp + -21748)) = (u32) 0;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0x4d10U);
    v1 = 128;
L_002FC448:;
    v0 = (*(volatile s32 *) (u32) a1);
    if (s0 != v0) { v0 = (s64) ((u64) a0 << 32); goto L_002FC484; }
    v0 = (*(volatile s32 *) (u32) (a1 + 4));
    if (v0 == v1) goto L_002FC480;
    v1 = (s64) ((u64) a0 << 32);
    v0 = (s32) 0x3b0000U;
    v1 = v1 >> 32;
    v0 = (s32) ((u32) v0 + 0x4d14U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_002FC61C;
L_002FC480:;
    v0 = (s64) ((u64) a0 << 32);
L_002FC484:;
    a1 = (s32) ((u32) a1 + 0x40U);
    v0 = v0 >> 32;
    a0 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (gp + -21748)) = (u32) a0; if (c_) goto L_002FC448; }
    goto L_002FC5C8;
L_002FC4A0:;
    a1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (gp + -21748)) = (u32) 0;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0x4d50U);
    v1 = 128;
L_002FC4B4:;
    v0 = (*(volatile s32 *) (u32) a1);
    if (s0 != v0) { v0 = (s64) ((u64) a0 << 32); goto L_002FC4F0; }
    v0 = (*(volatile s32 *) (u32) (a1 + 4));
    if (v0 == v1) goto L_002FC4EC;
    v1 = (s64) ((u64) a0 << 32);
    v0 = (s32) 0x3b0000U;
    v1 = v1 >> 32;
    v0 = (s32) ((u32) v0 + 0x4d54U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_002FC61C;
L_002FC4EC:;
    v0 = (s64) ((u64) a0 << 32);
L_002FC4F0:;
    a1 = (s32) ((u32) a1 + 0x40U);
    v0 = v0 >> 32;
    a0 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (gp + -21748)) = (u32) a0; if (c_) goto L_002FC4B4; }
    goto L_002FC5C8;
L_002FC50C:;
    a1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (gp + -21748)) = (u32) 0;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0x4c10U);
    v1 = 128;
L_002FC520:;
    v0 = (*(volatile s32 *) (u32) a1);
    if (s0 != v0) { v0 = (s64) ((u64) a0 << 32); goto L_002FC55C; }
    v0 = (*(volatile s32 *) (u32) (a1 + 4));
    if (v0 == v1) goto L_002FC558;
    v1 = (s64) ((u64) a0 << 32);
    v0 = (s32) 0x3b0000U;
    v1 = v1 >> 32;
    v0 = (s32) ((u32) v0 + 0x4c14U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_002FC61C;
L_002FC558:;
    v0 = (s64) ((u64) a0 << 32);
L_002FC55C:;
    a1 = (s32) ((u32) a1 + 0x40U);
    v0 = v0 >> 32;
    a0 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (gp + -21748)) = (u32) a0; if (c_) goto L_002FC520; }
    goto L_002FC5C8;
L_002FC578:;
    v1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (gp + -21748)) = (u32) 0;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0x4c50U);
L_002FC588:;
    v0 = (*(volatile s32 *) (u32) v1);
    if (s0 != v0) { v0 = (s64) ((u64) a0 << 32); goto L_002FC5B4; }
    v1 = (s64) ((u64) a0 << 32);
    v0 = (s32) 0x3b0000U;
    v1 = v1 >> 32;
    v0 = (s32) ((u32) v0 + 0x4c54U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_002FC61C;
L_002FC5B4:;
    v1 = (s32) ((u32) v1 + 0x40U);
    v0 = v0 >> 32;
    a0 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (gp + -21748)) = (u32) a0; if (c_) goto L_002FC588; }
L_002FC5C8:;
    v1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (gp + -21748)) = (u32) 0;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0x4d90U);
L_002FC5D8:;
    v0 = (*(volatile s32 *) (u32) v1);
    if (s0 != v0) { v0 = (s64) ((u64) a0 << 32); goto L_002FC604; }
    v1 = (s64) ((u64) a0 << 32);
    v0 = (s32) 0x3b0000U;
    v1 = v1 >> 32;
    v0 = (s32) ((u32) v0 + 0x4d94U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_002FC61C;
L_002FC604:;
    v1 = (s32) ((u32) v1 + 0x40U);
    v0 = v0 >> 32;
    a0 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = a0 <= 0; (*(volatile u32 *) (u32) (gp + -21748)) = (u32) a0; if (c_) goto L_002FC5D8; }
    v0 = 90;
L_002FC61C:;
    return v0;
}
