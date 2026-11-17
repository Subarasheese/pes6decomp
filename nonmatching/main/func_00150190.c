/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Texture_GetPixels(s32);
s32 func_001454A0(s32);
s32 func_001454B0(s32);
s32 func_00154070(s32);
s32 memcpy(s32, s32, s32);

s32 func_00150190(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 hi = 0, lo = 0;

    s2 = a0;
    { s32 c_ = s2 == 0; s1 = a1; if (c_) goto L_00150278; }
    if (s1 == 0) { s0 = 0; goto L_00150280; }
L_001501BC:;
    if (s2 == 0) goto L_00150270;
    if (s1 == 0) goto L_00150270;
    s0 = 0;
    at = s0 < 5;
    if (at == 0) goto L_00150210;
    a0 = (*(u8 *) (u32) (s2 + 25));
    v1 = (s32) 0x370000U;
    v1 = (s32) ((u32) v1 + 0x6a80U);
L_001501E8:;
    v0 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(s32 *) (u32) v0);
    if (a0 != v0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_00150204; }
    a0 = s2; goto L_00150218;
L_00150204:;
    v0 = s0 < 5;
    if (v0 != 0) goto L_001501E8;
L_00150210:;
    s0 = 0;
    a0 = s2;
L_00150218:;
    v0 = func_001454B0(a0);
    s3 = v0;
    a0 = s2; v0 = func_001454A0(a0);
    { s64 m_ = (s64) (s32) s3 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) 0x370000U;
    v0 = (s32) ((u32) v0 + 0x68f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(s32 *) (u32) v0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s32 c_ = v0 >= 0; s0 = (s32) v0 >> 1; if (c_) goto L_00150258; }
    v0 = (s32) ((u32) v0 + 0x1U);
    s0 = (s32) v0 >> 1;
L_00150258:;
    a0 = s2; v0 = Pes6Texture_GetPixels(a0);
    a1 = v0;
    a2 = s0;
    a0 = s1; v0 = memcpy(a0, a1, a2);
L_00150270:;
    v0 = s1; goto L_00150318;
L_00150278:;
    v0 = 0; goto L_00150318;
L_00150280:;
    at = s0 < 5;
    if (at == 0) goto L_001502C0;
    a0 = (*(u8 *) (u32) (s2 + 25));
    v1 = (s32) 0x370000U;
    v1 = (s32) ((u32) v1 + 0x6a80U);
L_00150298:;
    v0 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(s32 *) (u32) v0);
    if (a0 != v0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_001502B4; }
    a0 = s2; goto L_001502C8;
L_001502B4:;
    v0 = s0 < 5;
    if (v0 != 0) goto L_00150298;
L_001502C0:;
    s0 = 0;
    a0 = s2;
L_001502C8:;
    v0 = func_001454B0(a0);
    s1 = v0;
    a0 = s2; v0 = func_001454A0(a0);
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) 0x370000U;
    v0 = (s32) ((u32) v0 + 0x68f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(s32 *) (u32) v0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s32 c_ = v0 >= 0; a0 = (s32) v0 >> 1; if (c_) goto L_00150308; }
    v0 = (s32) ((u32) v0 + 0x1U);
    a0 = (s32) v0 >> 1;
L_00150308:;
    v0 = func_00154070(a0);
    s1 = v0; goto L_001501BC;
L_00150318:;
    return v0;
}
