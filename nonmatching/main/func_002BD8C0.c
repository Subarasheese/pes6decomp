/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C13CB0(s32, s32, s32, s32);
s32 func_00C15050(s32, s32, s32, s32);
s32 func_00C163B0(s32, s32, s32, s32);
s32 func_00C17220(s32, s32, s32, s32);
s32 func_00C17EB0(s32, s32, s32, s32);
s32 func_00C18430(s32, s32, s32, s32);
s32 func_00C189A0(s32, s32, s32, s32);
s32 func_00C18EE0(s32, s32, s32, s32);
s32 func_00C18F20(s32, s32, s32, s32);
s32 func_00C20F30(s32, s32, s32, s32);
s32 func_00C5A000(s32, s32, s32, s32);

s32 func_002BD8C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    s0 = (s32) ((u32) gp + 0xffffa9d8U); v0 = func_00C18F20(a0, a1, a2, a3);
    v0 = func_00C189A0(a0, a1, a2, a3);
    v0 = func_00C17EB0(a0, a1, a2, a3);
    v0 = func_00C18EE0(a0, a1, a2, a3);
    if (v0 == 0) goto L_002BD90C;
    v0 = func_00C17220(a0, a1, a2, a3);
    v0 = func_00C18430(a0, a1, a2, a3);
    v0 = func_00C13CB0(a0, a1, a2, a3);
L_002BD90C:;
    v0 = func_00C15050(a0, a1, a2, a3);
    v0 = func_00C163B0(a0, a1, a2, a3);
    v0 = func_00C5A000(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s0);
    v1 = v1 & 0x10;
    if (v1 != 0) goto L_002BD93C;
L_002BD934:;
    goto L_002BD94C;
L_002BD93C:;
    v0 = func_00C20F30(a0, a1, a2, a3);
    goto L_002BD934;
L_002BD94C:;
    return v0;
}
