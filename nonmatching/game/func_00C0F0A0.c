/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00C10560(s32, s32);
void func_00C105D0(s32, s32);
void func_00C10730(s32, s32);
void func_00C107F0(s32, s32);
void func_00C10870(s32, s32);
void func_00C108E0(s32, s32);
s32 func_00C17E10(s32, s32);
s32 func_00C18700(void);

void func_00C0F0A0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    at = (u64) a0 < (u64) (s64) 18;
    s2 = a1;
    if (at == 0) goto L_00C0F20C;
    v1 = (s32) ((u32) a0 << 2);
    a0 = (s32) 0xcb0000U;
    a0 = (s32) ((u32) a0 + 0x31e0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xc0f0dcU) goto L_00C0F0DC; if (t_ == 0xc0f180U) goto L_00C0F180; if (t_ == 0xc0f20cU) goto L_00C0F20C; }
L_00C0F0DC:;
    v1 = (*(volatile u8 *) (u32) (s2 + 27));
    v0 = (s32) v1 >> 5;
    a1 = v1 & 0x1f;
    s0 = v0 & 0x1;
    a0 = s0; v0 = func_00C17E10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s2 + 8));
    v1 = 2;
    { s32 c_ = a0 != v1; s1 = v0 & 0xff; if (c_) goto L_00C0F20C; }
    v0 = func_00C18700();
    v1 = v0 & 0xff;
    v0 = s0 & 0xff;
    v1 = (s32) ((u32) v1 + (u32) v0);
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_00C0F12C; }
    if (v0 == 0) goto L_00C0F12C;
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00C0F12C:;
    v1 = (s32) ((u32) v0 << 1);
    v0 = 1;
    v0 = (s32) ((u32) v0 - (u32) v1);
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (s2 + 4));
    f1.f = (f32) f1.i;
    f1.f = f1.f * f0.f;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { a0 = s0; goto L_00C0F170; }
    a0 = s0;
    a1 = s1; func_00C105D0(a0, a1);
    goto L_00C0F210;
L_00C0F170:;
    a1 = s1; func_00C10560(a0, a1);
    goto L_00C0F20C;
L_00C0F180:;
    v1 = (*(volatile u8 *) (u32) (s2 + 27));
    v0 = (s32) v1 >> 5;
    a1 = v1 & 0x1f;
    s1 = v0 & 0x1;
    a0 = s1; v0 = func_00C17E10(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s2 + 8));
    s0 = v0 & 0xff;
    v0 = 4;
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) (s2 + 30)); goto L_00C0F1DC; }
    v0 = (*(volatile u8 *) (u32) (s2 + 30));
    if (v0 == 0) { a0 = s1; goto L_00C0F1CC; }
    a0 = s1;
    a1 = s0; func_00C10730(a0, a1);
    goto L_00C0F20C;
L_00C0F1CC:;
    a1 = s0; func_00C107F0(a0, a1);
    goto L_00C0F20C;
L_00C0F1DC:;
    if (v0 == 0) { a0 = s1; goto L_00C0F204; }
    a0 = s1;
    a1 = s0; func_00C10870(a0, a1);
    a0 = s1;
    a1 = s0; func_00C108E0(a0, a1);
    goto L_00C0F20C;
L_00C0F204:;
    a1 = s0; func_00C108E0(a0, a1);
L_00C0F20C:;
L_00C0F210:;
    return;
}
