/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 func_001D7BA0(s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001F1810(s64, s64);
void func_001F1860(s64, s64);
s64 func_001F1A20(s64, s64, s64, s64);
s64 func_001F1F10(s64, s64, s64, s64);
s64 func_001F2050(s64, s64, s64, s64);
void func_001F3D10(s64, s64);
void func_002E3DE0(s64, s64);
s64 func_00365250(s64, s64, s64, s64);

s64 func_002E45B0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    v0 = 8;
    v1 = (s32) ((u32) sp + 0x58U);
    s1 = a1;
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_002E45F8; }
L_002E45DC:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002E45DC;
L_002E45F8:;
    if (s1 != 0) { a0 = 1; goto L_002E4608; }
    v0 = 0; goto L_002E49C4;
L_002E4608:;
    a1 = 44; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    at = s0 < 20;
    { s32 c_ = at != 0; s3 = v0; if (c_) goto L_002E4624; }
    s0 = 19; goto L_002E4634;
L_002E4624:;
    if (s0 >= 0) goto L_002E4634;
    s0 = 0; goto L_002E4634;
L_002E4634:;
    (*(volatile u32 *) (u32) s3) = (u32) s0; v0 = func_001F1F10(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 20)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 20)); v0 = func_001F2050(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 24)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) s3);
    v0 = a0 < 10;
    if (v0 != 0) { s0 = 33; goto L_002E4678; }
    s0 = 23;
L_002E4678:;
    at = (u64) a0 < (u64) (s64) 19;
    if (at == 0) { s2 = 0; goto L_002E4918; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffc6a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2e46a0U) goto L_002E46A0; if (t_ == 0x2e4770U) goto L_002E4770; if (t_ == 0x2e4824U) goto L_002E4824; if (t_ == 0x2e488cU) goto L_002E488C; if (t_ == 0x2e48f4U) goto L_002E48F4; if (t_ == 0x2e4914U) goto L_002E4914; }
L_002E46A0:;
    { s32 c_ = a0 >= 0; v0 = a0 & 0x1; if (c_) goto L_002E46B4; }
    if (v0 == 0) { v1 = (s32) ((u32) v0 << 3); goto L_002E46B8; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002E46B4:;
    v1 = (s32) ((u32) v0 << 3);
L_002E46B8:;
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    v0 = (s32) 0x3b0000U;
    a1 = s0;
    v0 = (s32) ((u32) v0 + 0x36e0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a3 = (*(volatile s32 *) (u32) v0);
    a2 = (s32) ((u32) sp + 0x58U); v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 36)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F1810(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 36));
    a1 = 0; func_001F1860(a0, a1);
    v1 = (*(volatile s32 *) (u32) s3);
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_002E470C; }
    if (v0 == 0) { v1 = (s32) ((u32) v0 << 3); goto L_002E4710; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002E470C:;
    v1 = (s32) ((u32) v0 << 3);
L_002E4710:;
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    v0 = (s32) 0x3b0000U;
    a1 = s0;
    v0 = (s32) ((u32) v0 + 0x36e4U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a3 = (*(volatile s32 *) (u32) v0);
    a2 = (s32) ((u32) sp + 0x58U); v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 40)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F1810(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 40));
    a1 = 2; func_001F1860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    a1 = 0; v0 = func_00365250(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    a1 = 1; v0 = func_00365250(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) v0; goto L_002E4914;
L_002E4770:;
    { s32 c_ = a0 >= 0; v0 = a0 & 0x1; if (c_) goto L_002E4784; }
    if (v0 == 0) { v1 = (s32) ((u32) v0 << 3); goto L_002E4788; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002E4784:;
    v1 = (s32) ((u32) v0 << 3);
L_002E4788:;
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    v0 = (s32) 0x3b0000U;
    a1 = s0;
    v0 = (s32) ((u32) v0 + 0x36e0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a3 = (*(volatile s32 *) (u32) v0);
    a2 = (s32) ((u32) sp + 0x58U); v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 36)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F1810(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 36));
    a1 = 0; func_001F1860(a0, a1);
    v1 = (*(volatile s32 *) (u32) s3);
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_002E47DC; }
    if (v0 == 0) { v1 = (s32) ((u32) v0 << 3); goto L_002E47E0; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002E47DC:;
    v1 = (s32) ((u32) v0 << 3);
L_002E47E0:;
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    v0 = (s32) 0x3b0000U;
    a1 = s0;
    v0 = (s32) ((u32) v0 + 0x36e4U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a3 = (*(volatile s32 *) (u32) v0);
    a2 = (s32) ((u32) sp + 0x58U); v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 40)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F1810(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 40));
    a1 = 2; func_001F1860(a0, a1);
    goto L_002E4914;
L_002E4824:;
    { s32 c_ = a0 >= 0; v0 = a0 & 0x1; if (c_) goto L_002E4838; }
    if (v0 == 0) { v1 = (s32) ((u32) v0 << 3); goto L_002E483C; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002E4838:;
    v1 = (s32) ((u32) v0 << 3);
L_002E483C:;
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    v0 = (s32) 0x3b0000U;
    a1 = s0;
    v0 = (s32) ((u32) v0 + 0x36e0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a3 = (*(volatile s32 *) (u32) v0);
    a2 = (s32) ((u32) sp + 0x58U); v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 36)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F1810(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 36));
    a1 = 0; func_001F1860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    a1 = 0; v0 = func_00365250(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v0; goto L_002E4914;
L_002E488C:;
    { s32 c_ = a0 >= 0; v0 = a0 & 0x1; if (c_) goto L_002E48A0; }
    if (v0 == 0) { v1 = (s32) ((u32) v0 << 3); goto L_002E48A4; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002E48A0:;
    v1 = (s32) ((u32) v0 << 3);
L_002E48A4:;
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    v0 = (s32) 0x3b0000U;
    a1 = s0;
    v0 = (s32) ((u32) v0 + 0x36e0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a3 = (*(volatile s32 *) (u32) v0);
    a2 = (s32) ((u32) sp + 0x58U); v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 36)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F1810(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 36));
    a1 = 2; func_001F1860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    a1 = 1; v0 = func_00365250(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v0; goto L_002E4914;
L_002E48F4:;
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    a1 = 0; v0 = func_00365250(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    a1 = 1; v0 = func_00365250(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) v0;
L_002E4914:;
    s2 = 0;
L_002E4918:;
    s0 = s3;
L_002E491C:;
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = 1; func_001F3D10(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002E491C; }
    a1 = s1;
    a0 = s3; func_002E3DE0(a0, a1);
    if (s3 == 0) goto L_002E49C0;
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    a1 = 1; func_001F3D10(a0, a1);
    v0 = (s32) 0x3f0000U;
    v1 = 46;
    v0 = (*(volatile s32 *) (u32) (v0 + 30608));
    s1 = 0;
    s0 = s3;
    if ((u32) v1 != 0) { s64 q_ = (s32) ((u32) v0 / (u32) v1); hi = (s32) ((u32) v0 % (u32) v1); lo = q_; }
    v0 = hi;
    s2 = (s64) ((u64) v0 << 48);
    s2 = s2 >> 48;
L_002E497C:;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    if (v0 == 0) goto L_002E49B0;
    a0 = (*(volatile s32 *) (u32) (v0 + 72)); v0 = func_001D7BA0(a0);
    v1 = 2;
    if (v0 != v1) goto L_002E49B0;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    a0 = (*(volatile s32 *) (u32) (v0 + 72));
    a1 = s2; func_001D7D80(a0, a1, a2, a3);
L_002E49B0:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 2;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002E497C; }
L_002E49C0:;
    v0 = s3;
L_002E49C4:;
    return v0;
}
