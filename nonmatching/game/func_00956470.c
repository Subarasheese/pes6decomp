/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);
s32 func_0090B990(s32, s32, s32, s32);
s32 func_0098F530(s32);
s32 func_00BBB8C0(s32);

void func_00956470(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;

    v1 = (s32) 0x590000U;
    s1 = a0;
    a1 = (*(volatile u8 *) (u32) (v1 + 7177));
    v1 = 5;
    { s32 c_ = a1 == v1; s0 = 0; if (c_) goto L_009565F0; }
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21378));
    at = v1 < 3;
    if (at == 0) goto L_009564B4;
    goto L_009565F4;
L_009564B4:;
    v0 = func_0098F530(a0);
    if (v0 != 0) goto L_009564D4;
    v1 = (*(volatile u8 *) (u32) (s1 + 16));
    v1 = v1 < 24;
    if (v1 != 0) goto L_009565F0;
L_009564D4:;
    a0 = (*(volatile s16 *) (u32) (s1 + 20));
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 19));
    v0 = (s32) ((u32) v0 + 0x1e88U);
    f0.f = (*(volatile f32 *) (u32) (s1 + 224));
    f1.i = (s32) a0;
    v1 = (s32) ((u32) v1 << 2);
    f2.f = (f32) f1.i;
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) v0);
    f0.f = f0.f * f2.f;
    f1.f = f1.f * f2.f;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_00956518;
    s0 = (s32) ((u32) s0 + 0xaU); goto L_0095651C;
L_00956518:;
    s0 = (s32) ((u32) s0 + 0xfffffff6U);
L_0095651C:;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 40;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 129));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    { s32 c_ = v0 >= 0; v1 = (s32) v0 >> 2; if (c_) goto L_0095657C; }
    v0 = (s32) ((u32) v0 + 0x3U);
    v1 = (s32) v0 >> 2;
L_0095657C:;
    s0 = (s32) ((u32) s0 + (u32) v1);
    a0 = s1; v0 = func_0090B990(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s1 + 18));
    a1 = v0 & 0xff;
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0x1eeeU);
    a1 = (s32) ((u32) a1 << 1);
    a0 = 100;
    a1 = (s32) ((u32) s0 + (u32) a1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    v1 = (s32) ((u32) v0 + 0xfffffffeU);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    s0 = (s32) ((u32) a1 + (u32) v0); v0 = func_00BBB8C0(a0);
    v1 = v0 < s0;
    if (v1 != 0) goto L_009565E0;
L_009565D8:;
    goto L_009565F0;
L_009565E0:;
    v1 = (*(volatile s32 *) (u32) (s1 + 180));
    v1 = v1 | 0x200;
    (*(volatile u32 *) (u32) (s1 + 180)) = (u32) v1; goto L_009565D8;
L_009565F0:;
L_009565F4:;
    return;
}
