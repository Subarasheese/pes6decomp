/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001A4790(s32);
s32 func_002A7F30(s32, s32, s32, s32, s32, f32);

s32 func_002A7D00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };

    v0 = (s32) 0x5e0000U;
    s2 = a1;
    a1 = (*(volatile s32 *) (u32) (v0 + 9320));
    if (a1 != 0) { v0 = (*(volatile s32 *) (u32) a1); goto L_002A7D2C; }
    v0 = 0;
L_002A7D2C:;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v1 = s2 & 0xff;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v1 + (u32) v0);
    s0 = (*(volatile u8 *) (u32) (v0 + -2));
    { s32 c_ = a1 != 0; s1 = (*(volatile u8 *) (u32) (v0 + -1)); if (c_) goto L_002A7D50; }
    a2 = 0; goto L_002A7D60;
L_002A7D50:;
    v0 = s0 & 0xff;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a1 + (u32) v0);
    a2 = (*(volatile s32 *) (u32) v0);
L_002A7D60:;
    a1 = 4;
    a3 = 0;
    a4 = 0; v0 = func_002A7F30(a0, a1, a2, a3, a4, f12.f);
    a0 = s2 & 0xff;
    v1 = (s32) 0x5e0000U;
    at = s1 < 2;
    { s32 c_ = at != 0; (*(volatile u16 *) (u32) (v1 + 7472)) = (u16) a0; if (c_) goto L_002A7EF0; }
    at = s1 < 2;
    { s32 c_ = at != 0; s2 = 1; if (c_) goto L_002A7EF0; }
L_002A7D90:;
    v1 = (s32) 0x5e0000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 9320));
    if (a0 != 0) { v1 = (s32) ((u32) s0 + (u32) s2); goto L_002A7DA8; }
    a0 = 0; goto L_002A7DB8;
L_002A7DA8:;
    v1 = v1 & 0xff;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v1);
L_002A7DB8:;
    v1 = (s32) 0x5e0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 8036));
    if (v1 == 0) goto L_002A7EE0;
    at = v1 < 5;
    if (at == 0) goto L_002A7EE0;
    a3 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a3 = (s32) ((u32) a3 + 0x19a0U);
    a1 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) a3 + (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 1436)) = (u32) a0;
    a2 = (*(volatile u8 *) (u32) (a1 + 8036));
    v1 = (s32) 0x5e0000U;
    a2 = (s32) ((u32) a2 << 2);
    a1 = 4;
    a2 = (s32) ((u32) a3 + (u32) a2);
    f0.f = (*(volatile f32 *) (u32) (a2 + 1452));
    (*(volatile f32 *) (u32) (a2 + 1456)) = f0.f;
    v1 = (*(volatile u8 *) (u32) (v1 + 7474));
    a2 = v1 & 0xf;
    if (a2 == a1) goto L_002A7E7C;
    v1 = 3;
    if (a2 == v1) goto L_002A7E4C;
    v1 = 2;
    if (a2 == v1) goto L_002A7E4C;
    v1 = 1;
    if (a2 == v1) goto L_002A7E4C;
    if (a2 == 0) goto L_002A7E4C;
    goto L_002A7EA8;
L_002A7E4C:;
    v1 = (s32) 0x5e0000U;
    a0 = (s32) 0x5e0000U;
    a1 = (*(volatile u8 *) (u32) (v1 + 8036));
    a0 = (s32) ((u32) a0 + 0x19a0U);
    v1 = (s32) 0x5e0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7992));
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v1 + 1456));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (v1 + 1456)) = f0.f; goto L_002A7EA8;
L_002A7E7C:;
    f0.f = func_001A4790(a0);
    v1 = (s32) 0x5e0000U;
    a0 = (s32) 0x5e0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 8036));
    a0 = (s32) ((u32) a0 + 0x19a0U);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v1 + 1456));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (v1 + 1456)) = f0.f;
L_002A7EA8:;
    v1 = (s32) 0x5e0000U;
    a2 = (s32) 0x5e0000U;
    a3 = (*(volatile u8 *) (u32) (v1 + 8036));
    a1 = (s32) 0x5e0000U;
    a0 = (s32) 0x5e0000U;
    a2 = (s32) ((u32) a2 + 0x19a0U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (a1 + 8036)) = (u8) a3;
    a0 = (*(volatile u8 *) (u32) (a0 + 8036));
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a2 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) (a0 + 1452));
    (*(volatile f32 *) (u32) (v1 + 7992)) = f0.f;
L_002A7EE0:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < s1;
    if (v1 != 0) goto L_002A7D90;
L_002A7EF0:;
    return v0;
}
