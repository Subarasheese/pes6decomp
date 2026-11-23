/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void SD_stop(s32);
s32 func_00152130(s32, s32);
void func_001D5C40(s32, s32, s32, s32);
void func_001DD560(s32, s32, s32, s32);
void func_001E7140(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001F0210(s32, s32, s32, s32);
s32 func_0021DF90(s32);
s32 func_0021E000(s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_002405A0(s32, s32, s32, s32);
s32 func_0026DA40(s32);
s32 func_008B32E0(s32, s32, s32, s32);

s32 func_00934A80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s8 *) (u32) (gp + -18696));
    v0 = 3;
    s0 = (s32) 0x540000U;
    { s32 c_ = v1 == v0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_00934B64; }
    v0 = 2;
    if (v1 == v0) { a0 = 1; goto L_00934B44; }
    a0 = 1;
    if (v1 == a0) { a1 = 8; goto L_00934AE8; }
    if (v1 == 0) { v0 = (s32) 0x9a080000U; goto L_00934AD0; }
    v0 = 0; goto L_00934BC4;
L_00934AD0:;
    a0 = v0 | 0x8423; SD_stop(a0);
    v0 = (*(volatile s8 *) (u32) (gp + -18696));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18696)) = (u8) v0; goto L_00934BC0;
L_00934AE8:;
    v0 = func_00152130(a0, a1);
    v1 = 1;
    if (v0 != v1) goto L_00934BC0;
    s2 = 0;
    s1 = 0;
L_00934B04:;
    v0 = (*(volatile s32 *) (u32) (gp + -18672));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 33;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00934B04; }
    a0 = (s32) ((u32) gp + 0xffffb710U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x14U); func_002405A0(a0, a1, a2, a3);
    v0 = (*(volatile s8 *) (u32) (gp + -18696));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18696)) = (u8) v0; goto L_00934BC0;
L_00934B44:;
    v0 = func_0026DA40(a0);
    if (v0 != 0) goto L_00934BC0;
    v0 = (*(volatile s8 *) (u32) (gp + -18696));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18696)) = (u8) v0; goto L_00934BC0;
L_00934B64:;
    a0 = 2; func_0023F510(a0, a1, a2, a3);
    a0 = 2; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 22; v0 = func_0021DF90(a0);
    a0 = v0; func_001F0210(a0, a1, a2, a3);
    a0 = 332; v0 = func_0021E000(a0);
    a0 = v0; func_001E7140(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x10000U;
    a0 = v0 | 0x388; func_001D5C40(a0, a1, a2, a3);
    a0 = 7; func_001DD560(a0, a1, a2, a3);
    v0 = (s32) 0x9a080000U;
    (*(volatile u8 *) (u32) (gp + -18696)) = (u8) 0;
    a0 = v0 | 0x8407; SD_call(a0);
    v0 = 1; goto L_00934BC4;
L_00934BC0:;
    v0 = 0;
L_00934BC4:;
    return v0;
}
