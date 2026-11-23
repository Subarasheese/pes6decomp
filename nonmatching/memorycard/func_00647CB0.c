/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
s32 func_00623890(s32);
void func_0063B410(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00645860(s32);
void func_006557C0(void);
void func_00655940(void);
void func_00655D20(s32, s32);
void func_00655D80(s32, s32);
void func_00655E80(s32, s32);
void func_00656020(s32, s32);

void func_00647CB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a0;
    s1 = a1;
    s0 = a2; func_00655940();
    v0 = 1;
    if (s1 == v0) goto L_00648010;
    v0 = -118;
    if (s1 == v0) goto L_00648010;
    v0 = -119;
    if (s1 == v0) goto L_00647FC8;
    v0 = -120;
    if (s1 == v0) { a0 = 28; goto L_00647F1C; }
    v0 = -121;
    if (s1 == v0) goto L_00648010;
    v0 = -123;
    if (s1 == v0) { a0 = 18; goto L_00647EA8; }
    v0 = -124;
    if (s1 == v0) { a0 = 12; goto L_00647E50; }
    v0 = -122;
    if (s1 == v0) { v0 = -122; goto L_00647D6C; }
    v0 = -125;
    if (s1 == v0) goto L_00647D68;
    v0 = -126;
    if (s1 == v0) goto L_00647D68;
    v0 = -127;
    if (s1 == v0) goto L_00647D68;
    if (s1 == 0) goto L_00648010;
    goto L_00648010;
L_00647D68:;
    v0 = -122;
L_00647D6C:;
    if (s1 != v0) { v0 = -125; goto L_00647D7C; }
    a0 = 16; goto L_00647DC0;
L_00647D7C:;
    if (s1 != v0) { v0 = -126; goto L_00647D8C; }
    a0 = 13; goto L_00647DC0;
L_00647D8C:;
    if (s1 != v0) { v0 = (*(volatile u8 *) (u32) (s2 + 10)); goto L_00647D9C; }
    a0 = 15; goto L_00647DC0;
L_00647D9C:;
    if (v0 == 0) { a0 = 11; goto L_00647DC0; }
    a0 = s0; v0 = func_00623890(a0);
    if (v0 != 0) goto L_00647DBC;
    a0 = 14; goto L_00647DC0;
L_00647DBC:;
    a0 = 11;
L_00647DC0:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00656020(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s2 + 17));
    v1 = 1;
    if (v0 != v1) { v0 = (*(volatile u8 *) (u32) (s2 + 16)); goto L_00647E00; }
    a0 = 44; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00656020(a0, a1);
    a0 = 75; goto L_00647E20;
L_00647E00:;
    if (v0 != v1) goto L_00647E1C;
    a0 = 43; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00656020(a0, a1);
L_00647E1C:;
    a0 = 75;
L_00647E20:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00655D80(a0, a1);
    a0 = 76; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00655D80(a0, a1);
    goto L_00648010;
L_00647E50:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00656020(a0, a1);
    a0 = 75; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00655D80(a0, a1);
    a0 = 76; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00655D80(a0, a1);
    a0 = 78; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 2; func_00655D80(a0, a1);
    goto L_00648010;
L_00647EA8:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00656020(a0, a1);
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -23668)); v0 = func_001F08B0(a0);
    a0 = (s32) 0x660000U;
    a1 = v0;
    a0 = (s32) ((u32) a0 + 0xffffd630U);
    a2 = 128; func_0063B410(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) 0x660000U;
    a1 = 1;
    a0 = (s32) ((u32) a0 + 0xffffd630U); func_00656020(a0, a1);
    a0 = 75; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00655D80(a0, a1);
    a0 = 76; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00655D80(a0, a1);
    goto L_00648010;
L_00647F1C:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00656020(a0, a1);
    v1 = (*(volatile s16 *) (u32) s0);
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s16 *) (u32) (s0 + 2));
    v0 = (s32) ((u32) v0 + 0xffffc180U);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    at = v0 < 128;
    if (at == 0) { s0 = 4; goto L_00647F64; }
    s0 = 5;
L_00647F64:;
    a0 = s0; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00656020(a0, a1);
    a0 = 75; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00655D80(a0, a1);
    a0 = 76; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00655D80(a0, a1);
    v0 = 4;
    if (s0 != v0) goto L_00648010;
    a0 = 77; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 2; func_00655D80(a0, a1);
    goto L_00648010;
L_00647FC8:;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -23696));
    a1 = 0; func_00655E80(a0, a1);
    a0 = 75; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00655D80(a0, a1);
    a0 = 76; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00655D80(a0, a1);
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -23664));
    a1 = 2; func_00655D20(a0, a1);
L_00648010:;
    func_006557C0();
    return;
}
