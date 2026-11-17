/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002A11B0(s32, s32);
void func_002A95F0(s32, s32, s32);
void func_00BBD190(s32, s32, s32, s32);

void func_00BBCFF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    a2 = s4 & 0xff;
    a0 = (s32) ((u32) sp + 0x60U);
    s1 = 0;
    s0 = 0; func_002A95F0(a0, a1, a2);
    a1 = s4;
    a0 = (s32) ((u32) sp + 0x70U); func_002A11B0(a0, a1);
    at = (u64) s3 < (u64) (s64) 43;
    if (at == 0) goto L_00BBD16C;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) s3 << 2);
    v1 = (s32) ((u32) v1 + 0x1ac0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbbd060U) goto L_00BBD060; if (t_ == 0xbbd074U) goto L_00BBD074; if (t_ == 0xbbd088U) goto L_00BBD088; if (t_ == 0xbbd0a8U) goto L_00BBD0A8; if (t_ == 0xbbd0d0U) goto L_00BBD0D0; if (t_ == 0xbbd0f0U) goto L_00BBD0F0; if (t_ == 0xbbd104U) goto L_00BBD104; if (t_ == 0xbbd118U) goto L_00BBD118; if (t_ == 0xbbd138U) goto L_00BBD138; if (t_ == 0xbbd164U) goto L_00BBD164; }
L_00BBD060:;
    v0 = s2 & 0xff;
    if (v0 != 0) { s0 = s0 | 0x404; goto L_00BBD148; }
    s0 = s0 | 0x808; goto L_00BBD148;
L_00BBD074:;
    v0 = s2 & 0xff;
    if (v0 != 0) { s0 = s0 | 0x4; goto L_00BBD148; }
    s0 = s0 | 0x8; goto L_00BBD148;
L_00BBD088:;
    v0 = s2 & 0xff;
    if (v0 != 0) { s0 = s0 | 0x4; goto L_00BBD0A0; }
    s0 = s0 | 0x8;
    s1 = s1 | 0x1; goto L_00BBD148;
L_00BBD0A0:;
    s1 = s1 | 0x2; goto L_00BBD148;
L_00BBD0A8:;
    v0 = s2 & 0xff;
    if (v0 != 0) { v0 = (s32) 0x10000U; goto L_00BBD0C4; }
    v0 = (s32) 0x20000U;
    s1 = s1 | 0x1;
    s0 = s0 | v0; goto L_00BBD148;
L_00BBD0C4:;
    s1 = s1 | 0x2;
    s0 = s0 | v0; goto L_00BBD148;
L_00BBD0D0:;
    v0 = s2 & 0xff;
    if (v0 != 0) { s0 = s0 | 0x4; goto L_00BBD0E8; }
    s0 = s0 | 0x8;
    s1 = s1 | 0x40; goto L_00BBD148;
L_00BBD0E8:;
    s1 = s1 | 0x80; goto L_00BBD148;
L_00BBD0F0:;
    v0 = s2 & 0xff;
    if (v0 != 0) { s0 = s0 | 0x10; goto L_00BBD148; }
    s0 = s0 | 0x20; goto L_00BBD148;
L_00BBD104:;
    v0 = s2 & 0xff;
    if (v0 != 0) { s0 = s0 | 0x1000; goto L_00BBD148; }
    s0 = s0 | 0x2000; goto L_00BBD148;
L_00BBD118:;
    v0 = s2 & 0xff;
    if (v0 != 0) { s0 = s0 | 0x1000; goto L_00BBD130; }
    s0 = s0 | 0x2000;
    s1 = s1 | 0x1; goto L_00BBD148;
L_00BBD130:;
    s1 = s1 | 0x2; goto L_00BBD148;
L_00BBD138:;
    v0 = s2 & 0xff;
    if (v0 != 0) { s0 = s0 | 0x4000; goto L_00BBD148; }
    s0 = s0 | 0x8000;
L_00BBD148:;
    a2 = s1;
    a3 = s0;
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = (s32) ((u32) sp + 0x60U); func_00BBD190(a0, a1, a2, a3);
    goto L_00BBD174;
L_00BBD164:;
    v0 = 0; goto L_00BBD170;
L_00BBD16C:;
    v0 = 0;
L_00BBD170:;
L_00BBD174:;
    return;
}
