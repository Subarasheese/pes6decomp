/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_001F08B0(s32);
void func_0063B410(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0063CEA0(void);
s32 func_00645860(s32);
void func_006557C0(void);
void func_00655C10(s32);
void func_00655D10(void);
void func_00655EE0(s32, s32);

s32 func_00624DE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v0 = (*(volatile s32 *) (u32) (gp + -21124));
    a2 = 3;
    s2 = a0;
    s1 = a1;
    { s32 c_ = v0 == a2; s0 = 0; if (c_) goto L_00625024; }
    a1 = 2;
    if (v0 == a1) { v0 = 53; goto L_00624FBC; }
    a3 = 1;
    if (v0 == a3) goto L_00624F30;
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -31956)); goto L_00624E38; }
    v0 = 1; goto L_0062508C;
    a0 = (*(volatile s32 *) (u32) (gp + -31956));
L_00624E38:;
    v1 = 6;
    if (a0 == v1) { a3 = 7; goto L_00624E84; }
    v0 = 5;
    if (a0 == v0) { a3 = v1; goto L_00624E84; }
    if (a0 == a2) { a3 = a2; goto L_00624E84; }
    if (a0 == a3) goto L_00624E84;
    a3 = 2; goto L_00624E84;
    a3 = a2;
    goto L_00624E84;
    a3 = v1;
    goto L_00624E84;
    a3 = 7;
L_00624E84:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) a3 << 2);
    v0 = (s32) ((u32) v0 + 0xffffa120U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = s2;
    s2 = v0; v0 = func_00645860(a0);
    a0 = (s32) 0x660000U;
    a1 = v0;
    a2 = s2;
    a0 = (s32) ((u32) a0 + 0xffffd630U); func_0063B410(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) 0x660000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffd630U); func_00655EE0(a0, a1);
    if (s1 != 0) { a0 = s1; goto L_00624EE8; }
    a0 = 1; func_00655C10(a0);
    a0 = 0; goto L_00624F00;
    a0 = s1;
L_00624EE8:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00655EE0(a0, a1);
    a0 = 0;
L_00624F00:;
    func_00655D10();
    func_006557C0();
    v0 = func_0063CEA0();
    v1 = (s32) ((u32) v0 << 1);
    v0 = (*(volatile s32 *) (u32) (gp + -21124));
    (*(volatile u32 *) (u32) (gp + -21120)) = (u32) v1;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -21124)) = (u32) v0; goto L_00625088;
L_00624F30:;
    v0 = (s32) 0x660000U;
    v1 = 256;
    v0 = (*(volatile s32 *) (u32) (v0 + -6560));
    if (v0 != v1) goto L_00624F54;
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    (*(volatile u32 *) (u32) (gp + -21120)) = (u32) 0;
L_00624F54:;
    v0 = (s32) 0x660000U;
    v1 = 512;
    v0 = (*(volatile s32 *) (u32) (v0 + -6560));
    if (v0 != v1) { v0 = (*(volatile s32 *) (u32) (gp + -21120)); goto L_00624F7C; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
    (*(volatile u32 *) (u32) (gp + -21120)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -21120));
L_00624F7C:;
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (gp + -21112)); goto L_00624F94; }
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -21120)) = (u32) v0; goto L_00625088;
    v0 = (*(volatile u8 *) (u32) (gp + -21112));
L_00624F94:;
    if (v0 != 0) { s0 = 1; goto L_00625088; }
    v0 = (*(volatile s32 *) (u32) (gp + -21124));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -21124)) = (u32) v0; goto L_00625088;
    s0 = 1;
    goto L_00625088;
    v0 = 53;
L_00624FBC:;
    if (s2 == v0) { s0 = 1; goto L_00625088; }
    v0 = 52;
    if (s1 != v0) { a0 = 42; goto L_00624FE0; }
    s0 = 1;
    goto L_00625088;
    a0 = 42;
L_00624FE0:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00655EE0(a0, a1);
    a0 = 0; func_00655D10();
    func_006557C0();
    v0 = func_0063CEA0();
    v1 = (s32) ((u32) v0 << 2);
    v0 = (*(volatile s32 *) (u32) (gp + -21124));
    (*(volatile u32 *) (u32) (gp + -21120)) = (u32) v1;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -21124)) = (u32) v0; goto L_00625088;
L_00625024:;
    v0 = (s32) 0x660000U;
    v1 = 256;
    v0 = (*(volatile s32 *) (u32) (v0 + -6560));
    if (v0 != v1) goto L_00625048;
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    (*(volatile u32 *) (u32) (gp + -21120)) = (u32) 0;
L_00625048:;
    v0 = (s32) 0x660000U;
    v1 = 512;
    v0 = (*(volatile s32 *) (u32) (v0 + -6560));
    if (v0 != v1) { v0 = (*(volatile s32 *) (u32) (gp + -21120)); goto L_00625070; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
    (*(volatile u32 *) (u32) (gp + -21120)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -21120));
L_00625070:;
    if (v0 == 0) { s0 = 1; goto L_00625088; }
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -21120)) = (u32) v0; goto L_00625088;
    s0 = 1;
L_00625088:;
    v0 = 1;
L_0062508C:;
    if (s0 != v0) { v0 = s0; goto L_0062509C; }
    (*(volatile u32 *) (u32) (gp + -21124)) = (u32) 0;
    v0 = s0;
L_0062509C:;
    return v0;
}
