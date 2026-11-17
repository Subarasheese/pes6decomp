/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_00A0DD50(s32);
s32 func_00A1FE80(s32, s32);
s32 func_00A9B980(s32);

s32 func_00A2D770(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };

    v0 = (s32) 0x590000U;
    v1 = 2;
    s2 = a0;
    a0 = (*(volatile u8 *) (u32) (a0 + 36));
    { s32 c_ = a0 != v1; s1 = (*(volatile u8 *) (u32) (v0 + 7100)); if (c_) goto L_00A2D7B0; }
    v0 = s1 & 0xff;
    at = v0 < 2;
    if (at == 0) goto L_00A2D7B0;
    s1 = v1 & 0xff;
L_00A2D7B0:;
    a0 = s2; v0 = func_00A9B980(a0);
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    s0 = f0.i;
    a0 = s2; v0 = func_00A0DD50(a0);
    if (v0 == 0) { v0 = s0 < 4608; goto L_00A2D868; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 != 0) goto L_00A2D7F8;
    v0 = (*(volatile u8 *) (u32) (s2 + 98));
    if (v0 == 0) goto L_00A2D860;
L_00A2D7F8:;
    v1 = (*(volatile u8 *) (u32) (s2 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1efdU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_00A2D860;
    v0 = s1 & 0xff;
    v1 = (s32) 0xcb0000U;
    a0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) v1 + 0xffffade0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u16 *) (u32) v1);
    { s32 c_ = s0 >= 0; v0 = (s32) s0 >> 8; if (c_) goto L_00A2D83C; }
    v0 = (s32) ((u32) s0 + 0xffU);
    v0 = (s32) v0 >> 8;
L_00A2D83C:;
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (s2 + 96));
    v0 = (s32) ((u32) v0 << 1);
    a0 = (s32) ((u32) v1 - (u32) v0);
    at = a0 < 80;
    if (at == 0) goto L_00A2D8A0;
    a0 = 80; goto L_00A2D8A0;
L_00A2D860:;
    a0 = 80; goto L_00A2D8A0;
L_00A2D868:;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s2 + 36)); goto L_00A2D8E8; }
    { s32 c_ = s0 >= 0; v0 = (s32) s0 >> 7; if (c_) goto L_00A2D880; }
    v0 = (s32) ((u32) s0 + 0x7fU);
    v0 = (s32) v0 >> 7;
L_00A2D880:;
    v1 = (s32) ((u32) v0 + 0x80U);
    v0 = (*(volatile u8 *) (u32) (s2 + 96));
    v0 = (s32) ((u32) v0 << 1);
    a0 = (s32) ((u32) v1 - (u32) v0);
    at = a0 < 80;
    if (at == 0) goto L_00A2D8A0;
    a0 = 80;
L_00A2D8A0:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) (v0 + 80));
    at = v0 < 1025;
    if (at != 0) goto L_00A2D8E0;
    v0 = (*(volatile u8 *) (u32) (s2 + 36));
    if (v0 == 0) goto L_00A2D8E0;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7100));
    at = v0 < 3;
    if (at == 0) goto L_00A2D8E0;
    a1 = 384; v0 = func_00A1FE80(a0, a1);
    a0 = v0;
L_00A2D8E0:;
    v0 = a0; goto L_00A2D914;
L_00A2D8E8:;
    if (v0 != 0) { v1 = s1 & 0xff; goto L_00A2D8FC; }
    v0 = (s32) 0xcb0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + -21014)); goto L_00A2D8A0;
L_00A2D8FC:;
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0xffffade0U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u16 *) (u32) v0); goto L_00A2D8A0;
L_00A2D914:;
    return v0;
}
