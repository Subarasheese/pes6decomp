/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D79A0(s64, s64);
void func_008C98A0(s64, s64, s64);
void func_008CC320(s64, s64, s64, s64);
void func_008CCC70(s64, s64, s64, s64);
s64 func_008D1ED0(s64);
s64 func_008D1F00(s64);
void func_008D20A0(s64, s64, s64);
void func_008D2100(s64, s64, s64);
void func_008D2AC0(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008D2BB0(s64, s64, s64, s64);
void func_008E7310(s64, s64, s64, s64);
void memset(s64, s64, s64);

void func_008CBDD0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u64 qh_v0 = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    { s32 c_ = s2 == 0; s0 = a2; if (c_) goto L_008CBF84; }
    if (s2 == 0) { a2 = s0 & 0x1; goto L_008CBE34; }
    a0 = (s32) ((u32) s2 + 0x28U); func_008E7310(a0, a1, a2, a3);
    a0 = s2; func_008CC320(a0, a1, a2, a3);
    a0 = s2; func_008CCC70(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x480U); func_008D2AC0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s2;
    a1 = 0;
    a2 = 1936; memset(a0, a1, a2);
    a2 = s0 & 0x1;
L_008CBE34:;
    if (s0 >= 0) { (*(volatile u8 *) (u32) (s2 + 1)) = (u8) a2; goto L_008CBE4C; }
    if (a2 == 0) goto L_008CBE48;
    a2 = (s32) ((u32) a2 + 0xfffffffeU);
L_008CBE48:;
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) a2;
L_008CBE4C:;
    v0 = 1;
    (*(volatile u8 *) (u32) s2) = (u8) 0;
    a1 = (s32) ((u32) sp + 0x50U);
    (*(volatile u8 *) (u32) (s2 + 2)) = (u8) v0;
    a0 = (s32) ((u32) s2 + 0x480U);
    { u32 a_ = (u32) (s1 + 0) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a3 = 0;
    { u32 a_ = (u32) (sp + 80) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } func_008D2BB0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x480U); v0 = func_008D1F00(a0);
    s0 = v0;
    a0 = (s32) ((u32) s2 + 0x480U);
    s1 = -1; v0 = func_008D1ED0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    at = v0 < 0;
    if (at != 0) goto L_008CBF68;
    s3 = (s32) ((u32) s1 + (u32) s0);
L_008CBEA0:;
    a0 = s2;
    a1 = s3;
    a2 = (s32) ((u32) sp + 0x6cU); func_008C98A0(a0, a1, a2);
    a2 = (s32) ((u32) s1 + 0x1U);
    a0 = (s32) ((u32) s2 + 0x480U);
    a1 = (s32) ((u32) sp + 0x6cU); func_008D2100(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (s2 + 1140));
    { s32 c_ = a2 == 0; a3 = 0; if (c_) goto L_008CBF38; }
    if (s3 < 0) goto L_008CBF38;
    v0 = (*(volatile u8 *) (u32) (a2 + 33));
    at = s3 < v0;
    if (at == 0) goto L_008CBF38;
    a1 = (*(volatile u8 *) (u32) (a2 + 842));
    { s32 c_ = a1 <= 0; a4 = 0; if (c_) goto L_008CBF38; }
    v0 = (s32) ((u32) a2 + (u32) s3);
    v1 = 1;
    a0 = (*(volatile u8 *) (u32) (v0 + 1));
L_008CBF00:;
    v0 = (*(volatile u8 *) (u32) (a2 + 828));
    if (v0 != a0) goto L_008CBF18;
    a3 = v1; goto L_008CBF28;
L_008CBF18:;
    v0 = (*(volatile u8 *) (u32) (a2 + 829));
    if (v0 != a0) goto L_008CBF28;
    a3 = v1;
L_008CBF28:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < a1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_008CBF00; }
L_008CBF38:;
    a2 = a3 & 0xff;
    a1 = (s32) ((u32) s1 + 0x1U);
    a0 = (s32) ((u32) s2 + 0x480U); func_008D20A0(a0, a1, a2);
    a0 = (s32) ((u32) s2 + 0x480U);
    s1 = (s32) ((u32) s1 + 0x1U); v0 = func_008D1ED0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    v0 = s1 < v0;
    if (v0 != 0) { s3 = (s32) ((u32) s1 + (u32) s0); goto L_008CBEA0; }
L_008CBF68:;
    a0 = (*(volatile s32 *) (u32) (s2 + 1652));
    a1 = 112; v0 = func_001D79A0(a0, a1);
    v1 = (s32) 0x8d0000U;
    v1 = (s32) ((u32) v1 + 0xffff9a90U);
    (*(volatile u32 *) (u32) (s2 + 108)) = (u32) v1;
    (*(volatile u32 *) (u32) (s2 + 112)) = (u32) s2;
L_008CBF84:;
    return;
}
