/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Ball_PlaceAtRest(f32);
void func_001AAF40(s32, s32);
void func_00209A00(s32, s32, s32);
void func_009832C0(s32, s32, s32, s32);
s32 func_00BBB7F0(s32);

void func_009E3990(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { 0 };

    a1 = 1;
    v1 = (s32) 0x3f800000U;
    a0 = 8;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u8 *) (u32) (v0 + 12)) = (u8) a1;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 64)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 68)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 72)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 76)) = (u32) v1; v0 = func_00BBB7F0(a0);
    f0.i = (s32) v0;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (s32) 0xc1e00000U;
    v1 = (s32) 0x590000U;
    f1.f = (f32) f0.i;
    v0 = (s32) 0xc6260000U;
    a2 = v0 | 0x6400;
    v0 = (s32) 0x590000U;
    f0.i = (s32) a2;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (a0 + 16)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u32 *) (u32) (a0 + 20)) = (u32) a1;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u32 *) (u32) (a0 + 24)) = (u32) 0;
    (*(volatile u8 *) (u32) (v0 + 7756)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u8 *) (u32) (v1 + 7704)) = (u8) 0;
    f13.f = (*(volatile f32 *) (u32) (v0 + 24));
    f12.f = (*(volatile f32 *) (u32) (v0 + 16)); Pes6Ball_PlaceAtRest(f12.f);
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    s1 = (s32) 0x590000U;
    s1 = (s32) ((u32) s1 + 0xffffe7f0U);
    s0 = 0;
    (*(volatile u8 *) (u32) (v0 + 101)) = (u8) 0;
L_009E3A54:;
    a0 = (*(volatile s32 *) (u32) (s1 + 4));
    a1 = 447;
    a2 = 0; func_00209A00(a0, a1, a2);
    v0 = 74;
    a0 = s1;
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v0;
    a1 = 55;
    (*(volatile u16 *) (u32) (s1 + 24)) = (u16) 0; func_009832C0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001AAF40(a0, a1);
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -16899));
    at = v1 < 100;
    if (at == 0) { v1 = 1; goto L_009E3AB8; }
L_009E3AA0:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 22;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_009E3A54; }
    goto L_009E3AC0;
L_009E3AB8:;
    (*(volatile u8 *) (u32) (s1 + 36)) = (u8) v1; goto L_009E3AA0;
L_009E3AC0:;
    return;
}
