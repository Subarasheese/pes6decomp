/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021A8B0(s32, s32, s32, s32);
s32 func_0021CCD0(s32, s32, s32, s32, s32);

s32 func_0021A5E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x540000U;
    a3 = 0;
    s3 = a0;
    a1 = (*(volatile s16 *) (u32) (a0 + 12));
    v1 = (*(volatile s16 *) (u32) (a0 + 14));
    (*(volatile u16 *) (u32) (sp + 108)) = (u16) a1;
    a0 = (*(volatile s32 *) (u32) (v0 + -32252));
    at = 0 < a0;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 110)) = (u16) v1; if (c_) goto L_0021A62C; }
    v0 = (s32) 0x540000U;
    a3 = (*(volatile s32 *) (u32) (v0 + -32256));
L_0021A62C:;
    v0 = (s32) 0x540000U;
    s0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a1 = 0; if (c_) goto L_0021A758; }
    a1 = a0; goto L_0021A758;
    v1 = (s32) ((u32) sp + 0x6eU);
L_0021A64C:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_0021A698;
    at = 0 < a1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_0021A698; }
L_0021A664:;
    v0 = (*(volatile s16 *) (u32) (a3 + 2));
    if (v0 != v1) goto L_0021A684;
    v0 = (*(volatile s16 *) (u32) a3);
    if (v0 != a0) goto L_0021A684;
    s0 = a3; goto L_0021A698;
L_0021A684:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < a1;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0x10U); if (c_) goto L_0021A664; }
L_0021A698:;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -28240));
    { s32 c_ = v0 < 0; s1 = 0; if (c_) goto L_0021A770; }
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 14));
    v0 = (*(volatile s16 *) (u32) (v0 + -28234));
    if (a0 != v0) goto L_0021A770;
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s16 *) (u32) (s3 + 12));
    v0 = (*(volatile s16 *) (u32) (v0 + -28236));
    if (v1 != v0) goto L_0021A770;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0x530000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0x7b30U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_0021A770;
    s2 = -126;
L_0021A6FC:;
    v0 = (*(volatile s32 *) (u32) (s3 + 48));
    a0 = (s32) 0x530000U;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x7c00U); if (c_) goto L_0021A7E0; }
L_0021A70C:;
    if (s1 == 0) goto L_0021A88C;
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) s1;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    v1 = (*(volatile s32 *) (u32) (s3 + 172));
    a0 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = a0 == v1; a3 = 0; if (c_) goto L_0021A85C; }
    a1 = a2;
L_0021A734:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != v1) goto L_0021A734;
    goto L_0021A85C;
L_0021A758:;
    a0 = (*(volatile s16 *) (u32) (sp + 108));
    v0 = -1;
    if (a0 == v0) goto L_0021A698;
    v1 = (s32) ((u32) sp + 0x6eU); goto L_0021A64C;
L_0021A770:;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a4 = 0;
    v1 = (*(volatile s32 *) (u32) (s3 + 172));
    a0 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = a0 == v1; a3 = 0; if (c_) goto L_0021A7A8; }
    a1 = a2;
L_0021A78C:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != v1) goto L_0021A78C;
L_0021A7A8:;
    v1 = (s32) 0x220000U;
    v1 = (s32) ((u32) v1 + 0xffffa1b0U);
    if (a0 == v1) goto L_0021A7D8;
L_0021A7B8:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != v1) goto L_0021A7B8;
L_0021A7D8:;
    s2 = (s32) ((u32) a3 - (u32) a4); goto L_0021A6FC;
L_0021A7E0:;
    s4 = (*(volatile s32 *) (u32) (s3 + 16));
    a1 = 24;
    a3 = s0;
    a2 = s4; v0 = func_0021A8B0(a0, a1, a2, a3);
    a0 = s4;
    a1 = s0;
    s4 = v0;
    a2 = 0;
    a3 = 0;
    a4 = 1; v0 = func_0021CCD0(a0, a1, a2, a3, a4);
    if (s4 <= 0) goto L_0021A82C;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    at = v1 < s4;
    if (at == 0) goto L_0021A82C;
    s1 = -123;
L_0021A82C:;
    a0 = (*(volatile s32 *) (u32) (s3 + 52));
    v1 = 50;
    a0 = a0 & 0x32;
    if (a0 == v1) goto L_0021A848;
L_0021A840:;
    goto L_0021A70C;
L_0021A848:;
    v1 = (*(volatile s32 *) (u32) (s3 + 176));
    { s32 c_ = s1 != 0; (*(volatile u32 *) (u32) (v1 + 4)) = (u32) v0; if (c_) goto L_0021A70C; }
    s1 = 1; goto L_0021A840;
L_0021A85C:;
    v1 = (s32) 0x220000U;
    v1 = (s32) ((u32) v1 + 0xffff87c0U);
    if (a0 == v1) goto L_0021A888;
L_0021A86C:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != v1) goto L_0021A86C;
L_0021A888:;
    s2 = (s32) ((u32) a3 - (u32) a4);
L_0021A88C:;
    v0 = s2;
    return v0;
}
