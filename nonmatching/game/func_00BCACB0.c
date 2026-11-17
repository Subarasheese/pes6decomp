/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00152130(s64, s64, s64, s64, s64);
void func_0017E120(s64);
void func_0017E150(s64);
void func_00182B20(s64);
void func_00182B30(s64);
s64 func_001A5F20(s64);
s64 func_00208250(s64);
void func_0020B3E0(void);
s64 func_002DCA30(void);
void func_009A7530(s64);
void func_00B79620(s64, s64, s64, s64, s64);
void func_00BA1370(void);

void func_00BCACB0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    a0 = 1;
    a1 = 16;
    v0 = func_00152130(a0, a1, a2, a3, a4);
    if (v0 == 0) goto L_00BCAE44;
    v0 = func_002DCA30();
    if (v0 == 0) { v0 = 1; goto L_00BCAD30; }
    a0 = 1; func_0017E150(a0);
    a0 = 1; func_00182B20(a0);
    a0 = 0; func_009A7530(a0);
    v1 = (s32) 0x590000U;
    a0 = 1;
    v1 = (*(volatile u8 *) (u32) (v1 + 7115));
    if (v1 == a0) goto L_00BCAD20;
    v1 = 12;
L_00BCAD14:;
    (*(volatile u32 *) (u32) (gp + -19440)) = (u32) v1;
L_00BCAD18:;
    goto L_00BCAE48;
L_00BCAD20:;
    func_0020B3E0();
    v1 = 12; goto L_00BCAD14;
L_00BCAD30:;
    (*(volatile u32 *) (u32) (gp + -19412)) = (u32) v0; func_00BA1370();
    v0 = (s32) 0xcc0000U;
    a0 = 0;
    (*(volatile u8 *) (u32) (v0 + -11503)) = (u8) 0; func_0017E120(a0);
    a0 = 0; func_00182B30(a0);
    a0 = 0; func_00182B20(a0);
    v1 = (s32) 0xcc0000U;
    a0 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -11503));
    a0 = (s32) ((u32) a0 + 0xffffd390U);
    a5 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v1);
    a3 = a1;
L_00BCAD7C:;
    a4 = 0;
    a2 = a3;
L_00BCAD88:;
    v1 = (*(volatile u16 *) (u32) (a2 + 64));
    v1 = (s64) ((u64) v1 << 48);
    a0 = (s64) ((u64) v1 >> 53);
    v1 = a0 < 1482;
    if (v1 != 0) goto L_00BCADE4;
    at = a0 < 1506;
    if (at == 0) goto L_00BCADE4;
    v1 = (s32) ((u32) a5 << 2);
    v1 = (s32) ((u32) v1 + (u32) a5);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 - (u32) a5);
    v1 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v1 + (u32) a1);
    s1 = (*(volatile u16 *) (u32) (v1 + 620));
L_00BCADC8:;
    v1 = 0xffff;
    if (s1 != v1) { a0 = s1; goto L_00BCAE0C; }
L_00BCADD4:;
    v1 = 5;
    (*(volatile u32 *) (u32) (gp + -19440)) = (u32) v1;
L_00BCADDC:;
    (*(volatile u32 *) (u32) (gp + -19420)) = (u32) 0; goto L_00BCAD18;
L_00BCADE4:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < 23;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x18U); if (c_) goto L_00BCAD88; }
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 150;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x270U); if (c_) goto L_00BCAD7C; }
    s1 = 0xffff; goto L_00BCADC8;
L_00BCAE0C:;
    v0 = func_00208250(a0);
    s0 = v0;
    a0 = 4; v0 = func_001A5F20(a0);
    if (s0 == v0) goto L_00BCADD4;
    a0 = s1; v0 = func_00208250(a0);
    a0 = v0; func_00B79620(a0, a1, a2, a3, a4);
    v1 = 4;
    (*(volatile u32 *) (u32) (gp + -19440)) = (u32) v1; goto L_00BCADDC;
L_00BCAE44:;
L_00BCAE48:;
    return;
}
