/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Random_Below(s64);
s64 func_00255E70(s64);

s64 func_00302E20(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0;
    s64 hi = 0, lo = 0;

    v0 = (s32) 0xcb0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 24360));
    if (a0 != 0) { v0 = 255; goto L_00302E40; }
    v0 = 255; goto L_00302FF8;
L_00302E40:;
    { s32 c_ = a0 == v0; v1 = 0; if (c_) goto L_00302E5C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
    v0 = (s32) ((u32) a0 << 3); goto L_00302E64;
L_00302E5C:;
    a0 = 1;
    v0 = (s32) ((u32) a0 << 3);
L_00302E64:;
    a7 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) a0);
    t4 = (s32) 0xcb0000U;
    a7 = (s32) ((u32) a7 + 0xffffe5b0U);
    v0 = (s32) ((u32) v0 << 6);
    t5 = 0;
    t4 = (s32) ((u32) t4 + 0x5f20U);
    v0 = (s32) ((u32) a7 + (u32) v0);
    a6 = 2;
    a4 = 255;
    a1 = 1;
    a3 = 23;
L_00302E94:;
    a2 = (*(volatile u8 *) (u32) (t4 + 8));
    if (a2 == 0) goto L_00302F20;
    a0 = (*(volatile s32 *) (u32) (t4 + 4));
    if (a0 != a6) { a5 = (*(volatile u8 *) (u32) (v0 + 19)); goto L_00302EF4; }
    a0 = (s32) 0xcb0000U;
    a1 = (s32) ((u32) t5 << 6);
    a0 = (s32) ((u32) a0 + 0x5f3cU);
    a1 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) a1);
    a0 = (*(volatile s32 *) (u32) (a0 + 7620));
    a1 = (s32) ((u32) a1 - (u32) a0);
    if (a1 <= 0) { a1 = (s32) ((u32) 0 - (u32) a1); goto L_00302ED4; }
L_00302ED4:;
    a0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (a0 + 7140));
    a0 = (s32) ((u32) a0 << 1);
    at = a1 < a0;
    if (at == 0) goto L_00302F30;
    v1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00302F30;
L_00302EF4:;
    if (a2 == a4) { a2 = a1; goto L_00302F04; }
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) a3); hi = (s32) ((s32) a2 % (s32) a3); lo = q_; }
    a2 = hi;
L_00302F04:;
    a0 = (s32) ((u32) a2 << 3);
    a0 = (s32) ((u32) a0 + (u32) a2);
    a0 = (s32) ((u32) a0 << 6);
    a0 = (s32) ((u32) a7 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 19));
    if (a5 != a0) goto L_00302F30;
L_00302F20:;
    t5 = (s32) ((u32) t5 + 0x1U);
    a0 = t5 < 3;
    { s32 c_ = a0 != 0; t4 = (s32) ((u32) t4 + 0x40U); if (c_) goto L_00302E94; }
L_00302F30:;
    if (v1 == 0) goto L_00302F5C;
    a0 = (*(volatile u8 *) (u32) (v0 + 18)); v0 = func_00255E70(a0);
    if (v0 == 0) { v0 = 2; goto L_00302F54; }
    a0 = 2; v0 = Pes6Random_Below(a0);
    v0 = v0 & 0xffff;
L_00302F54:;
    goto L_00302FFC;
L_00302F5C:;
    v1 = (s32) 0xcb0000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 24356));
    v1 = 7;
    { s32 c_ = a0 != v1; a1 = 0; if (c_) goto L_00302FDC; }
    v1 = (s32) 0xcb0000U;
    a0 = 1;
    v1 = (*(volatile u8 *) (u32) (v1 + 24388));
    if (v1 != a0) goto L_00302FDC;
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 24420));
    if (v1 != a0) goto L_00302FDC;
    v1 = (s32) 0xcb0000U;
    a0 = 4;
    v1 = (*(volatile u8 *) (u32) (v1 + 24453));
    if (v1 != a0) goto L_00302FDC;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (a0 + 24380));
    v1 = (*(volatile s32 *) (u32) (v1 + 7620));
    a0 = (s32) ((u32) a0 - (u32) v1);
    if (a0 <= 0) { a0 = (s32) ((u32) 0 - (u32) a0); goto L_00302FC4; }
L_00302FC4:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7140));
    at = a0 < v1;
    if (at == 0) goto L_00302FDC;
    a1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00302FDC:;
    if (a1 == 0) { v0 = 255; goto L_00302FF8; }
    a0 = (*(volatile u8 *) (u32) (v0 + 18)); v0 = func_00255E70(a0);
    if (v0 == 0) { v0 = 3; goto L_00302FF8; }
    v0 = 4;
L_00302FF8:;
L_00302FFC:;
    return v0;
}
