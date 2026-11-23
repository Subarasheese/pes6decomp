/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B8DC0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001EDBA0(s32, s32, s32, s32);
void func_001EDD90(s32, s32, s32, s32);
void func_0023AFF0(s32, s32, s32, s32);
void func_002405A0(s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002E33D0(s32, s32, s32, s32);
void func_002ED130(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008B2880(s32, s32, s32, s32);
void func_008B3040(s32, s32, s32, s32);
s32 func_008B32E0(s32, s32, s32, s32);
void func_008CA7A0(s32, s32, s32, s32);

void func_009483F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    s2 = 0;
    s1 = 0;
    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U);
L_00948414:;
    v0 = (*(volatile s32 *) (u32) (gp + -18228));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 165;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00948414; }
    a0 = (s32) ((u32) gp + 0xffffb8ccU); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x14U); func_002405A0(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 32544));
    if (v0 != 0) goto L_009484A0;
    v0 = (s32) 0x960000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 32545));
    at = v0 < 17;
    if (at != 0) goto L_009484A0;
    s1 = 0;
    s2 = 0;
L_00948470:;
    v0 = (*(volatile s32 *) (u32) (gp + -18236));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 40;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00948470; }
    a0 = (s32) ((u32) gp + 0xffffb8c4U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) gp + 0xffffb8c0U); func_002405A0(a0, a1, a2, a3);
L_009484A0:;
    func_008B3040(a0, a1, a2, a3);
    func_0023AFF0(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (s0 + 9));
    v0 = 2;
    if (v1 != v0) goto L_009484C8;
    func_001B8DC0(a0, a1, a2, a3, a4, a5, a6, a7);
L_009484C8:;
    s1 = (s32) 0x960000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0x7f10U);
L_009484D4:;
    a0 = (*(volatile s32 *) (u32) s1); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = (s32) ((u32) s0 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s0 < 3;
    if (v0 != 0) goto L_009484D4;
    a0 = (*(volatile s32 *) (u32) (gp + -18244)); func_008CA7A0(a0, a1, a2, a3);
    func_008B2880(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18280));
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -18280)); goto L_0094851C; }
    a1 = (*(volatile s32 *) (u32) (gp + -18276)); func_001EDBA0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18276)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (gp + -18280));
L_0094851C:;
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -18248)); goto L_00948534; }
    func_001EDD90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18280)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (gp + -18248));
L_00948534:;
    func_002ED130(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (gp + -18252)); func_002E33D0(a0, a1, a2, a3);
    return;
}
