/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002211E0(void);

s32 func_002466D0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    s0 = a0; v0 = func_002211E0();
    { s32 c_ = s0 >= 0; a0 = (s32) s0 >> 5; if (c_) goto L_002466F4; }
    v1 = (s32) ((u32) s0 + 0x1fU);
    a0 = (s32) v1 >> 5;
L_002466F4:;
    v1 = 176;
    if (s0 == v1) { v0 = 0; goto L_00246798; }
    v1 = 175;
    if (s0 == v1) goto L_00246738;
    v1 = 174;
    if (s0 == v1) goto L_00246738;
    v1 = 173;
    if (s0 == v1) goto L_00246738;
    v1 = 172;
    if (s0 == v1) goto L_00246738;
    v1 = 162; goto L_00246744;
L_00246738:;
    v0 = 0;
    goto L_00246798;
L_00246744:;
    if (s0 != v1) { v1 = 170; goto L_00246754; }
    v0 = 0; goto L_00246798;
L_00246754:;
    if (s0 != v1) { v1 = 196; goto L_00246764; }
    v0 = 0; goto L_00246798;
L_00246764:;
    if (s0 != v1) { a1 = (s32) ((u32) a0 << 2); goto L_00246774; }
    v0 = 0; goto L_00246798;
L_00246774:;
    v1 = (s32) ((u32) a0 << 5);
    a0 = (s32) ((u32) s0 - (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = 1;
    a0 = (s32) ((u32) v0 << (a0 & 31));
    v1 = v1 & a0;
    if (v1 == 0) { v0 = 0; goto L_00246798; }
L_00246798:;
    return v0;
}
