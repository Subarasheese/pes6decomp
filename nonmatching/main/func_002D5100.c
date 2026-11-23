/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001540D0(s32);
s32 func_001F87E0(s32, s32);
void func_002CB730(s32);
s32 func_002FA990(void);
void func_002FA9A0(s32);
void func_002FA9B0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002FA9E0(s32, s32, s32, s32, f32);
void func_009B44F0(s32);
s32 func_00C949B0(void);
s32 func_00C95100(s32);

void func_002D5100(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    s3 = a0;
    s2 = a3;
    { s32 c_ = s3 != 0; s0 = a1; if (c_) goto L_002D5144; }
    if (s0 != a2) { s1 = (s32) ((u32) s3 + 0x1U); goto L_002D5148; }
    a0 = 0;
    a1 = 16; v0 = func_001F87E0(a0, a1);
    goto L_002D5278;
L_002D5144:;
    s1 = (s32) ((u32) s3 + 0x1U);
L_002D5148:;
    v0 = func_00C949B0();
    at = s1 < v0;
    if (at == 0) { v1 = (*(volatile u8 *) (u32) (gp + -21972)); goto L_002D5170; }
    a0 = 2; v0 = func_00C95100(a0);
    if (v0 == 0) goto L_002D51DC;
    v1 = (*(volatile u8 *) (u32) (gp + -21972));
L_002D5170:;
    a0 = 1;
    if (v1 != a0) { v1 = (s32) ((u32) s2 + 0xfffffff0U); goto L_002D51C4; }
    a0 = 2; v0 = func_00C95100(a0);
    if (v0 == 0) { a0 = 16; goto L_002D519C; }
    v0 = (s32) ((u32) s0 + 0x11U);
    a0 = v0 & 0xffff; func_009B44F0(a0);
    a0 = 16;
L_002D519C:;
    func_002FA9A0(a0);
    v0 = func_002FA990();
    if (v0 == 0) goto L_002D5274;
    func_002FA9B0(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u8 *) (u32) (gp + -21972)) = (u8) 0; goto L_002D5274;
L_002D51C4:;
    if (s0 != v1) goto L_002D5274;
    a1 = 16; v0 = func_001F87E0(a0, a1);
    goto L_002D5274;
L_002D51DC:;
    v0 = func_00C949B0();
    at = s1 < v0;
    if (at == 0) goto L_002D5274;
    a0 = 2; v0 = func_00C95100(a0);
    if (v0 != 0) goto L_002D5274;
    if (s0 != s2) { a0 = (*(volatile u8 *) (u32) (gp + -21972)); goto L_002D5244; }
    v1 = (*(volatile u8 *) (u32) (gp + -21972));
    if (v1 != 0) goto L_002D5240;
    a0 = 17; func_002CB730(a0);
    v0 = (s32) 0x3f800000U;
    f12.i = (s32) v0;
    func_002FA9E0(a0, a1, a2, a3, f12.f);
    a0 = 1; func_001540D0(a0);
    v1 = 1;
    (*(volatile u8 *) (u32) (gp + -21972)) = (u8) v1; goto L_002D5274;
L_002D5240:;
    a0 = (*(volatile u8 *) (u32) (gp + -21972));
L_002D5244:;
    v1 = 1;
    if (a0 != v1) goto L_002D5274;
    a0 = 8; func_002FA9A0(a0);
    v0 = func_002FA990();
    if (v0 == 0) goto L_002D5274;
    func_002FA9B0(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u8 *) (u32) (gp + -21972)) = (u8) 0;
L_002D5274:;
L_002D5278:;
    return;
}
