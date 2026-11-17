/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);
s32 func_00949160(s32, s32, s32, s32, f32, f32);
s32 func_00952420(s32, s32, s32, s32, f32, f32);
s32 func_0098F410(s32);
s32 func_009B3070(s32, s32);
s32 func_00BBB8C0(s32);

s32 func_00957490(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    a2 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + 0x2980U);
    a1 = 40;
    a3 = (*(volatile u8 *) (u32) (a0 + 18));
    s0 = a0;
    v1 = (*(volatile u8 *) (u32) (a0 + 17));
    v0 = (s32) ((u32) a3 << 4);
    a0 = (s32) ((u32) v0 - (u32) a3);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) v0 - (u32) a0);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a0 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a2 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 128));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = 120;
    a0 = (s32) ((u32) v1 - (u32) v0); v0 = func_00BBB8C0(a0);
    if (v0 != 0) { v0 = 0; goto L_00957624; }
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) { v0 = 0; goto L_00957624; }
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    at = v0 < 2049;
    if (at == 0) { v0 = 0; goto L_00957624; }
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) (v1 + 80));
    at = v0 < 12289;
    if (at != 0) goto L_00957620;
    f1.f = (*(volatile f32 *) (u32) (v1 + 2044));
    v0 = (s32) 0xc3200000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00957620;
    f0.f = (*(volatile f32 *) (u32) (v1 + 48));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00957574; }
L_00957574:;
    at = v0 < 3760;
    if (at == 0) goto L_00957620;
    a1 = (*(volatile u16 *) (u32) (s0 + 42));
    a0 = (*(volatile u16 *) (u32) (v1 + 88)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 20480;
    if (at == 0) goto L_00957620;
    a0 = s0; v0 = func_0098F410(a0);
    if (v0 == 0) goto L_00957620;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = s0;
    a2 = 1;
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a3 = 6144; v0 = func_00949160(a0, a1, a2, a3, f12.f, f13.f);
    a0 = v0 & 0xff;
    v0 = 255;
    if (a0 == v0) goto L_00957620;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (*(volatile u16 *) (u32) (v0 + 296));
    a0 = s0;
    a3 = (*(volatile s32 *) (u32) (v1 + 344));
    s0 = (s32) ((u32) v1 + 0x158U);
    a2 = 8192; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) { v0 = 0; goto L_00957624; }
    v0 = (*(volatile s32 *) (u32) s0);
    at = (s32) 0x900000U;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00957620;
    v0 = 1; goto L_00957624;
L_00957620:;
    v0 = 0;
L_00957624:;
    return v0;
}
