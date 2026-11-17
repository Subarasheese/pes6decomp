/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32, s32);
s32 func_001CDA50(s32);
s32 func_00221660(s32, s32, s32, s32);
s32 func_002222B0(s32, s32, s32, s32);
s32 func_00222320(s32, s32, s32, s32);
s32 func_0024EC90(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_00334500(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[114];
    s32 sp = (s32) (u32) frame;

    s5 = a0;
    if (s5 == 0) goto L_00334550;
    v1 = (*(volatile s32 *) (u32) (s5 + 68));
    v0 = 10;
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) { s6 = 1; goto L_00334554; }
    s6 = 0; goto L_00334554;
L_00334550:;
    s6 = 1;
L_00334554:;
    a0 = 0; v0 = func_001CDA50(a0);
    s1 = v0;
    a0 = 0; v0 = func_001CDA50(a0);
    a3 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) sp + 0x2a0U);
    a3 = (s32) ((u32) a3 + 0x73c0U);
    a1 = 30;
L_00334578:;
    a0 = (*(volatile s32 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) (a3 + 4));
    (*(volatile u32 *) (u32) a2) = (u32) a0;
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) v1;
    a3 = (s32) ((u32) a3 + 0x8U);
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_00334578; }
    v1 = (s32) ((u32) v0 << 1);
    s2 = (s32) 0x5f0000U;
    v1 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) 0x5f0000U;
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (*(volatile u16 *) (u32) (v0 + 7276));
    s0 = (*(volatile s32 *) (u32) (v1 + 672));
    { s32 c_ = v0 == 0; s2 = (s32) ((u32) s2 + 0xc20U); if (c_) goto L_00334600; }
    a1 = (*(volatile s32 *) (u32) (s2 + 4176));
    a0 = (*(volatile u16 *) (u32) (s2 + 4172)); v0 = func_00222320(a0, a1, a2, a3);
    v1 = v0 & 0xffff;
    v0 = 0xcdcd;
    if (v1 != v0) { v1 = v1 & 0xffff; goto L_003345E4; }
    v0 = -1; goto L_003345EC;
L_003345E4:;
    v0 = (s32) 0x20000U;
    v0 = (s32) ((u32) v1 + (u32) v0);
L_003345EC:;
    if (s0 != v0) { (*(volatile u32 *) (u32) (s2 + 4164)) = (u32) v0; goto L_00334608; }
    v0 = -1;
    (*(volatile u32 *) (u32) (s2 + 4164)) = (u32) v0; goto L_00334608;
L_00334600:;
    v0 = -1;
    (*(volatile u32 *) (u32) (s2 + 4164)) = (u32) v0;
L_00334608:;
    v0 = (*(volatile u16 *) (u32) (s2 + 4174));
    if (v0 == 0) { v0 = -1; goto L_00334658; }
    v0 = (s32) 0x5f0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7278));
    a1 = (*(volatile s32 *) (u32) (s2 + 4176)); v0 = func_00222320(a0, a1, a2, a3);
    v1 = v0 & 0xffff;
    v0 = 0xcdcd;
    if (v1 != v0) { v1 = v1 & 0xffff; goto L_0033463C; }
    v0 = -1; goto L_00334644;
L_0033463C:;
    v0 = (s32) 0x20000U;
    v0 = (s32) ((u32) v1 + (u32) v0);
L_00334644:;
    if (s0 != v0) { (*(volatile u32 *) (u32) (s2 + 4168)) = (u32) v0; goto L_0033465C; }
    v0 = -1;
    (*(volatile u32 *) (u32) (s2 + 4168)) = (u32) v0; goto L_0033465C;
L_00334658:;
    (*(volatile u32 *) (u32) (s2 + 4168)) = (u32) v0;
L_0033465C:;
    v0 = (s32) 0x590000U;
    s3 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x2980U);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v0;
    s3 = (s32) ((u32) s3 + 0x1bb0U);
    v0 = (s32) ((u32) s1 << 1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) sp);
    s7 = (s32) ((u32) v0 + 0x1b0U);
    fp = (s32) ((u32) v0 + 0xc4U);
L_0033468C:;
    a0 = (*(volatile u16 *) (u32) s3); v0 = func_0024EC90(a0, a1, a2, a3);
    s2 = (*(volatile s32 *) (u32) (sp + 160));
    s4 = 0;
L_003346A0:;
    a0 = s2;
    a1 = -1;
    a2 = 16; memset(a0, a1, a2);
    if (s6 == 0) goto L_00334900;
    a0 = (*(volatile u16 *) (u32) s3);
    a1 = s4 & 0xff;
    a2 = 0; v0 = func_002222B0(a0, a1, a2, a3);
    a0 = v0 & 0xffff;
    v1 = 0xcdcd;
    if (a0 != v1) { a0 = a0 & 0xffff; goto L_003346E0; }
    a0 = -1; goto L_003346E8;
L_003346E0:;
    v1 = (s32) 0x20000U;
    a0 = (s32) ((u32) a0 + (u32) v1);
L_003346E8:;
    if (a0 != s0) goto L_00334778;
    a3 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) sp + 0x1b0U);
    a3 = (s32) ((u32) a3 + 0x73c0U);
    a1 = 30;
L_00334700:;
    a0 = (*(volatile s32 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) (a3 + 4));
    (*(volatile u32 *) (u32) a2) = (u32) a0;
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) v1;
    a3 = (s32) ((u32) a3 + 0x8U);
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_00334700; }
    a0 = (*(volatile u8 *) (u32) (s2 + 16));
    a3 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) s7);
    a3 = (s32) ((u32) a3 + 0x73c0U);
    a2 = (s32) ((u32) sp + 0xc0U);
    a1 = 30;
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) s2) = (u32) v1;
L_00334740:;
    a0 = (*(volatile s32 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) (a3 + 4));
    (*(volatile u32 *) (u32) a2) = (u32) a0;
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) v1;
    a3 = (s32) ((u32) a3 + 0x8U);
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_00334740; }
    a0 = (*(volatile u8 *) (u32) (s2 + 16));
    v1 = (*(volatile s32 *) (u32) fp);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) v1; goto L_00334900;
L_00334778:;
    v1 = -1;
    if (a0 == v1) goto L_00334900;
    if (s5 == 0) goto L_003348F8;
    v1 = (*(volatile s32 *) (u32) (s5 + 68));
    a4 = 1;
    a2 = (*(volatile s32 *) (u32) (v1 + 64));
    { s32 c_ = a2 == 0; a1 = (s32) ((u32) v1 + 0x40U); if (c_) goto L_00334900; }
L_003347A0:;
    if (a2 != a0) goto L_003348E0;
    a3 = (s32) 0x3e0000U;
    a5 = 0;
    a3 = (s32) ((u32) a3 + 0x2648U);
L_003347B8:;
    v1 = (*(volatile s32 *) (u32) a3);
    if (a0 != v1) goto L_003347D0;
    a4 = 0; goto L_003347E0;
L_003347D0:;
    a5 = (s32) ((u32) a5 + 0x1U);
    { s32 c_ = a5 == 0; a3 = (s32) ((u32) a3 + 0x4U); if (c_) goto L_003347B8; }
L_003347E0:;
    if (a4 == 0) goto L_00334890;
    v1 = 5;
    if (s1 != v1) goto L_00334870;
    (*(volatile u32 *) (u32) s2) = (u32) a2;
    a3 = (s32) 0x3e0000U;
    v1 = (*(volatile s32 *) (u32) (a1 + 8));
    a2 = 0;
    a3 = (s32) ((u32) a3 + 0x24d0U);
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a1 + 12));
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) v1;
    a1 = (*(volatile s32 *) (u32) s2);
L_00334818:;
    v1 = (*(volatile s32 *) (u32) a3);
    if (v1 != a1) goto L_00334858;
    a0 = (*(volatile s32 *) (u32) (a3 + 8));
    v1 = (*(volatile u16 *) (u32) (s2 + 70));
    if (a0 != v1) goto L_00334858;
    a0 = (s32) ((u32) a2 << 1);
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0x24d0U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile u32 *) (u32) (s2 + 12)) = (u32) v1; goto L_00334890;
L_00334858:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = (u64) a2 < (u64) (s64) 31;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0xcU); if (c_) goto L_00334818; }
    goto L_00334890;
L_00334870:;
    (*(volatile u32 *) (u32) s2) = (u32) a2;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a1 + 8));
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a1 + 12));
    (*(volatile u32 *) (u32) (s2 + 12)) = (u32) v1;
L_00334890:;
    a1 = (*(volatile s32 *) (u32) (s2 + 8));
    v1 = (s32) 0x20000U;
    a0 = v1 | 0x43c9;
    if (a1 == a0) goto L_003348B8;
    v1 = v1 | 0x43cb;
    if (a1 == v1) goto L_003348B8;
    goto L_00334900;
L_003348B8:;
    a0 = (*(volatile u16 *) (u32) s3);
    a1 = s4 & 0xff;
    a2 = 0;
    a3 = 2; v0 = func_00221660(a0, a1, a2, a3);
    if (v0 == 0) goto L_00334900;
    v1 = -1;
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) v1; goto L_00334900;
L_003348E0:;
    a1 = (s32) ((u32) a1 + 0x10U);
    a2 = (*(volatile s32 *) (u32) a1);
    if (a2 != 0) goto L_003347A0;
    goto L_00334900;
L_003348F8:;
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) a0;
    (*(volatile u32 *) (u32) s2) = (u32) a0;
L_00334900:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 32;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x348U); if (c_) goto L_003346A0; }
    v1 = (*(volatile s32 *) (u32) (sp + 160));
    v1 = (s32) ((u32) v1 + 0x6900U);
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (sp + 176));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v1;
    v1 = v1 < 2;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x2U); if (c_) goto L_0033468C; }
    if (s5 == 0) { ; goto L_00334948; }
    a0 = (*(volatile s32 *) (u32) (s5 + 68)); Pes6Heap_Free(a0, a1);
L_00334948:;
    return;
}
