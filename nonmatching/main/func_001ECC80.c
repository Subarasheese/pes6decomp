/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001ECC80(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v1 = 4;
    s2 = a0;
    a0 = (s32) 0x3a0000U;
    a3 = (*(volatile s32 *) (u32) (a1 + 16));
    a0 = (s32) ((u32) a0 + 0xffff93c0U);
    a2 = (s32) ((u32) a3 << 2);
    a0 = (s32) ((u32) a0 + (u32) a2);
    { s32 c_ = a3 == v1; s0 = (*(volatile s32 *) (u32) a0); if (c_) goto L_001ECD08; }
    s1 = (*(volatile s32 *) (u32) a1);
L_001ECCBC:;
    v1 = (*(volatile u8 *) (u32) (s1 + 284));
    if (v1 == 0) goto L_001ECCE8;
    v1 = (*(volatile u8 *) (u32) (s1 + 285));
    v1 = (s32) v1 >> 1;
    v1 = v1 & 0x1;
    if (v1 != 0) goto L_001ECCE8;
    a0 = s2;
    { u32 t_ = (u32) s0; a1 = s1; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_001ECCE8:;
    v1 = (*(volatile u8 *) (u32) (s1 + 285));
    v1 = v1 & 0xfd;
    (*(volatile u8 *) (u32) (s1 + 285)) = (u8) v1;
    s1 = (*(volatile s32 *) (u32) (s1 + 8));
    if (s1 != 0) goto L_001ECCBC;
    goto L_001ECD30;
L_001ECD08:;
    s1 = (*(volatile s32 *) (u32) a1);
L_001ECD0C:;
    v1 = (*(volatile u8 *) (u32) (s1 + 52));
    if (v1 != 0) { a0 = s2; goto L_001ECD38; }
L_001ECD18:;
    s1 = (*(volatile s32 *) (u32) (s1 + 4));
    if (s1 != 0) goto L_001ECD0C;
L_001ECD30:;
    goto L_001ECD48;
L_001ECD38:;
    { u32 t_ = (u32) s0; a1 = s1; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_001ECD18;
L_001ECD48:;
    return v0;
}
