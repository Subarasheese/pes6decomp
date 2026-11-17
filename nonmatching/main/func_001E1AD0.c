/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_001E1AD0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    a3 = (*(volatile s32 *) (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 55));
    a2 = (*(volatile s32 *) (u32) (a3 + 8));
    at = 0 < v1;
    { s32 c_ = at == 0; a4 = 0; if (c_) goto L_001E1B40; }
L_001E1AE8:;
    v1 = (*(volatile u8 *) (u32) (a2 + 10));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a4; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a5 = 0;
    v1 = (*(volatile u8 *) (u32) (a0 + 54));
    a1 = (s32) ((u32) a1 << 6);
    at = 0 < v1;
    { s32 c_ = at == 0; a1 = (s32) ((u32) a0 + (u32) a1); if (c_) goto L_001E1B28; }
L_001E1B08:;
    v1 = (*(volatile u16 *) (u32) (a1 + 52));
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) (a1 + 52)) = (u16) v1;
    v1 = (*(volatile u8 *) (u32) (a0 + 54));
    v1 = a5 < v1;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x40U); if (c_) goto L_001E1B08; }
L_001E1B28:;
    v1 = (*(volatile u8 *) (u32) (a0 + 55));
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < v1;
    if (v1 != 0) goto L_001E1AE8;
L_001E1B40:;
    v1 = (*(volatile u16 *) (u32) (a3 + 40));
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) (a3 + 40)) = (u16) v1; return;
}
