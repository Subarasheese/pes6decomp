/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_009B37F0(s32, s32, s32, s32, s32);
void func_00B2A5F0(s32, s32, s32, s32, s32, f32, f32);
void func_00B84790(s32, s32, s32, s32, s32, f32);

void func_00B8DE20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    s1 = a4;
    v0 = (*(volatile s32 *) (u32) a0);
    f22.f = (*(volatile f32 *) (u32) (v0 + 224));
    s0 = (*(volatile u16 *) (u32) (v0 + 38));
    f21.f = (*(volatile f32 *) (u32) (v0 + 232));
    { s32 c_ = s1 != 0; a1 = a3; if (c_) goto L_00B8DF9C; }
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    f20.f = (*(volatile f32 *) (u32) (v0 + 56));
    { s32 c_ = a1 < 0; a0 = (s32) ((u32) v0 + 0x38U); if (c_) goto L_00B8DE84; }
    f0.i = (s32) a1;
    f0.f = (f32) f0.i; goto L_00B8DEA0;
L_00B8DE84:;
    v1 = (s32) ((u32) a1 >> 1);
    v0 = a1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00B8DEA0:;
    (*(volatile f32 *) (u32) a0) = f0.f;
    a0 = (*(volatile s32 *) (u32) s3);
L_00B8DEA8:;
    v0 = (s32) ((u32) s2 << 1);
    { s32 c_ = v0 < 0; a3 = (*(volatile s32 *) (u32) (a0 + 4)); if (c_) goto L_00B8DEC0; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_00B8DEDC;
L_00B8DEC0:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_00B8DEDC:;
    a1 = (*(volatile u16 *) (u32) (a3 + 48));
    a4 = 1;
    a2 = (*(volatile u16 *) (u32) (a0 + 38));
    a3 = (*(volatile u8 *) (u32) (a3 + 45));
    a0 = s3; func_00B84790(a0, a1, a2, a3, a4, f12.f);
    v1 = (s32) 0x590000U;
    a2 = (s32) ((u32) s2 << 2);
    f2.f = (*(volatile f32 *) (u32) (v1 + 7788));
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffcc70U);
    a1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 7792));
    (*(volatile f32 *) (u32) a1) = f2.f;
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffcc90U);
    a0 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7796));
    (*(volatile f32 *) (u32) a0) = f1.f;
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffccb0U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    { s32 c_ = s1 == 0; (*(volatile f32 *) (u32) v1) = f0.f; if (c_) goto L_00B8DF88; }
    v1 = (*(volatile s32 *) (u32) s3);
    f1.f = (*(volatile f32 *) (u32) (v1 + 240));
    f0.f = (*(volatile f32 *) (u32) (v1 + 224));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (v1 + 224)) = f0.f;
    v1 = (*(volatile s32 *) (u32) s3);
    f1.f = (*(volatile f32 *) (u32) (v1 + 248));
    f0.f = (*(volatile f32 *) (u32) (v1 + 232));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (v1 + 232)) = f0.f;
    v1 = (*(volatile s32 *) (u32) s3);
    (*(volatile f32 *) (u32) (v1 + 224)) = f22.f;
    v1 = (*(volatile s32 *) (u32) s3);
    (*(volatile f32 *) (u32) (v1 + 232)) = f21.f;
    v1 = (*(volatile s32 *) (u32) s3);
    (*(volatile u16 *) (u32) (v1 + 38)) = (u16) s0; goto L_00B8DF94;
L_00B8DF88:;
    v1 = (*(volatile s32 *) (u32) s3);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile f32 *) (u32) (v1 + 56)) = f20.f;
L_00B8DF94:;
    goto L_00B8DFFC;
L_00B8DF9C:;
    a3 = a2;
    a4 = a1;
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = (s32) ((u32) sp + 0x6eU); func_00B2A5F0(a0, a1, a2, a3, a4, f12.f, f13.f);
    f0.f = (*(volatile f32 *) (u32) (sp + 96));
    v0 = (*(volatile s32 *) (u32) s3);
    (*(volatile f32 *) (u32) (v0 + 224)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    v0 = (*(volatile s32 *) (u32) s3);
    (*(volatile f32 *) (u32) (v0 + 232)) = f0.f;
    v0 = (*(volatile s32 *) (u32) s3);
    f0.f = (*(volatile f32 *) (u32) (v0 + 224));
    (*(volatile f32 *) (u32) (v0 + 136)) = f0.f;
    v0 = (*(volatile s32 *) (u32) s3);
    f0.f = (*(volatile f32 *) (u32) (v0 + 232));
    (*(volatile f32 *) (u32) (v0 + 140)) = f0.f;
    v1 = (*(volatile u16 *) (u32) (sp + 110));
    v0 = (*(volatile s32 *) (u32) s3);
    (*(volatile u16 *) (u32) (v0 + 38)) = (u16) v1;
    a0 = (*(volatile s32 *) (u32) s3); func_009B37F0(a0, a1, a2, a3, a4);
    a0 = (*(volatile s32 *) (u32) s3); goto L_00B8DEA8;
L_00B8DFFC:;
    return;
}
