/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00967760(s32);
s32 func_00990150(s32, s32, s32, s32, s32, s32);
s32 func_009B3070(s32, s32);

s32 func_00964B40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    s1 = a0;
    a0 = (*(volatile u8 *) (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (a0 == v0) goto L_00964BBC;
    v1 = (*(volatile u8 *) (u32) (s1 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 == v0) goto L_00964BBC;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e50U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 == v0) goto L_00964BBC;
    s0 = 0;
L_00964BB4:;
    v0 = s0; goto L_00964D7C;
L_00964BBC:;
    a0 = s1; v0 = func_00967760(a0);
    v1 = (*(volatile u8 *) (u32) (s1 + 19));
    a0 = s1;
    a2 = v0;
    a3 = 0x8000;
    a4 = 400;
    a5 = (s32) ((u32) sp + 0x70U);
    a1 = v1 ^ 0x1; v0 = func_00990150(a0, a1, a2, a3, a4, a5);
    s3 = v0 & 0xff;
    if (s3 == 0) { v0 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_00964C74; }
L_00964BF0:;
    if (s3 == 0) goto L_00964CC8;
    s2 = s3 & 0xff;
    s4 = 1;
    at = 0 < s2;
    { s32 c_ = at == 0; s5 = 0; if (c_) goto L_00964C64; }
    s3 = (s32) ((u32) sp + 0x70U);
L_00964C10:;
    v1 = (*(volatile u8 *) (u32) s3);
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00964C2C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00964C2C:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 24;
    a1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a1 + 22));
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) s1); goto L_00964C98; }
L_00964C54:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < s2;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x1U); if (c_) goto L_00964C10; }
L_00964C64:;
    if (s4 == 0) goto L_00964BB4;
    s0 = 1; goto L_00964BB4;
L_00964C74:;
    a0 = s1;
    a2 = (*(volatile u16 *) (u32) (s1 + 40));
    a3 = 0x8000;
    a4 = 400;
    a5 = (s32) ((u32) sp + 0x70U);
    a1 = v0 ^ 0x1; v0 = func_00990150(a0, a1, a2, a3, a4, a5);
    s2 = v0 & 0xff; goto L_00964BF0;
L_00964C98:;
    a0 = (*(volatile u16 *) (u32) (a1 + 40));
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) a1 + (u32) v0);
    a1 = (*(volatile u16 *) (u32) (v0 + 296)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 16384;
    if (at == 0) goto L_00964C54;
    s4 = 0;
    s0 = 2; goto L_00964C64;
L_00964CC8:;
    if (s2 == 0) { s0 = 1; goto L_00964BB4; }
    s2 = s2 & 0xff;
    s5 = 1;
    at = 0 < s2;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_00964D3C; }
    s4 = (s32) ((u32) sp + 0x70U);
L_00964CE8:;
    v1 = (*(volatile u8 *) (u32) s4);
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00964D04; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00964D04:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 24;
    a1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a1 + 22));
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) s1); goto L_00964D4C; }
L_00964D2C:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s2;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x1U); if (c_) goto L_00964CE8; }
L_00964D3C:;
    if (s5 == 0) goto L_00964BB4;
    s0 = 1; goto L_00964BB4;
L_00964D4C:;
    a0 = (*(volatile u16 *) (u32) (a1 + 40));
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) a1 + (u32) v0);
    a1 = (*(volatile u16 *) (u32) (v0 + 296)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 16384;
    if (at == 0) goto L_00964D2C;
    s5 = 0;
    s0 = 2; goto L_00964D3C;
L_00964D7C:;
    return v0;
}
