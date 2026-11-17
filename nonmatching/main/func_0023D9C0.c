/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);

s32 func_0023D9C0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;

L_0023D9C8:;
    a0 = 17; v0 = Pes6Random_Below(a0);
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7114)) = (u8) v0;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7114));
    v1 = (s32) ((u32) v1 + 0xfffffff4U);
    at = (u64) v1 < (u64) (s64) 6;
    { s32 c_ = at == 0; a1 = 1; if (c_) goto L_0023DA18; }
    a0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffff8960U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x23da10U) goto L_0023DA10; }
L_0023DA10:;
    a1 = 0;
L_0023DA18:;
    v1 = (u64) 0 < (u64) a1;
    v1 = v1 ^ 0x1;
    if (v1 != 0) goto L_0023D9C8;
    return v0;
}
