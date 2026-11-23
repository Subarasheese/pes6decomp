/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s64, s64);
s64 func_001F08B0(s64);
void func_008B9AB0(s64, s64, s64, s64);
s64 func_008BC370(s64);
void func_008BF4A0(s64, s64);
void func_008C5750(s64, s64, s64, s64);
void func_008C6690(s64, s64, s64, s64);
void func_008E5110(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008E6650(s64, s64, s64, s64, s64, s64, s64, s64);

void func_008C7370(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[298];
    s64 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = 0;
    (*(volatile u8 *) (u32) (a0 + 39)) = (u8) 0;
    s0 = 0;
L_008C7394:;
    v0 = (*(volatile s32 *) (u32) (s2 + 104));
    a0 = (s32) ((u32) v0 + (u32) s0); v0 = func_008BC370(a0);
    a3 = v0;
    a1 = s1 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s2 + 104));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a2 = (*(volatile u16 *) (u32) v0);
    a0 = (s32) ((u32) s2 + 0x23b4U); func_008C6690(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 10;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x19aU); if (c_) goto L_008C7394; }
    v1 = (*(volatile u8 *) (u32) (s2 + 9220));
    v0 = 3;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 13); goto L_008C740C; }
    v0 = 4;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s2 + 9221)); goto L_008C740C; }
    v0 = 2;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 12); goto L_008C740C; }
    v0 = 1;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_008C740C; }
    if (v1 == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_008C740C; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 255);
L_008C740C:;
    a2 = v0 & 0xff;
    a1 = (s32) ((u32) s2 + 0x208U);
    a0 = (s32) ((u32) sp + 0x40U);
    v1 = 577;
L_008C741C:;
    v0 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x4U);
    a0 = (s32) ((u32) a0 + 0x4U);
    if (v1 > 0) goto L_008C741C;
    at = a2 < 10;
    if (at == 0) { v1 = (*(volatile u8 *) (u32) (s2 + 11)); goto L_008C7498; }
    v1 = 410;
    v0 = (*(volatile s32 *) (u32) (s2 + 104));
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = (s32) ((u32) v0 + (u32) v1); func_008BF4A0(a0, a1);
    a0 = (s32) ((u32) s2 + 0x129cU);
    a1 = (s32) ((u32) sp + 0x40U); func_008E6650(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile u16 *) (u32) (sp + 64));
    v0 = 0xffff;
    if (v1 != v0) { a0 = (s32) ((u32) s2 + 0x129cU); goto L_008C748C; }
    a0 = (s32) ((u32) s2 + 0x129cU);
    a1 = 0; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C7494;
L_008C748C:;
    a1 = 1; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
L_008C7494:;
    v1 = (*(volatile u8 *) (u32) (s2 + 11));
L_008C7498:;
    v0 = 29;
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile u8 *) (u32) (v1 + 1));
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) (s2 + 9220)); goto L_008C74F8; }
    a0 = (*(volatile s32 *) (u32) (s2 + 9252));
    a1 = 0; func_008B9AB0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 9256));
    a1 = 0; func_008B9AB0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x2464U);
    a1 = 0; func_008C5750(a0, a1, a2, a3);
    s0 = 0;
L_008C74D4:;
    a0 = (*(volatile s32 *) (u32) (s2 + 9228));
    a1 = 0; func_001EF900(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 5;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_008C74D4; }
    goto L_008C7598;
L_008C74F8:;
    v1 = 4;
    if (a0 != v1) { a0 = (s32) ((u32) s2 + 0x2464U); goto L_008C758C; }
    v0 = 3;
    if (a0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 13); goto L_008C753C; }
    if (a0 == v1) { v0 = (*(volatile u8 *) (u32) (s2 + 9221)); goto L_008C753C; }
    v0 = 2;
    if (a0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 12); goto L_008C753C; }
    v0 = 1;
    if (a0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_008C753C; }
    if (a0 == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_008C753C; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 255);
L_008C753C:;
    v1 = v0 & 0xff;
    v1 = (s32) ((u32) v1 << 1);
    v0 = 0xffff;
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile u16 *) (u32) (v1 + 9150));
    if (v1 == v0) goto L_008C7588;
    v1 = (*(volatile u8 *) (u32) (s2 + 9149));
    v0 = 255;
    if (v1 != v0) goto L_008C7588;
    v0 = (s32) 0x3f0000U;
    a0 = v0 | 0x25; v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s2 + 0x2464U);
    a1 = v0; func_008C5750(a0, a1, a2, a3);
    goto L_008C7594;
L_008C7588:;
    a0 = (s32) ((u32) s2 + 0x2464U);
L_008C758C:;
    a1 = 0; func_008C5750(a0, a1, a2, a3);
L_008C7594:;
L_008C7598:;
    return;
}
