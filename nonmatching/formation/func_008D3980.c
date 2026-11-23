/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001F08B0(s64);
s64 func_008B9660(void);
void func_008D3850(s64, s64, s64, s64);

void func_008D3980(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a1;
    s3 = a2;
    if (s5 == 0) goto L_008D3AD8;
    if (s4 == 0) { ; goto L_008D3ADC; }
    v0 = s3 & 0xff;
    at = v0 < 11;
    if (at != 0) { v0 = s3 & 0xff; goto L_008D39D4; }
    s3 = (s64) ((u64) 0 + (u64) (s64) 10);
    v0 = s3 & 0xff;
L_008D39D4:;
    s6 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = s6 <= 0; s2 = 0; if (c_) goto L_008D3A90; }
    s1 = (s32) ((u32) sp + 0x80U);
L_008D39E4:;
    s0 = (s32) ((u32) s4 + (u32) s2);
    v1 = (*(volatile u8 *) (u32) s0);
    at = v1 < 56;
    if (at == 0) goto L_008D3A90;
    v0 = 2;
    if (v1 != v0) goto L_008D3A38;
    v0 = func_008B9660();
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 3;
    if (v1 != v0) goto L_008D3A38;
    v0 = (s32) 0x3c0000U;
    a0 = v0 | 0x22; v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) s1) = (u32) v0; goto L_008D3A50;
L_008D3A38:;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) v1 + (u32) v0); v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_008D3A50:;
    v0 = (*(volatile u8 *) (u32) s0);
    if (v0 != 0) goto L_008D3A80;
    v1 = (*(volatile u8 *) (u32) s5);
    v0 = 1;
    if (v1 != v0) goto L_008D3A80;
    v0 = (s32) 0x3c0000U;
    a0 = v0 | 0x1; v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_008D3A80:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s6;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008D39E4; }
L_008D3A90:;
    at = s2 < 11;
    if (at == 0) goto L_008D3AC8;
    v0 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (s32) ((u32) v0 + 0x80U);
L_008D3AA8:;
    s2 = (s32) ((u32) s2 + 0x1U);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    v0 = s2 < 11;
    v1 = (s32) ((u32) v1 + 0x4U);
    if (v0 != 0) goto L_008D3AA8;
L_008D3AC8:;
    a0 = s5;
    a2 = s3;
    a1 = (s32) ((u32) sp + 0x80U); func_008D3850(a0, a1, a2, a3);
L_008D3AD8:;
L_008D3ADC:;
    return;
}
