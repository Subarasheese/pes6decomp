/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_001BCD60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;

    v1 = a0 & 0xf0;
    v0 = 0;
    { s32 c_ = v1 == 0; a2 = 0; if (c_) goto L_001BCDB0; }
    v1 = a0 & 0x80;
    if (v1 == 0) { v1 = a0 & 0x20; goto L_001BCD84; }
    a2 = a2 | 0x1;
    v1 = a0 & 0x20;
L_001BCD84:;
    if (v1 == 0) { v1 = a0 & 0x10; goto L_001BCD94; }
    a2 = a2 | 0x2;
    v1 = a0 & 0x10;
L_001BCD94:;
    if (v1 == 0) { v1 = a0 & 0x40; goto L_001BCDA4; }
    a2 = a2 | 0x4;
    v1 = a0 & 0x40;
L_001BCDA4:;
    if (v1 == 0) goto L_001BCDB0;
    a2 = a2 | 0x8;
L_001BCDB0:;
    v1 = (s32) 0x3d0000U;
    a2 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + 0x1720U);
    a4 = 0;
    v1 = (s32) ((u32) v1 + (u32) a2);
    a2 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) 0xf00000U;
    v1 = v1 | 0xff09;
    v1 = a0 & v1;
    { s32 c_ = v1 == 0; a2 = v0 | a2; if (c_) goto L_001BCE10; }
    v1 = (s32) 0x3d0000U;
    a3 = 0;
    v1 = (s32) ((u32) v1 + 0x1760U);
L_001BCDE8:;
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = a0 & v0;
    if (v0 == 0) goto L_001BCE00;
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    a4 = a4 | v0;
L_001BCE00:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (u64) a3 < (u64) (s64) 14;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x8U); if (c_) goto L_001BCDE8; }
L_001BCE10:;
    v0 = a2 | a4;
    if (v0 == 0) goto L_001BCEC4;
    if (a1 == 0) goto L_001BCEC4;
    a0 = (s32) 0x3a0000U;
    a3 = 0;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffff84a0U);
L_001BCE34:;
    v1 = (*(volatile s32 *) (u32) a0);
    v1 = v0 & v1;
    v1 = (u64) 0 < (u64) v1;
    v1 = v1 ^ 0x1;
    if (v1 != 0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_001BCE64; }
    v1 = (s32) 0x3a0000U;
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0xffff84a0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a3 = (*(volatile s32 *) (u32) v1); goto L_001BCE70;
L_001BCE64:;
    v1 = a1 < 13;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_001BCE34; }
L_001BCE70:;
    a0 = (s32) 0x3d0000U;
    a1 = 0;
    a2 = 0;
    a0 = (s32) ((u32) a0 + 0x1830U);
L_001BCE80:;
    v1 = (*(volatile s32 *) (u32) a0);
    v1 = v0 & v1;
    v1 = (u64) 0 < (u64) v1;
    v1 = v1 ^ 0x1;
    if (v1 != 0) { a2 = (s32) ((u32) a2 + 0x1U); goto L_001BCEB0; }
    v0 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + 0x1830U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0); goto L_001BCEC0;
L_001BCEB0:;
    v1 = a2 < 10;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_001BCE80; }
L_001BCEC0:;
    v0 = a3 | a1;
L_001BCEC4:;
    return;
}
