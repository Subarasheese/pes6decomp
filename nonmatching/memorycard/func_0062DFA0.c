/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D6E70(s64, s64, s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001DF460(s64, s64);
void func_0020E310(s64, s64);
s64 func_00623430(void);
void func_0063AD20(s64, s64, s64, s64);
s64 func_00645820(s64);

void func_0062DFA0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 gp = 0x3ef370;
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) gp + 0xffff8364U);
    s2 = a1;
    a1 = (*(volatile u8 *) (u32) (a0 + 596));
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (*(volatile s32 *) (u32) v0);
    s3 = a0; v0 = func_00623430();
    s0 = 3;
    if (v0 == s0) { a1 = (s64) ((u64) s0 << 48); goto L_0062E030; }
    v1 = 2;
    if (v0 == v1) { a1 = (s64) ((u64) v1 << 48); goto L_0062E024; }
    s0 = 1;
    if (v0 == s0) { a1 = (s64) ((u64) v1 << 48); goto L_0062E01C; }
    s0 = 0;
    a1 = 1; goto L_0062E034;
L_0062E01C:;
    a1 = a1 >> 48; goto L_0062E034;
L_0062E024:;
    s0 = v1;
    a1 = a1 >> 48; goto L_0062E034;
L_0062E030:;
    a1 = a1 >> 48;
L_0062E034:;
    v1 = (*(volatile u8 *) (u32) (s2 + 27));
    v0 = 12;
    if (v1 != v0) { a0 = s1; goto L_0062E04C; }
    a1 = 0;
    a0 = s1;
L_0062E04C:;
    func_001D7D80(a0, a1, a2, a3);
    s4 = 0;
    s5 = s3;
L_0062E05C:;
    v0 = (*(volatile s32 *) (u32) (s5 + 512));
    if (v0 != 0) goto L_0062E098;
    v1 = (*(volatile u8 *) (u32) (s3 + 596));
    v0 = (s32) 0x650000U;
    a2 = (s32) 0x650000U;
    v0 = (s32) ((u32) v0 + 0x7a60U);
    a0 = s1;
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) s4 + (u32) v0);
    a1 = (*(volatile u8 *) (u32) v0);
    a2 = (s32) ((u32) a2 + 0x7898U); v0 = func_001D6E70(a0, a1, a2);
    (*(volatile u32 *) (u32) (s5 + 512)) = (u32) v0;
L_0062E098:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 8;
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + 0x4U); if (c_) goto L_0062E05C; }
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x7cU); func_0020E310(a0, a1);
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x78U); func_0020E310(a0, a1);
    v0 = (s32) ((u32) s0 << 1);
    s4 = 0;
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) 0x650000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x79f0U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    s0 = (s32) ((u32) v0 + (u32) v1);
L_0062E0E0:;
    a0 = (*(volatile u8 *) (u32) s0);
    if (a0 == 0) goto L_0062E170;
    v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s3 + 512));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = func_00623430();
    v1 = (s32) ((u32) v0 << 1);
    a0 = (s32) 0x650000U;
    v1 = (s32) ((u32) v1 + (u32) v0);
    a0 = (s32) ((u32) a0 + 0x7a80U);
    a1 = (s32) ((u32) v1 << 2);
    a2 = 0;
    v0 = (s32) ((u32) a1 + (u32) v0);
    v1 = (*(volatile u8 *) (u32) (s2 + 27));
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) a0 + (u32) v0);
L_0062E130:;
    v0 = (*(volatile s32 *) (u32) a0);
    if (v1 == v0) goto L_0062E150;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < 13;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_0062E130; }
L_0062E150:;
    { s32 c_ = s4 != a2; v0 = (*(volatile s32 *) (u32) (s3 + 512)); if (c_) goto L_0062E160; }
    a1 = (s32) ((u32) sp + 0x78U); goto L_0062E164;
L_0062E160:;
    a1 = (s32) ((u32) sp + 0x7cU);
L_0062E164:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001DF460(a0, a1);
L_0062E170:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 8;
    s0 = (s32) ((u32) s0 + 0x1U);
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_0062E0E0; }
    a1 = (*(volatile u8 *) (u32) (s2 + 17));
    a0 = s1; func_001D7D60(a0, a1);
    return;
}
