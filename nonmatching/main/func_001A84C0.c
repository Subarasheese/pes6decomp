/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0014AC50(s32, s32, s32, s32);
s32 func_0017FA00(s32, s32, s32, s32, s32);
void func_001A86B0(s32, s32, s32, s32, s32, s32);
s32 func_001B02F0(s32);
void memcpy(s32, s32, s32);

void func_001A84C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    a3 = (s32) 0x520000U;
    v1 = (s32) 0x3b0000U;
    a3 = (s32) ((u32) a3 + 0x9c0U);
    a4 = 0;
    v1 = (*(volatile s32 *) (u32) (v1 + 608));
    s1 = (s32) ((u32) a2 + (u32) v1);
L_001A84E8:;
    v1 = (*(volatile s32 *) (u32) a3);
    if (v1 != a2) goto L_001A8538;
    v1 = (*(volatile u8 *) (u32) (a3 + 4));
    if (v1 == 0) goto L_001A8538;
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = (s32) ((u32) a0 << 2);
    (*(volatile u8 *) (u32) (a3 + 4)) = (u8) v1;
    v1 = (s32) ((u32) a1 << 1);
    a2 = (s32) ((u32) v1 + (u32) a1);
    a2 = (s32) ((u32) a2 << 2);
    v1 = (s32) 0x520000U;
    a1 = (s32) ((u32) a2 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0x750U);
    a1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) v1) = (u32) a3; goto L_001A8698;
L_001A8538:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = (u64) a4 < (u64) (s64) 156;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x14U); if (c_) goto L_001A84E8; }
    a4 = (s32) 0x520000U;
    v1 = 0;
    a4 = (s32) ((u32) a4 + 0x9c0U);
L_001A8554:;
    v0 = (*(volatile u8 *) (u32) (a4 + 4));
    if (v0 == 0) goto L_001A8570;
    v1 = (s32) ((u32) v1 + 0x1U);
    v0 = (u64) v1 < (u64) (s64) 156;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x14U); if (c_) goto L_001A8554; }
L_001A8570:;
    v0 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v0 + (u32) a1);
    (*(volatile u32 *) (u32) a4) = (u32) a2;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (*(volatile u8 *) (u32) (a4 + 4));
    a1 = (s32) ((u32) v0 + (u32) a1);
    a3 = (s32) 0x520000U;
    v0 = (*(volatile s32 *) (u32) (gp + -23228));
    a3 = (s32) ((u32) a3 + 0x750U);
    a1 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 << 2);
    a1 = (s32) ((u32) a3 + (u32) a1);
    s0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) s0) = (u32) a4;
    { s32 c_ = v0 == 0; (*(volatile u8 *) (u32) (a4 + 4)) = (u8) v1; if (c_) goto L_001A860C; }
    a0 = (s32) ((u32) v0 + 0x20U);
    v0 = (*(volatile s32 *) (u32) (v0 + 32));
    at = a2 < v0;
    if (at == 0) goto L_001A860C;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    s1 = (s32) ((u32) sp + 0xc4U); v0 = func_0014AC50(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    a1 = s0;
    v0 = (*(volatile s32 *) (u32) (v0 + 8));
    a0 = (s32) ((u32) sp + 0x80U);
    a2 = 4;
    (*(volatile u32 *) (u32) (sp + 200)) = (u32) v0; memcpy(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x80U); func_001A86B0(a0, a1, a2, a3, a4, a5);
L_001A8604:;
    goto L_001A869C;
L_001A860C:;
    a0 = s1; v0 = func_001B02F0(a0);
    if (v0 == 0) goto L_001A8678;
    a0 = (s32) ((u32) sp + 0x30U);
    { s32 c_ = a0 == 0; v1 = 76; if (c_) goto L_001A8644; }
L_001A8628:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_001A8628;
L_001A8644:;
    v1 = (*(volatile s32 *) (u32) (v0 + 8));
    a0 = v0;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) v1; v0 = func_0014AC50(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) v0;
    a1 = s0;
    a0 = (s32) ((u32) sp + 0x30U);
    a2 = 4; memcpy(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x30U); func_001A86B0(a0, a1, a2, a3, a4, a5);
    goto L_001A8604;
L_001A8678:;
    a1 = (s32) 0x1b0000U;
    a0 = s1;
    a2 = s0;
    a1 = (s32) ((u32) a1 + 0xffff86b0U);
    a3 = 4; v0 = func_0017FA00(a0, a1, a2, a3, a4);
    goto L_001A8604;
L_001A8698:;
L_001A869C:;
    return;
}
