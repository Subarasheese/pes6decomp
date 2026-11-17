/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002E1A30(s32, s32, s32, s32, f32);

s32 func_002E0BE0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };

    v1 = 9;
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 == v1) { a0 = (s32) ((u32) s0 + 0x28U); goto L_002E0D3C; }
    v1 = 6;
    if (a0 == v1) { a0 = (s32) ((u32) s0 + 0x28U); goto L_002E0D2C; }
    v1 = 5;
    if (a0 == v1) { v1 = 1; goto L_002E0CF8; }
    v1 = 8;
    if (a0 == v1) goto L_002E0CC4;
    a1 = 3;
    if (a0 == a1) { a0 = (s32) ((u32) s0 + 0x28U); goto L_002E0C88; }
    if (a0 == 0) { a0 = (s32) ((u32) s0 + 0x28U); goto L_002E0C40; }
    goto L_002E0D78;
L_002E0C40:;
    v0 = func_002E1A30(a0, a1, a2, a3, f12.f);
    a0 = (s32) ((u32) s0 + 0x4cU);
    a1 = 4; v0 = func_002E1A30(a0, a1, a2, a3, f12.f);
    if (s0 == 0) { ; goto L_002E0DA8; }
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0x3240U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    if (v1 >= 0) { v1 = 0; goto L_002E0C80; }
L_002E0C80:;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v1; goto L_002E0DA4;
L_002E0C88:;
    a1 = 10; v0 = func_002E1A30(a0, a1, a2, a3, f12.f);
    if (s0 == 0) goto L_002E0DA4;
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0x3240U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    if (v1 >= 0) { v1 = 0; goto L_002E0CBC; }
L_002E0CBC:;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v1; goto L_002E0DA4;
L_002E0CC4:;
    if (s0 == 0) goto L_002E0DA4;
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0x3240U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    at = v1 < 12;
    if (at == 0) { v1 = 12; goto L_002E0CF0; }
L_002E0CF0:;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v1; goto L_002E0DA4;
L_002E0CF8:;
    { s32 c_ = s0 == 0; (*(volatile u8 *) (u32) (s0 + 8)) = (u8) v1; if (c_) goto L_002E0DA4; }
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0x3240U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    if (v1 >= 0) { v1 = 0; goto L_002E0D24; }
L_002E0D24:;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v1; goto L_002E0DA4;
L_002E0D2C:;
    a1 = 14; v0 = func_002E1A30(a0, a1, a2, a3, f12.f);
    goto L_002E0DA4;
L_002E0D3C:;
    a1 = 18; v0 = func_002E1A30(a0, a1, a2, a3, f12.f);
    if (s0 == 0) goto L_002E0DA4;
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0x3240U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    if (v1 >= 0) { v1 = 0; goto L_002E0D70; }
L_002E0D70:;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v1; goto L_002E0DA4;
L_002E0D78:;
    if (s0 == 0) goto L_002E0DA4;
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0x3240U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    if (v1 >= 0) { v1 = 0; goto L_002E0DA0; }
L_002E0DA0:;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v1;
L_002E0DA4:;
L_002E0DA8:;
    return v0;
}
