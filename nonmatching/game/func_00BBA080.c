/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BBA080(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u8 *) (u32) (v1 + 76));
    at = (u64) v1 < (u64) (s64) 60;
    if (at == 0) goto L_00BBA0EC;
    a1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0x1030U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xbba0b0U) goto L_00BBA0B0; if (t_ == 0xbba0c0U) goto L_00BBA0C0; if (t_ == 0xbba0d0U) goto L_00BBA0D0; if (t_ == 0xbba0e0U) goto L_00BBA0E0; if (t_ == 0xbba0ecU) goto L_00BBA0EC; }
L_00BBA0B0:;
    v1 = (*(volatile s32 *) (u32) a0);
    a0 = 110;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00BBA0EC;
L_00BBA0C0:;
    v1 = (*(volatile s32 *) (u32) a0);
    a0 = 112;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00BBA0EC;
L_00BBA0D0:;
    v1 = (*(volatile s32 *) (u32) a0);
    a0 = 115;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00BBA0EC;
L_00BBA0E0:;
    v1 = (*(volatile s32 *) (u32) a0);
    a0 = 119;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0;
L_00BBA0EC:;
    return;
}
