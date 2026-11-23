/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0063B6E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = (s32) 0x660000U;
    a3 = (s32) 0x660000U;
    a4 = (*(volatile s8 *) (u32) (v1 + -11248));
    a1 = (s32) 0x660000U;
    a3 = (s32) ((u32) a3 + 0xffffb170U);
    a1 = (s32) ((u32) a1 + 0xffff8b00U);
    a0 = (s32) 0x660000U;
    v0 = 0;
    v1 = (s32) 0x660000U;
    a4 = (s32) ((u32) a4 << 2);
    a2 = (*(volatile s32 *) (u32) (v1 + -11240));
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (*(volatile s32 *) (u32) a3);
    v1 = (s32) 0x660000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -11224));
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (*(volatile u16 *) (u32) v1);
    a1 = (s32) ((u32) a2 + (u32) a3);
    at = v1 < a1;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (a0 + -11240)) = (u32) a1; if (c_) goto L_0063B73C; }
    v0 = 1;
L_0063B73C:;
    return v0;
}
