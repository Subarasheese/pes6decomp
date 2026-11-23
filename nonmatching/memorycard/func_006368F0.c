/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001DF460(s64, s64);
void func_0020E310(s64, s64);
s64 func_00623430(void);
s64 func_0062DC40(s64);
void func_0063ABF0(s64, s64, s64);
void func_0063AD20(s64, s64, s64, s64);
s64 func_0063AD90(s64, s64, s64, s64);
s64 func_00645820(s64);

void func_006368F0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 gp = 0x3ef370;
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    s6 = a1;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    s5 = (*(volatile s32 *) (u32) (v0 + 112));
    s4 = a0; v0 = func_00623430();
    s7 = 3;
    if (v0 == s7) { a1 = (s64) ((u64) s7 << 48); goto L_00636970; }
    v1 = 2;
    if (v0 == v1) { a1 = (s64) ((u64) v1 << 48); goto L_00636964; }
    s7 = 1;
    if (v0 == s7) { a1 = (s64) ((u64) v1 << 48); goto L_0063695C; }
    s7 = 0;
    a1 = 1; goto L_00636974;
L_0063695C:;
    a1 = a1 >> 48; goto L_00636974;
L_00636964:;
    s7 = v1;
    a1 = a1 >> 48; goto L_00636974;
L_00636970:;
    a1 = a1 >> 48;
L_00636974:;
    v1 = (*(volatile u8 *) (u32) (s6 + 27));
    v0 = 12;
    if (v1 != v0) { a0 = s5; goto L_0063698C; }
    a1 = 0;
    a0 = s5;
L_0063698C:;
    func_001D7D80(a0, a1, a2, a3);
    s1 = (s32) 0x650000U;
    s3 = 0;
    s2 = s4;
    s1 = (s32) ((u32) s1 + 0x7dc0U);
    s0 = (s32) ((u32) s4 + 0x374U);
L_006369A8:;
    v0 = (*(volatile s32 *) (u32) (s2 + 884));
    if (v0 != 0) goto L_006369C8;
    a2 = (*(volatile s32 *) (u32) s1);
    a0 = s5;
    a1 = s0;
    a3 = (s32) ((u32) gp + 0xffff83acU); v0 = func_0063AD90(a0, a1, a2, a3);
L_006369C8:;
    a1 = (*(volatile s32 *) (u32) s1);
    a2 = (*(volatile s32 *) (u32) (s2 + 884));
    a0 = s5; func_0063ABF0(a0, a1, a2);
    s3 = (s32) ((u32) s3 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v0 = s3 < 9;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_006369A8; }
    a0 = s5;
    a1 = 1; func_001D7D60(a0, a1);
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x9cU); func_0020E310(a0, a1);
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x98U); func_0020E310(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s6 + 18));
    v0 = v0 < 36;
    if (v0 != 0) { s0 = (s32) ((u32) sp + 0x9cU); goto L_00636A50; }
    v1 = (*(volatile u8 *) (u32) (s6 + 15));
    v0 = 1;
    if (v1 != v0) goto L_00636A4C;
    v1 = (*(volatile u8 *) (u32) (s6 + 27));
    v0 = 12;
    if (v1 != v0) goto L_00636A4C;
    s0 = (s32) ((u32) sp + 0x98U); goto L_00636A50;
L_00636A4C:;
    s0 = (s32) ((u32) sp + 0x9cU);
L_00636A50:;
    a0 = 120; v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 884));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s4 + 884));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s0; func_001DF460(a0, a1);
    v0 = (s32) ((u32) s7 << 1);
    s0 = 0;
    v1 = (s32) ((u32) v0 + (u32) s7);
    v0 = (s32) 0x650000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x7f40U);
    v1 = (s32) ((u32) v1 + (u32) s7);
    s1 = (s32) ((u32) v0 + (u32) v1);
L_00636A94:;
    a0 = (*(volatile u8 *) (u32) s1);
    if (a0 == 0) goto L_00636AD8;
    v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 888));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = s6; v0 = func_0062DC40(a0);
    if (s0 != v0) { a1 = (s32) ((u32) sp + 0x9cU); goto L_00636AC8; }
    a1 = (s32) ((u32) sp + 0x98U);
L_00636AC8:;
    v0 = (*(volatile s32 *) (u32) (s4 + 888));
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001DF460(a0, a1);
L_00636AD8:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 8;
    s1 = (s32) ((u32) s1 + 0x1U);
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x4U); if (c_) goto L_00636A94; }
    a1 = (*(volatile u8 *) (u32) (s6 + 17));
    a0 = s5; func_001D7D60(a0, a1);
    return;
}
