/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_GetUnavailableFlag(void);
s32 func_0023E090(void);

s32 func_0024E650(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s1 = 8;
    s0 = 255; v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_0024E678;
    s1 = 2;
L_0024E678:;
    v0 = (s32) 0x590000U;
    v1 = 1;
    v0 = (*(volatile s8 *) (u32) (v0 + 7605));
    if (v0 != v1) { v0 = 255; goto L_0024E6C0; }
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x3e0000U;
    a1 = (*(volatile s8 *) (u32) (v0 + 7606));
    v1 = (s32) ((u32) v1 + 0xffff8be0U);
    a0 = (s32) ((u32) a1 << 2);
    v0 = (*(volatile s32 *) (u32) (gp + -22608));
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = v0 & v1;
    if (v0 == 0) goto L_0024E6BC;
    s0 = a1;
L_0024E6BC:;
    v0 = 255;
L_0024E6C0:;
    if (s0 != v0) { a0 = 255; goto L_0024E6F4; }
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 == v1) { s0 = 0; goto L_0024E6F0; }
    v0 = func_0023E090();
    if (v0 == 0) goto L_0024E6F0;
    s0 = 0;
L_0024E6F0:;
    a0 = 255;
L_0024E6F4:;
    if (s0 != a0) { v0 = s0; goto L_0024E754; }
    { s32 c_ = s1 <= 0; a2 = 0; if (c_) goto L_0024E740; }
    v1 = (*(volatile s32 *) (u32) (gp + -22608));
    a1 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffff8be0U);
L_0024E710:;
    v0 = (*(volatile s32 *) (u32) a1);
    v0 = v1 & v0;
    if (v0 == 0) goto L_0024E728;
    s0 = a2;
L_0024E728:;
    if (s0 != a0) goto L_0024E740;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < s1;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_0024E710; }
L_0024E740:;
    v0 = 255;
    if (s0 != v0) goto L_0024E750;
    s0 = 0;
L_0024E750:;
    v0 = s0;
L_0024E754:;
    return v0;
}
