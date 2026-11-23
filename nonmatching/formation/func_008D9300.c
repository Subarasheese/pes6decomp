/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00D0F610(s32, s32, s32, s32);

s32 func_008D9300(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s1 = a0;
    s0 = s1 & 0xff;
    at = s0 < 8;
    { s32 c_ = at == 0; v0 = 0; if (c_) goto L_008D938C; }
    v0 = (*(volatile u8 *) (u32) (gp + -20084));
    if (v0 != 0) goto L_008D9338;
    v1 = 0; goto L_008D934C;
L_008D9338:;
    v0 = func_00D0F610(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v1 = 0; goto L_008D934C; }
L_008D934C:;
    if (v1 == 0) { v0 = s0 < 8; goto L_008D935C; }
    v0 = 0; goto L_008D938C;
L_008D935C:;
    if (v0 != 0) { v1 = s1 & 0xff; goto L_008D936C; }
    v1 = 0; goto L_008D9380;
L_008D936C:;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0x5880U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
L_008D9380:;
    v0 = (s32) 0x300000U;
    v0 = v0 | 0xf;
    v0 = v1 & v0;
L_008D938C:;
    return v0;
}
