/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_001FC9D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0;

    v1 = (s32) 0x530000U;
    a1 = (s32) 0x530000U;
    a4 = (*(volatile s32 *) (u32) (v1 + 12336));
    a5 = (*(volatile s32 *) (u32) (a1 + 12340));
    at = 0 < a4;
    { s32 c_ = at == 0; a6 = 0; if (c_) goto L_001FCA28; }
    a3 = (s32) 0x3e0000U;
    a2 = -1;
    a3 = (s32) ((u32) a3 + 0x7300U);
    v1 = (s32) 0x530000U;
L_001FC9FC:;
    a1 = (s32) ((u32) a6 << 2);
    a1 = (s32) ((u32) a3 + (u32) a1);
    a6 = (s32) ((u32) a6 + 0x1U);
    a1 = (*(volatile s32 *) (u32) a1);
    (*(volatile u32 *) (u32) a5) = (u32) a1;
    (*(volatile u32 *) (u32) (a5 + 8)) = (u32) a2;
    (*(volatile u8 *) (u32) (a5 + 12)) = (u8) 0;
    a4 = (*(volatile s32 *) (u32) (v1 + 12336));
    a1 = a6 < a4;
    { s32 c_ = a1 != 0; a5 = (s32) ((u32) a5 + 0x10U); if (c_) goto L_001FC9FC; }
L_001FCA28:;
    v1 = (s32) 0x530000U;
    a7 = (*(volatile s32 *) (u32) (v1 + 12340));
    at = 0 < a4;
    { s32 c_ = at == 0; t4 = 0; if (c_) goto L_001FCAA0; }
    v1 = (s32) 0x7fff0000U;
    t5 = (s32) 0x1d90000U;
    a4 = v1 | 0xffff;
    t5 = (s32) ((u32) t5 + 0xffffa800U);
    a1 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    a5 = -1;
L_001FCA58:;
    a2 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = a2 == a5; a6 = (*(volatile s32 *) (u32) a7); if (c_) goto L_001FCAA8; }
    if (a2 == a4) goto L_001FCAB0;
    a3 = (s32) ((u32) a2 << 4);
    a2 = (*(volatile s32 *) (u32) (a1 + 12340));
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (*(volatile s32 *) (u32) a2);
L_001FCA80:;
    a2 = (s32) ((u32) a2 - (u32) a6);
    (*(volatile u32 *) (u32) (a7 + 4)) = (u32) a2;
    t4 = (s32) ((u32) t4 + 0x1U);
    a2 = (*(volatile s32 *) (u32) (v1 + 12336));
    a0 = (s32) ((u32) a0 + 0x4U);
    a2 = t4 < a2;
    { s32 c_ = a2 != 0; a7 = (s32) ((u32) a7 + 0x10U); if (c_) goto L_001FCA58; }
L_001FCAA0:;
    goto L_001FCAB8;
L_001FCAA8:;
    a2 = a6; goto L_001FCA80;
L_001FCAB0:;
    a2 = t5; goto L_001FCA80;
L_001FCAB8:;
    return;
}
