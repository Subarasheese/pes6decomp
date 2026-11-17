/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F4380(s32);

s32 func_001DDE60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a1;
    s0 = a0; v0 = func_001F4380(a0);
    if (v0 == 0) goto L_001DDE90;
    s0 = (*(volatile s32 *) (u32) v0);
L_001DDE90:;
    v0 = (s32) 0x530000U;
    a1 = (s32) ((u32) s0 << 4);
    a0 = (*(volatile s32 *) (u32) (v0 + -20968));
    v0 = (s32) 0x530000U;
    s1 = (s32) ((u32) a0 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) (v0 + -20972));
    s0 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = (s32) ((u32) s0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s2 = (*(volatile s32 *) (u32) (v0 + 4));
    if (s2 == 0) { v0 = s1; goto L_001DE140; }
    a0 = s0; v0 = func_001F4380(a0);
    if (v0 == 0) goto L_001DDEDC;
    s0 = (*(volatile s32 *) (u32) v0);
L_001DDEDC:;
    v0 = (s32) 0x530000U;
    v1 = (s32) ((u32) s0 << 4);
    v0 = (*(volatile s32 *) (u32) (v0 + -20968));
    v0 = (s32) ((u32) v0 + (u32) v1);
    if (v0 == 0) goto L_001DDFD4;
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) goto L_001DDFD4;
    v0 = 1;
L_001DDF04:;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) s1); goto L_001DDF14; }
    v1 = 0; goto L_001DDFC4;
L_001DDF14:;
    a4 = 54;
    a3 = (*(volatile s32 *) (u32) (v0 + 4));
L_001DDF1C:;
    v0 = (*(volatile u16 *) (u32) a3);
    if (v0 == 0) goto L_001DDFB4;
    a0 = (*(volatile s32 *) (u32) (a3 + 4));
    v0 = v0 & 0xffff;
    a1 = (s32) ((u32) v0 + 0xffffffffU);
    at = 0 < a1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_001DDF90; }
L_001DDF40:;
    v0 = (s32) ((u32) a2 + (u32) a1);
    { s32 c_ = v0 >= 0; v1 = (s32) v0 >> 1; if (c_) goto L_001DDF54; }
    v0 = (s32) ((u32) v0 + 0x1U);
    v1 = (s32) v0 >> 1;
L_001DDF54:;
    v0 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    at = (u64) v0 < (u64) s3;
    if (at == 0) goto L_001DDF78;
    a2 = (s32) ((u32) v1 + 0x1U); goto L_001DDF80;
L_001DDF78:;
    a1 = v1;
L_001DDF80:;
    v0 = a2 < a1;
    if (v0 != 0) goto L_001DDF40;
L_001DDF90:;
    v0 = (s32) ((u32) a2 << 4);
    v1 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v1);
    if (s3 != v0) { v1 = 0; goto L_001DDFA4; }
L_001DDFA4:;
    if (v1 == 0) goto L_001DDFB4;
    goto L_001DDFC4;
L_001DDFB4:;
    a4 = (s32) ((u32) a4 + 0xffffffffU);
    { s32 c_ = a4 != 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_001DDF1C; }
    v1 = 0;
L_001DDFC4:;
    if (v1 == 0) goto L_001DDFDC;
    v0 = s1; goto L_001DE140;
L_001DDFD4:;
    v0 = 0; goto L_001DDF04;
L_001DDFDC:;
    s0 = (*(volatile s32 *) (u32) s2);
    a0 = s0; v0 = func_001F4380(a0);
    if (v0 == 0) goto L_001DDFF4;
    s0 = (*(volatile s32 *) (u32) v0);
L_001DDFF4:;
    v0 = (s32) 0x530000U;
    v1 = (s32) ((u32) s0 << 4);
    v0 = (*(volatile s32 *) (u32) (v0 + -20968));
    s0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) s0);
    if (v0 == 0) goto L_001DE11C;
    s1 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = s1; v0 = func_001F4380(a0);
    if (v0 == 0) goto L_001DE028;
    s1 = (*(volatile s32 *) (u32) v0);
L_001DE028:;
    v0 = (s32) 0x530000U;
    v1 = (s32) ((u32) s1 << 4);
    v0 = (*(volatile s32 *) (u32) (v0 + -20968));
    v0 = (s32) ((u32) v0 + (u32) v1);
    if (v0 == 0) goto L_001DE138;
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) goto L_001DE138;
    v0 = 1;
L_001DE050:;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) s0); goto L_001DE060; }
    v1 = 0; goto L_001DE10C;
L_001DE060:;
    a4 = 54;
    a3 = (*(volatile s32 *) (u32) (v0 + 4));
L_001DE068:;
    v0 = (*(volatile u16 *) (u32) a3);
    if (v0 == 0) goto L_001DE0FC;
    a0 = (*(volatile s32 *) (u32) (a3 + 4));
    v0 = v0 & 0xffff;
    a1 = (s32) ((u32) v0 + 0xffffffffU);
    at = 0 < a1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_001DE0D8; }
L_001DE08C:;
    v0 = (s32) ((u32) a2 + (u32) a1);
    { s32 c_ = v0 >= 0; v1 = (s32) v0 >> 1; if (c_) goto L_001DE0A0; }
    v0 = (s32) ((u32) v0 + 0x1U);
    v1 = (s32) v0 >> 1;
L_001DE0A0:;
    v0 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    at = (u64) v0 < (u64) s3;
    if (at == 0) goto L_001DE0C0;
    a2 = (s32) ((u32) v1 + 0x1U); goto L_001DE0C8;
L_001DE0C0:;
    a1 = v1;
L_001DE0C8:;
    v0 = a2 < a1;
    if (v0 != 0) goto L_001DE08C;
L_001DE0D8:;
    v0 = (s32) ((u32) a2 << 4);
    v1 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v1);
    if (s3 != v0) { v1 = 0; goto L_001DE0EC; }
L_001DE0EC:;
    if (v1 == 0) goto L_001DE0FC;
    goto L_001DE10C;
L_001DE0FC:;
    a4 = (s32) ((u32) a4 + 0xffffffffU);
    { s32 c_ = a4 != 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_001DE068; }
    v1 = 0;
L_001DE10C:;
    if (v1 == 0) goto L_001DE11C;
    v0 = s0; goto L_001DE140;
L_001DE11C:;
    s2 = (s32) ((u32) s2 + 0x4U);
    v0 = -1;
    v1 = (*(volatile s32 *) (u32) s2);
    if (v1 != v0) goto L_001DDFDC;
    v0 = 0; goto L_001DE140;
L_001DE138:;
    v0 = 0; goto L_001DE050;
L_001DE140:;
    return v0;
}
