/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0017F4B0(void);
void func_0017F4C0(void);
void func_0017F4D0(s32, s32, s32, s32);
s32 func_0017F560(s32, s32, s32);
void func_001801F0(void);
s32 func_00180FE0(s32, s32, s32, s32);
s32 func_00181020(s32, s32, s32, s32);
void func_001810C0(s32, s32, s32, s32);
void func_00181120(s32);
s32 func_00181160(s32, s32);

void func_00180620(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    v1 = (*(volatile s32 *) (u32) (a0 + 84));
    s0 = a0;
    v0 = (s32) v1 >> 16;
    s2 = v1 & 0xffff;
    s3 = v0 & 0x7; func_0017F4C0();
    a0 = s3;
    a1 = s2; v0 = func_00181160(a0, a1);
    s4 = v0;
    if (s4 == 0) goto L_00180748;
    a0 = s4; v0 = func_00181020(a0, a1, a2, a3);
    s1 = v0;
    s5 = (s32) ((u32) s1 << 11);
    a0 = s0;
L_00180684:;
    a1 = 0;
    a2 = s5; v0 = func_0017F560(a0, a1, a2);
    if (v0 == 0) goto L_001806C8;
L_00180698:;
    a2 = (*(volatile s32 *) (u32) (s0 + 96));
    a0 = s4;
    a1 = s1; func_001810C0(a0, a1, a2, a3);
    a0 = s4; v0 = func_00180FE0(a0, a1, a2, a3);
    v1 = 2;
    if (v0 != v1) goto L_00180710;
    goto L_001806D8;
L_001806C8:;
    func_001801F0();
    a0 = s0; goto L_00180684;
L_001806D8:;
    v1 = (*(volatile u8 *) (u32) (s0 + 133));
    v0 = 1;
    if (v1 != v0) goto L_001806F0;
    v0 = 3; goto L_00180710;
L_001806F0:;
    func_001801F0();
    a0 = s4; v0 = func_00180FE0(a0, a1, a2, a3);
    v1 = 2;
    if (v0 == v1) goto L_001806D8;
L_00180710:;
    a0 = (*(volatile u8 *) (u32) (s0 + 133));
    v1 = 1;
    if (a0 == v1) goto L_00180764;
    v1 = 3;
    if (v0 == v1) { (*(volatile u8 *) (u32) (s0 + 133)) = (u8) 0; goto L_00180764; }
    a0 = s4; func_00181120(a0);
    a0 = s3;
    a1 = s2; v0 = func_00181160(a0, a1);
    s4 = v0; goto L_00180698;
L_00180748:;
    v0 = 2;
    (*(volatile u8 *) (u32) (s0 + 133)) = (u8) v0; func_001801F0();
    func_0017F4B0();
    goto L_001807A4;
L_00180764:;
    a0 = s4; func_00181120(a0);
    func_0017F4B0();
    v1 = (*(volatile u8 *) (u32) (s0 + 133));
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    at = (u64) v1 < (u64) (s64) 2;
    if (at != 0) { a0 = s0; goto L_00180790; }
L_00180788:;
    goto L_001807A0;
L_00180790:;
    a1 = 0; func_0017F4D0(a0, a1, a2, a3);
    goto L_00180788;
L_001807A0:;
L_001807A4:;
    return;
}
