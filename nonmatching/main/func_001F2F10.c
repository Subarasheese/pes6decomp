/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E62C0(void);

s32 func_001F2F10(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a1;
    s1 = (*(volatile s32 *) (u32) (a0 + 32));
    s2 = a0; v0 = func_001E62C0();
    v1 = v0 & 0x2;
    v0 = 2;
    if (v1 != v0) goto L_001F2F94;
    v0 = (*(volatile u8 *) (u32) (s2 + 1));
    v0 = v0 & 0x1;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s2 + 0x1U); if (c_) goto L_001F2FA0; }
    s3 = (*(volatile s32 *) (u32) (s2 + 44));
L_001F2F5C:;
    if (s3 == 0) goto L_001F2F90;
L_001F2F64:;
    v1 = (*(volatile u8 *) (u32) (s3 + 1));
    a0 = s3;
    v0 = (*(volatile u8 *) (u32) s0);
    v0 = v1 | v0;
    (*(volatile u8 *) (u32) (s3 + 1)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s3 + 60));
    { u32 t_ = (u32) v0; a1 = (s32) ((u32) s2 + 0x60U); v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    s3 = (*(volatile s32 *) (u32) (s3 + 56));
    { s32 c_ = s3 != 0; s1 = (s32) ((u32) s1 + (u32) v0); if (c_) goto L_001F2F64; }
L_001F2F90:;
    (*(volatile u32 *) (u32) (s2 + 36)) = (u32) s1;
L_001F2F94:;
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) 0;
    v0 = s1; goto L_001F2FCC;
L_001F2FA0:;
    v1 = (*(volatile u8 *) (u32) (s2 + 72));
    v0 = (s32) 0x3a0000U;
    v0 = (s32) ((u32) v0 + 0xffff9490U);
    a1 = s3;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a0 = s2; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    s3 = (*(volatile s32 *) (u32) (s2 + 44)); goto L_001F2F5C;
L_001F2FCC:;
    return v0;
}
