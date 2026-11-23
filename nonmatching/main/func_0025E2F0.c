/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00258100(void);
s32 func_00258170(void);
void func_00258250(s32, s32);
s32 func_00259BA0(void);
void func_00259CB0(s32);
void func_0025E080(s32);
void func_0025E100(s32, s32);
void func_0025F8F0(s32, s32);

void func_0025E2F0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v0 = func_00259BA0();
    if (v0 == 0) goto L_0025E3E0;
    a0 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffd1f0U);
    a1 = (s32) ((u32) a1 + 0xffffd1f4U); func_0025F8F0(a0, a1);
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffd1f8U); func_00259CB0(a0);
    v0 = func_00258100();
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + -11779)) = (u8) v0; v0 = func_00258170();
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + -11780)) = (u8) v0;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + -11779));
    v0 = (*(volatile u8 *) (u32) (v0 + -11780));
    if (a0 == v0) { a0 = 8; goto L_0025E3C4; }
    a1 = (s32) ((u32) sp + 0x1cU); func_00258250(a0, a1);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -11780));
    a1 = (s32) ((u32) sp + 0x18U); func_00258250(a0, a1);
    v1 = (*(volatile u8 *) (u32) (sp + 28));
    v0 = (*(volatile u8 *) (u32) (sp + 24));
    if (v1 != v0) goto L_0025E3D4;
    v1 = (*(volatile u8 *) (u32) (sp + 29));
    v0 = (*(volatile u8 *) (u32) (sp + 25));
    if (v1 != v0) goto L_0025E3D4;
    v1 = (*(volatile u8 *) (u32) (sp + 30));
    v0 = (*(volatile u8 *) (u32) (sp + 26));
    if (v1 != v0) goto L_0025E3D4;
    v1 = (*(volatile u8 *) (u32) (sp + 31));
    v0 = (*(volatile u8 *) (u32) (sp + 27));
    if (v1 != v0) goto L_0025E3D4;
    a0 = 8; func_0025E080(a0);
    goto L_0025E3E4;
L_0025E3C4:;
    func_0025E080(a0);
    goto L_0025E3E0;
L_0025E3D4:;
    a0 = 8;
    a1 = 2; func_0025E100(a0, a1);
L_0025E3E0:;
L_0025E3E4:;
    return;
}
