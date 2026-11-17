/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00154070(s32);
void func_00C88DD0(s32, s32, s32, s32);
void func_00C88EC0(s32, s32, s32);
void func_00C89CB0(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00C8B100(s32);
s32 func_00C8B150(void);
void memset(s32, s32, s32);

void func_00C93ED0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    a0 = 28;
    v0 = func_00154070(a0);
    s0 = v0;
    if (s0 == 0) goto L_00C94038;
    v0 = func_00C8B150();
    s2 = v0;
    a0 = 0; v0 = func_00C8B100(a0);
    s1 = v0;
    s3 = 63;
    v0 = (s32) 0x41800000U;
L_00C93F1C:;
    a1 = (s32) 0xcb0000U;
    f12.i = (s32) 0;
    a0 = s3;
    f14.i = (s32) v0;
    a1 = (s32) ((u32) a1 + 0xffff8ad0U);
    f13.i = f12.i;
    a2 = s2;
    f15.i = f14.i;
    a3 = s1; func_00C89CB0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 71;
    if (v0 != 0) { v0 = (s32) 0x41800000U; goto L_00C93F1C; }
    v1 = 63;
    v0 = 8;
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v0;
    v1 = 0 & 0x1;
    a0 = (*(volatile u8 *) (u32) (s0 + 8));
    v0 = -2;
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (s32) ((u32) v0 + 0x1fU);
    v0 = (s32) ((u32) v0 >> 5);
    a0 = (s32) ((u32) v0 << 2);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) a0; v0 = func_00154070(a0);
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v0; if (c_) goto L_00C93FAC; }
    a2 = (*(volatile s32 *) (u32) (s0 + 16));
    a0 = v0;
    a1 = 0; memset(a0, a1, a2);
L_00C93FAC:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (s32) ((u32) v0 + 0x1fU);
    v0 = (s32) ((u32) v0 >> 5);
    a0 = (s32) ((u32) v0 << 2);
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) a0; v0 = func_00154070(a0);
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) (s0 + 20)) = (u32) v0; if (c_) goto L_00C93FDC; }
    a2 = (*(volatile s32 *) (u32) (s0 + 24));
    a0 = v0;
    a1 = 0; memset(a0, a1, a2);
L_00C93FDC:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    { s32 c_ = v0 <= 0; a3 = 0; if (c_) goto L_00C94038; }
    a1 = 1;
    a2 = (s32) ((u32) s0 + 0xcU);
L_00C93FF0:;
    if (a2 == 0) goto L_00C94020;
    v1 = a3 & 0x1f;
    v0 = (s32) ((u32) a3 >> 5);
    a0 = (s32) ((u32) a1 << (v1 & 31));
    v1 = (s32) ((u32) v0 << 2);
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = v0 | a0;
    (*(volatile u32 *) (u32) v1) = (u32) v0;
L_00C94020:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < v0;
    if (v0 != 0) goto L_00C93FF0;
L_00C94038:;
    a1 = (s32) 0xc90000U;
    a2 = (s32) 0xc90000U;
    a0 = 10;
    a1 = (s32) ((u32) a1 + 0x36b0U);
    a2 = (s32) ((u32) a2 + 0x3c70U);
    (*(volatile u32 *) (u32) (gp + -19132)) = (u32) s0; func_00C88EC0(a0, a1, a2);
    a1 = (s32) 0xc90000U;
    a2 = (s32) 0xc90000U;
    a0 = 10;
    a1 = (s32) ((u32) a1 + 0x3700U);
    a2 = (s32) ((u32) a2 + 0x3d40U); func_00C88DD0(a0, a1, a2, a3);
    return;
}
