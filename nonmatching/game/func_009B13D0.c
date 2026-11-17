/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009A7210(void);
s64 func_009E1C90(s64);
s64 func_00BF6280(void);

void func_009B13D0(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 9074));
    if (v1 != 0) goto L_009B15D8;
    a0 = 1;
    s0 = 0; v0 = func_009E1C90(a0);
    a0 = v0 & 0xff;
    v1 = 12;
    if (a0 == v1) goto L_009B1460;
    a1 = 5;
    if (a0 == a1) goto L_009B1458;
    v1 = 1;
    if (a0 == v1) goto L_009B1458;
    v1 = 14;
    if (a0 == v1) goto L_009B14C4;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 7972));
    if (a0 == a1) goto L_009B1450;
    v1 = 7;
    if (a0 == v1) goto L_009B1450;
    v1 = 1; goto L_009B14C8;
L_009B1450:;
    s0 = 1; goto L_009B14C4;
L_009B1458:;
    s0 = 1; goto L_009B14C4;
L_009B1460:;
    v0 = func_00BF6280();
    at = (u64) v0 < (u64) (s64) 17;
    if (at == 0) goto L_009B1498;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) a0 + 0xffffa520U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x9b1490U) goto L_009B1490; if (t_ == 0x9b1498U) goto L_009B1498; }
L_009B1490:;
    s0 = 1; goto L_009B14C4;
L_009B1498:;
    v1 = (s32) 0x590000U;
    a0 = 5;
    a1 = (*(volatile u8 *) (u32) (v1 + 7972));
    if (a1 == a0) goto L_009B14C0;
    v1 = 7;
    if (a1 == v1) goto L_009B14C0;
    goto L_009B14C4;
L_009B14C0:;
    s0 = 1;
L_009B14C4:;
    v1 = 1;
L_009B14C8:;
    if (s0 != v1) goto L_009B15D8;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (a0 + 16));
    f1.i = f0.i & 0x7FFFFFFF;
    v1 = (s32) 0x46520000U;
    v1 = v1 | 0xc800;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_009B15D8;
    f0.f = (*(volatile f32 *) (u32) (a0 + 5236));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_009B1510; }
L_009B1510:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x46520000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (fcc) { v1 = 0; goto L_009B15C4; }
    f0.f = (*(volatile f32 *) (u32) (a0 + 5244));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_009B1550; }
L_009B1550:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x446a0000U;
    v1 = v1 | 0xc000;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_009B15C0;
    f0.f = (*(volatile f32 *) (u32) (a0 + 5240));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_009B1590; }
L_009B1590:;
    at = v1 < 625;
    if (at == 0) goto L_009B15C0;
    v0 = func_009A7210();
    a0 = (s64) ((u64) v0 << 56);
    v1 = -1;
    a0 = a0 >> 56;
    if (a0 == v1) { v1 = 0; goto L_009B15C4; }
    v1 = 1; goto L_009B15C4;
L_009B15C0:;
    v1 = 0;
L_009B15C4:;
    if (v1 == 0) goto L_009B15D8;
    a0 = 1;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 9074)) = (u8) a0;
L_009B15D8:;
    return;
}
