/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_0021D5D0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 frame[2];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (sp + 12)) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) (v0 + -32252));
    v1 = (*(volatile s16 *) (u32) (sp + 14));
    at = 0 < a0;
    { s32 c_ = at == 0; a4 = 0; if (c_) goto L_0021D5F8; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_0021D5F8:;
    v0 = (s32) 0x540000U;
    a3 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a1 = 0; if (c_) goto L_0021D674; }
    a1 = a0; goto L_0021D674;
    v1 = (s64) ((u64) v1 << 48);
L_0021D618:;
    v1 = v1 >> 48;
    if (v1 == v0) goto L_0021D660;
    at = 0 < a1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_0021D660; }
L_0021D630:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_0021D650;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a0) goto L_0021D650;
    a3 = a4; goto L_0021D660;
L_0021D650:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < a1;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_0021D630; }
L_0021D660:;
    { s32 c_ = a3 == 0; v0 = 0; if (c_) goto L_0021D68C; }
    v0 = (*(volatile s16 *) (u32) (a3 + 4));
    goto L_0021D690;
L_0021D674:;
    a0 = (*(volatile s16 *) (u32) (sp + 12));
    v0 = -1;
    if (a0 == v0) goto L_0021D660;
    v1 = (s64) ((u64) v1 << 48); goto L_0021D618;
L_0021D68C:;
L_0021D690:;
    return v0;
}
