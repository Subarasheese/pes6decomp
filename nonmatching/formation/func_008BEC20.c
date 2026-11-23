/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00292D80(s32);

void func_008BEC20(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s3 = a1;
    s1 = a0 & 0xff;
    v0 = (s32) ((u32) s1 + 0xfffffffcU);
    at = (u64) v0 < (u64) (s64) 11;
    { s32 c_ = at == 0; s0 = (s32) ((u32) a2 + 0x1U); if (c_) goto L_008BECB8; }
    v1 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffcd80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8bec70U) goto L_008BEC70; if (t_ == 0x8bec94U) goto L_008BEC94; if (t_ == 0x8becb8U) goto L_008BECB8; }
L_008BEC70:;
    v0 = s3 & 0xff;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + -1));
    v0 = v0 < 52;
    if (v0 != 0) { v0 = s3 & 0xff; goto L_008BECBC; }
    v0 = 0; goto L_008BF02C;
L_008BEC94:;
    v0 = s3 & 0xff;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + -1));
    at = v0 < 53;
    if (at == 0) goto L_008BECB8;
    v0 = 0; goto L_008BF02C;
L_008BECB8:;
    v0 = s3 & 0xff;
L_008BECBC:;
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile u8 *) (u32) (v0 + 20));
    s2 = (s32) ((u32) v0 + 0x14U); v0 = func_00292D80(a0);
    v0 = v0 & 0xff;
    if (s1 != v0) { at = (u64) s1 < (u64) (s64) 15; goto L_008BECE0; }
    v0 = 1; goto L_008BF02C;
L_008BECE0:;
    if (at == 0) { s2 = 0; goto L_008BEFF4; }
    v1 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (s32) ((u32) v1 + 0xffffcd40U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8bed04U) goto L_008BED04; if (t_ == 0x8bed80U) goto L_008BED80; if (t_ == 0x8bee00U) goto L_008BEE00; if (t_ == 0x8bee68U) goto L_008BEE68; if (t_ == 0x8beed0U) goto L_008BEED0; if (t_ == 0x8bef08U) goto L_008BEF08; if (t_ == 0x8beff0U) goto L_008BEFF0; }
L_008BED04:;
    s3 = s3 & 0xff;
    s4 = 0;
    v0 = (s32) ((u32) s0 + (u32) s4);
L_008BED10:;
    a0 = (*(volatile u8 *) (u32) (v0 + 20));
    s2 = (s32) ((u32) v0 + 0x14U); v0 = func_00292D80(a0);
    v0 = v0 & 0xff;
    if (s1 == v0) goto L_008BED60;
    if (s4 == s3) { s4 = (s32) ((u32) s4 + 0x1U); goto L_008BED6C; }
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_00292D80(a0);
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 == v0) goto L_008BED60;
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_00292D80(a0);
    v1 = v0 & 0xff;
    v0 = 10;
    if (v1 != v0) goto L_008BED68;
L_008BED60:;
    v0 = 0; goto L_008BF02C;
L_008BED68:;
    s4 = (s32) ((u32) s4 + 0x1U);
L_008BED6C:;
    v0 = s4 < 11;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + (u32) s4); goto L_008BED10; }
    v0 = 1; goto L_008BF02C;
L_008BED80:;
    s3 = s3 & 0xff;
    s4 = 0;
    v0 = (s32) ((u32) s0 + (u32) s4);
L_008BED8C:;
    a0 = (*(volatile u8 *) (u32) (v0 + 20));
    s2 = (s32) ((u32) v0 + 0x14U); v0 = func_00292D80(a0);
    v0 = v0 & 0xff;
    if (s1 == v0) goto L_008BEDE0;
    if (s4 == s3) { s4 = (s32) ((u32) s4 + 0x1U); goto L_008BEDEC; }
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_00292D80(a0);
    v1 = v0 & 0xff;
    v0 = 5;
    if (v1 == v0) goto L_008BEDE0;
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_00292D80(a0);
    v1 = v0 & 0xff;
    v0 = 11;
    if (v1 != v0) goto L_008BEDE8;
L_008BEDE0:;
    v0 = 0; goto L_008BF02C;
L_008BEDE8:;
    s4 = (s32) ((u32) s4 + 0x1U);
L_008BEDEC:;
    v0 = s4 < 11;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + (u32) s4); goto L_008BED8C; }
    v0 = 1; goto L_008BF02C;
L_008BEE00:;
    s2 = s3 & 0xff;
    s3 = 0;
    v0 = (s32) ((u32) s0 + (u32) s3);
L_008BEE0C:;
    a0 = (*(volatile u8 *) (u32) (v0 + 20));
    s4 = (s32) ((u32) v0 + 0x14U); v0 = func_00292D80(a0);
    v0 = v0 & 0xff;
    if (s1 == v0) goto L_008BEE48;
    if (s3 == s2) { s3 = (s32) ((u32) s3 + 0x1U); goto L_008BEE54; }
    a0 = (*(volatile u8 *) (u32) s4); v0 = func_00292D80(a0);
    v1 = v0 & 0xff;
    v0 = 7;
    if (v1 != v0) goto L_008BEE50;
L_008BEE48:;
    v0 = 0; goto L_008BF02C;
L_008BEE50:;
    s3 = (s32) ((u32) s3 + 0x1U);
L_008BEE54:;
    v0 = s3 < 11;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + (u32) s3); goto L_008BEE0C; }
    v0 = 1; goto L_008BF02C;
L_008BEE68:;
    s2 = s3 & 0xff;
    s3 = 0;
    v0 = (s32) ((u32) s0 + (u32) s3);
L_008BEE74:;
    a0 = (*(volatile u8 *) (u32) (v0 + 20));
    s4 = (s32) ((u32) v0 + 0x14U); v0 = func_00292D80(a0);
    v0 = v0 & 0xff;
    if (s1 == v0) goto L_008BEEB0;
    if (s3 == s2) { s3 = (s32) ((u32) s3 + 0x1U); goto L_008BEEBC; }
    a0 = (*(volatile u8 *) (u32) s4); v0 = func_00292D80(a0);
    v1 = v0 & 0xff;
    v0 = 8;
    if (v1 != v0) goto L_008BEEB8;
L_008BEEB0:;
    v0 = 0; goto L_008BF02C;
L_008BEEB8:;
    s3 = (s32) ((u32) s3 + 0x1U);
L_008BEEBC:;
    v0 = s3 < 11;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + (u32) s3); goto L_008BEE74; }
    v0 = 1; goto L_008BF02C;
L_008BEED0:;
    s2 = 0;
    v0 = (s32) ((u32) s0 + (u32) s2);
L_008BEED8:;
    a0 = (*(volatile u8 *) (u32) (v0 + 20)); v0 = func_00292D80(a0);
    v0 = v0 & 0xff;
    if (s1 != v0) { s2 = (s32) ((u32) s2 + 0x1U); goto L_008BEEF4; }
    v0 = 0; goto L_008BF02C;
L_008BEEF4:;
    v0 = s2 < 11;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + (u32) s2); goto L_008BEED8; }
    v0 = 1; goto L_008BF02C;
L_008BEF08:;
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_00292D80(a0);
    v1 = v0 & 0xff;
    v0 = 3;
    if (v1 != v0) { a0 = (*(volatile u8 *) (u32) s2); goto L_008BEF28; }
    v0 = 1; goto L_008BF02C;
L_008BEF28:;
    v0 = func_00292D80(a0);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 != v0) { v0 = s3 & 0xff; goto L_008BEF48; }
    v0 = 1; goto L_008BF02C;
L_008BEF48:;
    s4 = 0;
    v0 = (s32) ((u32) s0 + (u32) v0);
    s3 = 0;
    s2 = (s32) ((u32) v0 + 0x14U);
    v0 = (s32) ((u32) s0 + (u32) s3);
L_008BEF5C:;
    a0 = (*(volatile u8 *) (u32) (v0 + 20));
    s1 = (s32) ((u32) v0 + 0x14U); v0 = func_00292D80(a0);
    v1 = v0 & 0xff;
    v0 = 3;
    if (v1 != v0) { a0 = (*(volatile u8 *) (u32) s1); goto L_008BEF80; }
    v0 = 0; goto L_008BF02C;
L_008BEF80:;
    v0 = func_00292D80(a0);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 != v0) { a0 = (*(volatile u8 *) (u32) s1); goto L_008BEFA0; }
    v0 = 0; goto L_008BF02C;
L_008BEFA0:;
    v0 = func_00292D80(a0);
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 != v0) goto L_008BEFD8;
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_00292D80(a0);
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 == v0) goto L_008BEFD8;
    s4 = (s32) ((u32) s4 + 0x1U);
L_008BEFD8:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 11;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + (u32) s3); goto L_008BEF5C; }
    v0 = s4 < 5; goto L_008BF02C;
L_008BEFF0:;
    s2 = 0;
L_008BEFF4:;
    s3 = 0;
    v0 = (s32) ((u32) s0 + (u32) s3);
L_008BEFFC:;
    a0 = (*(volatile u8 *) (u32) (v0 + 20)); v0 = func_00292D80(a0);
    v0 = v0 & 0xff;
    if (s1 != v0) goto L_008BF018;
    s2 = (s32) ((u32) s2 + 0x1U);
L_008BF018:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 11;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + (u32) s3); goto L_008BEFFC; }
    v0 = s2 < 5;
L_008BF02C:;
    return;
}
