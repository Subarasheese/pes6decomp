/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001892C0(void);

s32 func_001894A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;

    v1 = (s32) 0x520000U;
    a3 = a0;
    (*(volatile u8 *) (u32) (v1 + 176)) = (u8) 0;
    a2 = 0;
    v1 = (s32) 0x520000U;
    (*(volatile u8 *) (u32) (v1 + 177)) = (u8) 0;
    v1 = (s32) 0x520000U;
    (*(volatile u8 *) (u32) (v1 + 178)) = (u8) 0;
    v1 = (s32) 0x520000U;
    (*(volatile u8 *) (u32) (v1 + 179)) = (u8) 0;
    v1 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v1 + 144)) = (u32) a0;
L_001894D8:;
    a1 = (*(volatile s32 *) (u32) a3);
    a2 = (s32) ((u32) a2 + 0x6U);
    v1 = a2 < 7;
    a1 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u32 *) (u32) a3) = (u32) a1;
    a1 = (*(volatile s32 *) (u32) (a3 + 4));
    a1 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u32 *) (u32) (a3 + 4)) = (u32) a1;
    a1 = (*(volatile s32 *) (u32) (a3 + 8));
    a1 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u32 *) (u32) (a3 + 8)) = (u32) a1;
    a1 = (*(volatile s32 *) (u32) (a3 + 12));
    a1 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u32 *) (u32) (a3 + 12)) = (u32) a1;
    a1 = (*(volatile s32 *) (u32) (a3 + 16));
    a1 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u32 *) (u32) (a3 + 16)) = (u32) a1;
    a1 = (*(volatile s32 *) (u32) (a3 + 20));
    a1 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u32 *) (u32) (a3 + 20)) = (u32) a1;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x18U); if (c_) goto L_001894D8; }
    v1 = (*(volatile s32 *) (u32) a3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) a3) = (u32) v1; v0 = func_001892C0();
    v1 = (s32) 0x520000U;
    a2 = (s32) 0x520000U;
    a4 = (*(volatile s32 *) (u32) (v1 + 144));
    a1 = (s32) 0x520000U;
    a0 = (s32) 0x520000U;
    a3 = (*(volatile s32 *) (u32) (a4 + 16));
    v1 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (a2 + 160)) = (u32) a3;
    a2 = (*(volatile s32 *) (u32) (a4 + 20));
    (*(volatile u32 *) (u32) (a1 + 164)) = (u32) a2;
    a1 = (*(volatile s32 *) (u32) (a4 + 24));
    (*(volatile u32 *) (u32) (a0 + 168)) = (u32) a1;
    a0 = (*(volatile s32 *) (u32) (a4 + 28));
    (*(volatile u32 *) (u32) (v1 + 172)) = (u32) a0;
    return v0;
}
