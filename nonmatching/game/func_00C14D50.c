/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void memset(s64, s64, s64);

void func_00C14D50(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 hi = 0, lo = 0;

    v0 = 255;
    s3 = a0;
    s2 = a1;
    v1 = (*(volatile u8 *) (u32) (a0 + 4));
    { s32 c_ = v1 == v0; s1 = (s64) ((u64) 0 + (u64) (s64) 255); if (c_) goto L_00C14D94; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00C14D98;
L_00C14D94:;
    a0 = 1;
L_00C14D98:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = s2;
    a1 = 0;
    s0 = (s32) ((u32) v0 + (u32) v1);
    a2 = 32; memset(a0, a1, a2);
    f0.f = (*(volatile f32 *) (u32) (s3 + 12));
    a2 = 255;
    a1 = 1;
    (*(volatile f32 *) (u32) s2) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 20));
    (*(volatile f32 *) (u32) (s2 + 4)) = f0.f;
    a0 = (*(volatile u8 *) (u32) (s0 + 18));
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 << 5);
    v1 = v1 & 0x1f;
    v1 = a0 | v1;
    (*(volatile u8 *) (u32) (s2 + 27)) = (u8) v1;
    (*(volatile u8 *) (u32) (s2 + 28)) = (u8) a2;
    v1 = (*(volatile u8 *) (u32) (s3 + 5));
    (*(volatile u8 *) (u32) (s2 + 29)) = (u8) v1;
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) a1;
    a0 = (*(volatile u8 *) (u32) (s3 + 32));
    if (a0 == a2) goto L_00C14E50;
    if (a0 == a2) goto L_00C14E20;
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a1 = hi;
L_00C14E20:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (v1 + 18));
    v1 = (*(volatile u8 *) (u32) (v1 + 17));
    a0 = (s32) ((u32) a0 << 5);
    v1 = v1 & 0x1f;
    v1 = a0 | v1;
    s1 = v1 & 0xff;
L_00C14E50:;
    (*(volatile u8 *) (u32) (s2 + 28)) = (u8) s1;
    v1 = (*(volatile u8 *) (u32) (s3 + 33));
    a0 = (s32) ((u32) v1 + 0xfffffff5U);
    at = (u64) a0 < (u64) (s64) 3;
    if (at != 0) { a0 = 3; goto L_00C14F14; }
    a0 = 10;
    if (v1 == a0) { a0 = 1; goto L_00C14F1C; }
    a0 = 16;
    if (v1 == a0) goto L_00C14F24;
    a0 = 6;
    if (v1 == a0) goto L_00C14F24;
    a0 = 14;
    if (v1 != a0) goto L_00C14EA0;
    a0 = 5;
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) a0;
L_00C14EA0:;
    a1 = (*(volatile u8 *) (u32) (s3 + 6));
    a0 = 15;
    a1 = a1 & 0x1;
    { s32 c_ = v1 == a0; (*(volatile u8 *) (u32) (s2 + 31)) = (u8) a1; if (c_) goto L_00C14F30; }
    a0 = 4;
    if (v1 == a0) goto L_00C14F3C;
    a0 = 13;
    if (v1 == a0) goto L_00C14F3C;
    a0 = 7;
    if (v1 == a0) { a0 = 2; goto L_00C14F48; }
    a0 = 8;
    if (v1 != a0) goto L_00C14EEC;
    a0 = 3;
    (*(volatile u32 *) (u32) (s2 + 16)) = (u32) a0;
L_00C14EEC:;
    a0 = 16;
    if (v1 != a0) { v1 = (*(volatile u8 *) (u32) (s3 + 6)); goto L_00C14F04; }
    v1 = 1;
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) v1; goto L_00C14F0C;
L_00C14F04:;
    v1 = v1 & 0x1;
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) v1;
L_00C14F0C:;
    goto L_00C14F50;
L_00C14F14:;
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) a0; goto L_00C14EA0;
L_00C14F1C:;
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) a0; goto L_00C14EA0;
L_00C14F24:;
    a0 = 2;
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) a0; goto L_00C14EA0;
L_00C14F30:;
    a0 = 4;
    (*(volatile u32 *) (u32) (s2 + 16)) = (u32) a0; goto L_00C14EEC;
L_00C14F3C:;
    a0 = 1;
    (*(volatile u32 *) (u32) (s2 + 16)) = (u32) a0; goto L_00C14EEC;
L_00C14F48:;
    (*(volatile u32 *) (u32) (s2 + 16)) = (u32) a0; goto L_00C14EEC;
L_00C14F50:;
    return;
}
