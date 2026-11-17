/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00207D10(s32);
s32 func_00207D80(s32, s32);
void func_00208610(s32, s32, s32);
void func_00209820(void);
s32 func_009B3220(s32, s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
void func_00B2ACF0(s32, s32, s32, s32);
void func_00B9E5D0(s32, s32, s32, s32, f32, f32);
s32 func_00BBB8C0(s32);
s32 func_00BF6270(void);

void func_00BDF740(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = (s32) 0xcc0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + -13608));
    s0 = a0;
    v0 = (s32) 0xcc0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + -13604));
    a0 = (*(volatile s32 *) (u32) a0); v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    s2 = (*(volatile s32 *) (u32) s0);
    s1 = (*(volatile u8 *) (u32) s2);
    s3 = v0 & 0xffff; v0 = func_00BF6270();
    if (s1 != v0) { a0 = 48; goto L_00BDF840; }
    a1 = (*(volatile u16 *) (u32) (s2 + 38));
    a0 = s3;
    a2 = 176; v0 = func_009B3220(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u16 *) (u32) (v1 + 38)) = (u16) v0;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u16 *) (u32) (v1 + 40)) = (u16) v0;
L_00BDF7AC:;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 78));
    if (v0 != 0) { a0 = 2; goto L_00BDF874; }
L_00BDF7BC:;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 79));
    if (v0 != 0) { a0 = 2; goto L_00BDF8C0; }
L_00BDF7CC:;
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v1 + 80));
    if (v0 == 0) goto L_00BDF810;
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 318; v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00BDF810;
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) 0x42080000U;
    v0 = (*(volatile u8 *) (u32) (a0 + 80));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) (a0 + 80)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u32 *) (u32) (v0 + 56)) = (u32) v1;
L_00BDF810:;
    a0 = s0; func_00B2ACF0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_00209820();
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); v0 = func_00207D10(a0);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) s0); goto L_00BDF90C; }
L_00BDF838:;
    goto L_00BDF924;
L_00BDF840:;
    v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 + 0x40U);
    a2 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = (*(volatile u16 *) (u32) (v0 + 38));
    a0 = s3; v0 = func_009B3220(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u16 *) (u32) (v1 + 38)) = (u16) v0;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u16 *) (u32) (v1 + 40)) = (u16) v0; goto L_00BDF7AC;
L_00BDF874:;
    v0 = func_00BBB8C0(a0);
    if (v0 == 0) goto L_00BDF7BC;
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 132; v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00BDF7BC;
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) 0x42080000U;
    v0 = (*(volatile u8 *) (u32) (a0 + 78));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) (a0 + 78)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u32 *) (u32) (v0 + 56)) = (u32) v1; goto L_00BDF810;
L_00BDF8C0:;
    v0 = func_00BBB8C0(a0);
    if (v0 == 0) goto L_00BDF7CC;
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 270; v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00BDF7CC;
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) 0x43560000U;
    v0 = (*(volatile u8 *) (u32) (a0 + 79));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) (a0 + 79)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u32 *) (u32) (v0 + 56)) = (u32) v1; goto L_00BDF810;
L_00BDF90C:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_00208610(a0, a1, a2);
    a0 = s0; func_00B9E5D0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00BDF838;
L_00BDF924:;
    return;
}
