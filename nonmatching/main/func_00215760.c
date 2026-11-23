/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00121430(s32, s32);
s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);
void strcpy(s32, s32);

s32 func_00215760(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    a3 = 13;
    a1 = (s32) ((u32) sp + 0x6cU);
    a2 = (s32) ((u32) sp + 0x68U);
    s3 = a0;
    a0 = 1;
    a4 = s3;
    s0 = (s32) 0x210000U;
    s0 = (s32) ((u32) s0 + 0x4d80U); v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s2 = v0;
    v0 = -126;
    if (s2 != v0) goto L_002159FC;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 12));
    a1 = (*(volatile s32 *) (u32) (v0 + -32252));
    a4 = 0;
    v1 = (*(volatile s16 *) (u32) (s3 + 14));
    (*(volatile u16 *) (u32) (sp + 100)) = (u16) a0;
    at = 0 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 102)) = (u16) v1; if (c_) goto L_002157DC; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_002157DC:;
    v0 = (s32) 0x540000U;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_002158A4; }
    a2 = a1; goto L_002158A4;
L_002157F8:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_00215840;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00215840; }
L_00215810:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_00215830;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a1) goto L_00215830;
    a0 = a4; goto L_00215840;
L_00215830:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < a2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_00215810; }
L_00215840:;
    a1 = (*(volatile s32 *) (u32) (sp + 104));
    { s32 c_ = a1 < 0; s1 = 0; if (c_) goto L_00215958; }
    if (a1 != 0) { s4 = (*(volatile s32 *) (u32) (s3 + 188)); goto L_002158BC; }
    s1 = -119;
L_00215858:;
    if (s1 == 0) goto L_002159FC;
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) s1;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_002159D0; }
    a1 = a2;
L_00215880:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00215880;
    goto L_002159D0;
L_002158A4:;
    a1 = (*(volatile s16 *) (u32) (sp + 100));
    v0 = -1;
    if (a1 == v0) goto L_00215840;
    v1 = (s32) ((u32) sp + 0x66U); goto L_002157F8;
L_002158BC:;
    a1 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) s3 + 0x38U);
    a1 = (s32) ((u32) a1 + 0x4538U); strcpy(a0, a1);
    a0 = (s32) ((u32) s3 + 0x38U);
    a1 = (s32) ((u32) s4 + 0x20U); func_00121430(a0, a1);
    v0 = (*(volatile u16 *) (u32) (s4 + 20));
    v0 = v0 & 0x20;
    if (v0 != 0) goto L_00215858;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a4 = 0;
    v1 = (*(volatile s32 *) (u32) (s3 + 172));
    a0 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = a0 == v1; a3 = 0; if (c_) goto L_00215920; }
    a1 = a2;
L_00215904:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != v1) goto L_00215904;
L_00215920:;
    v1 = (s32) 0x210000U;
    v1 = (s32) ((u32) v1 + 0x4db0U);
    if (a0 == v1) goto L_00215950;
L_00215930:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != v1) goto L_00215930;
L_00215950:;
    s2 = (s32) ((u32) a3 - (u32) a4); goto L_00215858;
L_00215958:;
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_002159AC; }
    v0 = 0; goto L_002159AC;
L_00215968:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9700U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = -125;
    s1 = (*(volatile s32 *) (u32) v1);
    if (s1 == v0) goto L_002159C0;
    v0 = -124;
    if (s1 == v0) goto L_002159C0;
    v0 = -127;
    if (s1 == v0) goto L_002159C0;
L_002159A4:;
    goto L_00215858;
L_002159AC:;
    at = a1 < -10;
    if (at == 0) goto L_00215968;
    v0 = -10; goto L_00215968;
L_002159C0:;
    func_0021CD70(a0, a1);
    goto L_002159A4;
L_002159D0:;
    if (v1 == s0) goto L_002159F8;
L_002159D8:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_002159D8;
L_002159F8:;
    s2 = (s32) ((u32) a3 - (u32) a4);
L_002159FC:;
    v0 = s2;
    return v0;
}
