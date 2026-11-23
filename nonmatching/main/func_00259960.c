/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0025EC20(s32);
s32 func_0025F7B0(void);

void func_00259960(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + -12436));
    v1 = 1;
    if (a0 != v1) goto L_00259A18;
    v0 = func_0025F7B0();
    a3 = (s32) 0x590000U;
    a2 = (s32) 0x590000U;
    a3 = (s32) ((u32) a3 + 0xffffcf48U);
    a4 = v0 & 0xff;
    a2 = (s32) ((u32) a2 + 0xffffcf4cU);
    a5 = (*(volatile s16 *) (u32) (a3 + 2));
    v0 = (*(volatile s16 *) (u32) (a2 + 2));
    at = v0 < a5;
    if (at != 0) goto L_00259A10;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
L_002599B4:;
    a6 = (*(volatile s16 *) (u32) a3);
    a0 = (*(volatile s16 *) (u32) a2);
    at = a0 < a6;
    if (at != 0) goto L_002599F8;
L_002599C8:;
    a0 = (*(volatile s16 *) (u32) (v1 + -12456));
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = (*(volatile s32 *) (u32) (v0 + -12444));
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) a6);
    (*(volatile u8 *) (u32) a0) = (u8) a4;
    a6 = (s32) ((u32) a6 + 0x1U);
    a0 = (*(volatile s16 *) (u32) a2);
    at = a0 < a6;
    if (at == 0) goto L_002599C8;
L_002599F8:;
    a0 = (*(volatile s16 *) (u32) (a2 + 2));
    a5 = (s32) ((u32) a5 + 0x1U);
    at = a0 < a5;
    if (at == 0) goto L_002599B4;
L_00259A10:;
    a0 = 1; func_0025EC20(a0);
L_00259A18:;
    return;
}
