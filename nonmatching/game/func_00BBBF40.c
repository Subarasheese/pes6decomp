/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BBC060(s32, s32, s32, s32, s32);

void func_00BBBF40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v1 = a0 & 0xff;
    at = v1 < 23;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00BBBF94; }
    v0 = 255;
    if (v1 == v0) { a2 = 1; goto L_00BBBF68; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a2 = hi;
L_00BBBF68:;
    v1 = (s32) ((u32) a2 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) ((u32) v0 + 0xffffe5b4U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 45));
    if (v0 == 0) goto L_00BBBF94;
    a3 = 2;
L_00BBBF94:;
    a3 = a3 & 0xff;
    a2 = 10; v0 = func_00BBC060(a0, a1, a2, a3, a4); return;
}
