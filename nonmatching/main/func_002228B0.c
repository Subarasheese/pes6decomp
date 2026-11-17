/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Player_FindRecord(s32, s32, s32, s32);
s32 func_00223BF0(void);
s32 func_00223C00(void);
s32 func_0026D520(s32, s32);
s32 func_0026D710(s32, s32);
s32 func_0026D880(s32, s32);

s32 func_002228B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x3b0000U;
    v0 = 3;
    v1 = (s32) ((u32) v1 + 0xffff99e0U);
    s5 = a2;
    s4 = a0;
    s3 = a1;
    s2 = 0;
    { s32 c_ = s3 == v0; s0 = a3; if (c_) goto L_0022292C; }
    v0 = 2;
    if (s3 == v0) { s1 = (s32) ((u32) v1 + 0x30U); goto L_00222930; }
    v0 = 1;
    if (s3 == v0) goto L_0022291C;
    v0 = func_00223C00();
    s1 = v0; goto L_00222930;
L_0022291C:;
    v0 = func_00223BF0();
    s1 = v0; goto L_00222930;
L_0022292C:;
    s1 = (s32) ((u32) v1 + 0x32U);
L_00222930:;
    a1 = s0;
    a0 = s4; v0 = Pes6Player_FindRecord(a0, a1, a2, a3);
    if (v0 == 0) goto L_00222A7C;
    v1 = 3;
    if (s3 == v1) { s2 = (s32) ((u32) v0 + 0x32U); goto L_0022296C; }
    v1 = 2;
    if (s3 == v1) { s2 = (s32) ((u32) v0 + 0x30U); goto L_0022296C; }
    v1 = 1;
    if (s3 == v1) { s2 = (s32) ((u32) v0 + 0x20U); goto L_0022296C; }
    s2 = v0;
L_0022296C:;
    v0 = 4;
    if (s5 == v0) goto L_00222A7C;
    s0 = s4 & 0xffff;
    { s32 c_ = s0 == 0; v1 = s2; if (c_) goto L_00222A38; }
    v0 = 0x8000;
    v0 = s0 < v0;
    if (v0 != 0) goto L_002229A4;
    at = 0x80b8;
    at = s0 < at;
    if (at != 0) goto L_00222A38;
L_002229A4:;
    if (s3 != 0) { v0 = 1; goto L_002229DC; }
    v0 = (*(volatile s8 *) (u32) v1);
    if (v0 != 0) goto L_002229D8;
    v0 = (*(volatile s8 *) (u32) (v1 + 1));
    if (v0 != 0) goto L_002229D8;
    a0 = s4;
    a1 = s5; v0 = func_0026D880(a0, a1);
    s2 = v0; goto L_00222A34;
L_002229D8:;
    v0 = 1;
L_002229DC:;
    if (s3 != v0) { v0 = 2; goto L_00222A08; }
    v0 = (*(volatile s8 *) (u32) v1);
    if (v0 != 0) goto L_00222A04;
    a0 = s4;
    a1 = s5; v0 = func_0026D710(a0, a1);
    s2 = v0; goto L_00222A34;
L_00222A04:;
    v0 = 2;
L_00222A08:;
    if (s3 != v0) { v1 = s2; goto L_00222A38; }
    v1 = (*(volatile u16 *) (u32) s2);
    v0 = 0xffff;
    if (v1 != v0) goto L_00222A34;
    a0 = s4;
    a1 = s5; v0 = func_0026D520(a0, a1);
    (*(volatile u16 *) (u32) (gp + -22884)) = (u16) v0;
    s2 = (s32) ((u32) gp + 0xffffa69cU);
L_00222A34:;
    v1 = s2;
L_00222A38:;
    if (s2 != 0) goto L_00222A48;
    s2 = s1;
    v1 = s1;
L_00222A48:;
    if (s3 != 0) goto L_00222A7C;
    if (s0 == 0) { s2 = s1; goto L_00222A7C; }
    if (s0 == 0) goto L_00222A7C;
    v0 = (*(volatile s8 *) (u32) v1);
    if (v0 != 0) goto L_00222A7C;
    v0 = (*(volatile s8 *) (u32) (v1 + 1));
    if (v0 != 0) goto L_00222A7C;
    s2 = s1;
L_00222A7C:;
    if (s2 != 0) { v0 = s2; goto L_00222A8C; }
    s2 = s1;
    v0 = s2;
L_00222A8C:;
    return v0;
}
