/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E6E10(s32);
void func_001EE580(s32, s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF370(s32, s32);
void func_001EF900(s32, s32);

s32 func_001B98D0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    { s32 c_ = s1 != 0; s0 = a1; if (c_) goto L_001B98F4; }
    v0 = 0; goto L_001B99E4;
L_001B98F4:;
    if (s0 < 0) { v0 = 0; goto L_001B99E4; }
    at = s0 < 24;
    if (at != 0) { v0 = 23; goto L_001B9914; }
    v0 = 0;
    goto L_001B99E4;
L_001B9914:;
    if (s0 != v0) { a0 = 20001; goto L_001B9924; }
    v0 = 0; goto L_001B99E4;
L_001B9924:;
    v0 = func_001E6E10(a0);
    a1 = v0;
    a0 = s1; func_001EEAC0(a0, a1);
    { s32 c_ = s0 >= 0; a0 = (s32) s0 >> 3; if (c_) goto L_001B9948; }
    v0 = (s32) ((u32) s0 + 0x7U);
    a0 = (s32) v0 >> 3;
L_001B9948:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = s0 & 0x7;
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0x1U);
    { s32 c_ = s0 >= 0; (*(volatile u16 *) (u32) (sp + 136)) = (u16) v1; if (c_) goto L_001B9974; }
    if (v0 == 0) { v1 = (s32) ((u32) v0 << 4); goto L_001B9978; }
    v0 = (s32) ((u32) v0 + 0xfffffff8U);
L_001B9974:;
    v1 = (s32) ((u32) v0 << 4);
L_001B9978:;
    a0 = s1;
    v0 = 28;
    a1 = (s32) ((u32) sp + 0x88U);
    (*(volatile u16 *) (u32) (sp + 140)) = (u16) v0;
    v0 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (sp + 138)) = (u16) v0;
    v0 = 15;
    (*(volatile u16 *) (u32) (sp + 142)) = (u16) v0; func_001EE630(a0, a1);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x30U); func_001EE580(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (sp + 48));
    v0 = (s32) 0x41e00000U;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) v0;
    a0 = s1;
    v0 = (s32) 0x41700000U;
    a1 = (s32) ((u32) sp + 0x70U);
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) v0;
    f0.f = (*(volatile f32 *) (u32) (sp + 52));
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f; func_001EF370(a0, a1);
    a0 = s1;
    a1 = 1; func_001EF900(a0, a1);
    v0 = 1;
L_001B99E4:;
    return v0;
}
