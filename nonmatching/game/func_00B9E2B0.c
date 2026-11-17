/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00B9E3E0(s32, s32, s32, s32, f32, f32);
void func_00B9E5D0(s32, s32, s32, s32, f32, f32);
void func_00BD3BE0(s32, s32);

void func_00B9E2B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = (s32) 0xcb0000U;
    a1 = 3;
    s1 = a0;
    v1 = (*(volatile s32 *) (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 13056));
    v1 = (*(volatile u8 *) (u32) (v1 + 18));
    a4 = (s32) ((u32) v0 + 0x8U);
    a2 = v1 ^ 0x1;
    v0 = (s32) ((u32) v1 << 6);
    v1 = (s32) ((u32) v0 - (u32) v1);
    a3 = a2 & 0xff;
    a2 = (s32) ((u32) a3 << 6);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    a2 = (s32) ((u32) a2 - (u32) a3);
    v1 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a2);
    v0 = (s32) ((u32) a4 + (u32) v0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (*(volatile s16 *) (u32) v0);
    v1 = (s32) ((u32) a4 + (u32) v1);
    v1 = (*(volatile s16 *) (u32) v1);
    s0 = (s32) ((u32) v0 - (u32) v1); func_00BD3BE0(a0, a1);
    a0 = (*(volatile s32 *) (u32) s1);
    v0 = 1320;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    { s32 c_ = v1 == v0; a1 = 0; if (c_) goto L_00B9E370; }
    v0 = 1303;
    if (v1 == v0) goto L_00B9E370;
    v0 = 1161;
    if (v1 == v0) goto L_00B9E370;
    if (v1 == 0) goto L_00B9E370;
    v0 = 447;
    if (v1 == v0) goto L_00B9E370;
    goto L_00B9E374;
L_00B9E370:;
    a1 = 1;
L_00B9E374:;
    if (a1 != 0) goto L_00B9E3AC;
    if (s0 < 0) goto L_00B9E3BC;
    v1 = (*(volatile u8 *) (u32) (a0 + 18));
    v0 = (*(volatile u8 *) (u32) (a0 + 19));
    v1 = (s32) ((u32) v1 + (u32) v0);
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_00B9E3A4; }
    if (v0 == 0) goto L_00B9E3A4;
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00B9E3A4:;
    if (v0 == 0) goto L_00B9E3BC;
L_00B9E3AC:;
    a0 = s1; func_00B9E3E0(a0, a1, a2, a3, f12.f, f13.f);
L_00B9E3B4:;
    goto L_00B9E3CC;
L_00B9E3BC:;
    a0 = s1; func_00B9E5D0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B9E3B4;
L_00B9E3CC:;
    return;
}
