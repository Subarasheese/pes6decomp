/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001D61A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;

    { s32 c_ = a0 == 0; v0 = 0; if (c_) goto L_001D6260; }
    v1 = 2;
    { s32 c_ = a1 == v1; a0 = (*(volatile s32 *) (u32) (a0 + 28)); if (c_) goto L_001D6228; }
    v1 = 1;
    if (a1 == v1) { a1 = (*(volatile s32 *) (u32) (a0 + 16)); goto L_001D61F0; }
    if (a1 == 0) { v1 = (*(volatile u8 *) (u32) a0); goto L_001D61D0; }
    goto L_001D6260;
L_001D61D0:;
    at = a2 < v1;
    if (at == 0) goto L_001D6260;
    v0 = (*(volatile s32 *) (u32) (a0 + 12));
    v1 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_001D6260;
L_001D61F0:;
    a0 = (*(volatile u8 *) (u32) (a0 + 1));
    at = 0 < a0;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_001D6260; }
L_001D6200:;
    v1 = (*(volatile u16 *) (u32) (a1 + 16));
    if (a2 != v1) { a3 = (s32) ((u32) a3 + 0x1U); goto L_001D6214; }
    v0 = a1; goto L_001D6260;
L_001D6214:;
    v1 = a3 < a0;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x18U); if (c_) goto L_001D6200; }
    goto L_001D6260;
L_001D6228:;
    a3 = (*(volatile s32 *) (u32) (a0 + 20));
    a0 = (*(volatile u8 *) (u32) (a0 + 2));
    at = 0 < a0;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_001D6260; }
L_001D623C:;
    v1 = (*(volatile u16 *) (u32) (a3 + 2));
    if (a2 != v1) { a1 = (s32) ((u32) a1 + 0x1U); goto L_001D6250; }
    v0 = a3; goto L_001D6260;
L_001D6250:;
    v1 = a1 < a0;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0xeU); if (c_) goto L_001D623C; }
L_001D6260:;
    return v0;
}
