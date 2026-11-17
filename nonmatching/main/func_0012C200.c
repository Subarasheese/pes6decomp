/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Mem_Malloc(s64, s64);
s64 func_0012C710(s64, s64);

s64 func_0012C200(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 hi = 0, lo = 0;

    s4 = a0;
    s3 = a1;
    at = (u64) s3 < (u64) (s64) 17;
    if (at != 0) goto L_0012C27C;
    at = (u64) s3 < (u64) (s64) 16;
    if (at == 0) goto L_0012C23C;
    s3 = 16;
L_0012C23C:;
    v0 = (s32) ((u32) s3 + 0xffffffffU);
    v0 = s3 & v0;
    if (v0 == 0) goto L_0012C290;
    at = (u64) s3 < (u64) (s64) 33;
    { s32 c_ = at != 0; v1 = 32; if (c_) goto L_0012C28C; }
L_0012C258:;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (u64) v1 < (u64) s3;
    if (v0 != 0) goto L_0012C258;
    s3 = v1; goto L_0012C290;
L_0012C27C:;
    a1 = a2; v0 = Pes6Mem_Malloc(a0, a1);
    goto L_0012C3F0;
L_0012C28C:;
    s3 = v1;
L_0012C290:;
    at = (u64) a2 < (u64) (s64) -32;
    if (at == 0) { v0 = 0; goto L_0012C3EC; }
    v1 = (s32) ((u32) a2 + 0x13U);
    at = (u64) v1 < (u64) (s64) 16;
    if (at == 0) { v0 = -16; goto L_0012C2B4; }
    s0 = 16; goto L_0012C2B8;
L_0012C2B4:;
    s0 = v1 & v0;
L_0012C2B8:;
    v0 = (s32) ((u32) s0 + (u32) s3);
    a0 = s4;
    a1 = (s32) ((u32) v0 + 0x10U); v0 = Pes6Mem_Malloc(a0, a1);
    if (v0 == 0) { v0 = 0; goto L_0012C3EC; }
    s2 = (s32) ((u32) v0 + 0xfffffff8U);
    if ((u32) s3 != 0) { s64 q_ = (s32) ((u32) v0 / (u32) s3); hi = (s32) ((u32) v0 % (u32) s3); lo = q_; }
    v1 = hi;
    if (v1 == 0) goto L_0012C394;
    v1 = (s32) ((u32) v0 + (u32) s3);
    v0 = (s64) ((u64) s3 << 32);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    v0 = (s64) ((u64) v0 >> 32);
    v1 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) 0 - (u64) v0);
    v1 = (s64) ((u64) v1 >> 32);
    v0 = v0 & v1;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    s1 = (s32) ((u32) v0 + 0xfffffff8U);
    v0 = (s32) ((u32) s1 - (u32) s2);
    at = (u64) v0 < (u64) (s64) 16;
    if (at == 0) goto L_0012C324;
    s1 = (s32) ((u32) s1 + (u32) s3);
L_0012C324:;
    a0 = (*(s32 *) (u32) (s2 + 4));
    v0 = -4;
    a2 = (s32) ((u32) s1 - (u32) s2);
    v1 = a0 & v0;
    v0 = a0 & 0x2;
    { s32 c_ = v0 == 0; v1 = (s32) ((u32) v1 - (u32) a2); if (c_) goto L_0012C35C; }
    a0 = (*(s32 *) (u32) s2);
    v1 = v1 | 0x2;
    v0 = (s32) ((u32) s1 + 0x8U);
    a0 = (s32) ((u32) a0 + (u32) a2);
    (*(u32 *) (u32) s1) = (u32) a0;
    (*(u32 *) (u32) (s1 + 4)) = (u32) v1; goto L_0012C3EC;
L_0012C35C:;
    v0 = v1 | 0x1;
    a0 = s4;
    v1 = (s32) ((u32) s1 + (u32) v1);
    (*(u32 *) (u32) (s1 + 4)) = (u32) v0;
    v0 = (*(s32 *) (u32) (v1 + 4));
    a1 = (s32) ((u32) s2 + 0x8U);
    v0 = v0 | 0x1;
    (*(u32 *) (u32) (v1 + 4)) = (u32) v0;
    v0 = (*(s32 *) (u32) (s2 + 4));
    v0 = v0 & 0x1;
    v0 = v0 | a2;
    (*(u32 *) (u32) (s2 + 4)) = (u32) v0; v0 = func_0012C710(a0, a1);
    s2 = s1;
L_0012C394:;
    a0 = (*(s32 *) (u32) (s2 + 4));
    v0 = a0 & 0x2;
    if (v0 != 0) goto L_0012C3E8;
    v1 = -4;
    v0 = (s32) ((u32) s0 + 0x10U);
    v1 = a0 & v1;
    at = (u64) v0 < (u64) v1;
    if (at == 0) goto L_0012C3E8;
    v0 = (s32) ((u32) v1 - (u32) s0);
    a0 = s4;
    v1 = (s32) ((u32) s2 + (u32) s0);
    v0 = v0 | 0x1;
    (*(u32 *) (u32) (v1 + 4)) = (u32) v0;
    a1 = (s32) ((u32) v1 + 0x8U);
    v0 = (*(s32 *) (u32) (s2 + 4));
    v0 = v0 & 0x1;
    v0 = v0 | s0;
    (*(u32 *) (u32) (s2 + 4)) = (u32) v0; v0 = func_0012C710(a0, a1);
L_0012C3E8:;
    v0 = (s32) ((u32) s2 + 0x8U);
L_0012C3EC:;
L_0012C3F0:;
    return v0;
}
