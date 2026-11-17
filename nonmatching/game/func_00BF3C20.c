/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_0099D470(s64);
void func_0099D490(s64, s64);
s64 func_00AFBAB0(s64);

s64 func_00BF3C20(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    v1 = 255;
    v0 = (s32) 0x590000U;
    s5 = a0;
    s1 = 0;
    (*(volatile u8 *) (u32) (v0 + 7758)) = (u8) v1;
    s0 = (s64) ((u64) 0 + (u64) (s64) 255);
    a0 = (*(volatile u8 *) (u32) a0);
    s6 = s0; v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00BF3C90; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BF3C90:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s4 = 0;
    s2 = 0;
    s3 = (s32) ((u32) v0 + (u32) v1);
L_00BF3CB0:;
    v1 = (*(volatile u8 *) (u32) s3);
    v0 = (*(volatile u8 *) (u32) s5);
    if (v1 == v0) goto L_00BF3D68;
    a1 = (*(volatile u8 *) (u32) (s3 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s3 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 212));
    if (v0 == 0) goto L_00BF3D68;
    v1 = (*(volatile u8 *) (u32) (s3 + 22));
    v0 = 255;
    if (v1 == v0) goto L_00BF3D68;
    v0 = (*(volatile s32 *) (u32) (s3 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_00BF3D68;
    a0 = 1; v0 = func_0099D470(a0);
    v0 = v0 & 0xff;
    if (s4 == v0) { v0 = (*(volatile u8 *) (u32) s3); goto L_00BF3E6C; }
    v1 = (*(volatile u8 *) (u32) s3);
    v0 = s2 & 0xff;
    a0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s2 + 0x1U);
    a0 = (s32) ((u32) a0 + (u32) sp);
    s2 = v0 & 0xff;
    v0 = (s32) ((u32) a0 + 0x80U);
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) s4;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_00BF3D68:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 11;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x240U); if (c_) goto L_00BF3CB0; }
    if (s2 == 0) { v0 = 255; goto L_00BF3E6C; }
    s3 = s2 & 0xff;
    at = 0 < s3;
    { s32 c_ = at == 0; s4 = 0; if (c_) goto L_00BF3E5C; }
    s5 = (s32) ((u32) sp + 0x80U);
L_00BF3D94:;
    v1 = (*(volatile u8 *) (u32) s5);
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00BF3DB0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BF3DB0:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = s3 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) v1 + (u32) a0); if (c_) goto L_00BF3DDC; }
    v0 = (*(volatile u8 *) (u32) (s2 + 16));
    if (v0 == 0) goto L_00BF3E4C;
L_00BF3DDC:;
    a2 = (*(volatile u8 *) (u32) (s2 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 123));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = v0 & 0xff;
    v0 = s1 & 0xff;
    at = v1 < v0;
    if (at != 0) goto L_00BF3E4C;
    s6 = (*(volatile u8 *) (u32) s2);
    s1 = v1;
    s0 = (*(volatile u8 *) (u32) (s5 + 1));
L_00BF3E4C:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s3;
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + 0x2U); if (c_) goto L_00BF3D94; }
L_00BF3E5C:;
    a0 = s0;
    a1 = 1; func_0099D490(a0, a1);
    v0 = s6;
L_00BF3E6C:;
    return v0;
}
