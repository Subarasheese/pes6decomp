/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B6780(s64, s64, s64, s64);
void func_0023EA10(s64, s64, s64, s64);
s64 func_008B2E80(s64);
void sprintf(s64, s64, s64, s64, s64, s64, s64, s64);

void func_008BDB30(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[132];
    s64 sp = (s32) (u32) frame;

    a1 = (s32) 0x8e0000U;
    v0 = (s32) 0x8e0000U;
    a0 = 424;
    a3 = (*(volatile s8 *) (u32) (v0 + 7392));
    a1 = (s32) ((u32) a1 + 0x1ceeU);
    v0 = (s32) 0x8e0000U;
    v1 = (*(volatile s8 *) (u32) (v0 + 7400));
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (s32) ((u32) a3 + (u32) v0);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) a1 + (u32) v0);
    { s32 c_ = a3 != 0; v1 = (*(volatile s16 *) (u32) v0); if (c_) goto L_008BDBC0; }
    v0 = (s32) ((u32) a3 << 3);
    v1 = (s32) ((u32) v0 + (u32) a3);
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + (u32) a3);
    v0 = (s32) ((u32) v0 + 0xffff85d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (*(volatile s16 *) (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); func_0023EA10(a0, a1, a2, a3);
    goto L_008BDC80;
L_008BDBC0:;
    v0 = 2;
    if (a2 == v0) goto L_008BDC0C;
    v0 = 6;
    if (a2 == v0) { v0 = (s32) 0xca0000U; goto L_008BDBFC; }
    v0 = 5;
    if (a2 == v0) { v0 = (s32) 0xca0000U; goto L_008BDBEC; }
    v0 = (s64) ((u64) v1 << 48); goto L_008BDC48;
L_008BDBEC:;
    a0 = v0 | 0x16; func_0023EA10(a0, a1, a2, a3);
    goto L_008BDC7C;
L_008BDBFC:;
    a0 = v0 | 0x17; func_0023EA10(a0, a1, a2, a3);
    goto L_008BDC7C;
L_008BDC0C:;
    v0 = (s32) 0x8e0000U;
    v1 = (s32) 0xca0000U;
    v0 = (*(volatile s16 *) (u32) (v0 + 9526));
    a0 = v1 | 0x1d;
    s0 = (s32) ((u32) v0 + 0xffffffffU); v0 = func_008B2E80(a0);
    a1 = v0;
    a2 = (s32) ((u32) s0 << 1);
    a3 = s0;
    a0 = (s32) ((u32) sp + 0x20U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) sp + 0x20U); func_001B6780(a0, a1, a2, a3);
    goto L_008BDC7C;
L_008BDC48:;
    v1 = (s32) ((u32) a2 << 3);
    v0 = v0 >> 48;
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) v1 << 1);
    v1 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0xffff85d0U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_0023EA10(a0, a1, a2, a3);
L_008BDC7C:;
L_008BDC80:;
    return;
}
