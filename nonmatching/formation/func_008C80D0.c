/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008BF4A0(s64, s64);
void func_008E5110(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008E6650(s64, s64, s64, s64, s64, s64, s64, s64);

void func_008C80D0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[294];
    s64 sp = (s32) (u32) frame;

    v0 = 3;
    v1 = (*(volatile u8 *) (u32) (a0 + 9220));
    { s32 c_ = v1 == v0; s0 = a0; if (c_) goto L_008C8120; }
    v0 = 4;
    if (v1 == v0) { a2 = (*(volatile u8 *) (u32) (s0 + 9221)); goto L_008C8124; }
    v0 = 2;
    if (v1 == v0) { a2 = (s64) ((u64) 0 + (u64) (s64) 12); goto L_008C8124; }
    v0 = 1;
    if (v1 == v0) { a2 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_008C8124; }
    if (v1 == 0) { a2 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_008C8124; }
    a2 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_008C8124;
L_008C8120:;
    a2 = (s64) ((u64) 0 + (u64) (s64) 13);
L_008C8124:;
    a1 = (s32) ((u32) s0 + 0x208U);
    a0 = (s32) ((u32) sp + 0x20U);
    v1 = 577;
L_008C8130:;
    v0 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x4U);
    a0 = (s32) ((u32) a0 + 0x4U);
    if (v1 > 0) goto L_008C8130;
    a0 = a2 & 0xff;
    at = a0 < 10;
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) (sp + 1886)) = (u8) 0; if (c_) goto L_008C817C; }
    v1 = 410;
    v0 = (*(volatile s32 *) (u32) (s0 + 104));
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = (s32) ((u32) v0 + (u32) v1); func_008BF4A0(a0, a1);
    a0 = (s32) ((u32) s0 + 0x129cU); goto L_008C81F4;
L_008C817C:;
    v0 = 13;
    if (a0 == v0) { a0 = (s32) ((u32) sp + 0x20U); goto L_008C81DC; }
    v0 = 12;
    if (a0 == v0) { v0 = (*(volatile u8 *) (u32) (sp + 2201)); goto L_008C81C8; }
    v0 = 11;
    if (a0 == v0) { v0 = (*(volatile u8 *) (u32) (sp + 2119)); goto L_008C81B4; }
    v0 = 10;
    if (a0 == v0) goto L_008C81F0;
    v0 = 0xffff; goto L_008C81EC;
L_008C81B4:;
    if (v0 == 0) goto L_008C81F0;
    v0 = 1;
    (*(volatile u8 *) (u32) (sp + 1886)) = (u8) v0; goto L_008C81F0;
L_008C81C8:;
    if (v0 == 0) goto L_008C81F0;
    v0 = 2;
    (*(volatile u8 *) (u32) (sp + 1886)) = (u8) v0; goto L_008C81F0;
L_008C81DC:;
    a1 = (s32) ((u32) s0 + 0x6cU); func_008BF4A0(a0, a1);
    goto L_008C81F0;
L_008C81EC:;
    (*(volatile u16 *) (u32) (sp + 32)) = (u16) v0;
L_008C81F0:;
    a0 = (s32) ((u32) s0 + 0x129cU);
L_008C81F4:;
    a1 = (s32) ((u32) sp + 0x20U); func_008E6650(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile u16 *) (u32) (sp + 32));
    v0 = 0xffff;
    if (v1 != v0) { a0 = (s32) ((u32) s0 + 0x129cU); goto L_008C8220; }
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 0; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C822C;
L_008C8220:;
    a1 = 1; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
L_008C822C:;
    return;
}
