/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D7A20(s64, s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_002E4130(s64, s64);
void func_002E4500(s64, s64);
s64 func_008B96B0(void);
void func_008C1430(s64, f32, f32);

void func_008C5A20(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    s1 = 0;
    v1 = (*(volatile s32 *) (u32) (a0 + 16));
    { s32 c_ = v1 == 0; s0 = 0; if (c_) goto L_008C5BCC; }
    v1 = (*(volatile s32 *) (u32) (s4 + 20));
    if (v1 != 0) goto L_008C5A6C;
    goto L_008C5BD0;
L_008C5A6C:;
    v0 = func_008B96B0();
    v0 = v0 & 0xff;
    at = (u64) s3 < (u64) (s64) 14;
    a0 = s2 ^ v0;
    (*(volatile u8 *) (u32) s4) = (u8) s3;
    { s32 c_ = at == 0; a0 = (u64) 0 < (u64) a0; if (c_) goto L_008C5B20; }
    v1 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) s3 << 2);
    v1 = (s32) ((u32) v1 + 0xffffce50U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8c5aa8U) goto L_008C5AA8; if (t_ == 0x8c5ab0U) goto L_008C5AB0; if (t_ == 0x8c5abcU) goto L_008C5ABC; if (t_ == 0x8c5ad0U) goto L_008C5AD0; if (t_ == 0x8c5ae8U) goto L_008C5AE8; if (t_ == 0x8c5b08U) goto L_008C5B08; if (t_ == 0x8c5b10U) goto L_008C5B10; if (t_ == 0x8c5b20U) goto L_008C5B20; }
L_008C5AA8:;
    s1 = 1; goto L_008C5B20;
L_008C5AB0:;
    s1 = 2;
    s0 = 1; goto L_008C5B20;
L_008C5ABC:;
    v0 = 1;
    if (a0 != v0) { a0 = (*(volatile s32 *) (u32) (s4 + 16)); goto L_008C5B24; }
    s1 = 3; goto L_008C5B20;
L_008C5AD0:;
    s1 = 1;
    if (a0 != s1) goto L_008C5AE0;
    s1 = 4;
L_008C5AE0:;
    s0 = 1; goto L_008C5B20;
L_008C5AE8:;
    v0 = 1;
    if (a0 != v0) { s1 = 2; goto L_008C5B00; }
    s1 = 5; goto L_008C5B00;
    s1 = 2;
L_008C5B00:;
    s0 = 2; goto L_008C5B20;
L_008C5B08:;
    s1 = 6; goto L_008C5B20;
L_008C5B10:;
    if (a0 != 0) { s0 = s1; goto L_008C5B20; }
    s1 = 1;
    s0 = s1;
L_008C5B20:;
    a0 = (*(volatile s32 *) (u32) (s4 + 16));
L_008C5B24:;
    a1 = (s64) ((u64) s1 << 48);
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s4 + 20));
    a1 = (s64) ((u64) s0 << 48);
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s4 + 24));
    if (v1 == 0) goto L_008C5BCC;
    a0 = (*(volatile s8 *) (u32) s4);
    v1 = 6;
    if (a0 == v1) { a0 = (*(volatile s32 *) (u32) (s4 + 16)); goto L_008C5B68; }
    goto L_008C5BCC;
    a0 = (*(volatile s32 *) (u32) (s4 + 16));
L_008C5B68:;
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = 110; v0 = func_001D7A20(a0, a1, a2);
    f12.f = (*(volatile f32 *) (u32) (sp + 112));
    f13.f = (*(volatile f32 *) (u32) (sp + 116));
    a0 = (*(volatile s32 *) (u32) (s4 + 28)); func_008C1430(a0, f12.f, f13.f);
    f12.f = (*(volatile f32 *) (u32) (sp + 112));
    f13.f = (*(volatile f32 *) (u32) (sp + 116));
    a0 = (*(volatile s32 *) (u32) (s4 + 24)); func_008C1430(a0, f12.f, f13.f);
    a0 = (*(volatile s32 *) (u32) (s4 + 24));
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = 267; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = (s32) ((u32) sp + 0x60U); func_002E4130(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 112));
    f0.f = (*(volatile f32 *) (u32) (sp + 116));
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = (s32) ((u32) sp + 0x60U); func_002E4500(a0, a1);
L_008C5BCC:;
L_008C5BD0:;
    return;
}
