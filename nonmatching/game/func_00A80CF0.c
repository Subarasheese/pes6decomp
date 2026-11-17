/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002AE670(s32);
s32 func_0099DFF0(s32);
s32 func_009B30B0(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);

void func_00A80CF0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    a3 = (*(volatile s32 *) (u32) (v1 + 80));
    v1 = a3 < 12288;
    { s32 c_ = v1 != 0; s4 = a0; if (c_) goto L_00A80F38; }
    a2 = (*(volatile u8 *) (u32) (s4 + 92));
    v1 = 6400;
    a1 = (s32) ((u32) a2 << 1);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (s32) ((u32) a1 << 2);
    a2 = (s32) ((u32) v1 - (u32) a1);
    at = a2 < a3;
    { s32 c_ = at == 0; a0 = 8; if (c_) goto L_00A80D60; }
    v1 = (s32) ((u32) a3 - (u32) a2);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 9; if (c_) goto L_00A80D58; }
    v0 = (s32) ((u32) v1 + 0x1ffU);
    v0 = (s32) v0 >> 9;
L_00A80D58:;
    a0 = (s32) ((u32) a0 + (u32) v0); goto L_00A80D80;
L_00A80D60:;
    a1 = (*(volatile s32 *) (u32) (s4 + 28));
    v1 = (s32) ((u32) a3 + 0x800U);
    at = v1 < a1;
    if (at == 0) goto L_00A80D80;
    v1 = a1 < a2;
    if (v1 != 0) goto L_00A80F38;
L_00A80D80:;
    v0 = func_002AE670(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 152));
    v1 = 2;
    { s32 c_ = a0 == v1; s3 = v0; if (c_) goto L_00A80F38; }
    a1 = (*(volatile u8 *) (u32) (s4 + 92));
    v1 = 4352;
    a2 = (*(volatile s32 *) (u32) (s4 + 28));
    a0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    at = v1 < a2;
    if (at == 0) goto L_00A80F38;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s4 + 40)); v0 = func_009B30B0(a0, a1);
    v1 = v0 & 0xffff;
    v1 = v1 < 40;
    if (v1 != 0) goto L_00A80F38;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s4 + 268)); v0 = func_009B30B0(a0, a1);
    v1 = v0 & 0xffff;
    at = v1 < 105;
    if (at == 0) goto L_00A80F38;
    a0 = (*(volatile s32 *) (u32) (s4 + 152));
    v1 = 3;
    if (a0 == v1) goto L_00A80F38;
    v1 = 4;
    if (a0 == v1) goto L_00A80F38;
    v1 = (*(volatile s32 *) (u32) (s4 + 272));
    at = (s32) 0x60000U;
    at = at | 0x4000;
    at = (u64) v1 < (u64) at;
    if (at == 0) goto L_00A80F38;
    v0 = (s32) 0x590000U;
    s2 = (*(volatile u16 *) (u32) (s4 + 40));
    a1 = (*(volatile u8 *) (u32) (v0 + 9960));
    v1 = 0x8001;
    s1 = (*(volatile u16 *) (u32) (s4 + 268));
    a0 = s4;
    a2 = (*(volatile s32 *) (u32) (gp + -32252));
    a3 = (s32) ((u32) a1 << 2);
    v0 = (s32) 0x10000U;
    a1 = (s32) ((u32) s1 - (u32) s2);
    a1 = (s32) ((u32) a1 + (u32) v0);
    v0 = (s32) ((u32) a3 + (u32) a2);
    a1 = a1 & 0xffff;
    f12.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f13.f = (*(volatile f32 *) (u32) (v0 + 2940));
    s0 = a1 < v1; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = v0 & 0xffff;
    a0 = (s32) 0x10000U;
    a1 = (s32) ((u32) v1 - (u32) s2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = 0x8001;
    a0 = a0 & 0xffff;
    v1 = a0 < v1;
    if (s0 == v1) goto L_00A80F38;
    a0 = s2;
    a1 = s1; v0 = func_009B30B0(a0, a1);
    v1 = v0 & 0xffff;
    at = v1 < 97;
    if (at == 0) goto L_00A80F38;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s4 + 268)); v0 = func_009B30B0(a0, a1);
    v1 = v0 & 0xffff;
    at = v1 < 97;
    if (at == 0) goto L_00A80F1C;
L_00A80ED8:;
    s0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (*(volatile u16 *) (u32) (s0 + 110));
    at = s3 < v1;
    if (at != 0) goto L_00A80F38;
    a0 = s4; v0 = func_0099DFF0(a0);
    a1 = (*(volatile u16 *) (u32) (s0 + 88));
    a0 = v0; v0 = func_009B30B0(a0, a1);
    v1 = v0 & 0xffff;
    at = v1 < 25;
    if (at == 0) goto L_00A80F38;
    v1 = 128;
    (*(volatile u16 *) (u32) (s4 + 24)) = (u16) v1; goto L_00A80F38;
L_00A80F1C:;
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    a0 = (*(volatile u16 *) (u32) (s4 + 268)); v0 = func_009B30B0(a0, a1);
    v1 = v0 & 0xffff;
    at = v1 < 24;
    if (at == 0) goto L_00A80ED8;
L_00A80F38:;
    return;
}
