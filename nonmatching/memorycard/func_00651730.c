/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002643F0(void);
s32 func_002644E0(void);
void func_0063E210(s32, s32);

void func_00651730(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v1 = 2;
    s1 = a0;
    a0 = (*(volatile s32 *) (u32) (gp + -21880));
    { s32 c_ = a0 == v1; s0 = a1; if (c_) goto L_006517F0; }
    v1 = 3;
    if (a0 == v1) { v1 = (s32) ((u32) a2 + 0xfffffffdU); goto L_006517F4; }
    v1 = 5;
    if (a0 == v1) goto L_006517F0;
    v1 = 8;
    if (a0 == v1) goto L_006517F0;
    v1 = 9;
    if (a0 == v1) goto L_006517F0;
    v1 = 15;
    if (a0 == v1) goto L_006517F0;
    v1 = 16;
    if (a0 == v1) goto L_006517F0;
    v1 = 17;
    if (a0 == v1) goto L_006517F0;
    v1 = 18;
    if (a0 == v1) goto L_006517F0;
    v1 = 20;
    if (a0 == v1) goto L_006517F0;
    v1 = 23;
    if (a0 == v1) goto L_006517F0;
    v1 = 24;
    if (a0 == v1) goto L_006517F0;
    v1 = 31;
    if (a0 == v1) goto L_006517F0;
    v1 = 32;
    if (a0 != v1) { ; goto L_00651878; }
L_006517F0:;
    v1 = (s32) ((u32) a2 + 0xfffffffdU);
L_006517F4:;
    at = (u64) v1 < (u64) (s64) 10;
    if (at == 0) goto L_00651874;
    a0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffbc00U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x65181cU) goto L_0065181C; if (t_ == 0x651830U) goto L_00651830; if (t_ == 0x651854U) goto L_00651854; if (t_ == 0x651874U) goto L_00651874; }
L_0065181C:;
    a0 = s1;
    a1 = s0; func_0063E210(a0, a1);
    goto L_00651874;
L_00651830:;
    v0 = func_002644E0();
    v1 = (*(volatile s16 *) (u32) s0);
    a0 = (*(volatile s16 *) (u32) (s0 + 2));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) (v0 + 19272)) = (u8) v1;
    (*(volatile u8 *) (u32) (v0 + 19273)) = (u8) s1; goto L_00651874;
L_00651854:;
    v0 = func_002643F0();
    v1 = (*(volatile s16 *) (u32) s0);
    a0 = (*(volatile s16 *) (u32) (s0 + 2));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) (v0 + 936)) = (u8) v1;
    (*(volatile u8 *) (u32) (v0 + 937)) = (u8) s1;
L_00651874:;
L_00651878:;
    return;
}
