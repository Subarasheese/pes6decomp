/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00223960(s32);
s32 func_00223AE0(void);

s32 func_0021F5B0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0 & 0xffff;
    v1 = s1 < 64;
    { s32 c_ = v1 != 0; s0 = a1; if (c_) goto L_0021F604; }
    at = s1 < 204;
    if (at == 0) { v1 = (s32) ((u32) s1 + 0xfffffedaU); goto L_0021F608; }
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s1 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) v0 + (u32) v1); goto L_0021F620;
L_0021F604:;
    v1 = (s32) ((u32) s1 + 0xfffffedaU);
L_0021F608:;
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) { a0 = 0; goto L_0021F620; }
    v0 = func_00223960(a0);
    a0 = (*(volatile s32 *) (u32) v0);
L_0021F620:;
    if (a0 == 0) { ; goto L_0021F644; }
    v1 = s0 & 0xff;
    v1 = v1 < 12;
    if (v1 != 0) { (*(volatile u8 *) (u32) (a0 + 70)) = (u8) s0; goto L_0021F640; }
    s0 = 0;
    (*(volatile u8 *) (u32) (a0 + 70)) = (u8) s0;
L_0021F640:;
L_0021F644:;
    return v0;
}
