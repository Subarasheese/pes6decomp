/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
s32 func_00223BA0(void);
void memcpy(s32, s32, s32);
s32 strcmp(s32, s32);

s32 func_00220D00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s4 = a0;
    at = s4 < 29;
    s3 = a2;
    s2 = a3;
    { s32 c_ = at == 0; s0 = 1; if (c_) goto L_00220ECC; }
    v0 = func_00223BA0();
    at = s4 < 29;
    if (at == 0) goto L_00220D60;
    v1 = (s32) ((u32) s4 << 3);
    a0 = (s32) ((u32) v1 - (u32) s4);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
L_00220D60:;
    if (s0 != 0) { v0 = (s32) ((u32) v0 + 0x15U); goto L_00220D68; }
L_00220D68:;
    s1 = v0;
    v0 = 1;
    if (s2 != v0) { at = s4 < 29; goto L_00220DF0; }
    v0 = func_00223BA0();
    a0 = (s32) ((u32) s4 << 3);
    v1 = 1;
    a1 = (s32) ((u32) a0 - (u32) s4);
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    { s32 c_ = v1 != 0; v0 = (s32) ((u32) v0 + (u32) a0); if (c_) goto L_00220DA8; }
    (*(volatile u8 *) (u32) (v0 + 82)) = (u8) 0; goto L_00220DAC;
L_00220DA8:;
    (*(volatile u8 *) (u32) (v0 + 83)) = (u8) 0;
L_00220DAC:;
    at = s4 < 29;
    if (at == 0) { v0 = 0; goto L_00220DD8; }
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) s4 << 3);
    v1 = (s32) ((u32) v1 + 0xffff98f0U);
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
L_00220DD8:;
    a0 = s1;
    a1 = v0;
    a2 = 61; memcpy(a0, a1, a2);
    v0 = 1; goto L_00220EC4;
L_00220DF0:;
    if (at == 0) { v0 = 0; goto L_00220E18; }
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) s4 << 3);
    v1 = (s32) ((u32) v1 + 0xffff98f0U);
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
L_00220E18:;
    s0 = v0;
    a0 = v0;
    a1 = s3; v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_00220E7C;
    v0 = func_00223BA0();
    a0 = (s32) ((u32) s4 << 3);
    v1 = 1;
    a1 = (s32) ((u32) a0 - (u32) s4);
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    { s32 c_ = v1 != 0; v0 = (s32) ((u32) v0 + (u32) a0); if (c_) goto L_00220E60; }
    (*(volatile u8 *) (u32) (v0 + 82)) = (u8) 0; goto L_00220E64;
L_00220E60:;
    (*(volatile u8 *) (u32) (v0 + 83)) = (u8) 0;
L_00220E64:;
    a0 = s1;
    a1 = s0;
    a2 = 61; memcpy(a0, a1, a2);
    goto L_00220EC0;
L_00220E7C:;
    v0 = func_00223BA0();
    a0 = (s32) ((u32) s4 << 3);
    v1 = 1;
    a1 = (s32) ((u32) a0 - (u32) s4);
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    { s32 c_ = v1 != 0; v0 = (s32) ((u32) v0 + (u32) a0); if (c_) goto L_00220EAC; }
    (*(volatile u8 *) (u32) (v0 + 82)) = (u8) v1; goto L_00220EB0;
L_00220EAC:;
    (*(volatile u8 *) (u32) (v0 + 83)) = (u8) v1;
L_00220EB0:;
    a0 = s1;
    a1 = s3;
    a2 = 61; memcpy(a0, a1, a2);
L_00220EC0:;
    v0 = 1;
L_00220EC4:;
    goto L_00220ED4;
L_00220ECC:;
    v0 = 0;
L_00220ED4:;
    return v0;
}
