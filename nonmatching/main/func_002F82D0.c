/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00223770(s32, s32, s32, s32);
s32 func_00223960(s32);
s32 func_002239B0(void);
s32 func_002239C0(void);
s32 func_002F86E0(s32, s32, s32, s32);
s32 func_002F8880(s32, s32, s32, s32);
s32 func_002F89C0(s32, s32, s32, s32);

s32 func_002F82D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;

    s6 = 0;
    s4 = a1;
    s2 = a3;
    s0 = a2;
    { s32 c_ = s0 >= 0; s1 = a0; if (c_) goto L_002F8314; }
    v0 = 0; goto L_002F86AC;
L_002F8314:;
    a0 = s4; v0 = func_00223770(a0, a1, a2, a3);
    s3 = s4 & 0xffff;
    v1 = s3 < 254;
    if (v1 != 0) { v1 = 3; goto L_002F8340; }
    at = s3 < 270;
    if (at == 0) goto L_002F833C;
    v0 = 0;
L_002F833C:;
    v1 = 3;
L_002F8340:;
    if (v0 != v1) { v0 = 1; goto L_002F85CC; }
    v0 = 1;
    if (s2 != v0) { a0 = s3; goto L_002F8448; }
    s2 = s3 & 0xffff;
    v0 = (s32) ((u32) s2 + 0xfffffedaU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = 0; goto L_002F83A0; }
    a0 = s2; v0 = func_00223960(a0);
    s4 = v0;
    if (s4 != 0) { a0 = s2; goto L_002F8388; }
    v0 = 0; goto L_002F83A0;
    a0 = s2;
L_002F8388:;
    v0 = func_00223770(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s4);
    v0 = (s32) ((u32) v0 + 0x58U); goto L_002F83A0;
    v0 = 0;
L_002F83A0:;
    if (v0 == 0) { v0 = s2 < 64; goto L_002F83B4; }
    goto L_002F843C;
    v0 = s2 < 64;
L_002F83B4:;
    { s32 c_ = v0 != 0; s5 = -1; if (c_) goto L_002F83CC; }
    at = s2 < 204;
    if (at == 0) { s4 = -1; goto L_002F83D0; }
    s5 = (s32) ((u32) s2 + 0xffffffc0U);
L_002F83CC:;
    s4 = -1;
L_002F83D0:;
    if (s5 == s4) { v0 = s2 < 221; goto L_002F83F8; }
    v0 = func_002239B0();
    v1 = (s32) ((u32) s5 << 4);
    v1 = (s32) ((u32) v1 + (u32) s5);
    v1 = (s32) ((u32) v1 << 5);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_002F843C;
    v0 = s2 < 221;
L_002F83F8:;
    if (v0 != 0) { v0 = -1; goto L_002F8414; }
    at = s2 < 254;
    if (at == 0) goto L_002F8410;
    s4 = (s32) ((u32) s2 + 0xffffff23U);
L_002F8410:;
    v0 = -1;
L_002F8414:;
    if (s4 == v0) { v0 = 0; goto L_002F843C; }
    v0 = func_002239C0();
    v1 = (s32) ((u32) s4 << 4);
    v1 = (s32) ((u32) v1 + (u32) s4);
    v1 = (s32) ((u32) v1 << 5);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_002F843C;
    v0 = 0;
L_002F843C:;
    goto L_002F8450;
    a0 = s3;
L_002F8448:;
    v0 = func_002F8880(a0, a1, a2, a3);
L_002F8450:;
    if (v0 != 0) goto L_002F8494;
    v0 = s3 < 270;
    if (v0 != 0) { v0 = 0; goto L_002F8494; }
    at = s3 < 272;
    if (at == 0) goto L_002F8490;
    a0 = (s32) ((u32) s3 + 0xfffffef2U);
    v0 = (s32) 0x5f0000U;
    v1 = (s32) ((u32) a0 << 4);
    v0 = (s32) ((u32) v0 + 0xffff92e0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 5);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_002F8494;
L_002F8490:;
    v0 = 0;
L_002F8494:;
    if (v0 != 0) { v1 = 4; goto L_002F84FC; }
    if (s1 != 0) { ; goto L_002F86B0; }
    v0 = s3 < 272;
    if (v0 != 0) { v0 = 0; goto L_002F84F0; }
    at = s3 < 274;
    if (at == 0) goto L_002F84EC;
    a1 = (s32) ((u32) s3 + 0xfffffef0U);
    v1 = (s32) 0x5f0000U;
    a0 = (s32) ((u32) a1 << 5);
    v0 = (s32) ((u32) s0 << 5);
    a0 = (s32) ((u32) a0 - (u32) a1);
    v0 = (s32) ((u32) v0 - (u32) s0);
    v1 = (s32) ((u32) v1 + 0xffff9720U);
    a0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_002F84F0;
L_002F84EC:;
    v0 = 0;
L_002F84F0:;
    goto L_002F86AC;
    v1 = 4;
L_002F84FC:;
    if (s1 == v1) { at = s0 < 4; goto L_002F85A8; }
    v1 = 3;
    if (s1 == v1) { at = s0 < 4; goto L_002F8584; }
    v1 = 2;
    if (s1 == v1) { at = s0 < 2; goto L_002F8568; }
    v1 = 1;
    if (s1 == v1) { s6 = (s32) ((u32) v0 + 0xf8U); goto L_002F86A8; }
    if (s1 == 0) { at = s0 < 4; goto L_002F853C; }
    goto L_002F86A8;
    at = s0 < 4;
L_002F853C:;
    if (at == 0) goto L_002F86A8;
    v1 = (s32) ((u32) s0 << 5);
    v1 = (s32) ((u32) v1 - (u32) s0);
    v1 = (s32) ((u32) v1 << 1);
    s6 = (s32) ((u32) v0 + (u32) v1); goto L_002F86A8;
    s6 = (s32) ((u32) v0 + 0xf8U);
    goto L_002F86A8;
    at = s0 < 2;
L_002F8568:;
    if (at == 0) goto L_002F86A8;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s6 = (s32) ((u32) v0 + 0xf8U); goto L_002F86A8;
    at = s0 < 4;
L_002F8584:;
    if (at == 0) goto L_002F86A8;
    v1 = (s32) ((u32) s0 << 1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s6 = (s32) ((u32) v0 + 0x100U); goto L_002F86A8;
    at = s0 < 4;
L_002F85A8:;
    if (at == 0) goto L_002F86A8;
    v1 = (s32) ((u32) s0 << 1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s6 = (s32) ((u32) v0 + 0x160U); goto L_002F86A8;
    v0 = 1;
L_002F85CC:;
    if (s2 != v0) { a0 = s4; goto L_002F85E8; }
    a0 = s4; v0 = func_002F86E0(a0, a1, a2, a3);
    goto L_002F85F0;
    a0 = s4;
L_002F85E8:;
    v0 = func_002F89C0(a0, a1, a2, a3);
L_002F85F0:;
    if (v0 != 0) { v1 = 4; goto L_002F8604; }
    v0 = 0; goto L_002F86AC;
    v1 = 4;
L_002F8604:;
    if (s1 == v1) goto L_002F86A8;
    v1 = 3;
    if (s1 == v1) { at = s0 < 4; goto L_002F868C; }
    v1 = 2;
    if (s1 == v1) { at = s0 < 2; goto L_002F8670; }
    v1 = 1;
    if (s1 == v1) { s6 = (s32) ((u32) v0 + 0xf8U); goto L_002F86A8; }
    if (s1 == 0) { at = s0 < 4; goto L_002F8644; }
    goto L_002F86A8;
    at = s0 < 4;
L_002F8644:;
    if (at == 0) goto L_002F86A8;
    v1 = (s32) ((u32) s0 << 5);
    v1 = (s32) ((u32) v1 - (u32) s0);
    v1 = (s32) ((u32) v1 << 1);
    s6 = (s32) ((u32) v0 + (u32) v1); goto L_002F86A8;
    s6 = (s32) ((u32) v0 + 0xf8U);
    goto L_002F86A8;
    at = s0 < 2;
L_002F8670:;
    if (at == 0) goto L_002F86A8;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s6 = (s32) ((u32) v0 + 0xf8U); goto L_002F86A8;
    at = s0 < 4;
L_002F868C:;
    if (at == 0) goto L_002F86A8;
    v1 = (s32) ((u32) s0 << 1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s6 = (s32) ((u32) v0 + 0x100U);
L_002F86A8:;
    v0 = s6;
L_002F86AC:;
L_002F86B0:;
    return v0;
}
