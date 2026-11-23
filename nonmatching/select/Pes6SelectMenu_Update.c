/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6SelectMenu_ExhibitionSetup(s32, s32, s32, s32);
void func_009301F0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00930340(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00930740(s32, s32, s32, s32);
void func_00930880(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00930AF0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00931000(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_00931110(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_00931270(s32, s32, s32, s32);
void func_009313D0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00931750(void);
s32 func_00931990(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_00933F40(s32, s32, s32, s32, s32, s32, s32, s32);

s32 Pes6SelectMenu_Update(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = (s32) 0x540000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -15614));
    at = (u64) v0 < (u64) (s64) 15;
    if (at == 0) { v0 = 0; goto L_00931B8C; }
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6370U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x931aa8U) goto L_00931AA8; if (t_ == 0x931abcU) goto L_00931ABC; if (t_ == 0x931accU) goto L_00931ACC; if (t_ == 0x931adcU) goto L_00931ADC; if (t_ == 0x931aecU) goto L_00931AEC; if (t_ == 0x931afcU) goto L_00931AFC; if (t_ == 0x931b0cU) goto L_00931B0C; if (t_ == 0x931b1cU) goto L_00931B1C; if (t_ == 0x931b2cU) goto L_00931B2C; if (t_ == 0x931b3cU) goto L_00931B3C; if (t_ == 0x931b4cU) goto L_00931B4C; if (t_ == 0x931b68U) goto L_00931B68; if (t_ == 0x931b70U) goto L_00931B70; if (t_ == 0x931b80U) goto L_00931B80; if (t_ == 0x931b88U) goto L_00931B88; }
L_00931AA8:;
    a0 = (s32) 0x540000U;
    a0 = (s32) ((u32) a0 + 0xffffc302U); func_00933F40(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00931B88;
L_00931ABC:;
    Pes6SelectMenu_ExhibitionSetup(a0, a1, a2, a3);
    goto L_00931B88;
L_00931ACC:;
    func_00930880(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00931B88;
L_00931ADC:;
    func_00930AF0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00931B88;
L_00931AEC:;
    func_00930740(a0, a1, a2, a3);
    goto L_00931B88;
L_00931AFC:;
    func_00931270(a0, a1, a2, a3);
    goto L_00931B88;
L_00931B0C:;
    func_00931000(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    goto L_00931B88;
L_00931B1C:;
    func_00931110(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    goto L_00931B88;
L_00931B2C:;
    func_009313D0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00931B88;
L_00931B3C:;
    func_00930340(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00931B88;
L_00931B4C:;
    v0 = func_00931990(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    v1 = 1;
    if (v0 != v1) goto L_00931B88;
    v0 = 11; goto L_00931B8C;
L_00931B68:;
    v0 = 2; goto L_00931B8C;
L_00931B70:;
    func_009301F0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00931B88;
L_00931B80:;
    func_00931750();
L_00931B88:;
    v0 = 0;
L_00931B8C:;
    return v0;
}
