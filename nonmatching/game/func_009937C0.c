/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_009937C0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 == 0) goto L_00993854;
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_009937EC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_009937EC:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 64;
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 22));
    if (v1 != v0) goto L_00993854;
    v0 = (*(volatile u16 *) (u32) (a0 + 24));
    if (v0 == 0) goto L_00993854;
    v0 = (*(volatile u8 *) (u32) (a0 + 74));
    at = (u64) v0 < (u64) (s64) 9;
    if (at == 0) goto L_00993854;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) a0 + 0xffffa1d0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x99384cU) goto L_0099384C; if (t_ == 0x993854U) goto L_00993854; }
L_0099384C:;
    goto L_00993858;
L_00993854:;
    v0 = 255;
L_00993858:;
    return v0;
}
