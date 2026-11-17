/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0020C6E0(s32, s32, s32, s32, s32, s32, s32);

s32 func_0020D2B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0;
    s64 frame[34];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 31480));
    { s32 c_ = v1 != 0; v0 = 1; if (c_) goto L_0020D3CC; }
    v1 = (s32) 0x590000U;
    a2 = 0;
    a1 = 0;
    v1 = (s32) ((u32) v1 + 0x2980U);
L_0020D2D8:;
    a0 = 0;
    v0 = v1;
L_0020D2E0:;
    a3 = (s32) ((u32) a2 << 2);
    a5 = (s32) ((u32) a3 + (u32) sp);
    a6 = (s32) ((u32) v0 + 0x148U);
    a3 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u32 *) (u32) (a5 + 16)) = (u32) a6;
    a3 = (s32) ((u32) a3 << 2);
    a4 = (s32) ((u32) v0 + 0x490U);
    a3 = (s32) ((u32) a3 + (u32) sp);
    a6 = (s32) ((u32) v0 + 0x7d8U);
    (*(volatile u32 *) (u32) (a3 + 16)) = (u32) a4;
    a0 = (s32) ((u32) a0 + 0x8U);
    a3 = (s32) ((u32) a2 + 0x2U);
    a4 = (s32) ((u32) v0 + 0xb20U);
    a3 = (s32) ((u32) a3 << 2);
    a5 = (s32) ((u32) a3 + (u32) sp);
    a3 = (s32) ((u32) a2 + 0x3U);
    (*(volatile u32 *) (u32) (a5 + 16)) = (u32) a6;
    a3 = (s32) ((u32) a3 << 2);
    a6 = (s32) ((u32) v0 + 0xe68U);
    a3 = (s32) ((u32) a3 + (u32) sp);
    (*(volatile u32 *) (u32) (a3 + 16)) = (u32) a4;
    a3 = (s32) ((u32) a2 + 0x4U);
    a4 = (s32) ((u32) v0 + 0x11b0U);
    a3 = (s32) ((u32) a3 << 2);
    a5 = (s32) ((u32) a3 + (u32) sp);
    a3 = (s32) ((u32) a2 + 0x5U);
    (*(volatile u32 *) (u32) (a5 + 16)) = (u32) a6;
    a3 = (s32) ((u32) a3 << 2);
    a6 = (s32) ((u32) v0 + 0x14f8U);
    a3 = (s32) ((u32) a3 + (u32) sp);
    (*(volatile u32 *) (u32) (a3 + 16)) = (u32) a4;
    a3 = (s32) ((u32) a2 + 0x6U);
    a4 = (s32) ((u32) v0 + 0x1840U);
    a3 = (s32) ((u32) a3 << 2);
    v0 = (s32) ((u32) v0 + 0x1a40U);
    a5 = (s32) ((u32) a3 + (u32) sp);
    a3 = (s32) ((u32) a2 + 0x7U);
    (*(volatile u32 *) (u32) (a5 + 16)) = (u32) a6;
    a3 = (s32) ((u32) a3 << 2);
    a3 = (s32) ((u32) a3 + (u32) sp);
    (*(volatile u32 *) (u32) (a3 + 16)) = (u32) a4;
    a3 = a0 < 32;
    { s32 c_ = a3 != 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_0020D2E0; }
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 2;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x6900U); if (c_) goto L_0020D2D8; }
    a0 = (s32) ((u32) sp + 0x10U);
    a1 = 64;
    a2 = 23;
    a3 = 0;
    a4 = 0;
    a5 = -1;
    a6 = 128; v0 = func_0020C6E0(a0, a1, a2, a3, a4, a5, a6);
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + 31480)) = (u32) v0;
    v0 = 1;
L_0020D3CC:;
    return v0;
}
