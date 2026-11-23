/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
s32 func_001E6E10(s32);
void func_001EF900(s32, s32);
void func_001F3CA0(s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008B9B70(s32, s32, s32, s32);
s32 func_008B9D60(s32, s32, s32, s32);
s32 func_008B9F20(s32, s32, s32, s32);
void func_008CE6C0(s32, s32, s32, s32, f32);

void func_008D0B50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a1;
    s1 = a0;
    if (s1 == 0) goto L_008D0C94;
    a0 = (*(volatile s32 *) (u32) (s1 + 476)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u32 *) (u32) (s1 + 476)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s1 + 80)); func_001F3CA0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 76)); func_001F3CA0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 396)) = (u32) 0;
    a1 = 3;
    (*(volatile u32 *) (u32) (s1 + 400)) = (u32) 0;
    v0 = 1;
    (*(volatile u32 *) (u32) (s1 + 444)) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 448)) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 464)) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 456)) = (u32) 0;
    (*(volatile u8 *) (u32) (s1 + 2)) = (u8) a1;
    v1 = (*(volatile u8 *) (u32) s1);
    if (v1 != v0) { a1 = v0; goto L_008D0BCC; }
    a0 = s1; func_008CE6C0(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) (s1 + 496)); goto L_008D0BD8;
L_008D0BCC:;
    a0 = s1; func_008CE6C0(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) (s1 + 496));
L_008D0BD8:;
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 190; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 80));
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 8; v0 = func_008B9B70(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 476)) = (u32) v0;
    a0 = 20188; v0 = func_001E6E10(a0);
    a0 = (*(volatile s32 *) (u32) (s1 + 80));
    s0 = v0;
    a1 = 1;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    a4 = s2 & 0xff;
    v1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) a4 << 3);
    v1 = (s32) ((u32) v1 + 0xffffc070U);
    a3 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s1 + 444)) = (u32) v0;
    a2 = (*(volatile s16 *) (u32) a3);
    v1 = 1;
    a1 = (*(volatile s16 *) (u32) (a3 + 2));
    a0 = (*(volatile s16 *) (u32) (a3 + 4));
    (*(volatile u16 *) (u32) (sp + 88)) = (u16) a2;
    (*(volatile u16 *) (u32) (sp + 90)) = (u16) a1;
    (*(volatile u16 *) (u32) (sp + 92)) = (u16) a0;
    a0 = (*(volatile s16 *) (u32) (a3 + 6));
    (*(volatile u16 *) (u32) (sp + 94)) = (u16) a0;
    a0 = (*(volatile u8 *) (u32) s1);
    if (a0 != v1) { a2 = s0; goto L_008D0C74; }
    if (a4 != 0) goto L_008D0C70;
    v1 = (*(volatile s16 *) (u32) (sp + 90));
    v1 = (s32) ((u32) v1 + 0x14U);
    (*(volatile u16 *) (u32) (sp + 90)) = (u16) v1;
L_008D0C70:;
    a2 = s0;
L_008D0C74:;
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x40U);
    a3 = (s32) ((u32) sp + 0x58U); v0 = func_008B9D60(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 448)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001EF900(a0, a1);
L_008D0C94:;
    return;
}
