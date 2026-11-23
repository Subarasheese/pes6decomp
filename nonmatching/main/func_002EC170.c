/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7840(s32, s32);
void func_001DEF30(s32, s32);
void func_002DF680(s32, s32);
void func_002E3230(s32, s32);
void func_002E44B0(s32, s32);

void func_002EC170(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    (*(volatile u32 *) (u32) (a0 + 64)) = (u32) a1;
    a1 = (*(volatile u8 *) (u32) (a0 + 64));
    a0 = (*(volatile s32 *) (u32) (a0 + 132)); func_001D7840(a0, a1);
    s2 = 0;
    s1 = 0;
    s0 = s3;
L_002EC1A8:;
    a1 = (*(volatile s32 *) (u32) (s3 + 236));
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0x3e20U);
    v0 = -1;
    a0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) s1 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) goto L_002EC1E8;
    a0 = (*(volatile s32 *) (u32) (s0 + 108));
    a1 = (*(volatile u8 *) (u32) (s3 + 64)); func_001D7840(a0, a1);
L_002EC1E8:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 3;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002EC1A8; }
    a0 = (*(volatile s32 *) (u32) (s3 + 136));
    a1 = (*(volatile u8 *) (u32) (s3 + 64)); func_001D7840(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s3 + 140));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (*(volatile u8 *) (u32) (s3 + 64)); func_001DEF30(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s3 + 144));
    if (v0 == 0) { s0 = 0; goto L_002EC234; }
    a1 = (*(volatile u8 *) (u32) (s3 + 64));
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001DEF30(a0, a1);
    s0 = 0;
L_002EC234:;
    s1 = s3;
L_002EC238:;
    a1 = (*(volatile s32 *) (u32) (s3 + 64));
    a0 = (*(volatile s32 *) (u32) (s1 + 88)); func_002DF680(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002EC238; }
    a1 = (*(volatile s32 *) (u32) (s3 + 64));
    a0 = (*(volatile s32 *) (u32) (s3 + 96)); func_002DF680(a0, a1);
    a1 = (*(volatile s32 *) (u32) (s3 + 64));
    a0 = (*(volatile s32 *) (u32) (s3 + 100)); func_002E44B0(a0, a1);
    a1 = (*(volatile s32 *) (u32) (s3 + 64));
    a0 = (*(volatile s32 *) (u32) (s3 + 84)); func_002E3230(a0, a1);
    return;
}
