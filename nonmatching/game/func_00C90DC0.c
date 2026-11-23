/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s64, s64);
void func_00C89640(s64, s64);
void func_00C897C0(s64, s64);

void func_00C90DC0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0xcd0000U;
    a0 = 0;
    v0 = (*(volatile u8 *) (u32) (v0 + -10068));
    s1 = v0 & 0x1;
    v0 = (s64) ((u64) v0 << 61);
    v0 = (s64) ((u64) v0 >> 63);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    s3 = s1 & v0;
    a1 = s3 & 0xff; func_00C897C0(a0, a1);
    a1 = s3 & 0xff;
    a0 = 1; func_00C897C0(a0, a1);
    s2 = 2;
    a0 = s2;
L_00C90E1C:;
    a1 = (s32) ((u32) sp + 0x60U);
    s0 = s3; func_00C89640(a0, a1);
    v0 = 1;
    if (s3 != v0) goto L_00C90E60;
    f0.f = (*(volatile f32 *) (u32) (sp + 96));
    f1.i = (s32) 0;
    fcc = f1.f == f0.f;
    if (!fcc) goto L_00C90E60;
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_00C90E60;
    s0 = 0;
L_00C90E60:;
    a1 = s0 & 0xff;
    a0 = s2; func_00C897C0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 33;
    if (at != 0) { a0 = s2; goto L_00C90E1C; }
    if (s3 != 0) goto L_00C90F14;
    v1 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -10020));
    if (v1 == 0) { v1 = 1; goto L_00C90FA8; }
    v1 = (s32) 0xcd0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -10016));
    v1 = (s64) ((u64) v1 << 62);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) goto L_00C90FA4;
    v1 = (s32) 0xcd0000U;
    s0 = (*(volatile s32 *) (u32) (v1 + -10028));
    { s32 c_ = s0 <= 0; s3 = 0; if (c_) goto L_00C90EF0; }
    s2 = 0;
L_00C90EC0:;
    v1 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -10020));
    v1 = (s32) ((u32) v1 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v1);
    if (a0 == 0) goto L_00C90EE0;
    a1 = 0; func_001EF900(a0, a1);
L_00C90EE0:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < s0;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00C90EC0; }
L_00C90EF0:;
    v1 = (s32) 0xcd0000U;
    a2 = (*(volatile u8 *) (u32) (v1 + -10016));
    a0 = -3;
    a1 = (s64) ((u64) 0 + (u64) (s64) 2);
    a0 = a2 & a0;
    v1 = (s32) 0xcd0000U;
    a0 = a0 | a1;
    (*(volatile u8 *) (u32) (v1 + -10016)) = (u8) a0; goto L_00C90FA4;
L_00C90F14:;
    v1 = (s32) 0xcd0000U;
    s0 = (*(volatile s32 *) (u32) (v1 + -10028));
    { s32 c_ = s0 <= 0; s4 = 0; if (c_) goto L_00C90F80; }
    s3 = 0;
    s2 = 0;
L_00C90F2C:;
    a0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -10024));
    v1 = (*(volatile s32 *) (u32) (v1 + -10020));
    a1 = (s32) ((u32) a0 + (u32) s3);
    v1 = (s32) ((u32) v1 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v1);
    if (a0 == 0) goto L_00C90F68;
    v1 = (*(volatile u8 *) (u32) (a1 + 11));
    if (v1 <= 0) goto L_00C90F68;
    a1 = 1; func_001EF900(a0, a1);
L_00C90F68:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < s0;
    s3 = (s32) ((u32) s3 + 0xcU);
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00C90F2C; }
L_00C90F80:;
    v1 = (s32) 0xcd0000U;
    a2 = (*(volatile u8 *) (u32) (v1 + -10016));
    a0 = -3;
    v1 = 0 & 0x1;
    a0 = a2 & a0;
    a1 = (s32) ((u32) v1 << 1);
    v1 = (s32) 0xcd0000U;
    a0 = a0 | a1;
    (*(volatile u8 *) (u32) (v1 + -10016)) = (u8) a0;
L_00C90FA4:;
    v1 = 1;
L_00C90FA8:;
    if (s1 != v1) goto L_00C90FD4;
    a1 = v1 & 0x1;
    a0 = -2;
    v1 = (s32) 0xcd0000U;
    a2 = (*(volatile u8 *) (u32) (v1 + -10068));
    a0 = a2 & a0;
    v1 = (s32) 0xcd0000U;
    a0 = a0 | a1;
    (*(volatile u8 *) (u32) (v1 + -10068)) = (u8) a0; goto L_00C90FF4;
L_00C90FD4:;
    v1 = (s32) 0xcd0000U;
    a0 = -2;
    a2 = (*(volatile u8 *) (u32) (v1 + -10068));
    a1 = 0 & 0x1;
    a0 = a2 & a0;
    v1 = (s32) 0xcd0000U;
    a0 = a0 | a1;
    (*(volatile u8 *) (u32) (v1 + -10068)) = (u8) a0;
L_00C90FF4:;
    return;
}
