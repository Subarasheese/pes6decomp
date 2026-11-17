/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C10870(s32, s32, s32, s32);
s32 func_00C108E0(s32, s32, s32, s32);
s32 func_00C127F0(s32, s32, s32, s32);
s32 func_00C12C40(s32, s32, s32, s32);
s32 func_00C13280(s32, s32, s32, s32);
s32 func_00C132B0(s32, s32, s32, s32);
s32 func_00C132C0(s32, s32, s32, s32);
s32 func_00C135B0(s32, s32, s32, s32);
s32 func_00C137F0(s32, s32, s32, s32);
s32 func_00C17E10(s32, s32, s32, s32);

s32 func_002BC9F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) a0 + 0xfffffffaU);
    at = (u64) v1 < (u64) (s64) 2;
    { s32 c_ = at != 0; s0 = a1; if (c_) goto L_002BCA20; }
L_002BCA18:;
    goto L_002BCBD8;
L_002BCA20:;
    v0 = (s32) 0xcb0000U;
    s1 = (*(volatile s32 *) (u32) (v0 + 13416)); v0 = func_00C137F0(a0, a1, a2, a3);
    a1 = (s32) 0xcb0000U;
    a0 = v0;
    a1 = (s32) ((u32) a1 + 0x3450U);
    a2 = s1; v0 = func_00C135B0(a0, a1, a2, a3);
    s2 = v0;
    v1 = -1;
    if (s2 == v1) goto L_002BCA80;
    a0 = s2; v0 = func_00C132C0(a0, a1, a2, a3);
    a0 = v0 & 0xff;
    v1 = 25;
    if (a0 != v1) goto L_002BCA80;
    a1 = (s32) 0xcb0000U;
    a0 = s2;
    a2 = s1;
    a1 = (s32) ((u32) a1 + 0x3450U); v0 = func_00C135B0(a0, a1, a2, a3);
    s2 = v0;
L_002BCA80:;
    v1 = -1;
    if (s2 == v1) goto L_002BCBD4;
    a0 = s2; v0 = func_00C12C40(a0, a1, a2, a3);
    if (v0 == 0) goto L_002BCBD4;
    s0 = (*(volatile u8 *) (u32) s0);
    a0 = s2; v0 = func_00C132B0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    if (s0 != v1) goto L_002BCBD4;
    v1 = (s32) ((u32) sp + 0x50U);
    { s32 c_ = v1 == 0; v0 = 16; if (c_) goto L_002BCADC; }
L_002BCAC0:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002BCAC0;
L_002BCADC:;
    a0 = s2; v0 = func_00C132C0(a0, a1, a2, a3);
    s0 = v0 & 0xff;
    a0 = s2;
    s1 = 0; v0 = func_00C13280(a0, a1, a2, a3);
    a2 = (*(volatile s16 *) (u32) v0);
    s0 = s0 & 0xff;
    a1 = (*(volatile s16 *) (u32) (v0 + 2));
    v1 = 10;
    a0 = (*(volatile s16 *) (u32) (v0 + 4));
    v0 = (*(volatile s16 *) (u32) (v0 + 6));
    (*(volatile u16 *) (u32) (sp + 80)) = (u16) a2;
    (*(volatile u16 *) (u32) (sp + 82)) = (u16) a1;
    (*(volatile u16 *) (u32) (sp + 84)) = (u16) a0;
    { s32 c_ = s0 != v1; (*(volatile u16 *) (u32) (sp + 86)) = (u16) v0; if (c_) goto L_002BCB90; }
L_002BCB20:;
    a0 = (s32) ((u32) sp + 0x55U);
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = v1 & 0x4;
    if (v0 == 0) goto L_002BCBA4;
L_002BCB34:;
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x50U); v0 = func_00C127F0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (sp + 81));
    v0 = (s32) v1 >> 5;
    a1 = v1 & 0x1f;
    s2 = v0 & 0x1;
    a0 = s2; v0 = func_00C17E10(a0, a1, a2, a3);
    s3 = v0 & 0xff;
    at = s3 < 18;
    if (at == 0) goto L_002BCBD4;
    v1 = 10;
    if (s0 != v1) goto L_002BCBB4;
    if (s1 == 0) goto L_002BCBD4;
    a0 = s2;
    a1 = s3; v0 = func_00C10870(a0, a1, a2, a3);
    goto L_002BCA18;
L_002BCB90:;
    v0 = (*(volatile u8 *) (u32) (sp + 85));
    (*(volatile u8 *) (u32) (sp + 80)) = (u8) v1;
    v0 = v0 & 0x8f;
    (*(volatile u8 *) (u32) (sp + 85)) = (u8) v0; goto L_002BCB20;
L_002BCBA4:;
    v0 = v1 | 0x4;
    s1 = 1;
    (*(volatile u8 *) (u32) a0) = (u8) v0; goto L_002BCB34;
L_002BCBB4:;
    a0 = s2;
    a1 = s3; v0 = func_00C10870(a0, a1, a2, a3);
    a0 = s2;
    a1 = s3; v0 = func_00C108E0(a0, a1, a2, a3);
    goto L_002BCA18;
L_002BCBD4:;
L_002BCBD8:;
    return v0;
}
