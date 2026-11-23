/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0025E080(s32);
s32 func_0025E0E0(s32);
void func_0025EC20(s32);
void func_0025F8F0(s32, s32);

void func_0025C8B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    a0 = 1; v0 = func_0025E0E0(a0);
    if (v0 == 0) goto L_0025C960;
    a0 = (s32) ((u32) sp + 0x1cU);
    a1 = (s32) ((u32) sp + 0x18U); func_0025F8F0(a0, a1);
    a2 = (s32) ((u32) sp + 0x1aU);
    a3 = (*(volatile s16 *) (u32) (sp + 30));
    v0 = (*(volatile s16 *) (u32) a2);
    at = v0 < a3;
    if (at != 0) goto L_0025C950;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
L_0025C8F4:;
    a4 = (*(volatile s16 *) (u32) (sp + 28));
    a0 = (*(volatile s16 *) (u32) (sp + 24));
    at = a0 < a4;
    if (at != 0) goto L_0025C938;
L_0025C908:;
    a0 = (*(volatile s16 *) (u32) (v1 + -12348));
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = (*(volatile s32 *) (u32) (v0 + -12352));
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) a4);
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    a4 = (s32) ((u32) a4 + 0x1U);
    a0 = (*(volatile s16 *) (u32) (sp + 24));
    at = a0 < a4;
    if (at == 0) goto L_0025C908;
L_0025C938:;
    a0 = (*(volatile s16 *) (u32) a2);
    a3 = (s32) ((u32) a3 + 0x1U);
    at = a0 < a3;
    if (at == 0) goto L_0025C8F4;
L_0025C950:;
    a0 = 1; func_0025EC20(a0);
    a0 = 1; func_0025E080(a0);
L_0025C960:;
    return;
}
