/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 sceVuCheckBusy(s32 a0) {
    s32 v0 = 0, v1 = 0;

    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi29" : "=r"(t_)); v1 = t_; }
    a0 = 1;
    v0 = v1 & 0xf;
    { s32 c_ = v0 != a0; v1 = v1 & 0xf00; if (c_) goto L_00102A9C; }
    v0 = 1; return v0;
L_00102A9C:;
    v0 = a0;
    v1 = v1 ^ 0x100;
    if (v1 != 0) v0 = 0; return v0;
}
