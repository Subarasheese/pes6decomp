/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0022C230(s32);
s32 func_002B8B50(s32);

s32 func_00322F70(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = (s32) ((u32) a0 + 0x50U);
    s0 = 0;
L_00322F88:;
    a0 = s0; v0 = func_002B8B50(a0);
    (*(volatile u8 *) (u32) (s1 + 12)) = (u8) v0;
    a0 = s0 & 0xff; v0 = func_0022C230(a0);
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_00323080;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x15d0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x322fc8U) goto L_00322FC8; if (t_ == 0x322fd8U) goto L_00322FD8; if (t_ == 0x322fe8U) goto L_00322FE8; if (t_ == 0x322ff8U) goto L_00322FF8; if (t_ == 0x323028U) goto L_00323028; if (t_ == 0x323058U) goto L_00323058; }
L_00322FC8:;
    v0 = 1;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0; goto L_00323080;
L_00322FD8:;
    v0 = 13;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0; goto L_00323080;
L_00322FE8:;
    v0 = 4;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0; goto L_00323080;
L_00322FF8:;
    v1 = (*(volatile s32 *) (u32) (s1 + 44));
    v0 = 38;
    if (v1 != v0) goto L_00323018;
    v0 = 5;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0; goto L_00323080;
L_00323018:;
    v0 = 8;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0; goto L_00323080;
L_00323028:;
    v1 = (*(volatile s32 *) (u32) (s1 + 44));
    v0 = 38;
    if (v1 != v0) goto L_00323048;
    v0 = 6;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0; goto L_00323080;
L_00323048:;
    v0 = 9;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0; goto L_00323080;
L_00323058:;
    v1 = (*(volatile s32 *) (u32) (s1 + 44));
    v0 = 38;
    if (v1 != v0) goto L_00323078;
    v0 = 7;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0; goto L_00323080;
L_00323078:;
    v0 = 10;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0;
L_00323080:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x3cU); if (c_) goto L_00322F88; }
    v0 = 1;
    return v0;
}
