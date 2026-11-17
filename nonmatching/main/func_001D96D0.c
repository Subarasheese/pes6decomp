/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E7D10(s32, s32);

s32 func_001D96D0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;

    a1 = (*(volatile s32 *) (u32) (a0 + 44));
    v1 = (*(volatile s32 *) (u32) (a0 + 32));
    s3 = (*(volatile s32 *) (u32) (a0 + 40));
    a1 = (*(volatile s32 *) (u32) (a1 + 16));
    a0 = (*(volatile u16 *) (u32) v1);
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    s1 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) s1);
    at = 0 < v1;
    { s32 c_ = at == 0; s5 = 0; if (c_) goto L_001D97B8; }
    s2 = 0;
L_001D972C:;
    v1 = (*(volatile s32 *) (u32) (s1 + 12));
    v1 = (s32) ((u32) v1 + (u32) s2);
    s0 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (s0 + 1));
    if (v1 == 0) { (*(volatile u8 *) (u32) (s3 + 18)) = (u8) 0; goto L_001D97A0; }
    s6 = (*(volatile s32 *) (u32) (s3 + 4));
    v1 = 1;
    (*(volatile u8 *) (u32) (s3 + 18)) = (u8) v1;
    v1 = (*(volatile u16 *) (u32) (s0 + 4));
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
    at = 0 < v1;
    { s32 c_ = at == 0; s4 = 0; if (c_) goto L_001D97A0; }
L_001D9768:;
    a1 = s4 & 0x1;
    a0 = s6; v0 = func_001E7D10(a0, a1);
    if (v0 != 0) goto L_001D9788;
    (*(volatile u8 *) (u32) (s3 + 18)) = (u8) 0; goto L_001D97A0;
L_001D9788:;
    v1 = (*(volatile u16 *) (u32) (s0 + 4));
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
    v1 = s4 < v1;
    { s32 c_ = v1 != 0; s6 = (s32) ((u32) s6 + 0x10U); if (c_) goto L_001D9768; }
L_001D97A0:;
    v1 = (*(volatile u8 *) (u32) s1);
    s5 = (s32) ((u32) s5 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v1 = s5 < v1;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x14U); if (c_) goto L_001D972C; }
L_001D97B8:;
    return v0;
}
