/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0020C650(s32, s32, s32, s32);
s32 func_0020C6E0(s32, s32, s32, s32, s32, s32, s32);
void func_002CAFB0(void);
void func_002CAFC0(void);

void func_0020CA70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    v1 = (*(volatile s8 *) (u32) (v0 + 7605));
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 31468));
    s0 = (u64) 0 < (u64) v1; func_0020C650(a0, a1, a2, a3);
    v1 = (s32) 0x530000U;
    { s32 c_ = s0 == 0; (*(volatile u32 *) (u32) (v1 + 31468)) = (u32) 0; if (c_) goto L_0020CAA8; }
    func_002CAFB0();
L_0020CAA8:;
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 31468));
    if (v1 != 0) goto L_0020CB40;
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 + 0xffffc9d0U);
    v0 = (s32) ((u32) v0 + 0xffffc9feU);
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v1;
    a0 = (s32) ((u32) sp + 0x20U);
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v0;
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 + 0xffffca2cU);
    v0 = (s32) ((u32) v0 + 0xffffca5aU);
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) v0;
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 + 0xffffca88U);
    v0 = (s32) ((u32) v0 + 0xffffcab6U);
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) v0;
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 + 0xffffcae4U);
    v0 = (s32) ((u32) v0 + 0xffffcb12U);
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0;
    a1 = 8;
    a2 = 23;
    a3 = 0;
    a4 = 0;
    a5 = 0;
    a6 = 0; v0 = func_0020C6E0(a0, a1, a2, a3, a4, a5, a6);
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + 31468)) = (u32) v0;
L_0020CB40:;
    if (s0 == 0) { ; goto L_0020CB54; }
    func_002CAFC0();
L_0020CB54:;
    return;
}
