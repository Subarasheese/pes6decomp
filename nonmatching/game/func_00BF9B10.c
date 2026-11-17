/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002736F0(s32, s32, s32);
void func_00278240(s32);
s32 func_00997C30(s32);
s32 func_00997E10(s32);
void func_00B94A70(s32);
void func_00B94C80(s32, s32);
s32 func_00BDB5F0(s32);
s32 func_00C00D60(s32, s32, s32, s32);
s32 func_00C01090(s32);

void func_00BF9B10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;

    a0 = 13;
    v0 = func_00C01090(a0);
    if (v0 == 0) goto L_00BF9C64;
    a0 = 13; v0 = func_00C00D60(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00BF9B58; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BF9B58:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = v1 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v0 << 6);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    v0 = (s32) 0xcc0000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    a1 = (*(volatile u8 *) (u32) (v0 + -12831));
    s0 = (*(volatile u8 *) (u32) (a0 + 17));
    v0 = 255;
    { s32 c_ = v1 == v0; s1 = (*(volatile u8 *) (u32) (a0 + 18)); if (c_) goto L_00BF9BA0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi; goto L_00BF9BA4;
L_00BF9BA0:;
    v1 = 1;
L_00BF9BA4:;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a2 = (s32) ((u32) v0 << 6);
    v1 = (s32) 0x590000U;
    s2 = (s32) ((u32) a0 + (u32) a2);
    v0 = (s32) 0x590000U;
    a4 = (*(volatile u8 *) (u32) (s2 + 17));
    v1 = (s32) ((u32) v1 + 0x2a66U);
    a3 = (*(volatile u8 *) (u32) (s2 + 18));
    v0 = (s32) ((u32) v0 + 0x2a64U);
    a0 = s2;
    a2 = (s32) ((u32) a4 << 4);
    a4 = (s32) ((u32) a2 - (u32) a4);
    a2 = (s32) ((u32) a3 << 4);
    a3 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a4 << 3);
    a4 = (s32) ((u32) a2 - (u32) a4);
    a2 = (s32) ((u32) a3 << 3);
    a2 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a2 << 8);
    a3 = (s32) ((u32) a4 << 3);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v1 = (s32) ((u32) a3 + (u32) v1);
    v0 = (s32) ((u32) a3 + (u32) v0);
    v1 = (*(volatile s16 *) (u32) v1);
    (*(volatile u16 *) (u32) v0) = (u16) v1; func_00B94C80(a0, a1);
    a0 = s2; func_00B94A70(a0);
    a0 = 0;
    a1 = 0; func_002736F0(a0, a1, a2);
    a0 = s2; v0 = func_00997C30(a0);
    if (v0 != 0) { a0 = s2; goto L_00BF9DD0; }
L_00BF9C40:;
    v1 = 1;
L_00BF9C44:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7632)) = (u8) v1;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 9989)) = (u8) v1;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 9990)) = (u8) s1;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 9991)) = (u8) s0;
L_00BF9C64:;
    a0 = 0; v0 = func_00C01090(a0);
    if (v0 != 0) goto L_00BF9DC4;
    a0 = 1; v0 = func_00C01090(a0);
    if (v0 != 0) goto L_00BF9DC4;
    a0 = 16; v0 = func_00C01090(a0);
    if (v0 == 0) goto L_00BF9DC4;
    a0 = 16; v0 = func_00C00D60(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00BF9CB8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BF9CB8:;
    v0 = (s32) ((u32) a0 << 3);
    a2 = 1;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = v1 & 0xff;
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -12879)) = (u8) a2;
    v0 = (s32) 0xcc0000U;
    s0 = (*(volatile u8 *) (u32) (a0 + 17));
    a1 = (*(volatile u8 *) (u32) (v0 + -12910));
    v0 = 255;
    { s32 c_ = v1 == v0; s1 = (*(volatile u8 *) (u32) (a0 + 18)); if (c_) goto L_00BF9D04; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a2 = hi;
L_00BF9D04:;
    v0 = (s32) ((u32) a2 << 3);
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) a2);
    v1 = (s32) 0x590000U;
    a2 = (s32) ((u32) v0 << 6);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    s2 = (s32) ((u32) a0 + (u32) a2);
    v0 = (s32) 0x590000U;
    a4 = (*(volatile u8 *) (u32) (s2 + 17));
    v1 = (s32) ((u32) v1 + 0x2a66U);
    a3 = (*(volatile u8 *) (u32) (s2 + 18));
    v0 = (s32) ((u32) v0 + 0x2a64U);
    a0 = s2;
    a2 = (s32) ((u32) a4 << 4);
    a4 = (s32) ((u32) a2 - (u32) a4);
    a2 = (s32) ((u32) a3 << 4);
    a3 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a4 << 3);
    a4 = (s32) ((u32) a2 - (u32) a4);
    a2 = (s32) ((u32) a3 << 3);
    a2 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a2 << 8);
    a3 = (s32) ((u32) a4 << 3);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v1 = (s32) ((u32) a3 + (u32) v1);
    v0 = (s32) ((u32) a3 + (u32) v0);
    v1 = (*(volatile s16 *) (u32) v1);
    (*(volatile u16 *) (u32) v0) = (u16) v1; func_00B94C80(a0, a1);
    a0 = s2; func_00B94A70(a0);
    a0 = 0;
    a1 = 0; func_002736F0(a0, a1, a2);
    a0 = s2; v0 = func_00997C30(a0);
    if (v0 != 0) { a0 = s2; goto L_00BF9DF8; }
L_00BF9DA0:;
    a0 = 1;
L_00BF9DA4:;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7632)) = (u8) a0;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 9989)) = (u8) a0;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 9990)) = (u8) s1;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 9991)) = (u8) s0;
L_00BF9DC4:;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7632)) = (u8) 0; goto L_00BF9E20;
L_00BF9DD0:;
    v0 = func_00BDB5F0(a0);
    if (v0 != 0) goto L_00BF9C40;
    a0 = s2; v0 = func_00997E10(a0);
    a0 = v0; func_00278240(a0);
    v1 = 1; goto L_00BF9C44;
L_00BF9DF8:;
    v0 = func_00BDB5F0(a0);
    if (v0 != 0) goto L_00BF9DA0;
    a0 = s2; v0 = func_00997E10(a0);
    a0 = v0; func_00278240(a0);
    a0 = 1; goto L_00BF9DA4;
L_00BF9E20:;
    return;
}
