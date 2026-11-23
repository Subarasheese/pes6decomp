/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00146E90(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_00147D40(s64);

s64 func_00145D70(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s4 = a1;
    s3 = a2;
    s1 = a0;
    { s32 c_ = s4 == 0; (*(volatile u64 *) (u32) a2) = (u64) 0; if (c_) goto L_00145DB4; }
    s0 = (*(volatile s32 *) (u32) (s4 + 36));
    if (s0 != 0) { a0 = (*(volatile s32 *) (u32) (s4 + 12)); goto L_00145DBC; }
    v0 = s1; goto L_00145FAC;
L_00145DB4:;
    v0 = s1; goto L_00145FAC;
L_00145DBC:;
    v0 = func_00147D40(a0);
    if (v0 != 0) { (*(volatile u64 *) (u32) s3) = (u64) v0; goto L_00145E5C; }
    a0 = (*(volatile u16 *) (u32) (s4 + 62));
    if (a0 == 0) goto L_00145E64;
    v0 = (s32) ((u32) a0 << 1);
    v1 = (*(volatile s32 *) (u32) (s4 + 12));
    a0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) 0x500000U;
    a0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 + 0x7a98U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v1 != v0) goto L_00145E64;
    a2 = (s32) 0x500000U;
    a2 = (s32) ((u32) a2 + 0x7a90U);
    a3 = (s32) ((u32) a2 + (u32) a0);
    a1 = (*(volatile s32 *) (u32) a3);
    if (a1 == a2) goto L_00145E44;
    a0 = (*(volatile s32 *) (u32) (a3 + 4));
    v1 = (s32) 0x500000U;
    v0 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) a0;
    (*(volatile u32 *) (u32) a0) = (u32) a1;
    v1 = (*(volatile s32 *) (u32) (v1 + 31380));
    (*(volatile u32 *) (u32) (a3 + 4)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a3 + 4));
    (*(volatile u32 *) (u32) v1) = (u32) a3;
    (*(volatile u32 *) (u32) a3) = (u32) a2;
    (*(volatile u32 *) (u32) (v0 + 31380)) = (u32) a3;
L_00145E44:;
    if (a3 == 0) goto L_00145E70;
    v1 = (*(volatile s64 *) (u32) (a3 + 16));
    v0 = s1;
    (*(volatile u64 *) (u32) s3) = (u64) v1; goto L_00145FAC;
L_00145E5C:;
    v0 = s1; goto L_00145FAC;
L_00145E64:;
    (*(volatile u16 *) (u32) (s4 + 62)) = (u16) 0;
    a3 = 0; goto L_00145E44;
L_00145E70:;
    v0 = (s32) 0x500000U;
    s2 = (*(volatile s32 *) (u32) (v0 + 31376));
    v0 = (*(volatile u16 *) (u32) (s2 + 14));
    if (v0 == 0) goto L_00145EA0;
L_00145E84:;
    s2 = (*(volatile s32 *) (u32) s2);
    v0 = (*(volatile u16 *) (u32) (s2 + 14));
    if (v0 != 0) goto L_00145E84;
L_00145EA0:;
    a2 = (s32) 0x500000U;
    a2 = (s32) ((u32) a2 + 0x7a90U);
    if (s2 == a2) { s2 = 0; goto L_00145EE8; }
    a1 = (*(volatile s32 *) (u32) s2);
    if (a1 == a2) goto L_00145EE8;
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    v1 = (s32) 0x500000U;
    v0 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) a0;
    (*(volatile u32 *) (u32) a0) = (u32) a1;
    v1 = (*(volatile s32 *) (u32) (v1 + 31380));
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    (*(volatile u32 *) (u32) v1) = (u32) s2;
    (*(volatile u32 *) (u32) s2) = (u32) a2;
    (*(volatile u32 *) (u32) (v0 + 31380)) = (u32) s2;
L_00145EE8:;
    if (s2 == 0) { v0 = 0; goto L_00145FAC; }
    a0 = (*(volatile s32 *) (u32) (s4 + 12));
    v0 = (s32) 0x500000U;
    v0 = (s32) ((u32) v0 + 0x7a90U);
    v1 = (s32) ((u32) s2 - (u32) v0);
    v0 = (s32) 0x2aaa0000U;
    v0 = v0 | 0xaaab;
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) a0;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u16 *) (u32) (s4 + 62)) = (u16) v0;
    v0 = (*(volatile u16 *) (u32) (s4 + 18));
    if (v0 != 0) { v0 = (s64) ((u64) v0 << 32); goto L_00145F40; }
    (*(volatile u64 *) (u32) s3) = (u64) 0;
    v0 = s1; goto L_00145FAC;
L_00145F40:;
    v1 = (s64) ((u64) s4 << 32);
    v0 = v0 >> 32;
    v1 = (s64) ((u64) v1 >> 32);
    a5 = (s64) ((u64) s0 << 32);
    a0 = s1;
    a4 = (s64) ((u64) v1 + (u64) v0);
    s1 = (*(volatile u16 *) (u32) (s2 + 12));
    s0 = (*(volatile u8 *) (u32) (s4 + 29));
    a5 = a5 >> 32;
    v0 = (*(volatile u8 *) (u32) (s4 + 30));
    a6 = 0;
    a7 = 0;
    a1 = s1;
    (*(volatile u64 *) (u32) sp) = (u64) v0;
    v0 = (*(volatile u8 *) (u32) (s4 + 31));
    (*(volatile u64 *) (u32) (sp + 8)) = (u64) v0;
    a3 = (*(volatile u8 *) (u32) (s4 + 28));
    a2 = s0; v0 = func_00146E90(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s64) ((u64) s1 << 37);
    v1 = (s64) ((u64) s0 << 51);
    a0 = a0 | v1;
    v1 = (s32) 0x20000000U;
    v1 = (s64) ((u64) v1 << 32);
    v1 = a0 | v1;
    (*(volatile u64 *) (u32) (s2 + 16)) = (u64) v1;
    (*(volatile u64 *) (u32) s3) = (u64) v1;
L_00145FAC:;
    return v0;
}
