/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00102C80(void) {
    s32 v0 = 0, v1 = 0;

    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi29" : "=r"(t_)); v1 = t_; }
    v0 = v1 & 0x200;
    { s32 c_ = v0 == 0; v0 = v1 & 0x400; if (c_) goto L_00102C98; }
    v1 = 1; goto L_00102CC0;
L_00102C98:;
    { s32 c_ = v0 == 0; v0 = v1 & 0x800; if (c_) goto L_00102CA8; }
    v1 = 2; goto L_00102CC0;
L_00102CA8:;
    { s32 c_ = v0 == 0; v0 = v1 & 0x100; if (c_) goto L_00102CB8; }
    v1 = 3; goto L_00102CC0;
L_00102CB8:;
    v1 = 4;
    if (v0 == 0) v1 = 0;
L_00102CC0:;
    v0 = v1; return v0;
}
