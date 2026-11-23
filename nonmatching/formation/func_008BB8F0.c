/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void SD_stop(s32);
s32 func_00226240(void);
s32 func_00226710(void);
s32 func_0022B0A0(void);
s32 func_00291DD0(s32, s32);
s32 func_00292440(s32, s32);

void func_008BB8F0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x8f0000U;
    v1 = (s32) 0x8f0000U;
    s2 = a0;
    s1 = 0;
    f0.f = (*(volatile f32 *) (u32) (v0 + -16944));
    s0 = 0;
    f2.f = (*(volatile f32 *) (u32) (v1 + -16940));
    v0 = (s32) 0x8f0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -16936));
    v1 = (s32) 0x8f0000U;
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + -16932));
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7177));
    (*(volatile f32 *) (u32) (sp + 68)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 72)) = f1.f;
    v1 = 14;
    { s32 c_ = a0 == v1; (*(volatile f32 *) (u32) (sp + 76)) = f0.f; if (c_) goto L_008BBACC; }
    v0 = 2;
    if (a0 == v0) goto L_008BBA40;
    v0 = 4;
    if (a0 == v0) goto L_008BB970;
    goto L_008BBAF0;
L_008BB970:;
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 28;
    if (v1 == v0) goto L_008BB9C0;
    v0 = 32;
    if (v1 == v0) goto L_008BB9C0;
    v0 = 38;
    if (v1 == v0) { s1 = 1; goto L_008BBAF0; }
    v0 = 37;
    if (v1 == v0) goto L_008BB9B4;
    goto L_008BBA24;
L_008BB9B4:;
    s1 = 1;
    goto L_008BBAF0;
L_008BB9C0:;
    v0 = (s32) 0x590000U;
    v1 = 294;
    v0 = (*(volatile u16 *) (u32) (v0 + 7088));
    if (v0 != v1) goto L_008BB9D8;
    s0 = 0;
L_008BB9D8:;
    v0 = (s32) 0x590000U;
    v1 = 294;
    v0 = (*(volatile u16 *) (u32) (v0 + 7090));
    if (v0 != v1) { a0 = s0; goto L_008BB9F4; }
    s0 = 1;
    a0 = s0;
L_008BB9F4:;
    a1 = 5; v0 = func_00292440(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_008BBA0C; }
    s1 = 1;
    a0 = s0;
L_008BBA0C:;
    a1 = 6; v0 = func_00291DD0(a0, a1);
    if (v0 == 0) goto L_008BBAF0;
    s1 = 1; goto L_008BBAF0;
L_008BBA24:;
    v0 = func_0022B0A0();
    v1 = 1;
    if (v0 != v1) goto L_008BBAF0;
    s1 = v1; goto L_008BBAF0;
L_008BBA40:;
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 == v0) { s1 = 0; goto L_008BBAF0; }
    if (v1 == 0) goto L_008BBAA4;
    v0 = 7;
    if (v1 == v0) goto L_008BBAA4;
    v0 = 10;
    if (v1 == v0) { s1 = 1; goto L_008BBAF0; }
    v0 = 9;
    if (v1 == v0) goto L_008BBA98;
    v0 = 8;
    if (v1 == v0) goto L_008BBA98;
    goto L_008BBAB0;
L_008BBA98:;
    s1 = 1;
    goto L_008BBAF0;
L_008BBAA4:;
    s1 = 0;
    goto L_008BBAF0;
L_008BBAB0:;
    v0 = func_0022B0A0();
    v1 = 1;
    if (v0 != v1) goto L_008BBAF0;
    s1 = v1; goto L_008BBAF0;
L_008BBACC:;
    v0 = func_00226240();
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 != v0) { s1 = 3; goto L_008BBAF0; }
    s1 = 2; goto L_008BBAF0;
    s1 = 3;
L_008BBAF0:;
    if (s2 == 0) { v0 = (s32) ((u32) s1 << 2); goto L_008BBB14; }
    v0 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a0 = (*(volatile s32 *) (u32) (v0 + 64)); SD_call(a0);
    goto L_008BBB24;
    v0 = (s32) ((u32) s1 << 2);
L_008BBB14:;
    v0 = (s32) ((u32) v0 + (u32) sp);
    a0 = (*(volatile s32 *) (u32) (v0 + 64)); SD_stop(a0);
L_008BBB24:;
    return;
}
