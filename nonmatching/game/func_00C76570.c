/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C76570(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1efaU);
    v1 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) 0x590000U;
    a3 = (*(volatile u8 *) (u32) v1);
    v0 = (s32) ((u32) v0 + 0x1ef8U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    a5 = (s32) ((u32) v0 - (u32) a3);
    at = a2 < a5;
    if (at == 0) { a6 = 0; goto L_00C765A8; }
    a5 = a2;
    a6 = 0;
L_00C765A8:;
    if (a2 <= 0) goto L_00C76648;
    at = a2 < 9;
    { s32 c_ = at != 0; v1 = (s32) ((u32) a2 + 0xfffffff8U); if (c_) goto L_00C76618; }
    { s32 c_ = a2 < 0; v0 = 0; if (c_) goto L_00C765DC; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a2 < at;
    if (at == 0) goto L_00C765DC;
    v0 = 1;
L_00C765DC:;
    if (v0 == 0) goto L_00C76618;
    a4 = a1;
L_00C765E8:;
    (*(volatile u32 *) (u32) a4) = (u32) 0;
    a6 = (s32) ((u32) a6 + 0x8U);
    (*(volatile u32 *) (u32) (a4 + 4)) = (u32) 0;
    v0 = a6 < v1;
    (*(volatile u32 *) (u32) (a4 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (a4 + 12)) = (u32) 0;
    (*(volatile u32 *) (u32) (a4 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a4 + 20)) = (u32) 0;
    (*(volatile u32 *) (u32) (a4 + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (a4 + 28)) = (u32) 0;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x20U); if (c_) goto L_00C765E8; }
L_00C76618:;
    at = a6 < a2;
    if (at == 0) goto L_00C76648;
    v0 = (s32) ((u32) a6 << 2);
    v1 = (s32) ((u32) a1 + (u32) v0);
L_00C7662C:;
    a6 = (s32) ((u32) a6 + 0x1U);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    v0 = a6 < a2;
    v1 = (s32) ((u32) v1 + 0x4U);
    if (v0 != 0) goto L_00C7662C;
L_00C76648:;
    v0 = 0;
    { s32 c_ = a5 <= 0; a4 = 0; if (c_) goto L_00C766A0; }
    a2 = 139;
    v1 = (s32) ((u32) a3 << 3);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x1a90U);
    a0 = (s32) ((u32) a0 + (u32) a2);
    a2 = (s32) ((u32) v1 + (u32) a0);
    a0 = 255;
L_00C76674:;
    v1 = (*(volatile u8 *) (u32) (a2 + 83));
    if (v1 == a0) goto L_00C76690;
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    v0 = (s32) ((u32) v0 + 0x1U);
    a1 = (s32) ((u32) a1 + 0x4U);
L_00C76690:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < a5;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_00C76674; }
L_00C766A0:;
    return;
}
