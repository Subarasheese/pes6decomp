/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_001D7A20(s32, s32, s32);
void func_0026B580(s32, s32, s32, s32);
void func_008FC570(s32, s32, s32, s32);
s32 func_008FCFD0(s32, s32, s32, s32);
s32 func_0099D470(s32, s32, s32, s32);
void func_00C74CC0(s32, s32, s32, s32);

s32 func_008FDCF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f12 = { 0 };
    volatile union { f32 f; s32 i; } f13 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    s3 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v1 = (*(volatile s8 *) (u32) (a0 + 4));
    v0 = 1;
    s5 = (*(volatile s8 *) (u32) a0);
    { s32 c_ = v1 == v0; s0 = a3; if (c_) goto L_008FDDD4; }
    if (v1 == 0) { (*(volatile u8 *) (u32) (a0 + 5)) = (u8) s5; goto L_008FDD40; }
    v0 = (s32) 0x84020000U; goto L_008FE0F8;
L_008FDD40:;
    a0 = 0; v0 = func_0099D470(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 != v0) { a0 = 0; goto L_008FDD60; }
    v0 = 0; goto L_008FDD6C;
L_008FDD60:;
    v0 = func_0099D470(a0, a1, a2, a3);
    v0 = v0 & 0xff;
L_008FDD6C:;
    if (s5 != v0) { a0 = 1; goto L_008FDD88; }
    v0 = (s32) 0x3b0000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) v1; goto L_008FDDC0;
L_008FDD88:;
    v0 = func_0099D470(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (s5 != v0) goto L_008FDDB0;
    v0 = (s32) 0x3b0000U;
    v1 = 2;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) v1; goto L_008FDDC0;
L_008FDDB0:;
    v0 = (s32) 0x3b0000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) v1;
L_008FDDC0:;
    v0 = (s32) 0x3b0000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    (*(volatile u8 *) (u32) (v0 + 4)) = (u8) v1; goto L_008FE0F4;
L_008FDDD4:;
    a0 = 0; v0 = func_0099D470(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 != v0) { a0 = 0; goto L_008FDDF4; }
    s2 = 0; goto L_008FDE00;
L_008FDDF4:;
    v0 = func_0099D470(a0, a1, a2, a3);
    s2 = v0 & 0xff;
L_008FDE00:;
    a0 = 1; v0 = func_0099D470(a0, a1, a2, a3);
    s1 = v0 & 0xff;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    { s32 c_ = s2 != s5; s4 = (*(volatile s8 *) (u32) (v0 + 5)); if (c_) goto L_008FDE7C; }
    a0 = 0;
    a1 = s4; v0 = func_008FCFD0(a0, a1, a2, a3);
    if (v0 == 0) goto L_008FDEDC;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (a0 == v1) { a0 = 1; goto L_008FDE50; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_008FDE50:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) (v0 + 18));
    a1 = 1; func_008FC570(a0, a1, a2, a3);
    goto L_008FDEDC;
L_008FDE7C:;
    if (s2 != s4) goto L_008FDEDC;
    a0 = 0;
    a1 = s5; v0 = func_008FCFD0(a0, a1, a2, a3);
    if (v0 == 0) goto L_008FDEDC;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (a0 == v1) { a0 = 1; goto L_008FDEB8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_008FDEB8:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) (v0 + 18));
    a1 = 1; func_008FC570(a0, a1, a2, a3);
L_008FDEDC:;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s8 *) (u32) (v0 + 2));
    if (v0 == 0) goto L_008FDFB8;
    if (s1 != s5) goto L_008FDF58;
    a1 = s4;
    a0 = 1; v0 = func_008FCFD0(a0, a1, a2, a3);
    if (v0 == 0) goto L_008FDFB8;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (a0 == v1) { a0 = 1; goto L_008FDF2C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_008FDF2C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) (v0 + 18));
    a1 = 1; func_008FC570(a0, a1, a2, a3);
    goto L_008FDFB8;
L_008FDF58:;
    if (s1 != s4) goto L_008FDFB8;
    a1 = s5;
    a0 = 1; v0 = func_008FCFD0(a0, a1, a2, a3);
    if (v0 == 0) goto L_008FDFB8;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (a0 == v1) { a0 = 1; goto L_008FDF94; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_008FDF94:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) (v0 + 18));
    a1 = 1; func_008FC570(a0, a1, a2, a3);
L_008FDFB8:;
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s8 *) (u32) (v1 + 6));
    if (v0 != 0) { s1 = 4; goto L_008FE028; }
    v0 = (*(volatile s8 *) (u32) (v1 + 2));
    if (v0 == 0) { s1 = 1; goto L_008FE028; }
    a0 = 1; v0 = func_0099D470(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (a0 + 32));
    v0 = (s32) ((u32) v0 + 0xffffdcd2U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile u16 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x70U); v0 = func_001D7A20(a0, a1, a2);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    f13.f = (*(volatile f32 *) (u32) (sp + 116));
    a0 = (*(volatile s32 *) (u32) (v0 + 44));
    f12.f = (*(volatile f32 *) (u32) (sp + 112)); func_00C74CC0(a0, a1, a2, a3);
    s1 = 2;
L_008FE028:;
    a0 = 0; v0 = func_0099D470(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 != v0) { a0 = 0; goto L_008FE048; }
    v0 = 0; goto L_008FE054;
L_008FE048:;
    v0 = func_0099D470(a0, a1, a2, a3);
    v0 = v0 & 0xff;
L_008FE054:;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (a0 + 32));
    v0 = (s32) ((u32) v0 + 0xffffdcd2U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile u16 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x70U); v0 = func_001D7A20(a0, a1, a2);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    f13.f = (*(volatile f32 *) (u32) (sp + 116));
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v0 + 32));
    f12.f = (*(volatile f32 *) (u32) (sp + 112)); func_00C74CC0(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s8 *) (u32) (a1 + 2));
    if (v0 == 0) { a0 = (s32) ((u32) a1 + 0xcU); goto L_008FE0D4; }
    a0 = (*(volatile s8 *) (u32) a1);
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (a1 + 5)) = (u8) a0;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    (*(volatile u8 *) (u32) (v1 + 3)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    (*(volatile u8 *) (u32) (v0 + 4)) = (u8) 0; goto L_008FE0F4;
L_008FE0D4:;
    a2 = s0;
    a1 = 4; func_0026B580(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v1 = -1;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    s3 = 2;
    (*(volatile u8 *) (u32) (v0 + 8)) = (u8) v1;
L_008FE0F4:;
    v0 = (s32) 0x84020000U;
L_008FE0F8:;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = s3;
    return v0;
}
