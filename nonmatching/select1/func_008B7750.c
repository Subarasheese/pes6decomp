/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetUnavailableFlag(void);
void func_0023B090(s64, s64, s64, s64, s64, f32);
void func_0023B1C0(s64, f32, f32);
void func_0023B360(s64, s64);
void func_0023D690(f32);
s64 func_008B31F0(s64);
void func_008B3280(s64, s64);
void func_008B3290(s64, s64);
void func_008B32B0(s64, s64, s64);

void func_008B7750(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    a1 = (s32) ((u32) sp + 0x20U);
    v0 = (*(volatile s32 *) (u32) (gp + -22684));
    s0 = (s32) 0x540000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 56));
    s0 = (s32) ((u32) s0 + 0xffffc300U); func_008B3280(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -22684));
    a1 = (s32) ((u32) sp + 0x30U);
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a2 = 4; func_008B32B0(a0, a1, a2);
    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = 1;
    if (v0 != v1) { f0.f = (*(volatile f32 *) (u32) (gp + -20292)); goto L_008B77B8; }
    f0.f = (*(volatile f32 *) (u32) (gp + -20292));
    f1.f = (*(volatile f32 *) (u32) (sp + 60));
    f0.f = (f32) f0.i;
    f1.i = f1.i ^ (s32) 0x80000000U;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (gp + -20292));
L_008B77B8:;
    f3.f = (*(volatile f32 *) (u32) (sp + 60));
    f1.f = (*(volatile f32 *) (u32) (sp + 36));
    f0.f = (f32) f0.i;
    f2.i = f3.i ^ (s32) 0x80000000U;
    f0.f = f2.f * f0.f;
    fcc = f1.f == f0.f;
    if (fcc) { a0 = (*(volatile s8 *) (u32) (gp + -22676)); goto L_008B78C4; }
    v1 = (*(volatile s8 *) (u32) (gp + -20284));
    v0 = 3;
    if (v1 == v0) { (*(volatile f32 *) (u32) (sp + 36)) = f0.f; goto L_008B7820; }
    fcc = f1.f <= f0.f;
    v0 = (s32) 0x40800000U;
    f0.i = (s32) v0;
    f0.f = f3.f / f0.f;
    if (fcc) goto L_008B7818;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f; goto L_008B7820;
L_008B7818:;
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
L_008B7820:;
    v0 = (*(volatile s32 *) (u32) (gp + -22684));
    a0 = (*(volatile s32 *) (u32) (v0 + 56));
    a1 = (s32) ((u32) sp + 0x20U); func_008B3290(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -22684));
    a0 = (*(volatile s32 *) (u32) (v0 + 48));
    a1 = (s32) ((u32) sp + 0x20U); func_008B3290(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -31384));
    at = v1 < 5;
    if (at == 0) { v1 = (*(volatile s8 *) (u32) (gp + -20284)); goto L_008B7884; }
    f1.f = (*(volatile f32 *) (u32) (gp + -20292));
    v0 = 6;
    v0 = (s32) ((u32) v0 - (u32) v1);
    f0.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = (f32) f0.i;
    f12.f = f1.f / f0.f;
    func_0023D690(f12.f);
    v1 = (*(volatile s8 *) (u32) (gp + -20284));
L_008B7884:;
    v0 = 4;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -20284)) = (u8) v1;
    v1 = (s64) ((u64) v1 << 56);
    v1 = v1 >> 56;
    if (v1 != v0) { a0 = 0; goto L_008B78A8; }
    (*(volatile u8 *) (u32) (gp + -20284)) = (u8) 0;
    a0 = 0;
L_008B78A8:;
    a1 = 0; func_0023B360(a0, a1);
    a0 = 1;
    a1 = 0; func_0023B360(a0, a1);
    goto L_008B79DC;
L_008B78C4:;
    v1 = 3;
    if (a0 != v1) goto L_008B79D8;
    v0 = (s32) 0x540000U;
    v1 = 4;
    v0 = (*(volatile s8 *) (u32) (v0 + -14016));
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (gp + -22684)); goto L_008B7930; }
    a0 = (s32) 0x8e0000U;
    a2 = (*(volatile s32 *) (u32) (gp + -22684));
    a1 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) a0 + 0xffffa740U);
    a1 = (s32) ((u32) a0 + (u32) a1);
    a3 = (s32) ((u32) v0 + 0x6U);
    a4 = (*(volatile s32 *) (u32) a1);
    v0 = (s32) 0x41000000U;
    v1 = (*(volatile s32 *) (u32) (s0 + 20));
    f12.i = (s32) v0;
    a2 = (*(volatile s32 *) (u32) (a2 + 56));
    a0 = 0;
    v0 = (s32) ((u32) a4 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a4 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_0023B090(a0, a1, a2, a3, a4, f12.f);
    a0 = 0; goto L_008B79C4;
L_008B7930:;
    a1 = (s32) ((u32) sp + 0x30U);
    a0 = (*(volatile s32 *) (u32) (v0 + 56));
    a2 = 11; func_008B32B0(a0, a1, a2);
    f12.f = (*(volatile f32 *) (u32) (sp + 48));
    f13.f = (*(volatile f32 *) (u32) (sp + 52));
    a0 = 0; func_0023B1C0(a0, f12.f, f13.f);
    v0 = (*(volatile s32 *) (u32) (gp + -22684));
    a0 = (*(volatile s32 *) (u32) (v0 + 56)); v0 = func_008B31F0(a0);
    v1 = v0 & 0xffff;
    v0 = 3;
    if (v1 == v0) { v0 = (s32) 0x43050000U; goto L_008B79AC; }
    v0 = 2;
    if (v1 == v0) { v0 = (s32) 0x43520000U; goto L_008B79A4; }
    v0 = 1;
    if (v1 == v0) { v0 = (s32) 0x429c0000U; goto L_008B799C; }
    if (v1 == 0) { v0 = (s32) 0x42f60000U; goto L_008B7994; }
    f12.f = (*(volatile f32 *) (u32) (sp + 48)); goto L_008B79B4;
L_008B7994:;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0; goto L_008B79B0;
L_008B799C:;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0; goto L_008B79B0;
L_008B79A4:;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0; goto L_008B79B0;
L_008B79AC:;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0;
L_008B79B0:;
    f12.f = (*(volatile f32 *) (u32) (sp + 48));
L_008B79B4:;
    f13.f = (*(volatile f32 *) (u32) (sp + 52));
    a0 = 1; func_0023B1C0(a0, f12.f, f13.f);
    a0 = 0;
L_008B79C4:;
    a1 = 1; func_0023B360(a0, a1);
    a0 = 1;
    a1 = a0; func_0023B360(a0, a1);
L_008B79D8:;
L_008B79DC:;
    return;
}
