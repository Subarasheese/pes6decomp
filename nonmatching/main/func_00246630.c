/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002211E0(void);
s32 func_002DCA30(void);

s32 func_00246630(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    v0 = func_002211E0();
    s0 = v0; v0 = func_002DCA30();
    if (v0 != 0) { v0 = 0; goto L_002466BC; }
    v1 = s1 & 0xffff;
    v0 = v1 < 57;
    if (v0 != 0) goto L_002466B8;
    at = v1 < 64;
    if (at == 0) goto L_002466B8;
    a0 = (s32) ((u32) v1 + 0x8fU);
    { s32 c_ = a0 >= 0; v0 = (s32) a0 >> 5; if (c_) goto L_00246688; }
    v0 = (s32) ((u32) a0 + 0x1fU);
    v0 = (s32) v0 >> 5;
L_00246688:;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 << 5);
    v1 = (s32) ((u32) s0 + (u32) v1);
    a0 = (s32) ((u32) a0 - (u32) v0);
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = 1;
    a0 = (s32) ((u32) v0 << (a0 & 31));
    v1 = v1 & a0;
    if (v1 == 0) goto L_002466B8;
    goto L_002466C0;
L_002466B8:;
    v0 = 0;
L_002466BC:;
L_002466C0:;
    return v0;
}
