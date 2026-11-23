/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008B66C0(s32, s32, s32, s32);
void func_008B6E60(s32, s32, s32, s32);
void func_008B6EB0(s32, s32);
void func_008C9DB0(s32, s32, f32, f32);
void func_008D3980(s32, s32, s32, s32);
s32 func_008D3B00(s32, s32, s32, s32);
void func_008E5110(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_008C4410(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 2;
    { s32 c_ = a1 == v0; s1 = a0; if (c_) goto L_008C4504; }
    v0 = 1;
    if (a1 == v0) { a1 = (*(volatile u8 *) (u32) (s1 + 25)); goto L_008C4494; }
    if (a1 == 0) { a0 = (s32) ((u32) s1 + 0xb0cU); goto L_008C444C; }
    v0 = 0; goto L_008C4510;
    a0 = (s32) ((u32) s1 + 0xb0cU);
L_008C444C:;
    a1 = 0; func_008C9DB0(a0, a1, f12.f, f13.f);
    a1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) s1 + 0x1ca8U);
    a1 = (s32) ((u32) a1 + 0xffffcdb0U);
    a2 = 10; func_008D3980(a0, a1, a2, a3);
    a0 = s1; func_008B6E60(a0, a1, a2, a3);
    a0 = s1;
    a1 = 3; func_008B66C0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x129cU);
    a1 = 1; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C450C;
    a1 = (*(volatile u8 *) (u32) (s1 + 25));
L_008C4494:;
    a0 = (s32) ((u32) s1 + 0x1ca8U); v0 = func_008D3B00(a0, a1, a2, a3);
    v1 = 2;
    if (v0 == v1) { s0 = (*(volatile u8 *) (u32) (s1 + 7337)); goto L_008C44CC; }
    v1 = 1;
    if (v0 == v1) { v0 = 39; goto L_008C4510; }
    goto L_008C450C;
    v0 = 39;
    goto L_008C4510;
    s0 = (*(volatile u8 *) (u32) (s1 + 7337));
L_008C44CC:;
    a0 = s1;
    a1 = s0; func_008B6EB0(a0, a1);
    v1 = s0 & 0xff;
    v0 = 1;
    if (v1 == v0) { v0 = 3; goto L_008C4510; }
    if (v1 == 0) goto L_008C4510;
    goto L_008C450C;
    v0 = 3;
    goto L_008C4510;
L_008C4504:;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
L_008C450C:;
    v0 = 0;
L_008C4510:;
    return v0;
}
