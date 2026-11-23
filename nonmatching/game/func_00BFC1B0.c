/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00277220(s32, s32);
s32 func_002DCA30(void);
s32 func_00B29C50(void);
s32 func_00BC8DB0(s32);
s32 func_00BC92F0(s32);
s32 func_00BC93C0(s32);
void func_00BF8710(s32);
void func_00BFAF80(s32);
void func_00C01540(s32, s32, s32, s32, s32);

void func_00BFC1B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 hi = 0, lo = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    a0 = (s32) ((u32) sp + 0xacU);
    s5 = 46;
    s4 = 23;
    s6 = s4;
    s2 = 12;
    s0 = 6; func_00BF8710(a0);
    v0 = (*(volatile u8 *) (u32) (sp + 172));
    if (v0 == 0) goto L_00BFC350;
    v1 = (*(volatile u8 *) (u32) (sp + 173));
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00BFC220; }
    v0 = s4;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BFC220:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) 0x590000U;
    s1 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = (*(volatile u8 *) (u32) (s1 + 18));
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0xf0U);
    v0 = (*(volatile u8 *) (u32) (v0 + 250));
    if (v0 != 0) goto L_00BFC350;
    s0 = (s32) ((u32) a0 + 0x10U);
    a1 = 0; v0 = func_00277220(a0, a1);
    v1 = 2;
    if (v0 == v1) { s5 = 29; goto L_00BFC2B0; }
    v1 = 1;
    if (v0 == v1) { s5 = 28; goto L_00BFC2B0; }
    s5 = 46;
L_00BFC2B0:;
    s0 = (*(volatile s32 *) (u32) (s0 + 8));
    s6 = 23;
    s4 = (*(volatile u8 *) (u32) s1);
    s7 = 0;
    fp = 0;
    s3 = 0;
L_00BFC2C8:;
    a0 = s3; v0 = func_00BC8DB0(a0);
    s2 = v0;
    if (s2 == 0) goto L_00BFC3A0;
    v1 = (*(volatile s32 *) (u32) s2);
    v0 = 2;
    if (v1 != v0) goto L_00BFC3A0;
    v1 = (*(volatile u8 *) (u32) (s2 + 12));
    v0 = (*(volatile u8 *) (u32) s1);
    if (v1 != v0) goto L_00BFC3A0;
    v1 = (*(volatile u8 *) (u32) (s2 + 13));
    v0 = (*(volatile u8 *) (u32) (s1 + 18));
    if (v1 != v0) goto L_00BFC3A0;
    v1 = (*(volatile u8 *) (u32) (s2 + 14));
    v0 = (*(volatile u8 *) (u32) (s1 + 17));
    if (v1 != v0) goto L_00BFC3A0;
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    if (v0 != s0) goto L_00BFC3A0;
    (*(volatile u32 *) (u32) (sp + 168)) = (u32) s3;
    fp = 1;
L_00BFC330:;
    if (fp != 0) goto L_00BFC3B8;
L_00BFC338:;
    if (s7 == 0) { s2 = 12; goto L_00BFC34C; }
    s0 = (*(volatile s32 *) (u32) (sp + 168));
    s2 = 10; goto L_00BFC350;
L_00BFC34C:;
    s0 = 6;
L_00BFC350:;
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 == v1) goto L_00BFC3F0;
    at = s5 < 46;
L_00BFC368:;
    if (at == 0) goto L_00BFC388;
    a0 = s5;
    a1 = s4;
    a2 = s6;
    a3 = s2;
    a4 = s0; func_00C01540(a0, a1, a2, a3, a4);
L_00BFC388:;
    a0 = 28; func_00BFAF80(a0);
    a0 = 29; func_00BFAF80(a0);
    goto L_00BFC408;
L_00BFC3A0:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 6;
    if (v0 != 0) goto L_00BFC2C8;
    goto L_00BFC330;
L_00BFC3B8:;
    v0 = func_002DCA30();
    if (v0 != 0) goto L_00BFC338;
    a0 = s2; v0 = func_00BC93C0(a0);
    if (v0 == 0) goto L_00BFC338;
    a0 = (*(volatile u8 *) (u32) (s2 + 6)); v0 = func_00BC92F0(a0);
    if (v0 != 0) goto L_00BFC338;
    s7 = 1; goto L_00BFC338;
L_00BFC3F0:;
    v0 = func_00B29C50();
    if (v0 == 0) goto L_00BFC388;
    at = s5 < 46; goto L_00BFC368;
L_00BFC408:;
    return;
}
