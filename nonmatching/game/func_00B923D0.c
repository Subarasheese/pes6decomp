/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B2A420(s32);
void func_00B364D0(s32);
void func_00BD3B80(s32, s32);
void func_00BD3BA0(s32, s32, s32);
void func_00BD3CF0(s32, s32, s32, s32, f32, f32);
void func_00BD4040(s32, s32);
s32 func_00BF6270(void);

void func_00B923D0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    s0 = a0; v0 = func_00BF6270();
    a0 = v0; v0 = func_00B2A420(a0);
    if (s0 == v0) { a0 = 0; goto L_00B92444; }
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = (*(volatile u8 *) (u32) (a0 + 81));
    if (v1 == 0) { v1 = (*(volatile s32 *) (u32) s0); goto L_00B924E4; }
    v1 = (*(volatile u8 *) (u32) (a0 + 18));
    v0 = 2;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) s0); goto L_00B924CC; }
    v0 = (*(volatile s32 *) (u32) (a0 + 52));
    at = (u64) v0 < (u64) (s64) 65;
    if (at != 0) { a1 = 3; goto L_00B92428; }
    a1 = 4;
L_00B92428:;
    a0 = s0; func_00BD4040(a0, a1);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = 55;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0;
L_00B9243C:;
    goto L_00B924F4;
L_00B92444:;
    func_00B364D0(a0);
    a0 = s0;
    a1 = 5; func_00BD4040(a0, a1);
    a0 = s0;
    a1 = 4;
    a2 = 1; func_00BD3BA0(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 47;
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    f0.i = (s32) 0;
    (*(volatile u16 *) (u32) (a0 + 24)) = (u16) a1;
    f2.f = (*(volatile f32 *) (u32) (v1 + -13608));
    f1.f = (*(volatile f32 *) (u32) (v0 + -13604));
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) { v1 = 1; goto L_00B924A4; }
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -12914)) = (u8) 0; goto L_00B924AC;
L_00B924A4:;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -12914)) = (u8) v1;
L_00B924AC:;
    v0 = (s32) 0xcc0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -12914));
    a0 = s0; func_00BD3B80(a0, a1);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = 1;
    (*(volatile u8 *) (u32) (v1 + 80)) = (u8) a0; goto L_00B9243C;
L_00B924CC:;
    f12.f = (*(volatile f32 *) (u32) (v0 + 108));
    f13.f = (*(volatile f32 *) (u32) (v0 + 112));
    a0 = s0; func_00BD3CF0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B924F0;
L_00B924E4:;
    a0 = 127;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00B9243C;
L_00B924F0:;
L_00B924F4:;
    return;
}
