/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C118B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;

    v1 = (u64) 0 < (u64) a0;
    if (v1 == 0) goto L_00C118C0;
    v1 = (u64) a1 < (u64) (s64) 8;
L_00C118C0:;
    if (v1 == 0) goto L_00C118CC;
    v1 = (u64) a2 < (u64) (s64) 6;
L_00C118CC:;
    if (v1 == 0) goto L_00C119BC;
    f0.i = (s32) 0;
    fcc = f12.f <= f0.f;
    if (fcc) { f12.i = f0.i; goto L_00C118E8; }
L_00C118E8:;
    v1 = (s32) 0xcb0000U;
    a3 = (s32) 0xcb0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 13072));
    { s32 c_ = v1 < 0; a4 = (*(volatile s32 *) (u32) (a3 + 13072)); if (c_) goto L_00C11908; }
    f0.i = (s32) v1;
    f0.f = (f32) f0.i; goto L_00C11924;
L_00C11908:;
    a3 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a3 = a3 | v1;
    f0.i = (s32) a3;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00C11924:;
    fcc = f12.f < f0.f;
    if (!fcc) goto L_00C11938;
    v1 = (s32) 0x4f000000U; goto L_00C11968;
L_00C11938:;
    if (a4 < 0) { a3 = (s32) ((u32) a4 >> 1); goto L_00C1194C; }
    f0.i = (s32) a4;
    f12.f = (f32) f0.i; goto L_00C11964;
L_00C1194C:;
    v1 = a4 & 0x1;
    a3 = a3 | v1;
    f0.i = (s32) a3;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_00C11964:;
    v1 = (s32) 0x4f000000U;
L_00C11968:;
    f0.i = (s32) v1;
    fcc = f0.f <= f12.f;
    if (fcc) { f0.f = f12.f - f0.f; goto L_00C1198C; }
    f0.i = (s32) f12.f;
    a3 = f0.i;
    a3 = a3 & 0xff; goto L_00C119A4;
L_00C1198C:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a3 = f0.i;
    a3 = a3 | v1;
    a3 = a3 & 0xff;
L_00C119A4:;
    v1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) a2);
    (*(volatile u8 *) (u32) v1) = (u8) a3;
L_00C119BC:;
    return v0;
}
