/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00255E70(s64);
s64 func_009E1C90(s64, s64, s64, s64);
s64 func_009E62D0(s64, s64, s64, s64);

s64 func_002FFEF0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    a0 = 0;
    v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 != v0) { v0 = 255; goto L_0030002C; }
    a0 = 1; v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 5;
    if (v1 == v0) goto L_002FFF40;
    v0 = 255;
    goto L_0030002C;
L_002FFF40:;
    v1 = (s32) 0xcc0000U;
    v0 = 255;
    v1 = (*(volatile u8 *) (u32) (v1 + -16896));
    if (v1 != v0) goto L_002FFF5C;
    goto L_0030002C;
L_002FFF5C:;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -16899));
    a0 = v0 & 0x1; v0 = func_00255E70(a0);
    v1 = (u64) 0 < (u64) v0;
    v0 = (s32) 0xcb0000U;
    v1 = v1 ^ 0x1;
    v0 = (*(volatile s32 *) (u32) (v0 + 13056));
    s0 = v1 & 0xff;
    a0 = (*(volatile s16 *) (u32) (v0 + 12));
    s2 = (s32) ((u32) v0 + 0x300U);
    a1 = (*(volatile s16 *) (u32) (v0 + 768));
    s1 = (s32) ((u32) v0 + 0xcU); v0 = func_009E62D0(a0, a1, a2, a3);
    if (v0 == 0) goto L_002FFFE8;
    v1 = (*(volatile s16 *) (u32) s1);
    v0 = (*(volatile s16 *) (u32) s2);
    at = v0 < v1;
    if (at == 0) { a0 = 0; goto L_002FFFC8; }
    a0 = 1; v0 = func_00255E70(a0);
    if (v0 == 0) { v0 = s0 & 0xff; goto L_002FFFE0; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_002FFFDC;
L_002FFFC8:;
    v0 = func_00255E70(a0);
    if (v0 == 0) goto L_002FFFDC;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_002FFFDC:;
    v0 = s0 & 0xff;
L_002FFFE0:;
    v0 = (s32) ((u32) v0 + 0x6U); goto L_0030002C;
L_002FFFE8:;
    v0 = (s32) 0xcc0000U;
    v1 = 1;
    v0 = (*(volatile u8 *) (u32) (v0 + -16896));
    if (v0 != v1) goto L_00300004;
    v0 = s0 & 0xff; goto L_0030002C;
L_00300004:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 24360));
    v0 = (*(volatile u8 *) (u32) (v0 + -16891));
    if (v1 != v0) { v0 = s0 & 0xff; goto L_00300028; }
    v0 = s0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0030002C;
L_00300028:;
    v0 = (s32) ((u32) v0 + 0x2U);
L_0030002C:;
    return v0;
}
