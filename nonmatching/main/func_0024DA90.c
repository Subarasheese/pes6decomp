/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00221280(s32);
void func_0023EC10(s32, s32);
s32 func_00245160(s32);
s32 func_00245190(s32);
void func_00245390(s32, s32, s32, s32);
void memcpy(s32, s32, s32);
void strcpy(s32, s32);

void func_0024DA90(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    s4 = 0;
    s2 = (s32) 0x540000U;
    s1 = (s32) 0x540000U;
    s0 = (s32) 0x3b0000U;
    s2 = (s32) ((u32) s2 + 0xffffcb60U);
    s1 = (s32) ((u32) s1 + 0xffffcbb0U);
    s0 = (s32) ((u32) s0 + 0xffffa200U);
L_0024DAC8:;
    v1 = (*(volatile s32 *) (u32) s2);
    v0 = 1;
    if (v1 != v0) goto L_0024DB60;
    a2 = (*(volatile s8 *) (u32) (s1 + 2));
    a0 = (s32) ((u32) s0 + 0x4U);
    v1 = (*(volatile s8 *) (u32) (s1 + 50));
    a1 = (s32) ((u32) s1 + 0x4U);
    v0 = (*(volatile s8 *) (u32) (s1 + 51));
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) a2;
    (*(volatile u8 *) (u32) (s0 + 50)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 51)) = (u8) v0;
    v0 = (*(volatile s8 *) (u32) (s1 + 3));
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v0; strcpy(a0, a1);
    a0 = s4; v0 = func_00245160(a0);
    s3 = v0;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_0024DB48;
    a0 = s4; v0 = func_00245190(a0);
    a0 = v0;
    a1 = s3;
    a2 = 36; memcpy(a0, a1, a2);
    goto L_0024DB60;
L_0024DB48:;
    a0 = s4; v0 = func_00221280(a0);
    a0 = v0;
    a1 = s3;
    a2 = 54; memcpy(a0, a1, a2);
L_0024DB60:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 8;
    s2 = (s32) ((u32) s2 + 0x4U);
    s1 = (s32) ((u32) s1 + 0x34U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x34U); if (c_) goto L_0024DAC8; }
    func_00245390(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -22596));
    v0 = 1;
    if (v1 != v0) goto L_0024DBC0;
    a1 = (s32) 0x3b0000U;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0xffffa200U);
    v1 = 2;
L_0024DBA0:;
    v0 = (*(volatile s8 *) (u32) (a1 + 2));
    if (v0 != 0) goto L_0024DBB0;
    (*(volatile u8 *) (u32) (a1 + 2)) = (u8) v1;
L_0024DBB0:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < 8;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x34U); if (c_) goto L_0024DBA0; }
L_0024DBC0:;
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 8; func_0023EC10(a0, a1);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 2; func_0023EC10(a0, a1);
    return;
}
