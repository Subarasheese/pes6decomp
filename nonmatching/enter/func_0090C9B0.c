/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
void func_00154090(s32);
void func_001540B0(s32, s32);
void func_0027CD10(s32);
void func_00909CE0(s32, s32, s32, s32);
s32 func_0090C060(s32);

void func_0090C9B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) 0x930000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -4030));
    if (v0 == 0) { a0 = 1; goto L_0090C9D0; }
    goto L_0090CA78;
L_0090C9D0:;
    v0 = func_0090C060(a0);
    a0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (a0 + -4048)) = (u32) v0;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -4052));
    v0 = (*(volatile s32 *) (u32) (v0 + -4056));
    v0 = (s32) ((u32) v1 + (u32) v0);
    if (v0 != 0) goto L_0090CA2C;
    a0 = 0; v0 = func_0090C060(a0);
    if (v0 == 0) goto L_0090CA2C;
    a0 = 0; v0 = func_0090C060(a0);
    v1 = (s32) 0x930000U;
    a0 = 1;
    (*(volatile u32 *) (u32) (v1 + -4048)) = (u32) v0;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) a0; goto L_0090CA78;
L_0090CA2C:;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -4048));
    if (v1 == 0) { v0 = 1; goto L_0090CB4C; }
    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -4052));
    if (v1 == v0) goto L_0090CA6C;
    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -4056));
    if (v1 == v0) goto L_0090CA6C;
    v1 = 1;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1; goto L_0090CA78;
L_0090CA6C:;
    v0 = 1;
    goto L_0090CB4C;
L_0090CA78:;
    v0 = (s32) 0x930000U;
    v1 = 3;
    a0 = (*(volatile u8 *) (u32) (v0 + -4030));
    if (a0 == v1) goto L_0090CB30;
    v0 = 2;
    if (a0 == v0) goto L_0090CB0C;
    v0 = 1;
    if (a0 == v0) goto L_0090CAAC;
    v0 = 0; goto L_0090CB4C;
L_0090CAAC:;
    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -4056));
    if (v0 == 0) goto L_0090CACC;
    a0 = 12; func_00154090(a0);
    a0 = 12; func_0027CD10(a0);
L_0090CACC:;
    func_00909CE0(a0, a1, a2, a3);
    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -4056));
    if (v0 == 0) goto L_0090CAF8;
    a0 = 12;
    a1 = 0; func_001540B0(a0, a1);
    a0 = 1; func_0027CD10(a0);
L_0090CAF8:;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -4030));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1;
L_0090CB0C:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_0090CB48;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -4030));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1;
L_0090CB30:;
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -4048));
    v0 = 1;
    (*(volatile u32 *) (u32) (v1 + -4052)) = (u32) a0; goto L_0090CB4C;
L_0090CB48:;
    v0 = 0;
L_0090CB4C:;
    return;
}
