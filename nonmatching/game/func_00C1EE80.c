/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00207390(s32, s32);
void func_002075B0(s32, s32, s32, s32);
void func_00209A00(s32, s32, s32);
s32 func_00A07B40(void);
void func_00B00970(s32, s32);

void func_00C1EE80(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    f32 acc = 0;

    s0 = a0; v0 = func_00A07B40();
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00C1EFAC; }
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 0;
    a2 = 0;
    a3 = 4; func_002075B0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -32420));
    v1 = (s32) 0x44800000U;
    f1.i = (s32) v1;
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.f = f1.f * f0.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a0 = s0; func_00B00970(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s0 + 28));
    if (v1 == 0) { v1 = (*(volatile u16 *) (u32) (s0 + 38)); goto L_00C1EFD4; }
L_00C1EEE0:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 9956));
    { s32 c_ = v1 < 0; f3.f = (*(volatile f32 *) (u32) (s0 + 240)); if (c_) goto L_00C1EEFC; }
    f0.i = (s32) v1;
    f2.f = (f32) f0.i; goto L_00C1EF18;
L_00C1EEFC:;
    a0 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00C1EF18:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 224));
    v1 = (s32) 0x590000U;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 462)) = (u16) a0;
    v1 = (*(volatile u8 *) (u32) (v1 + 9956));
    { s32 c_ = v1 < 0; f3.f = (*(volatile f32 *) (u32) (s0 + 248)); if (c_) goto L_00C1EF58; }
    f0.i = (s32) v1;
    f2.f = (f32) f0.i; goto L_00C1EF74;
L_00C1EF58:;
    a0 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00C1EF74:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 232));
    v1 = 130;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 464)) = (u16) a0;
    (*(volatile u8 *) (u32) (s0 + 69)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v1;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) 0; goto L_00C1EFDC;
L_00C1EFAC:;
    a1 = 447;
    a2 = 0; func_00209A00(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 8; func_00207390(a0, a1);
    v1 = 253;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v1;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) 0; goto L_00C1EFDC;
L_00C1EFD4:;
    (*(volatile u16 *) (u32) (s0 + 40)) = (u16) v1; goto L_00C1EEE0;
L_00C1EFDC:;
    return;
}
