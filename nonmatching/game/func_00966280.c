/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00966450(s32, f32, f32);
s32 func_0098F750(s32);
s32 func_00AFBA70(s32);
s32 func_00C04990(s32, s32, s32);

s32 func_00966280(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21378));
    at = v0 < 2;
    { s32 c_ = at != 0; s0 = a0; if (c_) goto L_009662B8; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 != 0) { a0 = (*(volatile u8 *) (u32) s0); goto L_009662C0; }
    v0 = 0; goto L_00966440;
L_009662B8:;
    v0 = 0; goto L_00966440;
L_009662C0:;
    v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { v1 = 1; goto L_009662F0; }
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
L_009662F0:;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) v0 << 6);
    v1 = (s32) 0xc40000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) 0x1000000U;
    a1 = (*(volatile u8 *) (u32) a0);
    a0 = (*(volatile s32 *) (u32) (a0 + 28));
    a1 = (s32) ((u32) a1 << 2);
    if (a0 != 0) v1 = v0;
    v0 = (s32) ((u32) a1 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) v1 < (u64) v0;
    if (at == 0) goto L_0096643C;
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46280000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0096643C;
    a0 = s0; v0 = func_0098F750(a0);
    if (v0 != 0) goto L_0096643C;
    a0 = s0; v0 = func_00966450(a0, f12.f, f13.f);
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) goto L_0096643C;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9cb0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x96639cU) goto L_0096639C; if (t_ == 0x9663b4U) goto L_009663B4; if (t_ == 0x9663ccU) goto L_009663CC; if (t_ == 0x9663e4U) goto L_009663E4; if (t_ == 0x9663fcU) goto L_009663FC; if (t_ == 0x966414U) goto L_00966414; if (t_ == 0x96642cU) goto L_0096642C; if (t_ == 0x96643cU) goto L_0096643C; }
L_0096639C:;
    a2 = (*(volatile u16 *) (u32) (s0 + 42));
    a0 = s0;
    a1 = 6; v0 = func_00C04990(a0, a1, a2);
    v0 = 1; goto L_00966440;
L_009663B4:;
    a2 = (*(volatile u8 *) (u32) (s0 + 19));
    a0 = s0;
    a1 = 2; v0 = func_00C04990(a0, a1, a2);
    v0 = 1; goto L_00966440;
L_009663CC:;
    a2 = (*(volatile u8 *) (u32) (s0 + 19));
    a0 = s0;
    a1 = 3; v0 = func_00C04990(a0, a1, a2);
    v0 = 1; goto L_00966440;
L_009663E4:;
    a2 = (*(volatile u8 *) (u32) (s0 + 19));
    a0 = s0;
    a1 = 4; v0 = func_00C04990(a0, a1, a2);
    v0 = 1; goto L_00966440;
L_009663FC:;
    a2 = (*(volatile u8 *) (u32) (s0 + 19));
    a0 = s0;
    a1 = 5; v0 = func_00C04990(a0, a1, a2);
    v0 = 1; goto L_00966440;
L_00966414:;
    a2 = (*(volatile u8 *) (u32) (s0 + 19));
    a0 = s0;
    a1 = 0; v0 = func_00C04990(a0, a1, a2);
    v0 = 1; goto L_00966440;
L_0096642C:;
    a2 = (*(volatile u16 *) (u32) (s0 + 38));
    a0 = s0;
    a1 = 1; v0 = func_00C04990(a0, a1, a2);
L_0096643C:;
    v0 = 0;
L_00966440:;
    return v0;
}
