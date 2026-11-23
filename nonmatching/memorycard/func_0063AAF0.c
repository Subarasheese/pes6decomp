/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00226240(void);
s32 func_002630F0(void);
s32 func_00CDCCB0(s32, s32, s32, s32);

s32 func_0063AAF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    at = (u64) v0 < (u64) (s64) 15;
    { s32 c_ = at == 0; s0 = 14; if (c_) goto L_0063AB2C; }
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb180U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x63ab2cU) goto L_0063AB2C; if (t_ == 0x63ab34U) goto L_0063AB34; if (t_ == 0x63ab3cU) goto L_0063AB3C; if (t_ == 0x63ab44U) goto L_0063AB44; if (t_ == 0x63ab64U) goto L_0063AB64; if (t_ == 0x63ab6cU) goto L_0063AB6C; }
L_0063AB2C:;
    s0 = 14; goto L_0063ABA0;
L_0063AB34:;
    s0 = 3; goto L_0063ABA0;
L_0063AB3C:;
    s0 = 4; goto L_0063ABA0;
L_0063AB44:;
    v0 = func_00226240();
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 != v0) { s0 = 11; goto L_0063ABA0; }
    s0 = 12; goto L_0063ABA0;
L_0063AB64:;
    s0 = 5; goto L_0063ABA0;
L_0063AB6C:;
    v0 = func_002630F0();
    if (v0 == 0) { v0 = s0; goto L_0063ABA4; }
    v0 = func_00CDCCB0(a0, a1, a2, a3);
    v1 = 2;
    if (v0 == v1) { s0 = 9; goto L_0063ABA0; }
    v1 = 1;
    if (v0 == v1) { s0 = 8; goto L_0063ABA0; }
    s0 = 7;
L_0063ABA0:;
    v0 = s0;
L_0063ABA4:;
    return v0;
}
