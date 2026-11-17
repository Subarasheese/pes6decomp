/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
void Pes6Heap_Free(s64, s64);
void Pes6Texture_SetClut(s64, s64, s64);
void func_0011D310(s64, f32);
s64 func_00150340(s64);
void func_00151080(s64, s64);
s64 func_001515E0(s64, s64, s64, s64, s64, s64, s64);
s64 func_00154070(s64);
s64 func_001E6D00(s64, s64, s64, s64, s64, s64, s64, s64);
void func_001EAF80(s64, s64, s64, s64);
void memcpy(s64, s64, s64);

s64 func_001EAB10(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    s64 hi = 0, lo = 0;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    v1 = 2;
    s7 = a3;
    s5 = a4;
    (*(volatile u32 *) (u32) (sp + 196)) = (u32) a0;
    v0 = (*(volatile s16 *) (u32) a4);
    { s32 c_ = v0 < 0; (*(volatile u32 *) (u32) (sp + 192)) = (u32) a1; if (c_) goto L_001EAB80; }
L_001EAB68:;
    at = v1 < v0;
    if (at == 0) goto L_001EABB0;
    v1 = (s32) ((u32) v1 << 1); goto L_001EAB68;
L_001EAB80:;
    v1 = 0;
    v0 = (*(volatile s16 *) (u32) (s5 + 2));
L_001EAB88:;
    s0 = (s64) ((u64) v1 << 48);
    s0 = s0 >> 48;
    { s32 c_ = v0 < 0; v1 = 2; if (c_) goto L_001EABB8; }
L_001EAB98:;
    at = v1 < v0;
    if (at == 0) goto L_001EABBC;
    v1 = (s32) ((u32) v1 << 1); goto L_001EAB98;
L_001EABB0:;
    v0 = (*(volatile s16 *) (u32) (s5 + 2)); goto L_001EAB88;
L_001EABB8:;
    v1 = 0;
L_001EABBC:;
    a4 = (s64) ((u64) v1 << 48);
    a3 = (s64) ((u64) s0 << 48);
    a1 = a2;
    a4 = a4 >> 48;
    a3 = a3 >> 48;
    a0 = 0;
    a2 = 2; v0 = func_001515E0(a0, a1, a2, a3, a4, a5, a6);
    fp = v0;
    a0 = fp; v0 = func_00150340(a0);
    a0 = 1;
    a1 = v0; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    a1 = (*(volatile s16 *) (u32) s5);
    a0 = (*(volatile s16 *) (u32) s7);
    { s32 c_ = a0 == a1; s3 = v0; if (c_) goto L_001EAD38; }
L_001EAC04:;
    f1.i = (s32) a0;
    v0 = (*(volatile s16 *) (u32) (s7 + 2));
    f0.i = (s32) a1;
    v1 = (*(volatile s16 *) (u32) (s5 + 2));
    f1.f = (f32) f1.i;
    s6 = 0;
    f0.f = (f32) f0.i;
    f20.f = f1.f / f0.f;
    f0.i = (s32) v0;
    f23.i = (s32) 0;
    f1.f = (f32) f0.i;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f21.f = f1.f / f0.f;
    at = 0 < v1;
    if (at == 0) goto L_001EACD0;
    v0 = (s64) ((u64) s0 << 48);
    s2 = 0;
    v0 = v0 >> 48;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_001EAC64:;
    f12.i = f23.i;
    a0 = (s32) ((u32) sp + 0xccU); func_0011D310(a0, f12.f);
    v0 = (s32) ((u32) sp + 0xccU);
    v1 = (*(volatile s16 *) (u32) s7);
    f0.f = (*(volatile f32 *) (u32) v0);
    f22.i = (s32) 0;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    s1 = (s32) ((u32) s3 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) (sp + 196));
    v1 = (*(volatile s16 *) (u32) s5);
    s0 = (s32) ((u32) v0 + (u32) a0);
    v0 = 0 < v1;
    { s32 c_ = v0 != 0; s4 = 0; if (c_) goto L_001EAD98; }
L_001EACB0:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s6 = (s32) ((u32) s6 + 0x1U);
    s2 = (s32) ((u32) s2 + (u32) v0);
    v0 = (*(volatile s16 *) (u32) (s5 + 2));
    v0 = s6 < v0;
    { s32 c_ = v0 != 0; f23.f = f23.f + f21.f; if (c_) goto L_001EAC64; }
L_001EACD0:;
    a0 = fp;
    a1 = s3; func_00151080(a0, a1);
    a0 = s3; Pes6Heap_Free(a0, a1);
    a0 = 1024; v0 = func_00154070(a0);
    a1 = (*(volatile s32 *) (u32) (sp + 192));
    s0 = v0;
    a0 = s0;
    a2 = 1024; memcpy(a0, a1, a2);
    a0 = 2;
    a1 = s0; func_001EAF80(a0, a1, a2, a3);
    a0 = fp;
    a1 = s0; Pes6Texture_SetClut(a0, a1, a2);
    a0 = s0; Pes6Heap_Free(a0, a1);
    a0 = fp; v0 = func_001E6D00(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_001EADE0;
    goto L_001EADF0;
L_001EAD38:;
    v1 = (*(volatile s16 *) (u32) (s5 + 2));
    v0 = (*(volatile s16 *) (u32) (s7 + 2));
    if (v0 != v1) goto L_001EAC04;
    at = 0 < v1;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_001EACD0; }
    s2 = (s64) ((u64) s0 << 48);
    s2 = s2 >> 48;
    s0 = 0;
L_001EAD60:;
    v0 = (*(volatile s16 *) (u32) s7);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a2 = (*(volatile s16 *) (u32) s5);
    a0 = (s32) ((u32) s3 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (sp + 196));
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (s5 + 2));
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + (u32) s2); if (c_) goto L_001EAD60; }
    goto L_001EACD0;
L_001EAD98:;
    f12.i = f22.i;
    a0 = (s32) ((u32) sp + 0xc8U); func_0011D310(a0, f12.f);
    f0.f = (*(volatile f32 *) (u32) (sp + 200));
    s4 = (s32) ((u32) s4 + 0x1U);
    f22.f = f22.f + f20.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v0 = (s32) ((u32) s0 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    (*(volatile u8 *) (u32) s1) = (u8) v0;
    v0 = (*(volatile s16 *) (u32) s5);
    v0 = s4 < v0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_001EAD98; }
    goto L_001EACB0;
L_001EADE0:;
    a0 = fp; Pes6Heap_Free(a0, a1);
    v0 = 0;
L_001EADF0:;
    return v0;
}
