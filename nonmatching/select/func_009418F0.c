/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_002211E0(void);
void func_0023EC10(s32, s32);
s32 func_00246550(s32);
s32 func_0093F960(s32, s32, s32, s32, s32, s32, s32, s32, f32);

s32 func_009418F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v1 = (*(volatile s32 *) (u32) (gp + -18392));
    v0 = 1;
    s0 = (s32) 0x540000U;
    { s32 c_ = v1 == v0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_009419BC; }
    if (v1 == 0) goto L_00941920;
    v0 = 0; goto L_009419EC;
L_00941920:;
    v0 = (s32) 0x960000U;
    a1 = (s32) 0x960000U;
    a2 = (*(volatile s8 *) (u32) (v0 + 31384));
    a0 = (s32) 0x960000U;
    v1 = (s32) 0x960000U;
    a1 = (s32) ((u32) a1 + 0xffffe1fcU);
    (*(volatile u8 *) (u32) (v1 + 31385)) = (u8) 0;
    a0 = (s32) ((u32) a0 + 0xffffe240U);
    a2 = (s32) ((u32) a2 << 2);
    v1 = (s32) 0x960000U;
    a1 = (s32) ((u32) a1 + (u32) a2);
    a0 = (s32) ((u32) a0 + (u32) a2);
    s0 = (*(volatile s32 *) (u32) a1);
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 32180)) = (u32) s0;
    (*(volatile u32 *) (u32) (v0 + 32068)) = (u32) a0; v0 = func_002211E0();
    v0 = (*(volatile s32 *) (u32) (v0 + 64));
    at = v0 < s0;
    if (at != 0) { v0 = (s32) 0x8c000000U; goto L_009419AC; }
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32068)); v0 = func_00246550(a0);
    if (v0 != 0) goto L_009419A8;
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = (*(volatile s32 *) (u32) (gp + -18392));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18392)) = (u32) v0; goto L_009419E8;
L_009419A8:;
    v0 = (s32) 0x8c000000U;
L_009419AC:;
    a0 = v0 | 0x8005; SD_call(a0);
    v0 = 1; goto L_009419EC;
L_009419BC:;
    v0 = func_0093F960(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    v1 = 2;
    if (v0 != v1) goto L_009419E8;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 1; func_0023EC10(a0, a1);
    (*(volatile u32 *) (u32) (gp + -18392)) = (u32) 0;
    v0 = 1; goto L_009419EC;
L_009419E8:;
    v0 = 0;
L_009419EC:;
    return v0;
}
