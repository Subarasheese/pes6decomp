/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_GetHomeStadium(s32, s32, s32, s32);
s32 func_00223960(s32);
s32 func_00223AE0(void);

s32 func_0021ED50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s1 = a0;
    s2 = s1 & 0xffff;
    v1 = s2 < 64;
    { s32 c_ = v1 != 0; s0 = a1; if (c_) goto L_0021ED84; }
    at = s2 < 204;
    if (at != 0) { v0 = s2 < 64; goto L_0021ED98; }
L_0021ED84:;
    v1 = (s32) ((u32) s2 + 0xfffffedaU);
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) { ; goto L_0021EE20; }
    v0 = s2 < 64;
L_0021ED98:;
    if (v0 != 0) { v0 = (s32) ((u32) s2 + 0xfffffedaU); goto L_0021EDD8; }
    at = s2 < 204;
    if (at == 0) goto L_0021EDD4;
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s2 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    s2 = (s32) ((u32) v0 + (u32) v1); goto L_0021EDF0;
L_0021EDD4:;
    v0 = (s32) ((u32) s2 + 0xfffffedaU);
L_0021EDD8:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { s2 = 0; goto L_0021EDF0; }
    a0 = s1; v0 = func_00223960(a0);
    s2 = (*(volatile s32 *) (u32) v0);
L_0021EDF0:;
    a0 = s1;
    a1 = 1; v0 = Pes6Team_GetHomeStadium(a0, a1, a2, a3);
    v1 = s0 & 0xff;
    a0 = v0 & 0xff;
    { s32 c_ = a0 != v1; (*(volatile u8 *) (u32) (s2 + 81)) = (u8) s0; if (c_) goto L_0021EE14; }
    (*(volatile u8 *) (u32) (s2 + 83)) = (u8) 0; goto L_0021EE1C;
L_0021EE14:;
    v1 = 1;
    (*(volatile u8 *) (u32) (s2 + 83)) = (u8) v1;
L_0021EE1C:;
L_0021EE20:;
    return v0;
}
