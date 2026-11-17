/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001A58E0(s32, s32);
void func_001AAF40(s32, s32);
void func_009832C0(s32, s32, s32, s32);
s32 func_00BBB8C0(s32);

void func_009E37F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;

    s2 = (s32) 0x590000U;
    s2 = (s32) ((u32) s2 + 0xffffe7f0U);
    s1 = 0;
L_009E3810:;
    v0 = s1 < 11;
    { s32 c_ = v0 != 0; s0 = s1; if (c_) goto L_009E3820; }
    s0 = (s32) ((u32) s1 + 0xfffffff5U);
L_009E3820:;
    a1 = (*(volatile u8 *) (u32) (s2 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 212));
    if (v0 == 0) goto L_009E38F0;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a1 = 1;
    (*(volatile u8 *) (u32) (v0 + 44)) = (u8) a1;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (*(volatile s32 *) (u32) v0); func_001A58E0(a0, a1);
    a0 = 128; v0 = func_00BBB8C0(a0);
    a0 = (s32) ((u32) v0 + 0x980U);
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s16 *) (u32) (s2 + 20));
    v1 = (s32) ((u32) v1 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    a0 = 1280;
    v0 = (s32) ((u32) 0 - (u32) v0);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s2 + 224)) = f0.f;
    (*(volatile u32 *) (u32) (s2 + 228)) = (u32) 0; v0 = func_00BBB8C0(a0);
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (s2 + 232)) = f0.f; goto L_009E3928;
L_009E38F0:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    (*(volatile u8 *) (u32) (v0 + 44)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001A58E0(a0, a1);
    v1 = (s32) 0x46520000U;
    v0 = (s32) 0x46480000U;
    v1 = v1 | 0x6400;
    v0 = v0 | 0x6400;
    (*(volatile u32 *) (u32) (s2 + 224)) = (u32) v1;
    (*(volatile u32 *) (u32) (s2 + 228)) = (u32) 0;
    (*(volatile u32 *) (u32) (s2 + 232)) = (u32) v0;
L_009E3928:;
    a0 = (s32) 0x10000U; v0 = func_00BBB8C0(a0);
    (*(volatile u16 *) (u32) (s2 + 38)) = (u16) v0;
    v0 = (*(volatile u16 *) (u32) (s2 + 38));
    (*(volatile u16 *) (u32) (s2 + 40)) = (u16) v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001AAF40(a0, a1);
    v0 = 73;
    a0 = s2;
    (*(volatile u8 *) (u32) (s2 + 22)) = (u8) v0;
    a1 = 55;
    (*(volatile u16 *) (u32) (s2 + 24)) = (u16) 0; func_009832C0(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 22;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_009E3810; }
    return;
}
