/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EEDA0(s64, s64);
void func_001EEE60(s64, s64);
void func_0020DDC0(s64);
s64 func_002F7970(s64, s64, s64, s64);
s64 func_008FA910(s64, s64, s64, s64);
s64 func_008FAAD0(void);
void func_00C75160(s64, s64, s64, s64);

s64 func_008FE210(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    a0 = (s32) ((u32) sp + 0x6cU);
    func_0020DDC0(a0);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s32 *) (u32) (v0 + 192));
    a1 = (s32) ((u32) sp + 0x6cU); func_001EEE60(a0, a1);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (s32) ((u32) v0 + 0x1cU);
    a1 = (s32) ((u32) v0 + 0x7U); v0 = func_008FA910(a0, a1, a2, a3);
    s1 = v0;
    s2 = 0;
    s0 = 0;
L_008FE268:;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    s4 = (*(volatile s8 *) (u32) (v0 + 7));
    v0 = (s32) ((u32) v0 + (u32) s0);
    s3 = (*(volatile s32 *) (u32) (v0 + 196));
    if (s3 == 0) goto L_008FE2B0;
    a1 = (s64) ((u64) s4 << 56);
    a0 = s3;
    a1 = a1 >> 56; func_00C75160(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 28));
    s4 = s4 & 0xff;
    a1 = s4; func_001EEDA0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    a1 = s4; func_001EEDA0(a0, a1);
L_008FE2B0:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 11;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008FE268; }
    v0 = func_002F7970(a0, a1, a2, a3);
    if (v0 == 0) { v0 = s1; goto L_008FE300; }
    v0 = (s32) 0x3b0000U;
    v1 = 1;
    v0 = (*(volatile s8 *) (u32) (v0 + -5757));
    if (v0 != v1) goto L_008FE2FC;
    v0 = func_008FAAD0();
    if (v0 != 0) goto L_008FE2FC;
    v0 = 0; goto L_008FE300;
L_008FE2FC:;
    v0 = s1;
L_008FE300:;
    return v0;
}
