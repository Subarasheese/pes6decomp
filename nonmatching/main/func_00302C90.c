/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002D4C40(s64, s64, s64, s64, s64, s64, s64);
s64 func_00305C60(s64, s64);
s64 func_00305E60(s64, s64);

s64 func_00302C90(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 24360));
    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    { s32 c_ = v0 != 0; s1 = a0; if (c_) goto L_00302CBC; }
    v1 = 255; goto L_00302D30;
L_00302CBC:;
    v0 = (s32) 0xcb0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 24356));
    v0 = 1;
    { s32 c_ = v1 != v0; a1 = 0; if (c_) goto L_00302D24; }
    v0 = (s32) 0xcb0000U;
    v1 = 8;
    a0 = (*(volatile u8 *) (u32) (v0 + 24389));
    if (a0 == v1) goto L_00302CF8;
    v0 = 7;
    if (a0 == v0) goto L_00302CF8;
    goto L_00302D24;
L_00302CF8:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 24380));
    v0 = (*(volatile s32 *) (u32) (v0 + 7620));
    v0 = (s32) ((u32) v1 - (u32) v0);
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00302D14; }
L_00302D14:;
    at = v0 < 2;
    if (at == 0) goto L_00302D24;
    a1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00302D24:;
    if (a1 == 0) { v1 = 255; goto L_00302D30; }
    v1 = 0;
L_00302D30:;
    v0 = 255;
    { s32 c_ = v1 == v0; (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1; if (c_) goto L_00302DB4; }
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) gp + 0xffff8308U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = s1; v0 = func_00305C60(a0, a1);
    v1 = 1;
    if (v0 != v1) { v1 = (*(volatile s32 *) (u32) (s0 + 36)); goto L_00302D70; }
    v1 = 255;
    v0 = 0;
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1; goto L_00302DB8;
L_00302D70:;
    v0 = (s32) ((u32) gp + 0xffff8308U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = (s32) 0x300000U;
    v0 = (s32) ((u32) gp + 0xffff8308U);
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0x2c00U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) v0; v0 = func_00305E60(a0, a1);
    v0 = 1; goto L_00302DB8;
L_00302DB4:;
    v0 = 0;
L_00302DB8:;
    return v0;
}
