/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00952420(s32, s32, s32, s32, f32, f32);
s32 func_009B3070(s32, s32);

s32 func_00C05370(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v1 = 512;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (a0 + 492)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a0 + 492));
    (*(volatile u32 *) (u32) (a0 + 176)) = (u32) v1;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    { s32 c_ = v0 != 0; s0 = a0; if (c_) goto L_00C05418; }
    v0 = (*(volatile u8 *) (u32) (s0 + 19));
    at = (s32) 0x400000U;
    at = at | 0x1;
    v1 = v0 ^ 0x1;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 436));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) (v0 + 344));
    at = v1 < at;
    if (at == 0) { v0 = 1; goto L_00C0545C; }
    v0 = (s32) 0x40000U;
    v0 = v1 < v0;
    if (v0 != 0) { v0 = 1; goto L_00C0545C; }
    at = (s32) 0x40000U;
    at = at | 0x1;
    at = v1 < at;
    if (at == 0) { a1 = (*(volatile u16 *) (u32) (s0 + 288)); goto L_00C05420; }
L_00C05400:;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21399));
    if (v0 == 0) { a0 = (*(volatile u16 *) (u32) (s0 + 38)); goto L_00C0543C; }
    v0 = 1; goto L_00C0545C;
L_00C05418:;
    v0 = 1; goto L_00C0545C;
L_00C05420:;
    a2 = 8192;
    a3 = (s32) 0x240000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_00C05400;
    v0 = 1; goto L_00C0545C;
L_00C0543C:;
    a1 = (*(volatile u16 *) (u32) (s0 + 288)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 8192;
    if (at == 0) { v0 = 3; goto L_00C0545C; }
    v0 = 1; goto L_00C0545C;
L_00C0545C:;
    return v0;
}
