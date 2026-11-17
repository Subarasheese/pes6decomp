/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_009B2EB0(s32);
s32 func_00C01090(s32);

void func_00BFEFA0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    at = (u64) a0 < (u64) (s64) 6;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00BFF044; }
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0x2a30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbfefd4U) goto L_00BFEFD4; if (t_ == 0xbfefe0U) goto L_00BFEFE0; if (t_ == 0xbff01cU) goto L_00BFF01C; if (t_ == 0xbff03cU) goto L_00BFF03C; if (t_ == 0xbff044U) goto L_00BFF044; }
L_00BFEFD4:;
    v0 = (s32) ((u32) s0 + 0x8U);
    s0 = v0 & 0xff; goto L_00BFF044;
L_00BFEFE0:;
    a3 = (s32) 0xca0000U;
    a0 = (s32) ((u32) sp + 0x20U);
    a3 = (s32) ((u32) a3 + 0xffffef08U);
    v1 = 9;
L_00BFEFF0:;
    v0 = (*(volatile s8 *) (u32) a3);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    a3 = (s32) ((u32) a3 + 0x1U);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 > 0) goto L_00BFEFF0;
    v0 = (s32) ((u32) a1 + (u32) sp);
    v0 = (*(volatile u8 *) (u32) (v0 + 32));
    v0 = (s32) ((u32) s0 + (u32) v0);
    s0 = v0 & 0xff;
L_00BFF01C:;
    v0 = 5;
    if (a2 != v0) { v0 = (s32) ((u32) s0 + 0x6U); goto L_00BFF034; }
    v0 = (s32) ((u32) s0 + 0xaU);
    s0 = v0 & 0xff; goto L_00BFF044;
L_00BFF034:;
    s0 = v0 & 0xff; goto L_00BFF044;
L_00BFF03C:;
    v0 = (s32) ((u32) s0 + 0x5U);
    s0 = v0 & 0xff;
L_00BFF044:;
    a0 = 20; v0 = func_00C01090(a0);
    if (v0 == 0) { a0 = 21; goto L_00BFF0CC; }
L_00BFF054:;
    v0 = (s32) ((u32) s0 + 0x5U);
L_00BFF058:;
    s0 = v0 & 0xff;
L_00BFF05C:;
    a0 = 22; v0 = func_00C01090(a0);
    if (v0 == 0) { a0 = 26; goto L_00BFF114; }
    v0 = (s32) ((u32) s0 + 0xfU);
L_00BFF070:;
    s0 = v0 & 0xff;
L_00BFF074:;
    a0 = 23; v0 = func_00C01090(a0);
    if (v0 == 0) { a0 = 27; goto L_00BFF12C; }
L_00BFF084:;
    v0 = (s32) ((u32) s0 + 0xaU);
L_00BFF088:;
    s0 = v0 & 0xff;
L_00BFF08C:;
    a0 = 30; v0 = func_00C01090(a0);
    if (v0 == 0) goto L_00BFF0A4;
    v0 = (s32) ((u32) s0 + 0x5U);
    s0 = v0 & 0xff;
L_00BFF0A4:;
    a0 = 32; v0 = func_00C01090(a0);
    if (v0 == 0) goto L_00BFF0BC;
    v0 = (s32) ((u32) s0 + 0xaU);
    s0 = v0 & 0xff;
L_00BFF0BC:;
    a0 = s0; func_009B2EB0(a0);
    goto L_00BFF154;
L_00BFF0CC:;
    v0 = func_00C01090(a0);
    if (v0 != 0) goto L_00BFF054;
    a0 = 24; v0 = func_00C01090(a0);
    if (v0 != 0) goto L_00BFF054;
    a0 = 25; v0 = func_00C01090(a0);
    if (v0 != 0) goto L_00BFF054;
    a0 = 28; v0 = func_00C01090(a0);
    if (v0 == 0) goto L_00BFF05C;
    v0 = (s32) ((u32) s0 + 0x5U); goto L_00BFF058;
L_00BFF114:;
    v0 = func_00C01090(a0);
    if (v0 == 0) goto L_00BFF074;
    v0 = (s32) ((u32) s0 + 0xfU); goto L_00BFF070;
L_00BFF12C:;
    v0 = func_00C01090(a0);
    if (v0 != 0) goto L_00BFF084;
    a0 = 29; v0 = func_00C01090(a0);
    if (v0 == 0) goto L_00BFF08C;
    v0 = (s32) ((u32) s0 + 0xaU); goto L_00BFF088;
L_00BFF154:;
    return;
}
