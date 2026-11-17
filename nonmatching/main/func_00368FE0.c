/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002C4430(s32, s32, s32, s32);
s32 func_00368BF0(s32, s32, s32, s32, s32, s32);
s32 func_00BC8B90(s32, s32, s32, s32);
s32 func_00C132B0(s32, s32, s32, s32);
s32 func_00C132C0(s32, s32, s32, s32);
s32 func_00C595D0(s32, s32, s32, s32);
s32 func_00C597F0(s32, s32, s32, s32);
s32 func_00C59D90(s32, s32, s32, s32);

s32 func_00368FE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;

    v0 = (s32) 0xcc0000U;
    v0 = (s32) ((u32) v0 + 0xffffd3b7U);
    s7 = a5;
    s6 = a4;
    s5 = a0;
    s4 = a1;
    s3 = a2;
    s2 = a3;
    a0 = s2 & 0xff;
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    s0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) v0);
    { s32 c_ = v0 == 0; s1 = a6; if (c_) goto L_00369060; }
    a0 = s2; v0 = func_00BC8B90(a0, a1, a2, a3);
    if (v0 == 0) goto L_0036906C;
L_00369060:;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x1;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_0036906C:;
    a1 = (s32) 0x370000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0xd0U); v0 = func_00C595D0(a0, a1, a2, a3);
    v1 = -1;
    if (v0 == v1) goto L_00369094;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x2;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_00369094:;
    v0 = (s32) 0xcc0000U;
    v0 = (s32) ((u32) v0 + 0xffffd3b1U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) goto L_003690B8;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x4;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_003690B8:;
    a1 = (s32) 0x370000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0xd0U); v0 = func_00C595D0(a0, a1, a2, a3);
    v1 = -1;
    if (v0 == v1) { a0 = s2; goto L_003690FC; }
    a0 = v0; v0 = func_00C132C0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 10;
    if (v1 != v0) goto L_003690F8;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x8;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_003690F8:;
    a0 = s2;
L_003690FC:;
    v0 = func_00C59D90(a0, a1, a2, a3);
    v1 = -1;
    if (v0 == v1) { a1 = s4; goto L_00369130; }
    a0 = v0; v0 = func_002C4430(a0, a1, a2, a3);
    if (v0 == 0) goto L_0036912C;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x10;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_0036912C:;
    a1 = s4;
L_00369130:;
    a2 = s3;
    a4 = s6;
    a5 = s7;
    a0 = s5;
    a3 = s2; v0 = func_00368BF0(a0, a1, a2, a3, a4, a5);
    a1 = (s32) 0x370000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0xffff8e10U); v0 = func_00C597F0(a0, a1, a2, a3);
    a0 = s2;
    s2 = v0; v0 = func_00C59D90(a0, a1, a2, a3);
    v1 = -1;
    if (s2 == v1) goto L_003691A8;
    if (v0 == v1) goto L_003691A8;
    a0 = v0; v0 = func_00C132B0(a0, a1, a2, a3);
    a0 = s2;
    s2 = v0 & 0xff; v0 = func_00C132B0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = s2 & 0xff;
    if (v1 != v0) goto L_003691A8;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x20;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_003691A8:;
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffd3d3U);
    v0 = (s32) ((u32) v0 + 0xffffd3d2U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (*(volatile u8 *) (u32) v1);
    a0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) a0 + (u32) a1);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) s5); goto L_003691EC; }
    if (a0 != a1) goto L_003691E8;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x1000;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_003691E8:;
    v1 = (*(volatile s32 *) (u32) s5);
L_003691EC:;
    v0 = v1 & 0x1;
    if (v0 == 0) { ; goto L_0036921C; }
    v0 = (*(volatile s16 *) (u32) (s1 + 20));
    if (v0 != a0) goto L_00369218;
    v0 = (*(volatile s16 *) (u32) (s1 + 22));
    if (v0 != a1) goto L_00369218;
    v0 = v1 | 0x200;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_00369218:;
L_0036921C:;
    v0 = 1;
    return v0;
}
