/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002E0BE0(s32, s32, s32, s32, f32);
s32 func_002E0DC0(s32, s32, s32, s32, f32);

s32 func_002DF730(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };

    if (a0 == 0) goto L_002DF858;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    if (v1 == a1) { ; goto L_002DF85C; }
    at = a1 < 3;
    if (at != 0) goto L_002DF75C;
    a1 = 2; goto L_002DF76C;
L_002DF75C:;
    if (a1 >= 0) goto L_002DF76C;
    a1 = 0; goto L_002DF76C;
L_002DF76C:;
    v1 = 2;
    { s32 c_ = a1 == v1; (*(volatile u32 *) (u32) (a0 + 4)) = (u32) a1; if (c_) goto L_002DF850; }
    a2 = 1;
    if (a1 == a2) { a1 = (*(volatile s32 *) (u32) a0); goto L_002DF7A4; }
    if (a1 == 0) goto L_002DF794;
    goto L_002DF858;
L_002DF794:;
    v0 = func_002E0DC0(a0, a1, a2, a3, f12.f);
    goto L_002DF858;
L_002DF7A4:;
    v1 = 8;
    if (a1 != v1) { v1 = 5; goto L_002DF7E4; }
    if (a0 == 0) goto L_002DF858;
    v1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0x3240U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    at = v1 < 12;
    if (at == 0) { v1 = 12; goto L_002DF7DC; }
L_002DF7DC:;
    (*(volatile u8 *) (u32) (a0 + 9)) = (u8) v1; goto L_002DF858;
L_002DF7E4:;
    if (a1 != v1) goto L_002DF820;
    { s32 c_ = a0 == 0; (*(volatile u8 *) (u32) (a0 + 8)) = (u8) a2; if (c_) goto L_002DF858; }
    a1 = (*(volatile s32 *) (u32) a0);
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0x3240U);
    a1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    if (v1 >= 0) { v1 = 0; goto L_002DF818; }
L_002DF818:;
    (*(volatile u8 *) (u32) (a0 + 9)) = (u8) v1; goto L_002DF858;
L_002DF820:;
    if (a0 == 0) goto L_002DF858;
    v1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0x3240U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    if (v1 >= 0) { v1 = 0; goto L_002DF848; }
L_002DF848:;
    (*(volatile u8 *) (u32) (a0 + 9)) = (u8) v1; goto L_002DF858;
L_002DF850:;
    v0 = func_002E0BE0(a0, a1, a2, a3, f12.f);
L_002DF858:;
L_002DF85C:;
    return v0;
}
