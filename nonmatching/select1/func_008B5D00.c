/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0030C2D0(void);

void func_008B5D00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, t4 = 0;

    v1 = (s64) ((u64) a0 << 56);
    v1 = v1 >> 56;
    if (v1 == 0) goto L_008B5DB0;
    a1 = (s32) 0x8e0000U;
    a7 = (s64) ((u64) v1 << 48);
    t4 = (*(volatile s16 *) (u32) (a1 + -10074));
    a2 = (s32) 0x3b0000U;
    a7 = a7 >> 48;
    a4 = 36;
    a5 = -1;
    a6 = 37;
    a2 = (s32) ((u32) a2 + 0xffff9c60U);
L_008B5D38:;
    if (v1 <= 0) goto L_008B5D58;
    a1 = (s64) ((u64) t4 << 48);
    a1 = a1 >> 48;
    if (a1 != a6) goto L_008B5D70;
    t4 = 0; goto L_008B5D70;
L_008B5D58:;
    a1 = (s64) ((u64) t4 << 48);
    a1 = a1 >> 48;
    if (a1 != a5) goto L_008B5D70;
    t4 = a4;
L_008B5D70:;
    a3 = (s64) ((u64) t4 << 48);
    a3 = a3 >> 48;
    a1 = (s32) ((u32) a3 << 2);
    a1 = (s32) ((u32) a1 + (u32) a3);
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a1 = (*(volatile u8 *) (u32) a1);
    if (a1 != 0) { a1 = (s32) ((u32) t4 + (u32) a7); goto L_008B5DA0; }
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + -10074)) = (u16) t4; goto L_008B5DB0;
L_008B5DA0:;
    t4 = (s64) ((u64) a1 << 48);
    t4 = t4 >> 48; goto L_008B5D38;
L_008B5DB0:;
    a1 = (s32) 0x8e0000U;
    a2 = (*(volatile s16 *) (u32) (a1 + -10922));
    if (a2 == 0) goto L_008B5DCC;
    a1 = 2;
    if (a2 != a1) goto L_008B5E08;
L_008B5DCC:;
    a1 = (s32) 0x8e0000U;
    a2 = 2;
    a1 = (*(volatile s16 *) (u32) (a1 + -10498));
    if (a1 != a2) goto L_008B5E08;
    if (v1 == 0) { a0 = 1; goto L_008B5E00; }
    a0 = (s64) ((u64) a0 << 56);
    v1 = (s32) 0x8e0000U;
    a0 = a0 >> 56;
    a0 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u16 *) (u32) (v1 + -10498)) = (u16) a0; goto L_008B5E08;
L_008B5E00:;
    v1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (v1 + -10498)) = (u16) a0;
L_008B5E08:;
    v1 = (s32) 0x8e0000U;
    a0 = 2;
    v1 = (*(volatile s16 *) (u32) (v1 + -10498));
    if (v1 != a0) goto L_008B5E34;
    a0 = 1;
    v1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (v1 + -9226)) = (u16) a0;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + -9216)) = (u32) a0; goto L_008B5E3C;
L_008B5E34:;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + -9216)) = (u32) 0;
L_008B5E3C:;
    v1 = (s32) 0x590000U;
    a0 = 7;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (v1 == a0) goto L_008B5E90;
    v0 = func_0030C2D0();
    if (v0 != 0) goto L_008B5E90;
    v1 = (s32) 0x8e0000U;
    a1 = 1;
    v1 = (*(volatile s16 *) (u32) (v1 + -14314));
    if (v1 != a1) goto L_008B5E80;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + -13880)) = (u32) 0; goto L_008B5E90;
L_008B5E80:;
    a0 = (s32) 0x8e0000U;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (a0 + -13880)) = (u32) a1;
    (*(volatile u16 *) (u32) (v1 + -13890)) = (u16) 0;
L_008B5E90:;
    v1 = (s32) 0x590000U;
    a0 = 7;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (v1 == a0) { ; goto L_008B5EDC; }
    v1 = (s32) 0x8e0000U;
    a0 = 2;
    v1 = (*(volatile s16 *) (u32) (v1 + -13466));
    if (v1 != a0) goto L_008B5ED0;
    a0 = 1;
    v1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (v1 + -13042)) = (u16) a0;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + -13032)) = (u32) a0; goto L_008B5ED8;
L_008B5ED0:;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + -13032)) = (u32) 0;
L_008B5ED8:;
L_008B5EDC:;
    return;
}
