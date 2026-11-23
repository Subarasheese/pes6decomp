/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00102C80(void);

s32 func_00102B50(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    s0 = 0; v0 = func_00102C80();
    v1 = v0;
    v0 = (u64) v1 < (u64) (s64) 5;
    { s32 c_ = v0 == 0; v0 = (s32) 0x3c0000U; if (c_) goto L_00102B9C; }
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x38f0U);
    v1 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) a0; ; if (t_ == 0x102b8cU) goto L_00102B8C; if (t_ == 0x102b98U) goto L_00102B98; if (t_ == 0x102b9cU) goto L_00102B9C; }
L_00102B8C:;
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi28" : "=r"(t_)); v0 = t_; }
    v0 = v0 | 0x100;
    __asm__ volatile("ctc2.ni %0, $vi28" : : "r"((s32) v0));
L_00102B98:;
    s0 = 1;
L_00102B9C:;
    v0 = s0;
    return v0;
}
