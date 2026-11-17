/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001A9A20(s32);

s32 func_001A96D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[46];
    s32 sp = (s32) (u32) frame;

    a5 = (*(volatile s32 *) (u32) (gp + -23260));
    { s32 c_ = a5 == 0; s0 = 0; if (c_) goto L_001A97E8; }
    v1 = (s32) 0x3b0000U;
    a4 = (s32) ((u32) sp + 0x50U);
    a3 = (*(volatile s32 *) (u32) (v1 + 4148));
    t5 = 9;
    a1 = 2;
    a0 = 1;
    v1 = (s32) 0x3b0000U;
    a2 = (*(volatile s32 *) (u32) (v1 + 4132));
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xff0U);
L_001A971C:;
    a6 = (*(volatile u8 *) (u32) (a5 + 1));
    if (a6 == 0) goto L_001A97D8;
    a7 = (*(volatile u8 *) (u32) (a5 + 51));
    if (a7 == a1) goto L_001A9778;
    if (a7 == 0) goto L_001A9778;
    if (a7 == a0) goto L_001A9750;
    goto L_001A97C0;
L_001A9750:;
    a6 = (s32) ((u32) a7 << 4);
    t4 = (s32) ((u32) v1 + (u32) a6);
    a7 = (*(volatile u16 *) (u32) (a5 + 64));
    a6 = (*(volatile u8 *) (u32) (a5 + 49));
    a6 = (s32) ((u32) a6 << 2);
    a6 = (s32) ((u32) a6 + (u32) t4);
    a6 = (*(volatile s32 *) (u32) (a6 + 4));
    a6 = (s32) ((u32) a6 + (u32) a7); goto L_001A97C8;
L_001A9778:;
    a6 = (*(volatile u8 *) (u32) (a5 + 501));
    if (a6 == 0) goto L_001A9798;
    a6 = (*(volatile s32 *) (u32) (a5 + 12));
    if (a6 == 0) goto L_001A9900;
    if (a6 == t5) goto L_001A9900;
L_001A9798:;
    a6 = a7 & 0xff;
    a7 = (s32) ((u32) a6 << 4);
    a6 = (*(volatile u8 *) (u32) (a5 + 49));
    t4 = (s32) ((u32) v1 + (u32) a7);
    a7 = (*(volatile u16 *) (u32) (a5 + 52));
    a6 = (s32) ((u32) a6 << 2);
    a6 = (s32) ((u32) a6 + (u32) t4);
    a6 = (*(volatile s32 *) (u32) (a6 + 4));
    a6 = (s32) ((u32) a6 + (u32) a7); goto L_001A97C8;
L_001A97C0:;
    a6 = 0;
L_001A97C8:;
    (*(volatile u32 *) (u32) a4) = (u32) a6;
    (*(volatile u32 *) (u32) (a4 + 4)) = (u32) a5;
    s0 = (s32) ((u32) s0 + 0x1U);
    a4 = (s32) ((u32) a4 + 0x8U);
L_001A97D8:;
    a5 = (*(volatile s32 *) (u32) (a5 + 36));
    if (a5 != 0) goto L_001A971C;
L_001A97E8:;
    a1 = (s32) ((u32) s0 + 0xffffffffU);
    at = 0 < a1;
    { s32 c_ = at == 0; a5 = 0; if (c_) goto L_001A9850; }
    a3 = (s32) ((u32) sp + 0x50U);
L_001A97FC:;
    a4 = (s32) ((u32) a5 + 0x1U);
    at = a4 < s0;
    if (at == 0) goto L_001A9840;
    v1 = (s32) ((u32) a4 << 3);
    v1 = (s32) ((u32) v1 + (u32) sp);
    a2 = (s32) ((u32) v1 + 0x50U);
L_001A9818:;
    a0 = (*(volatile s32 *) (u32) a3);
    v1 = (*(volatile s32 *) (u32) a2);
    at = v1 < a0;
    if (at != 0) goto L_001A9918;
L_001A9830:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < s0;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_001A9818; }
L_001A9840:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < a1;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_001A97FC; }
L_001A9850:;
    at = 0 < s0;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_001A98F8; }
    s2 = (s32) ((u32) sp + 0x50U);
L_001A9860:;
    s3 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0x1d50U);
    v1 = (*(volatile u8 *) (u32) s3);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    if (v1 == 0) goto L_001A98B8;
    if (v1 == 0) goto L_001A98B8;
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    v0 = (*(volatile u8 *) (u32) (v1 + 10));
    (*(volatile u8 *) (u32) (gp + -23208)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (v1 + 9));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) (v1 + 9)) = (u8) v0;
    v0 = v0 & 0xff;
    if (v0 > 0) goto L_001A98B8;
    (*(volatile u8 *) (u32) (v1 + 9)) = (u8) 0;
L_001A98B8:;
    a0 = s3; v0 = func_001A9A20(a0);
    a1 = (*(volatile u8 *) (u32) (v0 + 9));
    a0 = (s32) 0x520000U;
    s1 = (s32) ((u32) s1 + 0x1U);
    a0 = (s32) ((u32) a0 + 0x1d50U);
    v1 = s1 < s0;
    s2 = (s32) ((u32) s2 + 0x8U);
    a1 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + 9)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) s3);
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) a0) = (u32) v0; if (c_) goto L_001A9860; }
L_001A98F8:;
    goto L_001A9948;
L_001A9900:;
    a6 = (*(volatile u16 *) (u32) (a5 + 52));
    a6 = (s32) ((u32) a3 + (u32) a6);
    a6 = (*(volatile u8 *) (u32) a6);
    a6 = (s32) ((u32) a2 + (u32) a6); goto L_001A97C8;
L_001A9918:;
    f3.f = (*(volatile f32 *) (u32) a3);
    f2.f = (*(volatile f32 *) (u32) (a3 + 4));
    f1.f = (*(volatile f32 *) (u32) a2);
    f0.f = (*(volatile f32 *) (u32) (a2 + 4));
    (*(volatile f32 *) (u32) (sp + 360)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 364)) = f2.f;
    (*(volatile f32 *) (u32) a3) = f1.f;
    (*(volatile f32 *) (u32) (a3 + 4)) = f0.f;
    (*(volatile f32 *) (u32) a2) = f3.f;
    (*(volatile f32 *) (u32) (a2 + 4)) = f2.f; goto L_001A9830;
L_001A9948:;
    return v0;
}
