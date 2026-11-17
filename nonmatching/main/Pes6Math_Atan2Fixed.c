/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 Pes6Math_Atan2Fixed(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 hi = 0, lo = 0;

    if (a1 < 0) { a1 = (s32) ((u32) 0 - (u32) a1); goto L_001CD73C; }
    if (a0 < 0) { a0 = (s32) ((u32) 0 - (u32) a0); goto L_001CD724; }
    a2 = a1 < a0;
L_001CD6C4:;
    at = a1 < a0;
L_001CD6C8:;
    if (at == 0) goto L_001CD6DC;
    v0 = a1;
    a1 = a0;
    a0 = v0;
L_001CD6DC:;
    if (a1 == 0) goto L_001CD774;
L_001CD6E4:;
    if (a1 != 0) goto L_001CD6F0;
    a1 = 1;
L_001CD6F0:;
    at = (s32) 0x1000000U;
    at = a0 < at;
    if (at != 0) goto L_001CD784;
L_001CD700:;
    a0 = (s32) a0 >> 1;
    at = (s32) 0x1000000U;
    at = a0 < at;
    a1 = (s32) a1 >> 1;
    if (at == 0) goto L_001CD700;
    v0 = (s32) ((u32) a0 << 8); goto L_001CD788;
L_001CD724:;
    at = a1 < a0;
    if (at != 0) { a2 = 6; goto L_001CD734; }
    a2 = 7;
L_001CD734:;
    at = a1 < a0; goto L_001CD6C8;
L_001CD73C:;
    if (a0 < 0) { a0 = (s32) ((u32) 0 - (u32) a0); goto L_001CD75C; }
    at = a1 < a0;
    if (at != 0) { a2 = 2; goto L_001CD754; }
    a2 = 3;
L_001CD754:;
    goto L_001CD6C4;
L_001CD75C:;
    at = a1 < a0;
    if (at != 0) { a2 = 5; goto L_001CD76C; }
    a2 = 4;
L_001CD76C:;
    goto L_001CD6C4;
L_001CD774:;
    if (a0 != 0) goto L_001CD6E4;
    v0 = 0; goto L_001CD85C;
L_001CD784:;
    v0 = (s32) ((u32) a0 << 8);
L_001CD788:;
    at = (u64) a2 < (u64) (s64) 7;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a1); hi = (s32) ((s32) v0 % (s32) a1); lo = q_; }
    v1 = lo;
    v0 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 + 0x2670U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = at == 0; a0 = (*(volatile s16 *) (u32) v0); if (c_) goto L_001CD848; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + 0x2880U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x1cd7c8U) goto L_001CD7C8; if (t_ == 0x1cd7d4U) goto L_001CD7D4; if (t_ == 0x1cd7e8U) goto L_001CD7E8; if (t_ == 0x1cd7f8U) goto L_001CD7F8; if (t_ == 0x1cd80cU) goto L_001CD80C; if (t_ == 0x1cd820U) goto L_001CD820; if (t_ == 0x1cd834U) goto L_001CD834; }
L_001CD7C8:;
    v0 = (s64) ((u64) a0 << 48);
    v0 = v0 >> 48; goto L_001CD85C;
L_001CD7D4:;
    v0 = (s64) ((u64) a0 << 48);
    v1 = 16384;
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v1 - (u32) v0); goto L_001CD85C;
L_001CD7E8:;
    v0 = (s64) ((u64) a0 << 48);
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v0 + 0x4000U); goto L_001CD85C;
L_001CD7F8:;
    v0 = (s64) ((u64) a0 << 48);
    v1 = 0x8000;
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v1 - (u32) v0); goto L_001CD85C;
L_001CD80C:;
    v0 = (s64) ((u64) a0 << 48);
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v0 = (s32) ((u32) v0 + 0x1U); goto L_001CD85C;
L_001CD820:;
    v0 = (s64) ((u64) a0 << 48);
    v1 = 0xc000;
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v1 - (u32) v0); goto L_001CD85C;
L_001CD834:;
    v0 = (s64) ((u64) a0 << 48);
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v0 = (s32) ((u32) v0 + 0x4001U); goto L_001CD85C;
L_001CD848:;
    v0 = (s64) ((u64) a0 << 48);
    v1 = (s32) 0x10000U;
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v1 - (u32) v0);
    v0 = v0 & 0xffff;
L_001CD85C:;
    return v0;
}
