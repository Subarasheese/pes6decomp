/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002E8560(void);
void func_002E9300(s32);
s32 func_002E9310(void);
s32 func_00648180(s32, s32, s32, s32);
s32 func_00648FC0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00649CD0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00AEBC60(s32, s32, s32, s32);

s32 func_00648040(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = (*(volatile u8 *) (u32) (gp + -20812));
    at = (u64) v0 < (u64) (s64) 6;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00648078; }
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb8a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x648078U) goto L_00648078; if (t_ == 0x648080U) goto L_00648080; if (t_ == 0x6480b4U) goto L_006480B4; if (t_ == 0x6480ecU) goto L_006480EC; if (t_ == 0x648124U) goto L_00648124; if (t_ == 0x648150U) goto L_00648150; }
L_00648078:;
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -20812)) = (u8) v0;
L_00648080:;
    a0 = 2; v0 = func_00648FC0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) { v1 = 2; goto L_006480A0; }
    v0 = 3;
    (*(volatile u8 *) (u32) (gp + -20812)) = (u8) v0; goto L_00648158;
L_006480A0:;
    if (v0 != v1) { v0 = s0; goto L_0064815C; }
    (*(volatile u8 *) (u32) (gp + -20812)) = (u8) v1;
    (*(volatile u8 *) (u32) (gp + -20808)) = (u8) 0; goto L_00648158;
L_006480B4:;
    v0 = func_00648180(a0, a1, a2, a3);
    a0 = 1;
    if (v0 != a0) { v1 = 2; goto L_006480D0; }
    (*(volatile u8 *) (u32) (gp + -20812)) = (u8) a0; goto L_00648158;
L_006480D0:;
    if (v0 != v1) goto L_00648158;
    func_002E9300(a0);
    v0 = 5;
    (*(volatile u8 *) (u32) (gp + -20812)) = (u8) v0; goto L_00648158;
L_006480EC:;
    func_00AEBC60(a0, a1, a2, a3);
    v0 = func_002E8560();
    if (v0 == 0) { a0 = 6; goto L_00648110; }
    v0 = 4;
    (*(volatile u8 *) (u32) (gp + -20812)) = (u8) v0; goto L_00648158;
L_00648110:;
    func_002E9300(a0);
    v0 = 5;
    (*(volatile u8 *) (u32) (gp + -20812)) = (u8) v0; goto L_00648158;
L_00648124:;
    v0 = func_00649CD0(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_00648158;
    v0 = func_002E9310();
    v1 = 6;
    if (v0 == v1) { (*(volatile u8 *) (u32) (gp + -20812)) = (u8) 0; goto L_00648154; }
    a0 = 1; func_002E9300(a0);
L_00648150:;
    (*(volatile u8 *) (u32) (gp + -20812)) = (u8) 0;
L_00648154:;
    s0 = 1;
L_00648158:;
    v0 = s0;
L_0064815C:;
    return v0;
}
