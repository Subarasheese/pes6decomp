/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Debug_Printf(void);
s32 func_0024FB20(s32, s32, s32, s32);
s32 func_0026DBA0(s32, s32, s32, s32);
s32 func_00307400(s32, s32, s32, s32, s32, s32, s32);

s32 SD_call(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    a1 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffff9ba0U);
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (gp + -22264));
    a2 = s0; v0 = Pes6Debug_Printf();
    a0 = s0; v0 = func_00307400(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0;
    if (s0 == 0) { a0 = 0; goto L_0026E8D4; }
    v1 = (s32) ((u32) s0 >> 25);
    v1 = v1 & 0xf;
    if (v1 != 0) { at = (u64) v1 < (u64) (s64) 16; goto L_0026E894; }
    a0 = 0;
    goto L_0026E8D4;
L_0026E894:;
    if (at == 0) { a0 = 0; goto L_0026E8D4; }
    a0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffff9c30U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x26e8b8U) goto L_0026E8B8; if (t_ == 0x26e8c0U) goto L_0026E8C0; if (t_ == 0x26e8c8U) goto L_0026E8C8; if (t_ == 0x26e8d0U) goto L_0026E8D0; }
L_0026E8B8:;
    a0 = 3; goto L_0026E8D4;
L_0026E8C0:;
    a0 = 1; goto L_0026E8D4;
L_0026E8C8:;
    a0 = 2; goto L_0026E8D4;
L_0026E8D0:;
    a0 = 0;
L_0026E8D4:;
    v1 = 2;
    if (a0 == v1) { a0 = s0; goto L_0026E938; }
    a2 = 1;
    if (a0 == a2) { v0 = (s32) 0x7f0000U; goto L_0026E918; }
    v1 = 3;
    if (a0 == v1) { a0 = s0; goto L_0026E900; }
    goto L_0026E944;
L_0026E900:;
    a1 = 0;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    goto L_0026E940;
L_0026E918:;
    a0 = s0;
    a1 = v0 | 0x40;
    (*(volatile u32 *) (u32) (gp + -22256)) = (u32) a2;
    a3 = 0;
    (*(volatile u32 *) (u32) (gp + -22260)) = (u32) a1; v0 = func_0024FB20(a0, a1, a2, a3);
    goto L_0026E940;
L_0026E938:;
    a1 = 0; v0 = func_0026DBA0(a0, a1, a2, a3);
L_0026E940:;
L_0026E944:;
    return v0;
}
