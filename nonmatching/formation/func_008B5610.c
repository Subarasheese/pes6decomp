/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_008472D0(s64, s64, s64, s64);
s64 func_00858C20(s64, s64, s64, s64);
void func_008B56F0(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32);
void func_008B59F0(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32);

void func_008B5610(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = (s32) 0x8f0000U;
    s1 = a0;
    a0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v1 = a0 & 0xf;
    v0 = 3;
    v1 = (s64) ((u64) v1 << 48);
    v1 = v1 >> 48;
    { s32 c_ = v1 != v0; s0 = a1; if (c_) goto L_008B56C0; }
    v0 = a0 & 0x80;
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) goto L_008B5694;
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00858C20(a0, a1, a2, a3);
    s2 = (s64) ((u64) v0 << 48);
    s2 = s2 >> 48; v0 = func_008472D0(a0, a1, a2, a3);
    v0 = (*(volatile s16 *) (u32) v0);
    v0 = s2 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 == 0) goto L_008B5694;
    a0 = s1;
    a1 = s0; func_008B56F0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    goto L_008B56D0;
L_008B5694:;
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0x80;
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) { a0 = s1; goto L_008B56C4; }
    a0 = s1;
    a1 = s0; func_008B59F0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    goto L_008B56CC;
L_008B56C0:;
    a0 = s1;
L_008B56C4:;
    a1 = s0; func_008B56F0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
L_008B56CC:;
L_008B56D0:;
    return;
}
