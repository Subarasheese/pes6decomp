/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00154070(s32);
s32 func_002CBB90(s32);
s32 func_002CBC80(s32);

s32 func_0027CD20(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a0;
    a0 = 11;
    v0 = func_002CBC80(a0);
    s0 = v0;
    if (s0 == 0) goto L_0027CDDC;
    v0 = (s32) 0x5a0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 2944));
    if (v0 != 0) goto L_0027CDDC;
    v1 = (s32) 0x5a0000U;
    s1 = 2;
    v1 = (s32) ((u32) v1 + 0xb80U);
L_0027CD68:;
    v0 = (*(volatile s32 *) (u32) v1);
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (v1 + -4)); goto L_0027CDEC; }
L_0027CD78:;
    s1 = (s32) ((u32) s1 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0xfffffffcU);
    if (s1 > 0) goto L_0027CD68;
L_0027CD90:;
    if (s1 == 0) { a0 = 11; goto L_0027CDB0; }
    v0 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0xb74U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_0027CDBC;
L_0027CDB0:;
    v0 = func_002CBB90(a0);
    v0 = (s32) ((u32) s0 + (u32) v0);
L_0027CDBC:;
    v1 = (s32) 0x5a0000U;
    a0 = (s32) ((u32) s1 << 2);
    v1 = (s32) ((u32) v1 + 0xb78U);
    v0 = (s32) ((u32) v0 - (u32) s2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
L_0027CDD4:;
    goto L_0027CE00;
L_0027CDDC:;
    a0 = s2; v0 = func_00154070(a0);
    goto L_0027CDD4;
L_0027CDEC:;
    if (v0 != 0) goto L_0027CD90;
    goto L_0027CD78;
L_0027CE00:;
    return v0;
}
