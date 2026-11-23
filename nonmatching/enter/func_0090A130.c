/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001AAF40(s32, s32);
void func_001AAF50(s32, s32, s32, s32);
s32 func_00299FE0(s32);

void func_0090A130(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    a1 = (*(volatile u8 *) (u32) (gp + -31240));
    a0 = (*(volatile u8 *) (u32) (gp + -31239));
    v1 = (*(volatile u8 *) (u32) (gp + -31238));
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) a1;
    (*(volatile u8 *) (u32) (sp + 77)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 78)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (gp + -31237));
    { s32 c_ = s2 == 0; (*(volatile u8 *) (u32) (sp + 79)) = (u8) v1; if (c_) goto L_0090A218; }
    s0 = (s32) 0x590000U;
    s0 = (s32) ((u32) s0 + 0xffffe5b0U);
    if (s0 == 0) { s1 = 0; goto L_0090A1BC; }
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    if (v0 == 0) goto L_0090A1B8;
    a0 = (*(volatile s32 *) (u32) v0);
    if (a0 == 0) goto L_0090A1B8;
    v0 = (*(volatile s32 *) (u32) s2);
    v0 = v0 & 0x3;
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (*(volatile u8 *) (u32) (v0 + 76)); func_001AAF50(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001AAF40(a0, a1);
L_0090A1B8:;
    s1 = 0;
L_0090A1BC:;
    a0 = s1; v0 = func_00299FE0(a0);
    s0 = v0;
    if (s0 == 0) goto L_0090A208;
    a0 = (*(volatile s32 *) (u32) s0);
    if (a0 == 0) goto L_0090A208;
    v0 = (*(volatile s32 *) (u32) s2);
    v1 = (s32) ((u32) s1 + 0x1U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 >> (v1 & 31));
    v0 = v0 & 0x3;
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (*(volatile u8 *) (u32) (v0 + 76)); func_001AAF50(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 1; func_001AAF40(a0, a1);
L_0090A208:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 3;
    if (v1 != 0) goto L_0090A1BC;
L_0090A218:;
    return;
}
