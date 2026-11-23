/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001E6E10(s64);
void func_001EE630(s64, s64);
void func_001EEAC0(s64, s64);
void func_001EF370(s64, s64);
s64 func_001F08B0(s64);
void func_001F16E0(s64, s64);
void func_001F17C0(s64);
void func_001F18D0(s64, s64);
s64 func_001F1A20(s64, s64, s64, s64);
s64 func_001F2410(s64, s64, s64, s64);
void func_001F3D10(s64, s64);
void func_0020E310(s64, s64);

s64 func_002F1AE0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a2;
    { s32 c_ = a1 != 0; s1 = a4; if (c_) goto L_002F1B10; }
    v0 = 0; goto L_002F1E18;
L_002F1B10:;
    v0 = (*(volatile s32 *) (u32) (a1 + 12));
    if (v0 == 0) { v0 = 1; goto L_002F1B20; }
    v0 = 17;
L_002F1B20:;
    v1 = (*(volatile s32 *) (u32) a1);
    a2 = 1;
    { s32 c_ = v1 == a2; s0 = v0 & 0xff; if (c_) goto L_002F1CF4; }
    v0 = 2;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (a1 + 8)); goto L_002F1C1C; }
    v0 = 3;
    if (v1 == v0) { a3 = (*(volatile s32 *) (u32) (a1 + 4)); goto L_002F1B50; }
    v0 = 0; goto L_002F1E18;
L_002F1B50:;
    if (a3 != 0) { v1 = (s32) ((u32) sp + 0x80U); goto L_002F1B60; }
    v0 = 0; goto L_002F1E18;
L_002F1B60:;
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_002F1B84; }
L_002F1B68:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002F1B68;
L_002F1B84:;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s64 *) (u32) (v0 + 16760));
    (*(volatile u64 *) (u32) (sp + 120)) = (u64) v0;
    v0 = (*(volatile u8 *) (u32) s3);
    if (v0 == 0) { v1 = 1; goto L_002F1BA4; }
    v0 = 0; goto L_002F1C14;
L_002F1BA4:;
    v0 = 3;
    (*(volatile u8 *) (u32) s3) = (u8) v1;
    a0 = s2;
    (*(volatile u8 *) (u32) (s3 + 2)) = (u8) v0;
    a1 = s1;
    a2 = (s32) ((u32) sp + 0x80U);
    (*(volatile u8 *) (u32) (s3 + 3)) = (u8) s0; v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 32));
    a1 = (s32) ((u32) sp + 0x78U); func_001F16E0(a0, a1);
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x8cU); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 32));
    a1 = (s32) ((u32) sp + 0x8cU); func_001F18D0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s3 + 2));
    v0 = v0 & 0x10;
    if (v0 == 0) { v0 = 1; goto L_002F1C14; }
    a0 = (*(volatile s32 *) (u32) (s3 + 32)); func_001F17C0(a0);
    v0 = 1;
L_002F1C14:;
    goto L_002F1E1C;
L_002F1C1C:;
    v0 = func_001F08B0(a0);
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x70U); goto L_002F1C34; }
    v0 = 0; goto L_002F1E18;
L_002F1C34:;
    { s32 c_ = a0 == 0; v1 = 8; if (c_) goto L_002F1C58; }
L_002F1C3C:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_002F1C3C;
L_002F1C58:;
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s64 *) (u32) (v1 + 16760));
    (*(volatile u64 *) (u32) (sp + 104)) = (u64) v1;
    v1 = (*(volatile u8 *) (u32) s3);
    if (v1 == 0) { a2 = 1; goto L_002F1C78; }
    v0 = 0; goto L_002F1CEC;
L_002F1C78:;
    v1 = 3;
    (*(volatile u8 *) (u32) s3) = (u8) a2;
    a0 = s2;
    (*(volatile u8 *) (u32) (s3 + 2)) = (u8) v1;
    a1 = s1;
    a2 = (s32) ((u32) sp + 0x70U);
    a3 = v0;
    (*(volatile u8 *) (u32) (s3 + 3)) = (u8) s0; v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 32));
    a1 = (s32) ((u32) sp + 0x68U); func_001F16E0(a0, a1);
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x88U); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 32));
    a1 = (s32) ((u32) sp + 0x88U); func_001F18D0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s3 + 2));
    v0 = v0 & 0x10;
    if (v0 == 0) { v0 = 1; goto L_002F1CEC; }
    a0 = (*(volatile s32 *) (u32) (s3 + 32)); func_001F17C0(a0);
    v0 = 1;
L_002F1CEC:;
    goto L_002F1E18;
L_002F1CF4:;
    v0 = (*(volatile u8 *) (u32) s3);
    { s32 c_ = v0 == 0; a0 = (*(volatile s32 *) (u32) (a1 + 8)); if (c_) goto L_002F1D08; }
    v0 = 0; goto L_002F1E18;
L_002F1D08:;
    v1 = 2;
    v0 = 3;
    (*(volatile u8 *) (u32) s3) = (u8) v1;
    at = a0 < 2;
    (*(volatile u8 *) (u32) (s3 + 2)) = (u8) v0;
    { s32 c_ = at != 0; (*(volatile u8 *) (u32) (s3 + 3)) = (u8) s0; if (c_) goto L_002F1D2C; }
    (*(volatile u8 *) (u32) (s3 + 4)) = (u8) a2; goto L_002F1D40;
L_002F1D2C:;
    if (a0 >= 0) goto L_002F1D38;
    a0 = 0;
L_002F1D38:;
    a2 = a0;
    (*(volatile u8 *) (u32) (s3 + 4)) = (u8) a2;
L_002F1D40:;
    a0 = a3; v0 = func_001F2410(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) v0;
    a0 = (*(volatile u8 *) (u32) (s3 + 4));
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4150U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001E6E10(a0);
    a0 = (*(volatile s32 *) (u32) (s3 + 32));
    a1 = v0; func_001EEAC0(a0, a1);
    a0 = (*(volatile u8 *) (u32) (s3 + 4));
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4154U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    a2 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s16 *) (u32) a2);
    v1 = (*(volatile s16 *) (u32) (a2 + 2));
    v0 = (*(volatile s16 *) (u32) (a2 + 4));
    (*(volatile u16 *) (u32) (sp + 96)) = (u16) a0;
    (*(volatile u16 *) (u32) (sp + 98)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 100)) = (u16) v0;
    v0 = (*(volatile s16 *) (u32) (a2 + 6));
    (*(volatile u16 *) (u32) (sp + 102)) = (u16) v0;
    a0 = (*(volatile s32 *) (u32) (s3 + 32));
    a1 = (s32) ((u32) sp + 0x60U); func_001EE630(a0, a1);
    a0 = (*(volatile u8 *) (u32) (s3 + 4));
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x415cU);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) v0);
    f0.f = (*(volatile f32 *) (u32) (v0 + 4));
    (*(volatile f32 *) (u32) (sp + 88)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 92)) = f0.f;
    (*(volatile u32 *) (u32) (s3 + 16)) = (u32) 0;
    f1.f = (*(volatile f32 *) (u32) (sp + 88));
    (*(volatile u32 *) (u32) (s3 + 20)) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (sp + 92));
    (*(volatile f32 *) (u32) (s3 + 24)) = f1.f;
    (*(volatile f32 *) (u32) (s3 + 28)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s3 + 32));
    a1 = (s32) ((u32) s3 + 0x10U); func_001EF370(a0, a1);
    v0 = 1;
L_002F1E18:;
L_002F1E1C:;
    return v0;
}
