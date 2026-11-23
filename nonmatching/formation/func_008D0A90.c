/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001F3CA0(s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008B9B70(s32, s32, s32, s32);
void func_008CE6C0(s32, s32, s32, s32, f32);

void func_008D0A90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 476)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u32 *) (u32) (s0 + 476)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s0 + 80)); func_001F3CA0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 76)); func_001F3CA0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 396)) = (u32) 0;
    a1 = 3;
    (*(volatile u32 *) (u32) (s0 + 400)) = (u32) 0;
    v0 = 1;
    (*(volatile u32 *) (u32) (s0 + 444)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 448)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 464)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 456)) = (u32) 0;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) a1;
    v1 = (*(volatile u8 *) (u32) s0);
    if (v1 != v0) { a1 = v0; goto L_008D0AFC; }
    a0 = s0; func_008CE6C0(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) (s0 + 496)); goto L_008D0B08;
L_008D0AFC:;
    a0 = s0; func_008CE6C0(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) (s0 + 496));
L_008D0B08:;
    a1 = (s32) ((u32) sp + 0x20U);
    a2 = 190; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 80));
    a1 = (s32) ((u32) sp + 0x20U);
    a2 = 8; v0 = func_008B9B70(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 476)) = (u32) v0;
    return;
}
