/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021D420(s32);
s32 func_00623890(s32);
s32 func_0063E160(s32, s32);
s32 func_00645860(s32);
void func_0064D390(s32, s32);
s32 func_0064D540(s32, s32);
void func_006557C0(void);
void func_00655940(void);
void func_00655D80(s32, s32);
void func_00656020(s32, s32);

void func_0064C920(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    s0 = a1;
    v0 = (s32) ((u32) s0 + 0x7fU);
    at = (u64) v0 < (u64) (s64) 9;
    { s32 c_ = at == 0; s1 = a0; if (c_) goto L_0064C9D4; }
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffba20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x64c968U) goto L_0064C968; if (t_ == 0x64c984U) goto L_0064C984; if (t_ == 0x64c9c8U) goto L_0064C9C8; if (t_ == 0x64c9d4U) goto L_0064C9D4; }
L_0064C968:;
    a0 = (*(volatile s32 *) (u32) (gp + -21816)); v0 = func_0021D420(a0);
    v1 = 3;
    if (v0 != v1) { a0 = s1; goto L_0064C9D8; }
    s0 = -125; goto L_0064C9D4;
L_0064C984:;
    v1 = (*(volatile s16 *) (u32) (gp + -21808));
    v0 = (*(volatile s16 *) (u32) (gp + -21816));
    if (v1 != v0) { v0 = 1; goto L_0064C9BC; }
    v1 = (*(volatile s16 *) (u32) (gp + -21806));
    v0 = (*(volatile s16 *) (u32) (gp + -21814));
    if (v1 != v0) goto L_0064C9B8;
    a0 = 35;
    a1 = 0;
    s2 = 13; v0 = func_0063E160(a0, a1);
    (*(volatile u8 *) (u32) (v0 + 12)) = (u8) s2;
L_0064C9B8:;
    v0 = 1;
L_0064C9BC:;
    (*(volatile u8 *) (u32) (gp + -20884)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -20888)) = (u8) v0; goto L_0064C9D4;
L_0064C9C8:;
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -20884)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -20888)) = (u8) v0;
L_0064C9D4:;
    a0 = s1;
L_0064C9D8:;
    a1 = s0; func_0064D390(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) gp + 0xffffaac8U); v0 = func_0064D540(a0, a1);
    s3 = v0;
    a0 = 42; v0 = func_00645860(a0);
    s2 = v0;
    s1 = 1; func_00655940();
    a0 = s3;
    a1 = 0; func_00656020(a0, a1);
    v0 = -127;
    if (s0 != v0) { a0 = s2; goto L_0064CA54; }
    a0 = (s32) ((u32) gp + 0xffffaac8U);
    if (a0 == 0) goto L_0064CA50;
    v0 = func_00623890(a0);
    if (v0 != 0) goto L_0064CA50;
    a0 = 2; v0 = func_00645860(a0);
    a0 = v0;
    a1 = s1; func_00656020(a0, a1);
    s1 = 2;
L_0064CA50:;
    a0 = s2;
L_0064CA54:;
    a1 = s1; func_00656020(a0, a1);
    a0 = 75; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00655D80(a0, a1);
    a0 = 76; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00655D80(a0, a1);
    func_006557C0();
    return;
}
