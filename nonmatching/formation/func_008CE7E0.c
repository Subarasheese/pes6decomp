/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001F3D10(s32, s32);
s32 func_008B9D60(s32, s32, s32, s32);

void func_008CE7E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[28];
    s32 sp = (s32) (u32) frame;

    fp = a1;
    s5 = a0;
    a1 = (*(volatile s32 *) (u32) (a0 + 52));
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) a2;
    { s32 c_ = a1 == 0; (*(volatile u32 *) (u32) (sp + 168)) = (u32) a4; if (c_) goto L_008CEAFC; }
    v1 = (s32) ((u32) a3 + (u32) a1);
    a4 = 0;
    a0 = (*(volatile u8 *) (u32) (v1 + 1));
    a3 = (s32) ((u32) sp + 0xd0U);
    a2 = (s32) ((u32) sp + 0xc8U);
L_008CE838:;
    v1 = (s32) ((u32) a1 + (u32) a4);
    (*(volatile u8 *) (u32) a3) = (u8) 0;
    v1 = (*(volatile u8 *) (u32) (v1 + 820));
    { s32 c_ = a0 != v1; (*(volatile u8 *) (u32) a2) = (u8) 0; if (c_) goto L_008CE858; }
    v1 = (*(volatile u8 *) (u32) a3);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) a3) = (u8) v1;
L_008CE858:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < 5;
    a3 = (s32) ((u32) a3 + 0x1U);
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x1U); if (c_) goto L_008CE838; }
    a7 = 0;
    a5 = 0;
    a6 = (s32) ((u32) sp + 0xd0U);
    a1 = 1;
    a2 = 2;
    a3 = 3;
    a4 = 4;
L_008CE888:;
    v1 = (*(volatile u8 *) (u32) a6);
    { s32 c_ = v1 <= 0; a7 = (s32) ((u32) a7 + (u32) v1); if (c_) goto L_008CE918; }
    if (a5 == a4) goto L_008CE908;
    if (a5 == a3) goto L_008CE8E8;
    if (a5 == a2) goto L_008CE8E8;
    if (a5 == a1) goto L_008CE8C8;
    if (a5 == 0) goto L_008CE8C8;
    goto L_008CE918;
L_008CE8C8:;
    a0 = (*(volatile u8 *) (u32) (sp + 200));
    v1 = (*(volatile u8 *) (u32) (sp + 201));
    a0 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (sp + 200)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 201)) = (u8) v1; goto L_008CE918;
L_008CE8E8:;
    a0 = (*(volatile u8 *) (u32) (sp + 202));
    v1 = (*(volatile u8 *) (u32) (sp + 203));
    a0 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (sp + 202)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 203)) = (u8) v1; goto L_008CE918;
L_008CE908:;
    v1 = (*(volatile u8 *) (u32) (sp + 204));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (sp + 204)) = (u8) v1;
L_008CE918:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 5;
    { s32 c_ = v1 != 0; a6 = (s32) ((u32) a6 + 0x1U); if (c_) goto L_008CE888; }
    if (a7 == 0) { ; goto L_008CEB00; }
    a0 = fp;
    a1 = 1; func_001F3D10(a0, a1);
    s3 = (s32) 0x8f0000U;
    s2 = (s32) 0x8f0000U;
    s0 = (s32) 0x8f0000U;
    s7 = 0;
    s4 = (s32) ((u32) sp + 0xd0U);
    s3 = (s32) ((u32) s3 + 0xffffda00U);
    s2 = (s32) ((u32) s2 + 0xffffc040U);
    s1 = (s32) ((u32) sp + 0xc8U);
    s0 = (s32) ((u32) s0 + 0xffffc010U);
    s6 = s5;
L_008CE964:;
    v1 = (*(volatile u8 *) (u32) s4);
    if (v1 <= 0) goto L_008CEA08;
    a2 = (*(volatile u16 *) (u32) s3);
    a0 = (*(volatile s32 *) (u32) (s5 + 520));
    a1 = (s32) ((u32) sp + 0xb0U); v0 = func_001D7A20(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s5 + 6));
    f0.f = (*(volatile f32 *) (u32) (sp + 180));
    v0 = (*(volatile s32 *) (u32) (sp + 172));
    a0 = (*(volatile s16 *) (u32) s2);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    (*(volatile u16 *) (u32) (sp + 216)) = (u16) a0;
    f1.i = (s32) a1;
    v1 = (*(volatile s16 *) (u32) (s2 + 2));
    f1.f = (f32) f1.i;
    v0 = (*(volatile s16 *) (u32) (s2 + 4));
    (*(volatile u16 *) (u32) (sp + 218)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 220)) = (u16) v0;
    v0 = (*(volatile u8 *) (u32) s1);
    v1 = (*(volatile s16 *) (u32) (s2 + 6));
    f0.f = f0.f + f1.f;
    at = v0 < 2;
    (*(volatile u16 *) (u32) (sp + 222)) = (u16) v1;
    { s32 c_ = at != 0; (*(volatile f32 *) (u32) (sp + 180)) = f0.f; if (c_) goto L_008CE9E0; }
    v1 = (*(volatile s16 *) (u32) (s0 + 4));
    v0 = (*(volatile s16 *) (u32) (s0 + 6));
    (*(volatile u16 *) (u32) (sp + 216)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 218)) = (u16) v0; goto L_008CE9F0;
L_008CE9E0:;
    v1 = (*(volatile s16 *) (u32) s0);
    v0 = (*(volatile s16 *) (u32) (s0 + 2));
    (*(volatile u16 *) (u32) (sp + 216)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 218)) = (u16) v0;
L_008CE9F0:;
    a2 = (*(volatile s32 *) (u32) (sp + 168));
    a0 = fp;
    a1 = (s32) ((u32) sp + 0xb0U);
    a3 = (s32) ((u32) sp + 0xd8U); v0 = func_008B9D60(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s6 + 404)) = (u32) v0;
L_008CEA08:;
    s7 = (s32) ((u32) s7 + 0x1U);
    v1 = s7 < 5;
    s4 = (s32) ((u32) s4 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x4U);
    s2 = (s32) ((u32) s2 + 0x8U);
    s1 = (s32) ((u32) s1 + 0x1U);
    s0 = (s32) ((u32) s0 + 0x8U);
    { s32 c_ = v1 != 0; s6 = (s32) ((u32) s6 + 0x4U); if (c_) goto L_008CE964; }
    s0 = (s32) 0x8f0000U;
    s7 = (s32) 0x8f0000U;
    s6 = (s32) 0x8f0000U;
    s3 = 0;
    s2 = (s32) ((u32) sp + 0xd0U);
    s1 = (s32) ((u32) sp + 0xc8U);
    s0 = (s32) ((u32) s0 + 0xffffda40U);
    s7 = (s32) ((u32) s7 + 0xffffda20U);
    s6 = (s32) ((u32) s6 + 0xffffbfe0U);
    s4 = s5;
L_008CEA54:;
    v1 = (*(volatile u8 *) (u32) s2);
    if (v1 <= 0) goto L_008CEAD8;
    v0 = (*(volatile u8 *) (u32) s1);
    at = v0 < 2;
    if (at != 0) goto L_008CEA88;
    a2 = (*(volatile u16 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (s5 + 520));
    a1 = (s32) ((u32) sp + 0xb0U); v0 = func_001D7A20(a0, a1, a2);
    goto L_008CEA98;
L_008CEA88:;
    a2 = (*(volatile u16 *) (u32) s7);
    a0 = (*(volatile s32 *) (u32) (s5 + 520));
    a1 = (s32) ((u32) sp + 0xb0U); v0 = func_001D7A20(a0, a1, a2);
L_008CEA98:;
    v1 = (*(volatile u8 *) (u32) (s5 + 6));
    v0 = (*(volatile s32 *) (u32) (sp + 172));
    f0.f = (*(volatile f32 *) (u32) (sp + 180));
    a2 = (*(volatile s32 *) (u32) (sp + 168));
    a0 = fp;
    a1 = (s32) ((u32) sp + 0xb0U);
    a3 = s6;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 180)) = f0.f; v0 = func_008B9D60(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s4 + 424)) = (u32) v0;
L_008CEAD8:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 5;
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x1U);
    s0 = (s32) ((u32) s0 + 0x4U);
    s7 = (s32) ((u32) s7 + 0x4U);
    s6 = (s32) ((u32) s6 + 0x8U);
    { s32 c_ = v1 != 0; s4 = (s32) ((u32) s4 + 0x4U); if (c_) goto L_008CEA54; }
L_008CEAFC:;
L_008CEB00:;
    return;
}
