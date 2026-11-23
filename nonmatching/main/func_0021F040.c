/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00223960(s32);
s32 func_00223AE0(void);

s32 func_0021F040(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0 & 0xffff;
    v0 = s0 < 64;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + 0xfffffedaU); goto L_0021F094; }
    at = s0 < 204;
    if (at == 0) goto L_0021F090;
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s0 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0021F0AC;
L_0021F090:;
    v0 = (s32) ((u32) s0 + 0xfffffedaU);
L_0021F094:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = 0; goto L_0021F0AC; }
    v0 = func_00223960(a0);
    v0 = (*(volatile s32 *) (u32) v0);
L_0021F0AC:;
    v0 = (*(volatile u8 *) (u32) (v0 + 81));
    return v0;
}
