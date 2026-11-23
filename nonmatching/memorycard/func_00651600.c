/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002224D0(s64, s64, s64, s64);
s64 func_002641A0(s64);
void func_002641B0(s64, s64);
void func_00264200(s64, s64, s64, s64, s64, s64, s64, s64);
void func_00264240(s64, s64);
s64 func_00264270(s64);
s64 func_002643F0(void);
void memcpy(s64, s64, s64);
void memset(s64, s64, s64);

void func_00651600(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x660000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -4240));
    v0 = 8;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v0; v0 = func_002643F0();
    s1 = v0;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = s1; func_00264200(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s1; v0 = func_00264270(a0);
    v1 = 1;
    if (v0 != v1) { (*(volatile u8 *) (u32) (s0 + 44)) = (u8) 0; goto L_00651650; }
    (*(volatile u8 *) (u32) (s0 + 44)) = (u8) v1;
L_00651650:;
    a0 = (s32) ((u32) sp + 0x8cU);
    a1 = s1; func_00264240(a0, a1);
    v0 = (*(volatile u16 *) (u32) (sp + 140));
    (*(volatile u16 *) (u32) (s0 + 92)) = (u16) v0;
    v0 = (*(volatile u16 *) (u32) (sp + 142));
    (*(volatile u16 *) (u32) (s0 + 94)) = (u16) v0;
    a1 = (*(volatile u16 *) (u32) (sp + 140));
    a0 = (*(volatile u16 *) (u32) (sp + 142)); v0 = func_002224D0(a0, a1, a2, a3);
    s2 = v0;
    a0 = (s32) ((u32) s0 + 0x2dU);
    a1 = 0;
    a2 = 46; memset(a0, a1, a2);
    a1 = s2;
    a0 = (s32) ((u32) s0 + 0x2dU);
    a2 = 45; memcpy(a0, a1, a2);
    v0 = (*(volatile s64 *) (u32) (sp + 96));
    a0 = s1;
    (*(volatile u8 *) (u32) (s0 + 96)) = (u8) v0;
    v0 = (*(volatile s64 *) (u32) (sp + 104));
    (*(volatile u8 *) (u32) (s0 + 97)) = (u8) v0;
    a1 = (*(volatile s64 *) (u32) (sp + 112));
    v0 = (*(volatile s64 *) (u32) (sp + 120));
    v1 = (s64) ((u64) a1 << 2);
    v1 = (s64) ((u64) v1 + (u64) a1);
    v1 = (s64) ((u64) v1 << 1);
    v0 = (s64) ((u64) v0 + (u64) v1);
    (*(volatile u8 *) (u32) (s0 + 98)) = (u8) v0; v0 = func_002641A0(a0);
    a1 = s1;
    (*(volatile u16 *) (u32) (s0 + 100)) = (u16) v0;
    a0 = (s32) ((u32) sp + 0x40U); func_002641B0(a0, a1);
    v1 = (*(volatile s64 *) (u32) (sp + 96));
    (*(volatile u8 *) (u32) (s0 + 102)) = (u8) v1;
    v1 = (*(volatile s64 *) (u32) (sp + 104));
    (*(volatile u8 *) (u32) (s0 + 103)) = (u8) v1;
    a1 = (*(volatile s64 *) (u32) (sp + 112));
    v1 = (*(volatile s64 *) (u32) (sp + 120));
    a0 = (s64) ((u64) a1 << 2);
    a0 = (s64) ((u64) a0 + (u64) a1);
    a0 = (s64) ((u64) a0 << 1);
    v1 = (s64) ((u64) v1 + (u64) a0);
    (*(volatile u8 *) (u32) (s0 + 104)) = (u8) v1;
    return;
}
