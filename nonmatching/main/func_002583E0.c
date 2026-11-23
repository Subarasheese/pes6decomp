/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0025EC60(s32);
s32 func_0025ECE0(s32);
void func_0025ED00(s32, s32);
s32 func_0025ED80(void);
void func_0025F830(s32);

void func_002583E0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v0 = func_0025ED80();
    if (v0 == 0) goto L_00258458;
    a0 = 1; v0 = func_0025ECE0(a0);
    v1 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    a0 = 1;
    (*(volatile u32 *) (u32) (v1 + -12508)) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0xffffcf28U); func_0025ED00(a0, a1);
    a0 = 1; v0 = func_0025EC60(a0);
    v1 = (s32) 0x590000U;
    a0 = 2;
    (*(volatile u32 *) (u32) (v1 + -12496)) = (u32) v0; v0 = func_0025EC60(a0);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) sp + 0x1cU);
    (*(volatile u32 *) (u32) (v1 + -12492)) = (u32) v0; func_0025F830(a0);
    a1 = (*(volatile u8 *) (u32) (sp + 29));
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (sp + 28));
    a0 = (s32) ((u32) a1 - (u32) a0);
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u16 *) (u32) (v1 + -12488)) = (u16) a0;
L_00258458:;
    return;
}
