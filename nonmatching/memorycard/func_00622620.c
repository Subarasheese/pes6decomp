/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0063CA40(s32);

s32 func_00622620(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v0 = 4;
    a1 = 0;
    v1 = (*(volatile u8 *) (u32) (a0 + 48));
    { s32 c_ = v1 != v0; s2 = a0; if (c_) goto L_00622654; }
    v0 = 1; goto L_006227EC;
L_00622654:;
    v1 = (*(volatile s32 *) (u32) (s2 + 56));
    v0 = -127;
    if (v1 == v0) { v0 = 0; goto L_006227EC; }
    v0 = -126;
    if (v1 == v0) goto L_00622694;
    v0 = -125;
    if (v1 == v0) goto L_00622694;
    v0 = -120;
    if (v1 == v0) goto L_00622694;
    v0 = -122;
    if (v1 != v0) { a0 = 0; goto L_006226A0; }
L_00622694:;
    v0 = 0;
    goto L_006227EC;
L_006226A0:;
    v1 = 1;
    v0 = (s32) ((u32) s2 + (u32) a0);
L_006226A8:;
    v0 = (*(volatile u8 *) (u32) (v0 + 40));
    if (v0 != v1) goto L_006226B8;
    a1 = v1;
L_006226B8:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < 8;
    if (v0 != 0) { v0 = (s32) ((u32) s2 + (u32) a0); goto L_006226A8; }
    v1 = (*(volatile u8 *) (u32) (s2 + 32));
    v0 = 1;
    if (v1 != v0) goto L_00622734;
    if (a1 != v0) { s0 = 0; goto L_006226E8; }
    goto L_006227EC;
L_006226E8:;
    s1 = s2;
L_006226EC:;
    s3 = (*(volatile s32 *) (u32) s1);
    a0 = 5; v0 = func_0063CA40(a0);
    at = s3 < v0;
    if (at == 0) goto L_00622718;
    v1 = (s32) ((u32) s2 + (u32) s0);
    v0 = 4;
    v1 = (*(volatile u8 *) (u32) (v1 + 48));
    if (v1 != v0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_00622720; }
L_00622718:;
    v0 = 1; goto L_006227EC;
L_00622720:;
    v0 = s0 < 8;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_006226EC; }
    v0 = 0; goto L_006227EC;
L_00622734:;
    if (a1 != v0) { a0 = 0; goto L_00622754; }
    a0 = 0; v0 = func_0063CA40(a0);
    v1 = (*(volatile s32 *) (u32) s2);
    v0 = v1 < v0;
    v0 = v0 ^ 0x1; goto L_006227EC;
L_00622754:;
    v0 = func_0063CA40(a0);
    s0 = v0;
    a0 = 5; v0 = func_0063CA40(a0);
    v0 = (s32) ((u32) s0 + (u32) v0);
    s0 = (*(volatile s32 *) (u32) s2);
    v0 = s0 < v0;
    if (v0 != 0) { a0 = 0; goto L_00622784; }
    v0 = 1; goto L_006227EC;
L_00622784:;
    v0 = func_0063CA40(a0);
    v0 = s0 < v0;
    if (v0 != 0) goto L_006227E8;
    s0 = 1;
    s1 = (s32) ((u32) s2 + 0x4U);
L_006227A0:;
    s3 = (*(volatile s32 *) (u32) s1);
    a0 = 5; v0 = func_0063CA40(a0);
    at = s3 < v0;
    if (at == 0) goto L_006227D0;
    v1 = (s32) ((u32) s2 + (u32) s0);
    v0 = 4;
    v1 = (*(volatile u8 *) (u32) (v1 + 48));
    if (v1 != v0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_006227D8; }
L_006227D0:;
    v0 = 1; goto L_006227EC;
L_006227D8:;
    v0 = s0 < 8;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_006227A0; }
L_006227E8:;
    v0 = 0;
L_006227EC:;
    return v0;
}
