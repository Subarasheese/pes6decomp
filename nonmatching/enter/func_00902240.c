/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);
void func_002075B0(s32, s32, s32, s32);
s32 func_002079F0(s32, s32);
s32 func_00207D10(s32);
void func_00209A00(s32, s32, s32);
s32 func_009B33A0(s32, s32, s32, s32);

void func_00902240(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };

    v1 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + 0xfffff1c8U);
    s0 = a1 & 0xff;
    s1 = (s32) ((u32) v1 + (u32) s0);
    s3 = (*(volatile u8 *) (u32) s1);
    { s32 c_ = s3 != 0; s2 = a0; if (c_) goto L_009023A4; }
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    v1 = 1090;
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    if (a1 == v1) goto L_009022F4;
    v1 = 1161;
    if (a1 == v1) goto L_0090229C;
    goto L_0090232C;
L_0090229C:;
    v1 = (s32) 0x930000U;
    s0 = (s32) ((u32) s0 << 1);
    v1 = (s32) ((u32) v1 + 0xfffff1f4U);
    a1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile u16 *) (u32) a1);
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_009022EC; }
    v0 = func_00207D10(a0);
    if (v0 == 0) { ; goto L_00902444; }
    v0 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (s32) ((u32) v0 + 0xfffff220U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (*(volatile u16 *) (u32) v0);
    a2 = 0; func_00209A00(a0, a1, a2);
    goto L_00902440;
L_009022EC:;
    (*(volatile u16 *) (u32) a1) = (u16) v1; goto L_00902440;
L_009022F4:;
    v0 = func_00207D10(a0);
    if (v0 == 0) goto L_00902440;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) s0 << 1);
    v0 = (s32) ((u32) v0 + 0xfffff220U);
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile u16 *) (u32) v0);
    a2 = 0; func_00209A00(a0, a1, a2);
    goto L_00902440;
L_0090232C:;
    v0 = func_00207D10(a0);
    if (v0 == 0) goto L_00902440;
    a0 = 255; v0 = Pes6Random_Below(a0);
    v0 = v0 & 0xffff;
    v0 = v0 & 0x1;
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_00902370; }
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    a1 = 1161;
    a2 = 0;
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    a0 = 60; goto L_00902384;
L_00902370:;
    a1 = 1090;
    a2 = 0;
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    a0 = 60;
L_00902384:;
    v0 = Pes6Random_Below(a0);
    v1 = (s32) 0x930000U;
    a0 = (s32) ((u32) s0 << 1);
    v1 = (s32) ((u32) v1 + 0xfffff1f4U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u16 *) (u32) v1) = (u16) v0; goto L_00902440;
L_009023A4:;
    f1.f = (*(volatile f32 *) (u32) (s2 + 108));
    f0.f = (*(volatile f32 *) (u32) (s2 + 112));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    v0 = func_009B33A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s3 << 1);
    v1 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + (u32) s3);
    v1 = (s32) ((u32) v1 + 0xffffb380U);
    s0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) v1);
    at = (u64) v0 < (u64) v1;
    if (at == 0) goto L_00902440;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xffffb386U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (*(volatile u16 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (s2 + 4)); v0 = func_002079F0(a0, a1);
    if (v0 == 0) goto L_00902440;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + 0xffffb388U);
    v0 = (s32) ((u32) v0 + 0xffffb384U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) v1);
    a2 = 0;
    a1 = (*(volatile u16 *) (u32) v0);
    (*(volatile u8 *) (u32) s1) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
L_00902440:;
L_00902444:;
    return;
}
