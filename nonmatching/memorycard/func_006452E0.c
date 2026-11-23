/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00237530(s32);
s32 func_00645050(void);

s32 func_006452E0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = func_00645050();
    v1 = v0 & 0xff;
    v0 = (s32) ((u32) gp + 0xffff840cU);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u16 *) (u32) v0); v0 = func_00237530(a0);
    a1 = 0;
    a0 = 0;
L_00645310:;
    v1 = (*(volatile u16 *) (u32) (v0 + 4404));
    if (v1 == 0) goto L_00645320;
    a0 = (s32) ((u32) a0 + 0x1U);
L_00645320:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v1 = a1 < 32;
    { s32 c_ = v1 != 0; v0 = (s32) ((u32) v0 + 0x2U); if (c_) goto L_00645310; }
    v0 = a0;
    return v0;
}
