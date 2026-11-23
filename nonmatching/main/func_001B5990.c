/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B5830(s64, s64, s64, s64);
void func_001B9C60(s64, s64, s64, s64);
f32 func_001D7700(s64);
void func_001D78B0(s64, s64);
void func_001D7960(s64, s64);
void func_001D7BE0(s64, s64);
void func_001D7CE0(s64, s64);
void func_001D7D60(s64, s64);
void func_001D7F10(s64, s64, s64, s64);

void func_001B5990(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    v1 = (*(volatile u8 *) (u32) (a0 + 112));
    v1 = (s64) ((u64) v1 << 62);
    v1 = (s64) ((u64) v1 >> 63);
    s0 = (u64) 0 < (u64) v1;
    { s32 c_ = s0 == 0; s2 = a0; if (c_) goto L_001B59CC; }
    v1 = (*(volatile s32 *) (u32) (s2 + 12));
    s0 = (u64) 0 < (u64) v1;
L_001B59CC:;
    if (s0 == 0) goto L_001B59F4;
    v1 = (*(volatile u8 *) (u32) (s2 + 24));
    v1 = v1 & 0x1;
    if (v1 != 0) goto L_001B59F4;
    a0 = s2; func_001B5830(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s2 + 24)); goto L_001B5A70;
L_001B59F4:;
    if (s0 != 0) goto L_001B5A6C;
    v1 = (*(volatile s32 *) (u32) (s2 + 100));
    if (v1 != 0) goto L_001B5A6C;
    v1 = (*(volatile u8 *) (u32) (s2 + 24));
    v1 = v1 & 0x1;
    if (v1 == 0) goto L_001B5A6C;
    s3 = 0;
    s1 = s2;
L_001B5A20:;
    a0 = (*(volatile s32 *) (u32) s1); func_001D7F10(a0, a1, a2, a3);
    s3 = (s32) ((u32) s3 + 0x1U);
    (*(volatile u32 *) (u32) s1) = (u32) 0;
    v1 = (u64) s3 < (u64) (s64) 2;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_001B5A20; }
    a0 = (*(volatile s32 *) (u32) (s2 + 28));
    if (a0 == 0) { a1 = (*(volatile u8 *) (u32) (s2 + 24)); goto L_001B5A58; }
    func_001B9C60(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 28)) = (u32) 0;
    a1 = (*(volatile u8 *) (u32) (s2 + 24));
L_001B5A58:;
    v1 = -2;
    a0 = 0 & 0x1;
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (s2 + 24)) = (u8) v1;
L_001B5A6C:;
    v1 = (*(volatile u8 *) (u32) (s2 + 24));
L_001B5A70:;
    v1 = v1 & 0x1;
    if (v1 == 0) { ; goto L_001B5BE8; }
    v0 = (s32) 0x461c0000U;
    s1 = 0;
    v0 = v0 | 0x4000;
    s3 = s2;
    f20.i = (s32) v0;
L_001B5A90:;
    a0 = (*(volatile s32 *) (u32) s3);
    a1 = s0 & 0xff; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) s3); f0.f = func_001D7700(a0);
    fcc = f0.f < f20.f;
    if (!fcc) goto L_001B5AB8;
    f20.i = f0.i;
L_001B5AB8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = (u64) s1 < (u64) (s64) 2;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_001B5A90; }
    (*(volatile f32 *) (u32) (s2 + 8)) = f20.f;
    v1 = 0 & 0x1;
    a1 = (*(volatile u8 *) (u32) (s2 + 24));
    a0 = (s32) ((u32) v1 << 2);
    v1 = -5;
    v1 = a1 & v1;
    v1 = v1 | a0;
    a1 = (s64) ((u64) a1 << 61);
    a0 = (s64) ((u64) a1 >> 63);
    { s32 c_ = a0 == 0; (*(volatile u8 *) (u32) (s2 + 24)) = (u8) v1; if (c_) goto L_001B5B38; }
    v1 = (*(volatile u8 *) (u32) (s2 + 24));
    v0 = 1;
    v1 = (s64) ((u64) v1 << 62);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != v0) { s3 = 0; goto L_001B5B10; }
    s3 = 2;
L_001B5B10:;
    s1 = 0;
    s0 = s2;
L_001B5B18:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = s3; func_001D7960(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = (u64) s1 < (u64) (s64) 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001B5B18; }
L_001B5B38:;
    v1 = (*(volatile u8 *) (u32) (s2 + 24));
    v1 = (s64) ((u64) v1 << 62);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_001B5B90;
    s0 = 0;
    s1 = s2;
L_001B5B54:;
    v1 = (*(volatile s32 *) (u32) (s2 + 100));
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 8; if (c_) goto L_001B5B70; }
    v0 = (s32) ((u32) v1 + 0xffU);
    v0 = (s32) v0 >> 8;
L_001B5B70:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = v0 & 0xff; func_001D78B0(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = (u64) s0 < (u64) (s64) 2;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_001B5B54; }
L_001B5B90:;
    a1 = (*(volatile u8 *) (u32) (s2 + 24));
    a0 = 0 & 0x1;
    v1 = -9;
    a0 = (s32) ((u32) a0 << 3);
    v1 = a1 & v1;
    v1 = v1 | a0;
    a1 = (s64) ((u64) a1 << 60);
    a0 = (s64) ((u64) a1 >> 63);
    { s32 c_ = a0 == 0; (*(volatile u8 *) (u32) (s2 + 24)) = (u8) v1; if (c_) goto L_001B5BE4; }
    s0 = (*(volatile s32 *) (u32) s2);
    f20.f = (*(volatile f32 *) (u32) (s2 + 116));
    a1 = (s32) ((u32) sp + 0x60U);
    a0 = s0; func_001D7BE0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (s2 + 20));
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x60U);
    f0.f = f20.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f; func_001D7CE0(a0, a1);
L_001B5BE4:;
L_001B5BE8:;
    return;
}
