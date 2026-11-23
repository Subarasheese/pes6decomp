/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002209F0(s32, s32);
void func_002250C0(s32, s32);
void func_002251E0(s32, s32);
void func_00225310(s32, s32);
void func_002258A0(s32, s32);
void func_00225C00(s32, s32, s32, s32);
void func_002381E0(s32);

void func_0094BAF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x960000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 32545));
    s2 = 0; func_002381E0(a0);
    s1 = (s32) 0x960000U;
    s4 = 0;
    s1 = (s32) ((u32) s1 + 0x7f20U);
L_0094BB28:;
    s3 = 0;
    s0 = s1;
L_0094BB30:;
    a0 = (*(volatile u16 *) (u32) (s0 + 5708));
    v1 = 0xffff;
    if (a0 == v1) goto L_0094BBE8;
    v1 = 281;
    if (a0 == v1) goto L_0094BBE8;
    a1 = s2 & 0xff; func_00225C00(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s0 + 5712));
    a0 = s2 & 0xff; func_002258A0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s0 + 5712));
    if (v1 == 0) goto L_0094BBE0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0x7f20U);
    v1 = (s32) ((u32) v1 << 7);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) ((u32) sp + 0x60U);
    a0 = (s32) ((u32) v0 + 0x29cU); func_002209F0(a0, a1);
    a0 = s2 & 0xff;
    a1 = (s32) ((u32) sp + 0x60U); func_00225310(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s0 + 5712));
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0x7f20U);
    a0 = s2 & 0xff;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    v1 = (s32) ((u32) v1 << 7);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) ((u32) v0 + 0x264U); func_002251E0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s0 + 5712));
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0x7f20U);
    a0 = s2 & 0xff;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    v1 = (s32) ((u32) v1 << 7);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) ((u32) v0 + 0x24cU); func_002250C0(a0, a1);
L_0094BBE0:;
    s2 = (s32) ((u32) s2 + 0x1U);
L_0094BBE8:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 10;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_0094BB30; }
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 2;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x50U); if (c_) goto L_0094BB28; }
    return;
}
