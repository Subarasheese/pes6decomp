/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
void func_00C88DD0(s64, s64, s64, s64);
void func_00C88EC0(s64, s64, s64);
void func_00C896E0(s64, s64, f32, f32);
void func_00C897C0(s64, s64);
void func_00C89CB0(s64, s64, s64, s64, f32, f32, f32, f32);
s64 func_00C8B100(s64);
s64 func_00C8B150(void);

void func_00C93010(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    v0 = (*(volatile s32 *) (u32) (gp + -19140));
    if (v0 != 0) goto L_00C9304C;
    a0 = 1;
    a1 = 48; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -19140)) = (u32) v0;
L_00C9304C:;
    if (v0 == 0) goto L_00C93160;
    v1 = (s32) 0xcb0000U;
    s3 = (s32) 0xcb0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -30072));
    s4 = 0;
    s3 = (s32) ((u32) s3 + 0xffff8aa0U);
    s2 = 0;
    s1 = v0;
    (*(volatile f32 *) (u32) v0) = f0.f;
L_00C93074:;
    v0 = func_00C8B150();
    s5 = v0;
    a0 = 0; v0 = func_00C8B100(a0);
    if (s4 == 0) { s0 = 72; goto L_00C93094; }
    s0 = 73;
L_00C93094:;
    a3 = v0;
    a1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcb0000U;
    a2 = s5;
    f12.f = (*(volatile f32 *) (u32) (v0 + -30080));
    a0 = s0;
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + -30076));
    v0 = (s32) 0xcb0000U;
    f14.f = (*(volatile f32 *) (u32) (v0 + -30072));
    v0 = (s32) 0xcb0000U;
    f15.f = (*(volatile f32 *) (u32) (v0 + -30068));
    a1 = (s32) ((u32) a1 + 0xffff8a90U); func_00C89CB0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    f12.f = (*(volatile f32 *) (u32) s3);
    f13.f = (*(volatile f32 *) (u32) (s3 + 4));
    a0 = s0; func_00C896E0(a0, a1, f12.f, f13.f);
    a0 = s0;
    a1 = 0; func_00C897C0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -19140));
    if (v0 == 0) goto L_00C93130;
    at = (u64) s4 < (u64) (s64) 2;
    if (at == 0) goto L_00C93130;
    f0.f = (*(volatile f32 *) (u32) s3);
    a1 = (s32) ((u32) v0 + (u32) s2);
    v0 = -9;
    v1 = (s64) ((u64) 0 + (u64) (s64) 8);
    (*(volatile f32 *) (u32) (a1 + 20)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 4));
    (*(volatile f32 *) (u32) (a1 + 24)) = f0.f;
    a0 = (*(volatile u8 *) (u32) (a1 + 8));
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (a1 + 8)) = (u8) v0;
L_00C93130:;
    a0 = (*(volatile u8 *) (u32) (s1 + 9));
    v0 = -2;
    v1 = (s64) ((u64) 0 + (u64) (s64) 1);
    s4 = (s32) ((u32) s4 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x8U);
    v0 = a0 & v0;
    s2 = (s32) ((u32) s2 + 0x14U);
    v1 = v0 | v1;
    (*(volatile u8 *) (u32) (s1 + 9)) = (u8) v1;
    v0 = s4 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x14U); if (c_) goto L_00C93074; }
L_00C93160:;
    a1 = (s32) 0xc90000U;
    a2 = (s32) 0xc90000U;
    a0 = 9;
    a1 = (s32) ((u32) a1 + 0x2930U);
    a2 = (s32) ((u32) a2 + 0x2fb0U); func_00C88EC0(a0, a1, a2);
    a1 = (s32) 0xc90000U;
    a2 = (s32) 0xc90000U;
    a0 = 9;
    a1 = (s32) ((u32) a1 + 0x2dd0U);
    a2 = (s32) ((u32) a2 + 0x2cd0U); func_00C88DD0(a0, a1, a2, a3);
    return;
}
