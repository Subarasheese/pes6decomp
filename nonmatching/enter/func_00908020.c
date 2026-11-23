/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00908020(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7980));
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) { v0 = 0; goto L_009080E0; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd7f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x908050U) goto L_00908050; if (t_ == 0x90805cU) goto L_0090805C; if (t_ == 0x908064U) goto L_00908064; }
L_00908050:;
    v0 = 0;
    goto L_009080E0;
L_0090805C:;
    v0 = 1; goto L_009080E0;
L_00908064:;
    v0 = (s32) 0x590000U;
    v1 = 255;
    v0 = (*(volatile u8 *) (u32) (v0 + 10587));
    if (v0 == v1) goto L_00908080;
    a3 = 0; goto L_009080D8;
L_00908080:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 10588));
    if (v0 == v1) goto L_00908098;
    a3 = 1; goto L_009080D8;
L_00908098:;
    a1 = (s32) 0x590000U;
    a3 = 2;
    a2 = 0;
    a1 = (s32) ((u32) a1 + 0x2800U);
L_009080A8:;
    v0 = (*(volatile u8 *) (u32) (a1 + 1));
    if (v0 == v1) { a2 = (s32) ((u32) a2 + 0x1U); goto L_009080C8; }
    if (a0 != v0) goto L_009080C4;
    v0 = 1; goto L_009080E0;
L_009080C4:;
    a2 = (s32) ((u32) a2 + 0x1U);
L_009080C8:;
    v0 = a2 < 8;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x28U); if (c_) goto L_009080A8; }
L_009080D8:;
    v0 = a0 ^ a3;
    v0 = (u64) v0 < (u64) (s64) 1;
L_009080E0:;
    return v0;
}
