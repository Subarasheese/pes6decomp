/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00D0F610(s32, s32, s32, s32);

s32 func_008D9220(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s0 = a0;
    s1 = s0 & 0xff;
    at = s1 < 8;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_008D92AC; }
    v0 = (*(volatile u8 *) (u32) (gp + -20084));
    if (v0 != 0) goto L_008D9258;
    v1 = 0; goto L_008D926C;
L_008D9258:;
    v0 = func_00D0F610(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v1 = 0; goto L_008D926C; }
L_008D926C:;
    if (v1 == 0) { v0 = s1 < 8; goto L_008D927C; }
    a0 = 0; goto L_008D92AC;
L_008D927C:;
    if (v0 != 0) { v1 = s0 & 0xff; goto L_008D928C; }
    v1 = 0; goto L_008D92A0;
L_008D928C:;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0x5880U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
L_008D92A0:;
    v0 = (s32) 0x300000U;
    v0 = v0 | 0xf;
    a0 = v1 & v0;
L_008D92AC:;
    v1 = a0 & 0x8;
    { s32 c_ = v1 == 0; v0 = 0; if (c_) goto L_008D92BC; }
    v0 = v0 | 0x4;
L_008D92BC:;
    v1 = a0 & 0x4;
    if (v1 == 0) { v1 = a0 & 0x2; goto L_008D92D0; }
    v0 = v0 | 0x8;
    v1 = a0 & 0x2;
L_008D92D0:;
    if (v1 == 0) { v1 = a0 & 0x1; goto L_008D92E0; }
    v0 = v0 | 0x1;
    v1 = a0 & 0x1;
L_008D92E0:;
    if (v1 == 0) { ; goto L_008D92F0; }
    v0 = v0 | 0x2;
L_008D92F0:;
    return v0;
}
