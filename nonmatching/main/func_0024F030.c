/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void ADXT_StartAfs(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00155A00(void);
void func_00155A10(void);
void func_001685D8(s32, s32);
void func_00168638(s32, s32, s32, s32);
void func_0017E690(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00180550(void);
s32 func_00251B40(void);
void memset(s32, s32, s32);

void func_0024F030(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    v1 = (*(volatile s32 *) (u32) (gp + -22588));
    v1 = (u64) 0 < (u64) v1;
    v1 = v1 ^ 0x1;
    { s32 c_ = v1 != 0; s0 = a2; if (c_) goto L_0024F1F0; }
    if (s0 == 0) goto L_0024F0B8;
    if (v1 != 0) goto L_0024F1F0;
    at = s2 < 4;
    if (at == 0) goto L_0024F1F0;
    if (s0 == 0) goto L_0024F1F0;
    func_00155A10();
    v0 = (s32) 0x580000U;
    v1 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + 0x3330U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s0; func_00168638(a0, a1, a2, a3);
    func_00155A00();
L_0024F0B0:;
    goto L_0024F1F4;
L_0024F0B8:;
    v0 = func_00251B40();
    v1 = 1;
    if (v0 == v1) goto L_0024F180;
    v1 = (*(volatile s32 *) (u32) (gp + -22588));
    a0 = (s32) ((u32) s1 >> 16);
    v1 = (u64) 0 < (u64) v1;
    v1 = v1 ^ 0x1;
    { s32 c_ = v1 != 0; s0 = a0 & 0x7; if (c_) goto L_0024F1F0; }
    v0 = func_00251B40();
    v1 = 2;
    if (v0 == v1) goto L_0024F134;
    v0 = func_00251B40();
    v1 = 3;
    if (v0 == v1) goto L_0024F134;
    v0 = func_00251B40();
    v1 = 5;
    if (v0 == v1) goto L_0024F134;
    v0 = func_00251B40();
    v1 = 7;
    if (v0 != v1) goto L_0024F148;
L_0024F134:;
    v0 = func_00180550();
    if (v0 == 0) goto L_0024F148;
    s0 = (s32) ((u32) s0 + 0x80U);
L_0024F148:;
    func_00155A10();
    v0 = (s32) 0x580000U;
    v1 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + 0x3330U);
    a2 = s1 & 0xffff;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s0; ADXT_StartAfs(a0, a1, a2, a3, a4, a5, a6, a7);
    func_00155A00();
    goto L_0024F0B0;
L_0024F180:;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 0;
    a2 = 128; memset(a0, a1, a2);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x40U); func_0017E690(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s32 *) (u32) (gp + -22588));
    v1 = (u64) 0 < (u64) v1;
    v1 = v1 ^ 0x1;
    if (v1 != 0) goto L_0024F1F0;
    at = s2 < 4;
    if (at == 0) goto L_0024F1F0;
    func_00155A10();
    v0 = (s32) 0x580000U;
    v1 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + 0x3330U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x40U); func_001685D8(a0, a1);
    func_00155A00();
    goto L_0024F0B0;
L_0024F1F0:;
L_0024F1F4:;
    return;
}
