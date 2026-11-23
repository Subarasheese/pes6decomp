/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001C4698(s32, s32, s32);
s32 func_00221180(void);
s32 func_00223BC0(void);
void func_002E91B0(s32);
void func_0030CE10(s32, s32);
void func_0030CE30(s32, s32, s32);
void func_00639A20(s32, s32);
void func_00639AE0(s32, s32);
void memcpy(s32, s32, s32);

void func_00653BC0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    { s32 c_ = s3 != 0; s1 = a2; if (c_) goto L_00653BFC; }
    (*(volatile u16 *) (u32) (sp + 108)) = (u16) 0;
    s0 = 0;
    (*(volatile u16 *) (u32) (sp + 110)) = (u16) 0; goto L_00653C08;
L_00653BFC:;
    s0 = 1;
    (*(volatile u16 *) (u32) (sp + 110)) = (u16) 0;
    (*(volatile u16 *) (u32) (sp + 108)) = (u16) s0;
L_00653C08:;
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x6cU); func_00639A20(a0, a1);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x6cU); func_00639AE0(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) s2 + 0x3c0U); func_0030CE10(a0, a1);
    v0 = func_00221180();
    s4 = v0; v0 = func_00223BC0();
    a1 = s4;
    a0 = (s32) ((u32) s2 + 0x3c0U);
    s4 = v0;
    a2 = 48; v0 = func_001C4698(a0, a1, a2);
    if (v0 == 0) { a1 = s4; goto L_00653C60; }
    v0 = 0; goto L_00653C78;
L_00653C60:;
    a0 = s1;
    a2 = 3120; v0 = func_001C4698(a0, a1, a2);
    if (v0 == 0) { v0 = 1; goto L_00653C78; }
    v0 = 0;
L_00653C78:;
    if (v0 == 0) { v0 = (s32) ((u32) s0 << 1); goto L_00653CA4; }
    if (s3 != 0) { a0 = 1; goto L_00653C98; }
    a0 = 0; func_002E91B0(a0);
    goto L_00653CA0;
L_00653C98:;
    func_002E91B0(a0);
L_00653CA0:;
    v0 = (s32) ((u32) s0 << 1);
L_00653CA4:;
    a1 = (s32) ((u32) s2 + 0x3c0U);
    v1 = (s32) ((u32) v0 + (u32) s0);
    a2 = 48;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + 0xffffe710U);
    a0 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    s2 = 0;
L_00653CC8:;
    a0 = s0;
    a1 = s2;
    a2 = s1; func_0030CE30(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 20;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x9cU); if (c_) goto L_00653CC8; }
    return;
}
