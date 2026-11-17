/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_009B34C0(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00B84790(s32, s32, s32, s32, s32, f32);

void func_00B84160(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    f32 acc = 0;

    v1 = a1;
    s5 = a0;
    s4 = a3;
    s2 = a5;
    v0 = (*(volatile s32 *) (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    f20.f = (*(volatile f32 *) (u32) (v0 + 40));
    { s32 c_ = s2 <= 0; s3 = a4; if (c_) goto L_00B842B4; }
L_00B841A8:;
    f0.i = (s32) a2;
    a1 = (*(volatile u16 *) (u32) (v0 + 48));
    a3 = (*(volatile u8 *) (u32) (v0 + 45));
    a0 = s5;
    f12.f = (f32) f0.i;
    a4 = 1;
    a2 = v1; func_00B84790(a0, a1, a2, a3, a4, f12.f);
    v0 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) s4 << 2);
    v0 = (s32) ((u32) v0 + 0xffffccb0U);
    s1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0xcc0000U;
    v0 = (s32) ((u32) v0 + 0xffffcc70U);
    s0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x590000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 7788));
    f15.f = (*(volatile f32 *) (u32) s1);
    v0 = (s32) 0x590000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 7796));
    f14.f = (*(volatile f32 *) (u32) s0); v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    a1 = (*(volatile s32 *) (u32) s5);
    v1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (a1 + 40)) = (u16) v0;
    f1.f = (*(volatile f32 *) (u32) (v1 + 7796));
    f0.f = (*(volatile f32 *) (u32) s1);
    f3.f = (*(volatile f32 *) (u32) (a0 + 7788));
    f2.f = (*(volatile f32 *) (u32) s0);
    f0.f = f1.f - f0.f;
    f2.f = f3.f - f2.f;
    acc = f0.f * f0.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    a0 = f0.i;
    if (s2 == 0) { v1 = (*(volatile s32 *) (u32) s5); goto L_00B842BC; }
    if (s3 < 0) { v1 = (s32) ((u32) a0 - (u32) s3); goto L_00B842C4; }
    v1 = a0 < s3;
    if (v1 != 0) { v1 = (*(volatile s32 *) (u32) s5); goto L_00B84300; }
    a0 = (s32) ((u32) a0 - (u32) s3);
    v1 = (s32) 0x590000U;
    f1.i = (s32) a0;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7148));
    f1.f = (f32) f1.i;
    a0 = (*(volatile s32 *) (u32) s5);
    f1.f = f1.f * f0.f;
    f0.i = (s32) s2;
    f0.f = (f32) f0.i;
    f0.f = f1.f / f0.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) v1;
L_00B84294:;
    a0 = (*(volatile s32 *) (u32) s5);
    f0.f = (*(volatile f32 *) (u32) (a0 + 28));
    f0.f = (f32) f0.i;
    f0.f = f0.f * f20.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u32 *) (u32) (a0 + 32)) = (u32) v1; goto L_00B84308;
L_00B842B4:;
    s2 = 1; goto L_00B841A8;
L_00B842BC:;
    (*(volatile u32 *) (u32) (v1 + 28)) = (u32) 0; goto L_00B84294;
L_00B842C4:;
    f1.i = (s32) v1;
    a0 = (s32) ((u32) s4 + 0x1U);
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7148));
    f1.f = (f32) f1.i;
    v1 = (*(volatile s32 *) (u32) s5);
    f1.f = f0.f * f1.f;
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    f0.f = f1.f / f0.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    (*(volatile u32 *) (u32) (v1 + 28)) = (u32) a0; goto L_00B84294;
L_00B84300:;
    (*(volatile u32 *) (u32) (v1 + 28)) = (u32) 0; goto L_00B84294;
L_00B84308:;
    return;
}
