/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B33A0(s32, s32, s32);
void func_00BD3BA0(s32, s32, s32);
void func_00BD3CF0(s32, s32, s32, s32, f32, f32);
void func_00BD4040(s32, s32);
void func_00BE2800(s32, s32);

void func_00BE4F60(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (v0 + 9958));
    s0 = a0;
    a2 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (*(volatile s32 *) (u32) a0);
    a1 = (s32) ((u32) a1 << 2);
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + (u32) a2);
    f0.f = (*(volatile f32 *) (u32) (a1 + 1148));
    (*(volatile f32 *) (u32) (v1 + 108)) = f0.f;
    v1 = (*(volatile u8 *) (u32) (v0 + 9958));
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (*(volatile s32 *) (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a1);
    f0.f = (*(volatile f32 *) (u32) (v1 + 2940));
    (*(volatile f32 *) (u32) (v0 + 112)) = f0.f;
    a0 = (*(volatile s32 *) (u32) a0);
    f1.f = (*(volatile f32 *) (u32) (a0 + 108));
    f0.f = (*(volatile f32 *) (u32) (a0 + 112));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x100000U;
    at = at | 0x1;
    at = (u64) v0 < (u64) at;
    if (at != 0) { v0 = 3; goto L_00BE4FEC; }
    v0 = 4;
L_00BE4FEC:;
    a1 = v0 & 0xff;
    a0 = s0; func_00BD4040(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    v0 = 710;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) { a0 = s0; goto L_00BE507C; }
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (v0 + 16));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x640000U;
    at = at | 0x1;
    at = (u64) v0 < (u64) at;
    if (at != 0) goto L_00BE5058;
    a0 = s0;
    a1 = 4;
    a2 = 1; func_00BD3BA0(a0, a1, a2);
L_00BE5058:;
    v0 = (*(volatile s32 *) (u32) s0);
    f12.f = (*(volatile f32 *) (u32) (v0 + 108));
    f13.f = (*(volatile f32 *) (u32) (v0 + 112));
    a0 = s0; func_00BD3CF0(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = 168;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00BE5084;
L_00BE507C:;
    func_00BE2800(a0, a1);
L_00BE5084:;
    return;
}
