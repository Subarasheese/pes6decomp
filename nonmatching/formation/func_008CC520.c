/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001C80F0(s64);
void func_001C8228(s64, s64, s64);
s64 func_008B2890(s64);
s64 func_008B2970(s64);
s64 func_008B2990(s64);
s64 func_008B9430(void);
void func_008C5230(s64, s64, s64, s64, f32);
void func_008C8F60(s64, s64, s64, s64, f32);
void func_008C9020(s64, s64, s64);
void func_008C90B0(s64, s64);
void func_008C90E0(s64, s64);
void func_008C9110(s64, s64, s64);
void func_008C9200(s64, s64, s64, s64, f32);
void func_008C9AB0(s64, s64);
s64 func_008CB0C0(s64);
void func_008D1C10(s64, s64);
void func_008D85C0(s64, s64, s64, s64, f32);
void strncpy(s64, s64, s64);

void func_008CC520(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    s3 = (*(volatile s32 *) (u32) (a0 + 1140));
    s0 = a0;
    a0 = (s32) ((u32) sp + 0xc0U); func_008D85C0(a0, a1, a2, a3, f12.f);
    a0 = s0; v0 = func_008CB0C0(a0);
    s2 = v0;
    v0 = s2 < 11;
    if (v0 != 0) { v0 = 0; goto L_008CC580; }
    a0 = (s32) ((u32) s0 + 0x480U);
    a1 = 0; func_008D1C10(a0, a1);
    goto L_008CC7BC;
    v0 = 0;
L_008CC580:;
    if (s2 == 0) { s1 = v0 & 0xff; goto L_008CC5AC; }
    v0 = (s32) ((u32) s2 + (u32) s3);
    v0 = (*(volatile u8 *) (u32) (v0 + 46));
    v0 = v0 < 2;
    if (v0 != 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_008CC5A8; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_008CC5A8;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_008CC5A8:;
    s1 = v0 & 0xff;
L_008CC5AC:;
    a0 = (s32) ((u32) sp + 0xc0U);
    a1 = s1; func_008C8F60(a0, a1, a2, a3, f12.f);
    a2 = (*(volatile u8 *) (u32) (s0 + 1));
    a0 = (s32) ((u32) sp + 0xb0U);
    a1 = 2; func_008C5230(a0, a1, a2, a3, f12.f);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0xc0U); func_008C9AB0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 192));
    a1 = s1;
    f0.f = (*(volatile f32 *) (u32) (sp + 196));
    a0 = (s32) ((u32) s0 + 0x77cU);
    (*(volatile f32 *) (u32) (sp + 176)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 180)) = f0.f;
    a3 = (*(volatile u8 *) (u32) (s0 + 1));
    a2 = (s32) ((u32) sp + 0xb0U); func_008C9200(a0, a1, a2, a3, f12.f);
    v0 = (s32) ((u32) s3 + (u32) s2);
    s4 = 0;
    s5 = 0;
    s1 = (s32) ((u32) v0 + 0x44U);
    v1 = (*(volatile u8 *) (u32) s1);
L_008CC60C:;
    v0 = 1;
    v0 = (s32) ((u32) v0 << (s5 & 31));
    v0 = v1 & v0;
    if (v0 == 0) goto L_008CC6A8;
    v0 = func_008B9430();
    if (v0 == 0) goto L_008CC650;
    v0 = (s32) ((u32) s5 + 0x6U);
    { s32 c_ = v0 >= 0; v1 = v0 & 0x7; if (c_) goto L_008CC688; }
    if (v1 == 0) goto L_008CC688;
    v1 = (s32) ((u32) v1 + 0xfffffff8U);
    goto L_008CC688;
L_008CC650:;
    v1 = (*(volatile u8 *) (u32) s3);
    v0 = 1;
    if (v1 != v0) goto L_008CC680;
    v0 = (s32) ((u32) s5 + 0x4U);
    { s32 c_ = v0 >= 0; v1 = v0 & 0x7; if (c_) goto L_008CC688; }
    if (v1 == 0) goto L_008CC688;
    v1 = (s32) ((u32) v1 + 0xfffffff8U);
    goto L_008CC688;
L_008CC680:;
    v1 = s5;
L_008CC688:;
    a2 = s4;
    a1 = v1 & 0xff;
    a0 = (s32) ((u32) s0 + 0x77cU);
    s4 = (s32) ((u32) s4 + 0x1U); func_008C9110(a0, a1, a2);
    at = s4 < 2;
    if (at == 0) goto L_008CC6B8;
L_008CC6A8:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 8;
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) s1); goto L_008CC60C; }
L_008CC6B8:;
    v0 = (s32) ((u32) s2 + (u32) s3);
    a0 = (*(volatile u8 *) (u32) (v0 + 79)); v0 = func_008B2890(a0);
    a0 = (s32) ((u32) s0 + 0x77cU);
    a1 = v0; func_008C90E0(a0, a1);
    if (s2 == 0) goto L_008CC7B8;
    v0 = (s32) ((u32) s2 + (u32) s3);
    a0 = (*(volatile u8 *) (u32) (v0 + 46));
    s1 = (s32) ((u32) v0 + 0x2eU); v0 = func_008B2990(a0);
    s4 = v0;
    v0 = (*(volatile u8 *) (u32) s1);
    v0 = v0 < 2;
    if (v0 != 0) { a0 = (s32) ((u32) s0 + 0x77cU); goto L_008CC7B0; }
    a1 = s4;
    a0 = (s32) ((u32) sp + 0x70U);
    a2 = 50;
    (*(volatile u8 *) (u32) (sp + 162)) = (u8) 0; strncpy(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x70U); v0 = func_001C80F0(a0);
    v1 = 50;
    a1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) sp + 0x70U);
    a2 = (s32) ((u32) v1 - (u32) v0);
    a1 = (s32) ((u32) a1 + 0xffffd9c8U); func_001C8228(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) s1);
    a0 = (s32) ((u32) v0 + 0xfffffffeU); v0 = func_008B2970(a0);
    s1 = v0;
    a0 = (s32) ((u32) sp + 0x70U); v0 = func_001C80F0(a0);
    v1 = 50;
    a1 = s1;
    a2 = (s32) ((u32) v1 - (u32) v0);
    a0 = (s32) ((u32) sp + 0x70U); func_001C8228(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x70U); v0 = func_001C80F0(a0);
    v1 = 50;
    a1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) sp + 0x70U);
    a2 = (s32) ((u32) v1 - (u32) v0);
    a1 = (s32) ((u32) a1 + 0xffffd9d0U); func_001C8228(a0, a1, a2);
    v0 = (s32) ((u32) s2 + (u32) s3);
    a1 = (*(volatile s32 *) (u32) (s0 + 1144));
    v0 = (*(volatile u8 *) (u32) (v0 + 57));
    a0 = (s32) ((u32) s0 + 0x77cU);
    v1 = (s32) ((u32) v0 + (u32) a1);
    v0 = (*(volatile u8 *) (u32) (v1 + 1894));
    a2 = (*(volatile u8 *) (u32) (v1 + 2026));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a1);
    a1 = (*(volatile s32 *) (u32) (v0 + 596));
    s4 = (s32) ((u32) sp + 0x70U); func_008C9020(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x77cU);
L_008CC7B0:;
    a1 = s4; func_008C90B0(a0, a1);
L_008CC7B8:;
L_008CC7BC:;
    return;
}
