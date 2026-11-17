/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002A9F80(void);
void func_002AD160(s32, s32, s32);
s32 func_002AD2D0(s32, s32);
void func_002AD5A0(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_002AD880(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00BBB8C0(s32);
void func_00BBC510(s32, s32, s32, s32, f32, f32);
s32 func_00BBC8A0(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00BBCAD0(s32);
s32 func_00BF6270(void);

void func_00BA9600(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;
    s64 frame[36];
    s32 sp = (s32) (u32) frame;

    v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00BA9644; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00BA9644:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = 1300;
    s2 = (s32) ((u32) v0 + (u32) v1); v0 = func_00BBB8C0(a0);
    f1.i = (s32) v0;
    a0 = 4;
    f1.f = (f32) f1.i;
    v0 = (s32) 0x442f0000U;
    f0.i = (s32) v0;
    f0.f = f0.f + f1.f;
    f0.i = (s32) f0.f;
    s4 = f0.i;
    s3 = 0; v0 = func_00BBB8C0(a0);
    v1 = 2;
    if (v0 == v1) { a0 = (*(volatile u8 *) (u32) s2); goto L_00BA96E0; }
    v1 = 1;
    if (v0 == v1) { a0 = (*(volatile u8 *) (u32) s2); goto L_00BA96CC; }
    if (v0 == 0) { a0 = (*(volatile u8 *) (u32) s2); goto L_00BA96B8; }
    a0 = (*(volatile u8 *) (u32) s2); goto L_00BA96F4;
L_00BA96B8:;
    a1 = 0x8000;
    a2 = (s32) ((u32) sp + 0x70U); func_002AD5A0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    a0 = (*(volatile u8 *) (u32) s2); goto L_00BA9700;
L_00BA96CC:;
    a1 = 16384;
    a2 = (s32) ((u32) sp + 0x70U); func_002AD5A0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00BA96FC;
L_00BA96E0:;
    a1 = 0;
    a2 = (s32) ((u32) sp + 0x70U); func_002AD5A0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00BA96FC;
L_00BA96F4:;
    a1 = (s32) ((u32) sp + 0x70U); func_002AD160(a0, a1, a2);
L_00BA96FC:;
    a0 = (*(volatile u8 *) (u32) s2);
L_00BA9700:;
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = 0; v0 = func_00BBC8A0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    a0 = (*(volatile u8 *) (u32) s2);
    s5 = v0;
    a1 = s5; v0 = func_002AD2D0(a0, a1);
    a0 = (*(volatile u8 *) (u32) s2);
    s1 = v0;
    a1 = s5; v0 = func_002AD880(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    s0 = v0 & 0xffff;
    a0 = s5; v0 = func_00BBCAD0(a0);
    if (v0 != 0) goto L_00BA9768;
    v0 = s1 < 4096;
    if (v0 != 0) goto L_00BA9794;
    at = s1 < 8192;
    if (at == 0) goto L_00BA9768;
    v0 = s0 & 0xffff;
    v0 = v0 < 8192;
    if (v0 != 0) goto L_00BA9794;
L_00BA9768:;
    f0.i = (s32) s4;
    a0 = (*(volatile u8 *) (u32) s2);
    f13.i = (s32) 0;
    a2 = s5;
    f12.f = (f32) f0.i;
    a1 = 29; func_00BBC510(a0, a1, a2, a3, f12.f, f13.f);
    if (s3 != 0) goto L_00BA97A0;
L_00BA978C:;
    goto L_00BA97B0;
L_00BA9794:;
    s4 = 0;
    s3 = 1; goto L_00BA9768;
L_00BA97A0:;
    func_002A9F80();
    goto L_00BA978C;
L_00BA97B0:;
    return;
}
