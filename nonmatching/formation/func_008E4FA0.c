/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EEE60(s32, s32);
void func_001EF900(s32, s32);
void func_001F23E0(s32, s32, s32, s32);
s32 func_00292F00(s32);
void func_008BB3F0(s32, s32, s32, s32);
s32 func_008BB4D0(s32, s32, s32, s32);

void func_008E4FA0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s7 = a1;
    v1 = (*(volatile s32 *) (u32) (a0 + 1792));
    s1 = (*(volatile s32 *) (u32) (a0 + 484));
    { s32 c_ = v1 == 0; s5 = a0; if (c_) goto L_008E50E4; }
    s4 = 0;
    s3 = s5;
    s2 = s5;
L_008E4FE8:;
    a1 = (*(volatile s32 *) (u32) (s3 + 1796));
    a0 = (*(volatile s32 *) (u32) (s5 + 1792)); func_001F23E0(a0, a1, a2, a3);
    { s32 c_ = s1 == 0; (*(volatile u32 *) (u32) (s3 + 1796)) = (u32) 0; if (c_) goto L_008E50D0; }
    a0 = (*(volatile u16 *) (u32) s1);
    v1 = 0xffff;
    if (a0 == v1) goto L_008E50D0;
    a0 = (*(volatile s32 *) (u32) (s5 + 1792));
    a1 = (s32) ((u32) s2 + 0x4U);
    a2 = 1; v0 = func_008BB4D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 1796)) = (u32) v0;
    { s32 c_ = s5 == 0; s6 = v0; if (c_) goto L_008E5090; }
    v1 = (*(volatile s32 *) (u32) (s5 + 484));
    if (v1 == 0) goto L_008E5090;
    if (v0 == 0) goto L_008E5090;
    at = s4 < 11;
    if (at == 0) goto L_008E5090;
    s0 = (s32) ((u32) v1 + (u32) s4);
    a0 = (*(volatile u8 *) (u32) (s0 + 37)); v0 = func_00292F00(a0);
    a1 = v0;
    a3 = (*(volatile u8 *) (u32) (s0 + 158));
    v0 = s4 & 0xff;
    a0 = (s32) ((u32) sp + 0x9cU);
    v0 = v0 < 11;
    a2 = v0 ^ 0x1; func_008BB3F0(a0, a1, a2, a3);
    if (s7 == 0) goto L_008E5080;
    v0 = 160;
    (*(volatile u8 *) (u32) (sp + 159)) = (u8) v0;
L_008E5080:;
    a0 = s6;
    a1 = (s32) ((u32) sp + 0x9cU); func_001EEE60(a0, a1);
L_008E5090:;
    v0 = (s32) ((u32) s1 + (u32) s4);
    v0 = (*(volatile u8 *) (u32) (v0 + 2));
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 70));
    if (v0 == 0) goto L_008E50C0;
    a0 = (*(volatile s32 *) (u32) (s3 + 1796));
    a1 = 1; func_001EF900(a0, a1);
    goto L_008E50D0;
L_008E50C0:;
    a0 = (*(volatile s32 *) (u32) (s3 + 1796));
    a1 = 0; func_001EF900(a0, a1);
L_008E50D0:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 11;
    s3 = (s32) ((u32) s3 + 0x4U);
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x8U); if (c_) goto L_008E4FE8; }
L_008E50E4:;
    return;
}
