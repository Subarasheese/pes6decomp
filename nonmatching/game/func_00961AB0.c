/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00961AB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    if (a4 != 0) { a7 = (*(volatile u8 *) (u32) (a0 + 19)); goto L_00961C2C; }
L_00961AB8:;
    t4 = (*(volatile u8 *) (u32) (a0 + 19));
    a7 = (s32) 0xcb0000U;
    a6 = (s32) 0xcb0000U;
    a5 = a1 & 0xff;
    a7 = (s32) ((u32) a7 + 0x5360U);
    a6 = (s32) ((u32) a6 + 0x5370U);
    a4 = (s32) 0xcb0000U;
    at = a5 < 23;
    t4 = (s32) ((u32) t4 << 2);
    a7 = (s32) ((u32) a7 + (u32) t4);
    (*(volatile u32 *) (u32) a7) = (u32) 0;
    a7 = (*(volatile u8 *) (u32) (a0 + 19));
    a7 = (s32) ((u32) a6 + (u32) a7);
    a6 = (*(volatile u8 *) (u32) a7);
    a6 = (s32) ((u32) a6 + 0x1U);
    (*(volatile u8 *) (u32) a7) = (u8) a6;
    (*(volatile u8 *) (u32) (a4 + 21398)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 542)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 541)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 540)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 539)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 538)) = (u8) 0;
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) (a0 + 537)) = (u8) 0; if (c_) goto L_00961B50; }
    v1 = 255;
    if (a5 == v1) { a5 = 1; goto L_00961B30; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a5 / (s32) v1); hi = (s32) ((s32) a5 % (s32) v1); lo = q_; }
    a5 = hi;
L_00961B30:;
    a4 = (s32) ((u32) a5 << 3);
    v1 = (s32) 0x590000U;
    a4 = (s32) ((u32) a4 + (u32) a5);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a4 = (s32) ((u32) a4 << 6);
    v1 = (s32) ((u32) v1 + (u32) a4);
    a4 = (*(volatile u8 *) (u32) v1);
    (*(volatile u8 *) (u32) (a0 + 72)) = (u8) a4;
L_00961B50:;
    a4 = 8192;
    { s32 c_ = a3 != a4; (*(volatile u32 *) (u32) (a0 + 180)) = (u32) a3; if (c_) goto L_00961B9C; }
    a3 = a2 & 0xff;
    a2 = 255;
    if (a3 == a2) goto L_00961B90;
    v1 = 254;
    if (a3 == v1) { v1 = 1024; goto L_00961B80; }
    (*(volatile u8 *) (u32) (a0 + 72)) = (u8) a1; goto L_00961B94;
L_00961B80:;
    (*(volatile u32 *) (u32) (a0 + 176)) = (u32) v1;
    (*(volatile u8 *) (u32) (a0 + 76)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 72)) = (u8) a2; goto L_00961B94;
L_00961B90:;
    (*(volatile u8 *) (u32) (a0 + 72)) = (u8) a1;
L_00961B94:;
    goto L_00961C74;
L_00961B9C:;
    a1 = a2 & 0xff;
    if (a1 == 0) { a1 = (*(volatile u8 *) (u32) (v1 + 16)); goto L_00961BB0; }
    (*(volatile u8 *) (u32) (a0 + 76)) = (u8) a2; goto L_00961C24;
L_00961BB0:;
    at = (u64) a1 < (u64) (s64) 10;
    if (at == 0) goto L_00961C20;
    a3 = (s32) 0xcb0000U;
    a1 = (s32) ((u32) a1 << 2);
    a3 = (s32) ((u32) a3 + 0xffff9c10U);
    a1 = (s32) ((u32) a1 + (u32) a3);
    a1 = (*(volatile s32 *) (u32) a1);
    { u32 t_ = (u32) a1; ; if (t_ == 0x961bd8U) goto L_00961BD8; if (t_ == 0x961c20U) goto L_00961C20; }
L_00961BD8:;
    a1 = (*(volatile u8 *) (u32) (v1 + 19));
    f0.f = (*(volatile f32 *) (u32) (v1 + 224));
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0x1e90U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    f1.f = (*(volatile f32 *) (u32) v1);
    f0.f = f0.f - f1.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v1 = (s32) 0x44e00000U;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00961C20;
    a1 = 1;
    v1 = (s32) 0xcb0000U;
    (*(volatile u8 *) (u32) (v1 + 21398)) = (u8) a1;
L_00961C20:;
    (*(volatile u8 *) (u32) (a0 + 76)) = (u8) a2;
L_00961C24:;
    goto L_00961C74;
L_00961C2C:;
    (*(volatile u32 *) (u32) (a0 + 480)) = (u32) 0;
    a4 = (*(volatile s32 *) (u32) (a0 + 176));
    if (a4 == 0) { a5 = (*(volatile u8 *) (u32) (a0 + 19)); goto L_00961C5C; }
L_00961C3C:;
    a4 = (s32) 0xcb0000U;
    a5 = a7 & 0xff;
    a4 = (s32) ((u32) a4 + 0x539cU);
    (*(volatile u32 *) (u32) (a0 + 484)) = (u32) 0;
    a6 = 1;
    a4 = (s32) ((u32) a4 + (u32) a5);
    (*(volatile u8 *) (u32) a4) = (u8) a6; goto L_00961AB8;
L_00961C5C:;
    a4 = (s32) 0xcb0000U;
    a4 = (s32) ((u32) a4 + 0x539cU);
    a6 = 1;
    a4 = (s32) ((u32) a4 + (u32) a5);
    (*(volatile u8 *) (u32) a4) = (u8) a6; goto L_00961C3C;
L_00961C74:;
    return;
}
