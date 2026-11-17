/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00188C40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };

    v0 = 1;
    if (a0 == v0) goto L_00188C7C;
    if (a0 == 0) goto L_00188C5C;
    v0 = (*(volatile s32 *) (u32) a0); goto L_00188C9C;
L_00188C5C:;
    if (a1 != v0) goto L_00188C70;
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 160)); goto L_00188C98;
L_00188C70:;
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 164)); goto L_00188C98;
L_00188C7C:;
    if (a1 != v0) goto L_00188C90;
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 168)); goto L_00188C98;
L_00188C90:;
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 172));
L_00188C98:;
    v0 = (*(volatile s32 *) (u32) a0);
L_00188C9C:;
    v0 = a2 < v0;
    if (v0 != 0) { v1 = (s32) ((u32) a2 << 4); goto L_00188CB0; }
    v0 = 0; goto L_00188CD8;
L_00188CB0:;
    v0 = 1;
    v1 = (s32) ((u32) a0 + (u32) v1);
    f2.f = (*(volatile f32 *) (u32) (v1 + 4));
    f1.f = (*(volatile f32 *) (u32) (v1 + 8));
    f0.f = (*(volatile f32 *) (u32) (v1 + 12));
    (*(volatile f32 *) (u32) a3) = f2.f;
    (*(volatile f32 *) (u32) (a3 + 4)) = f1.f;
    (*(volatile f32 *) (u32) (a3 + 8)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 16));
    (*(volatile f32 *) (u32) a4) = f0.f;
L_00188CD8:;
    return v0;
}
