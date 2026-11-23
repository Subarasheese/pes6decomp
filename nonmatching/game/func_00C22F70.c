/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C22F70(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    a1 = (*(volatile u8 *) (u32) a0);
    a2 = (s32) 0xcb0000U;
    a3 = 0;
    a2 = (s32) ((u32) a2 + 0x52a0U);
    v1 = 13;
L_00C22F84:;
    v0 = (*(volatile u8 *) (u32) (a2 + 1740));
    if (v0 != a1) goto L_00C22FA4;
    v0 = (*(volatile s32 *) (u32) (a2 + 1724));
    if (v0 != v1) goto L_00C22FA4;
    v0 = 1; goto L_00C22FB8;
L_00C22FA4:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < 22;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x40U); if (c_) goto L_00C22F84; }
    v0 = 0;
L_00C22FB8:;
    if (v0 != 0) { v0 = 0; goto L_00C230C8; }
    v1 = (s32) 0xcb0000U;
    a2 = 0;
    v1 = (s32) ((u32) v1 + 0x52a0U);
L_00C22FCC:;
    v0 = (*(volatile s32 *) (u32) (v1 + 1724));
    if (v0 != 0) { a2 = (s32) ((u32) a2 + 0x1U); goto L_00C22FF0; }
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a2 << 6);
    v0 = (s32) ((u32) v0 + 0x52a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (s32) ((u32) v0 + 0x6bcU); goto L_00C23000;
L_00C22FF0:;
    v0 = a2 < 22;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x40U); if (c_) goto L_00C22FCC; }
    a2 = 0;
L_00C23000:;
    if (a2 == 0) { v0 = 0; goto L_00C230C8; }
    (*(volatile u8 *) (u32) (a2 + 16)) = (u8) a1;
    v0 = 13;
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (a0 + 16));
    v0 = v0 < 31;
    if (v0 != 0) goto L_00C2303C;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (a2 + 8)) = (u32) v0; goto L_00C2304C;
L_00C2303C:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v0 << 1);
    (*(volatile u32 *) (u32) (a2 + 8)) = (u32) v0;
L_00C2304C:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 224));
    f0.i = (s32) 0;
    f1.i = (s32) f1.f;
    v0 = f1.i;
    (*(volatile u16 *) (u32) (a2 + 12)) = (u16) v0;
    f1.f = (*(volatile f32 *) (u32) (a0 + 232));
    f1.i = (s32) f1.f;
    v0 = f1.i;
    (*(volatile u16 *) (u32) (a2 + 14)) = (u16) v0;
    f1.f = (*(volatile f32 *) (u32) (a0 + 232));
    f1.i = f1.i ^ (s32) 0x80000000U;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00C23094; }
    v0 = -1;
L_00C23094:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x446a0000U;
    v1 = v0 | 0xc000;
    v0 = 1;
    f0.i = (s32) v1;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u16 *) (u32) (a2 + 46)) = (u16) v1;
L_00C230C8:;
    return v0;
}
