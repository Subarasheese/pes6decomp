/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00204D90(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_002727B0(void);
s32 func_0029A0A0(void);

void func_001FD0A0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7953));
    if (v1 != 0) { ; goto L_001FD154; }
    v0 = func_0029A0A0();
    v1 = 6;
    if (v0 == v1) goto L_001FD0DC;
    if (v0 == 0) goto L_001FD0DC;
    goto L_001FD150;
L_001FD0DC:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7972));
    if (v1 == 0) goto L_001FD100;
    v0 = 7;
    if (v1 == v0) goto L_001FD100;
    goto L_001FD110;
L_001FD100:;
    func_00204D90(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_001FD150;
L_001FD110:;
    v0 = func_002727B0();
    a0 = v0 & 0xff;
    v1 = 8;
    if (a0 == v1) goto L_001FD148;
    v1 = 3;
    if (a0 == v1) goto L_001FD148;
    v1 = 2;
    if (a0 == v1) goto L_001FD148;
    goto L_001FD150;
L_001FD148:;
    func_00204D90(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
L_001FD150:;
L_001FD154:;
    return;
}
