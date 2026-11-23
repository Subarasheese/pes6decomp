/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001454C0(s64);
void func_001509A0(s64, s64, s64, s64, s64);
void func_0017DF20(s64, s64, s64);
void func_0017DF60(s64, s64, s64);
s64 func_0021EB30(s64, s64, s64, s64);

void func_00257980(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    if (a1 == 0) goto L_002579A8;
    v0 = (*(volatile u8 *) (u32) a1); goto L_002579AC;
L_002579A8:;
    v0 = 0;
L_002579AC:;
    s1 = v0 & 0xff;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -5566));
    if (v0 != s1) { s2 = (s64) ((u64) 0 + (u64) (s64) 13); goto L_002579C4; }
    s2 = (s64) ((u64) 0 + (u64) (s64) 2);
L_002579C4:;
    v0 = s2 & 0xff;
    a0 = 0;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0x2350U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = a0 & 0xff;
L_002579E0:;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { v0 = (s32) ((u32) a0 + 0x1U); goto L_00257A08; }
    v0 = (s32) ((u32) s2 + (u32) a0);
    s2 = v0 & 0xff; goto L_00257A18;
L_00257A08:;
    a0 = v0 & 0xff;
    v0 = a0 < 11;
    if (v0 != 0) { v0 = a0 & 0xff; goto L_002579E0; }
L_00257A18:;
    a0 = 0x8cdc; v0 = func_001454C0(a0);
    s0 = v0;
    a0 = s1; v0 = func_0021EB30(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    v0 = v0 & 0xf;
    v0 = (s32) ((u32) v0 + 0x7fffU);
    a0 = (s32) ((u32) v0 + 0xce2U); v0 = func_001454C0(a0);
    a0 = s0;
    a2 = v0;
    a1 = 0;
    a3 = 0;
    a4 = 8; func_001509A0(a0, a1, a2, a3, a4);
    a0 = 0x8cdc; v0 = func_001454C0(a0);
    s0 = v0;
    a0 = s1; v0 = func_0021EB30(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    v0 = v0 & 0xf0;
    v0 = (s32) v0 >> 4;
    v0 = (s32) ((u32) v0 + 0x7fffU);
    a0 = (s32) ((u32) v0 + 0xce2U); v0 = func_001454C0(a0);
    a1 = 8;
    a0 = s0;
    a2 = v0;
    a3 = 0;
    a4 = a1; func_001509A0(a0, a1, a2, a3, a4);
    v1 = s2 & 0xff;
    v0 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0x2350U);
    v1 = (s32) ((u32) v1 << 2);
    s0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) s3);
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 104;
    v0 = (*(volatile u8 *) (u32) (v0 + 102));
    a2 = (s32) ((u32) v0 + 0xfb9U); func_0017DF60(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 104;
    a0 = (*(volatile s32 *) (u32) s3);
    v0 = (*(volatile u8 *) (u32) (v0 + 102));
    a2 = (s32) ((u32) v0 + 0xfb9U); func_0017DF20(a0, a1, a2);
    if (s1 != 0) { a0 = (*(volatile s32 *) (u32) s3); goto L_00257B00; }
    a0 = (*(volatile s32 *) (u32) s3);
    a1 = 0x8cdd;
    a2 = 10200; func_0017DF60(a0, a1, a2);
    goto L_00257B10;
L_00257B00:;
    a1 = 0x8cdd;
    a2 = 10202; func_0017DF60(a0, a1, a2);
L_00257B10:;
    return;
}
