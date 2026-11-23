/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_008F73B0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = (*(volatile u8 *) (u32) (gp + -20068));
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) { v0 = 6; goto L_008F7410; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffac90U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8f73dcU) goto L_008F73DC; if (t_ == 0x8f73e4U) goto L_008F73E4; if (t_ == 0x8f73ecU) goto L_008F73EC; if (t_ == 0x8f73f4U) goto L_008F73F4; if (t_ == 0x8f73fcU) goto L_008F73FC; if (t_ == 0x8f7404U) goto L_008F7404; }
L_008F73DC:;
    v0 = 1; goto L_008F7410;
L_008F73E4:;
    v0 = 2; goto L_008F7410;
L_008F73EC:;
    v0 = 3; goto L_008F7410;
L_008F73F4:;
    v0 = 4; goto L_008F7410;
L_008F73FC:;
    v0 = 5; goto L_008F7410;
L_008F7404:;
    v0 = 6; goto L_008F7410;
    v0 = 6;
L_008F7410:;
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    v0 = (*(volatile s8 *) (u32) (gp + -20064));
    if (v0 <= 0) { v0 = 255; goto L_008F7420; }
L_008F7420:;
    (*(volatile u8 *) (u32) a1) = (u8) v0;
    v0 = 1; return;
}
