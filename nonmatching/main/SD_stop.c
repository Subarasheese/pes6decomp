/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Debug_Printf(void);
s32 func_0024FB20(s32, s32, s32, s32);
s32 func_00251740(s32, s32, s32, s32);
s32 func_00306170(s32);
s32 func_00306FE0(s32);

s32 SD_stop(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    a1 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffff9b58U);
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (gp + -22264));
    a2 = s0; v0 = Pes6Debug_Printf();
    a0 = s0; v0 = func_00306FE0(a0);
    if (s0 == 0) { a1 = 0; goto L_0026E5F0; }
    v1 = (s32) ((u32) s0 >> 25);
    v1 = v1 & 0xf;
    if (v1 != 0) { at = (u64) v1 < (u64) (s64) 16; goto L_0026E5B0; }
    a1 = 0;
    goto L_0026E5F0;
L_0026E5B0:;
    if (at == 0) { a1 = 0; goto L_0026E5F0; }
    a0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffff9b60U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x26e5d4U) goto L_0026E5D4; if (t_ == 0x26e5dcU) goto L_0026E5DC; if (t_ == 0x26e5e4U) goto L_0026E5E4; if (t_ == 0x26e5ecU) goto L_0026E5EC; }
L_0026E5D4:;
    a1 = 3; goto L_0026E5F0;
L_0026E5DC:;
    a1 = 1; goto L_0026E5F0;
L_0026E5E4:;
    a1 = 2; goto L_0026E5F0;
L_0026E5EC:;
    a1 = 0;
L_0026E5F0:;
    a0 = 2;
    if (a1 == a0) { v0 = (s32) ((u32) s0 >> 15); goto L_0026E62C; }
    v1 = 1;
    if (a1 == v1) { v0 = (s32) 0x82000000U; goto L_0026E610; }
    goto L_0026E678;
L_0026E610:;
    a1 = s0;
    a0 = v0 | 0x8;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    goto L_0026E674;
L_0026E62C:;
    v1 = v0 & 0x7;
    if (v1 != 0) { v0 = 1; goto L_0026E640; }
    a0 = 100; goto L_0026E65C;
L_0026E640:;
    if (v1 != v0) goto L_0026E650;
    a0 = 500; goto L_0026E65C;
L_0026E650:;
    if (v1 != a0) { a0 = 500; goto L_0026E65C; }
    a0 = 1000;
L_0026E65C:;
    v0 = func_00306170(a0);
    v1 = (s32) ((u32) s0 >> 10);
    a1 = v0;
    a0 = v1 & 0x1f; v0 = func_00251740(a0, a1, a2, a3);
L_0026E674:;
L_0026E678:;
    return v0;
}
