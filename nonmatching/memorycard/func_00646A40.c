/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00623890(s32);
s32 func_00645860(s32);
void func_006557C0(void);
void func_00655940(void);
void func_00655D80(s32, s32);
void func_00655E80(s32, s32);
void func_00656020(s32, s32);

void func_00646A40(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a0;
    s1 = a1;
    s0 = a2; func_00655940();
    v0 = 1;
    if (s1 == v0) { v0 = -127; goto L_00646BC8; }
    v0 = -118;
    if (s1 == v0) goto L_00646BC4;
    v0 = -119;
    if (s1 == v0) goto L_00646BB4;
    v0 = -120;
    if (s1 == v0) goto L_00646B9C;
    v0 = -121;
    if (s1 == v0) goto L_00646BC4;
    v0 = -123;
    if (s1 == v0) goto L_00646BC4;
    v0 = -124;
    if (s1 == v0) { a0 = 12; goto L_00646B80; }
    v0 = -122;
    if (s1 == v0) { v0 = -122; goto L_00646AFC; }
    v0 = -125;
    if (s1 == v0) goto L_00646AF8;
    v0 = -126;
    if (s1 == v0) goto L_00646AF8;
    v0 = -127;
    if (s1 == v0) goto L_00646AF8;
    if (s1 == 0) goto L_00646BC4;
    goto L_00646BC4;
L_00646AF8:;
    v0 = -122;
L_00646AFC:;
    if (s1 != v0) { v0 = -125; goto L_00646B0C; }
    a0 = 16; goto L_00646B50;
L_00646B0C:;
    if (s1 != v0) { v0 = -126; goto L_00646B1C; }
    a0 = 13; goto L_00646B50;
L_00646B1C:;
    if (s1 != v0) { v0 = (*(volatile u8 *) (u32) (s2 + 10)); goto L_00646B2C; }
    a0 = 15; goto L_00646B50;
L_00646B2C:;
    if (v0 == 0) { a0 = 11; goto L_00646B50; }
    a0 = s0; v0 = func_00623890(a0);
    if (v0 != 0) goto L_00646B4C;
    a0 = 14; goto L_00646B50;
L_00646B4C:;
    a0 = 11;
L_00646B50:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00656020(a0, a1);
    a0 = 42; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00656020(a0, a1);
    goto L_00646BC4;
L_00646B80:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00656020(a0, a1);
    goto L_00646BC4;
L_00646B9C:;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -23672));
    a1 = 0; func_00655E80(a0, a1);
    goto L_00646BC4;
L_00646BB4:;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -23696));
    a1 = 0; func_00655E80(a0, a1);
L_00646BC4:;
    v0 = -127;
L_00646BC8:;
    if (s1 == v0) { a0 = 75; goto L_00646C14; }
    v0 = -126;
    if (s1 == v0) goto L_00646C10;
    v0 = -125;
    if (s1 == v0) goto L_00646C10;
    v0 = -122;
    if (s1 == v0) goto L_00646C10;
    v0 = -124;
    if (s1 == v0) goto L_00646C10;
    v0 = (s32) ((u32) s1 + 0x78U);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_00646C3C;
L_00646C10:;
    a0 = 75;
L_00646C14:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00655D80(a0, a1);
    a0 = 76; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00655D80(a0, a1);
L_00646C3C:;
    func_006557C0();
    return;
}
