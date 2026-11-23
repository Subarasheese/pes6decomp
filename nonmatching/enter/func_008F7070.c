/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
void Pes6Job_SetDone(s32);
s32 func_0030DBF0(void);
void func_0030DD90(s32, s32);
s32 func_0030F390(s32);
s32 func_0030F470(s32);
s32 func_00311390(s32);
void func_003119B0(s32, s32);
void func_003139B0(s32, s32);
void func_00313A00(s32, s32);
void func_00325CE0(s32, s32, s32);
s32 func_00326790(s32, s32, s32);
s32 func_0032E980(s32);
s32 func_003414D0(s32, s32, s32, s32);
void func_008F73B0(s32, s32);

s32 func_008F7070(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    s7 = a0;
    v0 = func_0030DBF0();
    v1 = 1;
    if (v0 == v1) { a0 = s7; goto L_008F7374; }
    s5 = (s32) ((u32) sp + 0xa0U);
    a1 = 16;
    a0 = s5;
    a2 = (s32) ((u32) sp + 0xc8U); Pes6BitSet_Initialize(a0, a1, a2);
    s4 = (*(volatile s32 *) (u32) (s7 + 60));
    a0 = (s32) ((u32) sp + 0xcfU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0xc4U);
    a1 = (s32) ((u32) sp + 0xceU); func_008F73B0(a0, a1);
    a0 = s5;
    a1 = s4; func_003139B0(a0, a1);
    s0 = (*(volatile u8 *) (u32) (sp + 207));
    a0 = 11; v0 = func_0032E980(a0);
    v1 = (s32) ((u32) s0 << 2);
    a0 = (s32) ((u32) sp + 0xc0U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    a1 = s4;
    v1 = (s32) ((u32) v1 << 1);
    a2 = s0;
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    s3 = v0 & 0xff; func_00325CE0(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (sp + 207));
    a0 = (s32) ((u32) sp + 0xcdU); func_003119B0(a0, a1);
    s0 = 0;
    fp = 0;
    v0 = (*(volatile u8 *) (u32) (sp + 205));
L_008F7140:;
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = v0 & 0xff; v0 = func_0030F470(a0);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_008F7170; }
    v0 = (*(volatile u8 *) (u32) (sp + 205));
    fp = 1;
    v0 = (s32) ((u32) v0 + (u32) s0);
    s3 = v0 & 0xff; goto L_008F7180;
L_008F7170:;
    v0 = s0 < 11;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (sp + 205)); goto L_008F7140; }
L_008F7180:;
    s0 = 0;
    s2 = 0;
    v0 = (*(volatile u8 *) (u32) (sp + 205));
L_008F718C:;
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = v0 & 0xff; v0 = func_0030F390(a0);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_008F71BC; }
    v0 = (*(volatile u8 *) (u32) (sp + 205));
    s2 = 1;
    v0 = (s32) ((u32) v0 + (u32) s0);
    s3 = v0 & 0xff; goto L_008F71C8;
L_008F71BC:;
    v0 = s0 < 11;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (sp + 205)); goto L_008F718C; }
L_008F71C8:;
    s0 = 0;
    s1 = 0;
    v0 = (*(volatile u8 *) (u32) (sp + 205));
L_008F71D4:;
    a0 = s4;
    a2 = (s32) 0x2000000U;
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = v0 & 0xff; v0 = func_00326790(a0, a1, a2);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_008F720C; }
    v0 = (*(volatile u8 *) (u32) (sp + 205));
    s1 = 1;
    v0 = (s32) ((u32) v0 + (u32) s0);
    s3 = v0 & 0xff; goto L_008F7218;
L_008F720C:;
    v0 = s0 < 11;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (sp + 205)); goto L_008F71D4; }
L_008F7218:;
    s0 = 0;
    s6 = 0;
    v0 = (*(volatile u8 *) (u32) (sp + 205));
L_008F7224:;
    a0 = s4;
    a2 = (s32) 0x1000000U;
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = v0 & 0xff; v0 = func_00326790(a0, a1, a2);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_008F725C; }
    v0 = (*(volatile u8 *) (u32) (sp + 205));
    s6 = 1;
    v0 = (s32) ((u32) v0 + (u32) s0);
    s3 = v0 & 0xff; goto L_008F7268;
L_008F725C:;
    v0 = s0 < 11;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (sp + 205)); goto L_008F7224; }
L_008F7268:;
    a0 = (s32) ((u32) sp + 0xccU);
    a1 = s3; func_0030DD90(a0, a1);
    a0 = s5;
    a1 = s3; func_00313A00(a0, a1);
    a2 = s6;
    a0 = s5;
    a1 = 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 192));
    a0 = s5;
    a1 = 6;
    v0 = v0 < 5;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = s5;
    a1 = 8; Pes6BitSet_Write(a0, a1, a2);
    a2 = fp;
    a0 = s5;
    a1 = 11; Pes6BitSet_Write(a0, a1, a2);
    a2 = s1;
    a0 = s5;
    a1 = 14; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 204));
    a0 = s5;
    a1 = 15;
    a2 = (u64) 0 < (u64) v0; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 1; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s5;
    a1 = 8; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = s0 | v0;
    a0 = s5;
    a1 = 11; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0 | s0;
    a0 = s5;
    a1 = 14; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0 | s0;
    a0 = s5;
    a1 = 15; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = v0 | s0;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s5; goto L_008F7358; }
    a0 = s3; v0 = func_00311390(a0);
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_008F7358:;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    a1 = s5;
    a0 = 169;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    a0 = s7;
L_008F7374:;
    Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
