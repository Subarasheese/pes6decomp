/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Keyboard_Acquire(s32, s32, s32, s32);
void Pes6Keyboard_Release(s32, s32, s32, s32, s32, s32, s32, s32);
s32 Pes6MemRegion_IsResident(s32);
void func_00362AF0(s32, s32, s32, s32);
void func_00362BB0(s32, s32, s32, s32);
void func_00363330(void);
s32 func_00363C30(void);
void func_00D13B90(s32, s32, s32, s32);
void func_00D13BE0(s32, s32, s32, s32);
void func_00D13D80(s32, s32, s32, s32);
s32 func_00D14030(s32, s32, s32, s32);
void func_00D141E0(s32, s32, s32, s32);
void func_00D14D50(s32, s32, s32, s32);
void func_00D14F60(s32, s32, s32, s32);
void func_00D15060(s32, s32, s32, s32);
void func_00D15450(s32, s32, s32, s32);
s32 func_00D168A0(s32, s32, s32, s32);
void func_00D16930(s32, s32, s32, s32);

s32 func_002D4E10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -21976));
    v0 = 2;
    fp = a7;
    s7 = a5;
    s6 = a3;
    s5 = a2;
    s4 = a0;
    s3 = a1;
    s2 = a4;
    s1 = a6;
    { s32 c_ = v1 == v0; s0 = 0; if (c_) goto L_002D4F40; }
    v0 = 1;
    if (v1 == v0) goto L_002D4EBC;
    if (v1 == 0) { a0 = 11; goto L_002D4E88; }
    v0 = s0; goto L_002D4FE8;
L_002D4E88:;
    v0 = Pes6MemRegion_IsResident(a0);
    if (v0 != 0) goto L_002D4EA0;
    v0 = 1; goto L_002D4FE8;
L_002D4EA0:;
    v0 = func_00D168A0(a0, a1, a2, a3);
    if (v0 == 0) goto L_002D4FE4;
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -21976)) = (u32) v0; goto L_002D4FE4;
L_002D4EBC:;
    func_00D15450(a0, a1, a2, a3);
    v0 = func_00363C30();
    if (v0 == 0) { (*(volatile u32 *) (u32) (gp + -21980)) = (u32) 0; goto L_002D4EE4; }
    Pes6Keyboard_Release(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -21980)) = (u32) v0;
L_002D4EE4:;
    func_00362BB0(a0, a1, a2, a3);
    a0 = 0; func_00363330();
    a0 = s1; func_00D14D50(a0, a1, a2, a3);
    func_00D16930(a0, a1, a2, a3);
    a0 = s4; func_00D14F60(a0, a1, a2, a3);
    a0 = s3; func_00D15060(a0, a1, a2, a3);
    a0 = s5;
    a1 = s6;
    a3 = s2;
    a4 = s7;
    a6 = fp;
    a2 = 0;
    a5 = 0; func_00D141E0(a0, a1, a2, a3);
    v0 = 2;
    (*(volatile u32 *) (u32) (gp + -21976)) = (u32) v0; goto L_002D4FE4;
L_002D4F40:;
    v0 = func_00D14030(a0, a1, a2, a3);
    v1 = 2;
    if (v0 == v1) goto L_002D4FAC;
    v1 = 1;
    if (v0 == v1) { a1 = (s32) ((u32) s2 + 0x1U); goto L_002D4F68; }
    goto L_002D4FE4;
L_002D4F68:;
    a0 = s1; func_00D13D80(a0, a1, a2, a3);
    func_00D13BE0(a0, a1, a2, a3);
    func_00D13B90(a0, a1, a2, a3);
    func_00362AF0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21980));
    if (v0 == 0) { (*(volatile u32 *) (u32) (gp + -21980)) = (u32) 0; goto L_002D4FA0; }
    Pes6Keyboard_Acquire(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -21980)) = (u32) 0;
L_002D4FA0:;
    s0 = 1;
    (*(volatile u32 *) (u32) (gp + -21976)) = (u32) 0; goto L_002D4FE4;
L_002D4FAC:;
    func_00D13BE0(a0, a1, a2, a3);
    func_00D13B90(a0, a1, a2, a3);
    func_00362AF0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21980));
    if (v0 == 0) { (*(volatile u32 *) (u32) (gp + -21980)) = (u32) 0; goto L_002D4FDC; }
    Pes6Keyboard_Acquire(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -21980)) = (u32) 0;
L_002D4FDC:;
    s0 = 2;
    (*(volatile u32 *) (u32) (gp + -21976)) = (u32) 0;
L_002D4FE4:;
    v0 = s0;
L_002D4FE8:;
    return v0;
}
