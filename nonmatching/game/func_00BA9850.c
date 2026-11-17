/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00295860(s32);
void func_00297390(s32, s32, s32, s32);
void func_002974F0(s32);
void func_00BA99D0(s32, f32);

void func_00BA9850(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;

    v0 = (s32) 0xca0000U;
    v0 = (s32) ((u32) v0 + 0xffffe744U);
    v1 = (s32) ((u32) a1 << 5);
    s1 = a0;
    a0 = (s32) ((u32) s1 << 3);
    s0 = a2;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) v0);
    s2 = (s32) ((u32) v0 + (u32) v1); func_00297390(a0, a1, a2, a3);
    a0 = s2; func_002974F0(a0);
    v1 = 2;
    if (s1 == v1) { v0 = (*(volatile s32 *) (u32) s0); goto L_00BA98CC; }
    v1 = 1;
    if (s1 == v1) goto L_00BA98FC;
    if (s1 == 0) { a0 = s0; goto L_00BA98BC; }
    goto L_00BA9900;
L_00BA98BC:;
    func_00BA99D0(a0, f12.f);
    goto L_00BA98FC;
L_00BA98CC:;
    f0.i = (s32) 0;
    f1.f = (*(volatile f32 *) (u32) (v0 + 224));
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00BA98E4; }
    v0 = 0;
L_00BA98E4:;
    (*(volatile u8 *) (u32) (gp + -19452)) = (u8) v0;
    a0 = (s32) ((u32) gp + 0xffffb404U);
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) v0);
    (*(volatile u8 *) (u32) (gp + -19451)) = (u8) v0; func_00295860(a0);
L_00BA98FC:;
L_00BA9900:;
    return;
}
