/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_IsUnavailable(void);
s32 func_002293F0(void);

s32 func_002381E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    v0 = func_002293F0();
    s0 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) { ; goto L_0023831C; }
    if (s0 == 0) goto L_00238318;
    a4 = s1 & 0xff;
    at = a4 < 113;
    if (at == 0) goto L_00238318;
    a2 = 0;
    a0 = 255;
L_0023822C:;
    a1 = (s32) ((u32) s0 + (u32) a2);
    (*(volatile u8 *) (u32) a1) = (u8) a0;
    a2 = (s32) ((u32) a2 + 0x8U);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) a0;
    v1 = a2 < 105;
    (*(volatile u8 *) (u32) (a1 + 2)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 3)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 4)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 5)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 6)) = (u8) a0;
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (a1 + 7)) = (u8) a0; if (c_) goto L_0023822C; }
    v1 = (s32) ((u32) s0 + (u32) a2);
    a3 = 0;
    { s32 c_ = a4 <= 0; (*(volatile u8 *) (u32) v1) = (u8) a0; if (c_) goto L_00238318; }
    at = a4 < 9;
    { s32 c_ = at != 0; a2 = (s32) ((u32) a4 + 0xfffffff8U); if (c_) goto L_002382F0; }
    { s32 c_ = a4 < 0; v1 = 0; if (c_) goto L_00238298; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a4 < at;
    if (at == 0) goto L_00238298;
    v1 = 1;
L_00238298:;
    if (v1 == 0) goto L_002382F0;
    a1 = (s32) ((u32) s0 + (u32) a3);
L_002382A4:;
    v1 = (s32) ((u32) a3 + 0x1U);
    (*(volatile u8 *) (u32) a1) = (u8) a3;
    a0 = (s32) ((u32) a3 + 0x2U);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v1;
    (*(volatile u8 *) (u32) (a1 + 2)) = (u8) a0;
    v1 = (s32) ((u32) a3 + 0x3U);
    (*(volatile u8 *) (u32) (a1 + 3)) = (u8) v1;
    a0 = (s32) ((u32) a3 + 0x4U);
    (*(volatile u8 *) (u32) (a1 + 4)) = (u8) a0;
    v1 = (s32) ((u32) a3 + 0x5U);
    (*(volatile u8 *) (u32) (a1 + 5)) = (u8) v1;
    a0 = (s32) ((u32) a3 + 0x6U);
    v1 = (s32) ((u32) a3 + 0x7U);
    (*(volatile u8 *) (u32) (a1 + 6)) = (u8) a0;
    a3 = (s32) ((u32) a3 + 0x8U);
    (*(volatile u8 *) (u32) (a1 + 7)) = (u8) v1;
    v1 = a3 < a2;
    if (v1 != 0) { a1 = (s32) ((u32) s0 + (u32) a3); goto L_002382A4; }
L_002382F0:;
    at = a3 < a4;
    if (at == 0) goto L_00238318;
L_002382FC:;
    v1 = (s32) ((u32) s0 + (u32) a3);
    (*(volatile u8 *) (u32) v1) = (u8) a3;
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < a4;
    if (v1 != 0) goto L_002382FC;
L_00238318:;
L_0023831C:;
    return v0;
}
