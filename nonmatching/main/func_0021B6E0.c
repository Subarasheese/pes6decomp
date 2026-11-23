/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CCD0(s32, s32, s32, s32, s32);

s32 func_0021B6E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x540000U;
    a3 = 0;
    s3 = a0;
    a1 = (*(volatile s16 *) (u32) (a0 + 12));
    v1 = (*(volatile s16 *) (u32) (a0 + 14));
    (*(volatile u16 *) (u32) (sp + 92)) = (u16) a1;
    a0 = (*(volatile s32 *) (u32) (v0 + -32252));
    at = 0 < a0;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 94)) = (u16) v1; if (c_) goto L_0021B728; }
    v0 = (s32) 0x540000U;
    a3 = (*(volatile s32 *) (u32) (v0 + -32256));
L_0021B728:;
    v0 = (s32) 0x540000U;
    s1 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a1 = 0; if (c_) goto L_0021B83C; }
    a1 = a0; goto L_0021B83C;
L_0021B744:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_0021B790;
    at = 0 < a1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_0021B790; }
L_0021B75C:;
    v0 = (*(volatile s16 *) (u32) (a3 + 2));
    if (v0 != v1) goto L_0021B77C;
    v0 = (*(volatile s16 *) (u32) a3);
    if (v0 != a0) goto L_0021B77C;
    s1 = a3; goto L_0021B790;
L_0021B77C:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < a1;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0x10U); if (c_) goto L_0021B75C; }
L_0021B790:;
    s0 = (*(volatile s32 *) (u32) (s3 + 196));
    a0 = (*(volatile s32 *) (u32) (s3 + 16));
    a1 = s1;
    a2 = 0;
    a4 = 1;
    s2 = 0;
    a3 = s0; v0 = func_0021CCD0(a0, a1, a2, a3, a4);
    v1 = (*(volatile s32 *) (u32) (s1 + 8));
    at = v1 < v0;
    if (at == 0) goto L_0021B7C4;
    s2 = -123;
L_0021B7C4:;
    a0 = (*(volatile s32 *) (u32) (s3 + 52));
    v1 = 50;
    a0 = a0 & 0x32;
    if (a0 != v1) goto L_0021B7F0;
    { s32 c_ = s0 == 0; v1 = (*(volatile s32 *) (u32) (s3 + 176)); if (c_) goto L_0021B7E4; }
    v0 = (s32) ((u32) v0 + 0x1U);
L_0021B7E4:;
    { s32 c_ = s2 != 0; (*(volatile u32 *) (u32) (v1 + 4)) = (u32) v0; if (c_) goto L_0021B7F0; }
    s2 = 1;
L_0021B7F0:;
    { s32 c_ = s2 == 0; v0 = -126; if (c_) goto L_0021B884; }
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) s2;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    v1 = (*(volatile s32 *) (u32) (s3 + 172));
    a0 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = a0 == v1; a3 = 0; if (c_) goto L_0021B854; }
    a1 = a2;
L_0021B818:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != v1) goto L_0021B818;
    goto L_0021B854;
L_0021B83C:;
    a0 = (*(volatile s16 *) (u32) (sp + 92));
    v0 = -1;
    if (a0 == v0) goto L_0021B790;
    v1 = (s32) ((u32) sp + 0x5eU); goto L_0021B744;
L_0021B854:;
    v1 = (s32) 0x220000U;
    v1 = (s32) ((u32) v1 + 0xffff87c0U);
    if (a0 == v1) goto L_0021B880;
L_0021B864:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != v1) goto L_0021B864;
L_0021B880:;
    v0 = (s32) ((u32) a3 - (u32) a4);
L_0021B884:;
    return v0;
}
