/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00207920(s32);
void func_00209540(s32, s32, s32);
s32 func_009B3220(s32, s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
void func_00AFB7C0(s32, s32, s32);
void func_00BD3BE0(s32, s32);
s32 func_00BD45B0(s32, s32, s32);

s32 func_00BD4F70(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    s5 = a0;
    a0 = (*(volatile s32 *) (u32) a0);
    s4 = 0; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    s3 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile u16 *) (u32) (v0 + 48)); v0 = func_00BD45B0(a0, a1, a2);
    s2 = v0 & 0xff;
    v1 = (s32) 0xcb0000U;
    v0 = (*(volatile s32 *) (u32) s5);
    a1 = 0;
    v1 = (s32) ((u32) v1 + 0x2418U);
    a0 = (*(volatile s32 *) (u32) (v0 + 28));
L_00BD4FCC:;
    v0 = a1 & 0xff;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u16 *) (u32) v0);
    at = v0 < a0;
    if (at == 0) goto L_00BD4FF8;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 6;
    if (v0 != 0) goto L_00BD4FCC;
L_00BD4FF8:;
    s1 = s2 & 0xff;
    v0 = 7;
    { s32 c_ = s1 == v0; v1 = a1 & 0xff; if (c_) goto L_00BD502C; }
    v0 = v1 & 0xff;
    if (s1 == v0) goto L_00BD502C;
    v0 = (s32) ((u32) s1 - (u32) v0);
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00BD5020; }
L_00BD5020:;
    at = v0 < 2;
    if (at != 0) { a2 = (*(volatile s32 *) (u32) (s5 + 4)); goto L_00BD5048; }
L_00BD502C:;
    v1 = (*(volatile s32 *) (u32) (s5 + 4));
    v0 = 7;
    a1 = (*(volatile u8 *) (u32) (v1 + 13));
    if (a1 != v0) { a0 = s5; goto L_00BD511C; }
L_00BD5040:;
    s4 = 1; goto L_00BD5108;
L_00BD5048:;
    v0 = 1;
    v1 = (*(volatile u8 *) (u32) (a2 + 16));
    if (v1 == v0) goto L_00BD50C0;
    if (v1 == 0) { s0 = (*(volatile u8 *) (u32) (a2 + 12)); goto L_00BD5068; }
    v1 = (*(volatile s32 *) (u32) (s5 + 4)); goto L_00BD510C;
L_00BD5068:;
    v0 = 4;
    a0 = s5;
    a1 = s2;
    (*(volatile u8 *) (u32) (a2 + 18)) = (u8) v0; func_00BD3BE0(a0, a1);
    v0 = s0 & 0xff;
    if (v0 != s1) { v0 = (*(volatile s32 *) (u32) (s5 + 4)); goto L_00BD512C; }
L_00BD5088:;
    v1 = (*(volatile s32 *) (u32) (s5 + 4));
    v0 = (*(volatile s32 *) (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = (*(volatile u16 *) (u32) (v1 + 4)); v0 = func_00207920(a0);
    a2 = v0;
    v0 = (*(volatile s32 *) (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = s0; func_00209540(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s5 + 4));
    v0 = (*(volatile u8 *) (u32) (v1 + 16));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (v1 + 16)) = (u8) v0;
L_00BD50C0:;
    v0 = (*(volatile s32 *) (u32) s5);
    a0 = s3;
    a1 = (*(volatile u16 *) (u32) (v0 + 38));
    a2 = 128; v0 = func_009B3220(a0, a1, a2);
    v1 = s2 & 0xff;
    a3 = (*(volatile s32 *) (u32) s5);
    a0 = (s32) ((u32) v1 << 1);
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x2418U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (*(volatile u16 *) (u32) v1);
    (*(volatile u16 *) (u32) (a3 + 40)) = (u16) v0;
    v1 = (*(volatile s32 *) (u32) s5);
    (*(volatile u16 *) (u32) (v1 + 38)) = (u16) v0;
    a0 = (*(volatile s32 *) (u32) s5);
    a2 = 32; func_00AFB7C0(a0, a1, a2);
L_00BD5108:;
    v1 = (*(volatile s32 *) (u32) (s5 + 4));
L_00BD510C:;
    a0 = 2;
    v0 = s4;
    (*(volatile u8 *) (u32) (v1 + 18)) = (u8) a0; goto L_00BD5134;
L_00BD511C:;
    func_00BD3BE0(a0, a1);
    goto L_00BD5040;
L_00BD512C:;
    (*(volatile u8 *) (u32) (v0 + 13)) = (u8) s0; goto L_00BD5088;
L_00BD5134:;
    return v0;
}
