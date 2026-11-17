/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 func_00311FB0(s32, s32, s32, s32);
s32 func_00335390(void);
s32 func_00355FA0(s32, s32, s32, s32);
s32 func_00BEC4A0(s32, s32, s32, s32);
s32 func_00BEC560(s32, s32, s32, s32);
s32 func_00C7CC60(s32, s32, s32, s32);

s32 func_003554D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 16));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45f80000U;
    v0 = v0 | 0xc800;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { a0 = (s32) ((u32) sp + 0x8fU); goto L_00355524; }
    v0 = 0; goto L_00355580;
L_00355524:;
    v0 = func_00311FB0(a0, a1, a2, a3);
    if (v0 != 0) { a0 = 1; goto L_0035553C; }
    v0 = 0; goto L_00355580;
L_0035553C:;
    v0 = func_00C7CC60(a0, a1, a2, a3);
    if (v0 != 0) { s0 = (*(volatile u8 *) (u32) (sp + 143)); goto L_00355570; }
    a0 = 2; v0 = func_00C7CC60(a0, a1, a2, a3);
    if (v0 != 0) goto L_0035556C;
    a0 = 5; v0 = func_00C7CC60(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 0; goto L_00355580; }
L_0035556C:;
    s0 = (*(volatile u8 *) (u32) (sp + 143));
L_00355570:;
    v0 = Pes6Job_GetManager();
    (*(volatile u8 *) (u32) (v0 + 4096)) = (u8) s0;
    v0 = 1;
L_00355580:;
    if (v0 != 0) { s4 = (s32) ((u32) sp + 0x70U); goto L_00355590; }
    v0 = 0; goto L_00355710;
L_00355590:;
    a1 = 20;
    a0 = s4;
    a2 = (s32) ((u32) sp + 0x88U); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    v0 = func_00BEC4A0(a0, a1, a2, a3);
    s0 = v0;
    a0 = 2; v0 = func_00C7CC60(a0, a1, a2, a3);
    if (v0 == 0) { a0 = 5; goto L_003555E0; }
    a0 = s1; v0 = func_00355FA0(a0, a1, a2, a3);
    if (v0 == 0) goto L_003555DC;
    a0 = 255; v0 = func_00BEC560(a0, a1, a2, a3);
    v0 = 0; goto L_00355710;
L_003555DC:;
    a0 = 5;
L_003555E0:;
    v0 = func_00C7CC60(a0, a1, a2, a3);
    s3 = v0;
    a0 = 1; v0 = func_00C7CC60(a0, a1, a2, a3);
    s2 = v0;
    a0 = 2; v0 = func_00C7CC60(a0, a1, a2, a3);
    s1 = v0;
    a0 = s4;
    a1 = 3;
    a2 = s3; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 4;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 3; v0 = Pes6BitSet_Lookup(a0, a1);
    s5 = v0;
    a0 = s4;
    a1 = 4; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = s5 | v0;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s4; goto L_00355660; }
    v0 = func_00335390();
    a2 = (u64) 0 < (u64) v0;
    a0 = s4;
L_00355660:;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s3;
    a0 = s4;
    a1 = 9; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 10;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 11;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = s4;
    a1 = 15; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x3;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 16; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x2;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 17; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s0 ^ 0;
    a0 = s4;
    a2 = (u64) a2 < (u64) (s64) 1;
    a1 = 18; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s1;
    a0 = s4;
    a1 = 19; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s4;
    a0 = 70;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = 255; v0 = func_00BEC560(a0, a1, a2, a3);
    v0 = 0;
L_00355710:;
    return v0;
}
