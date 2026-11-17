/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0017E120(s32);
s32 func_009A2AA0(s32, s32, s32, s32);
s32 func_00B29B90(void);
s32 func_00B29C80(void);
s32 func_00B29E20(void);

s32 func_009A2D10(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x590000U;
    s3 = 0;
    s1 = 0;
    v0 = (*(volatile u8 *) (u32) (v0 + 7638));
    { s32 c_ = v0 == 0; s0 = 0; if (c_) goto L_009A2D64; }
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = 5;
    { s32 c_ = v1 == v0; s2 = 1; if (c_) goto L_009A2E00; }
L_009A2D58:;
    if (s2 == 0) goto L_009A2D64;
    s3 = 1;
L_009A2D64:;
    if (s3 == 0) goto L_009A2D80;
    v0 = (*(volatile s32 *) (u32) (gp + -19552));
    v0 = (*(volatile s32 *) (u32) (v0 + 108));
    if (v0 == 0) goto L_009A2D80;
    s0 = 1;
L_009A2D80:;
    { s32 c_ = s0 != 0; s2 = (s32) ((u32) s0 << 1); if (c_) goto L_009A2E54; }
L_009A2D88:;
    if (s0 != 0) goto L_009A2E6C;
L_009A2D90:;
    at = (u64) s2 < (u64) (s64) 8;
L_009A2D94:;
    if (at == 0) goto L_009A2DF0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) s2 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa360U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x9a2db8U) goto L_009A2DB8; if (t_ == 0x9a2dc0U) goto L_009A2DC0; if (t_ == 0x9a2dccU) goto L_009A2DCC; if (t_ == 0x9a2dd4U) goto L_009A2DD4; if (t_ == 0x9a2ddcU) goto L_009A2DDC; if (t_ == 0x9a2de4U) goto L_009A2DE4; if (t_ == 0x9a2decU) goto L_009A2DEC; if (t_ == 0x9a2df0U) goto L_009A2DF0; }
L_009A2DB8:;
    s1 = 1; goto L_009A2DF0;
L_009A2DC0:;
    v0 = (u64) 0 < (u64) s0;
    s1 = v0 ^ 0x1; goto L_009A2DF0;
L_009A2DCC:;
    s1 = 1; goto L_009A2DF0;
L_009A2DD4:;
    s1 = 1; goto L_009A2DF0;
L_009A2DDC:;
    s1 = 1; goto L_009A2DF0;
L_009A2DE4:;
    s1 = 1; goto L_009A2DF0;
L_009A2DEC:;
    s1 = 1;
L_009A2DF0:;
    if (s1 != 0) goto L_009A2F18;
L_009A2DF8:;
    v0 = 0; goto L_009A2F28;
L_009A2E00:;
    v0 = v1 ^ 0x5;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 == 0) goto L_009A2E44;
    v0 = func_00B29E20();
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) goto L_009A2E30;
    v0 = func_00B29B90();
    v0 = (u64) 0 < (u64) v0;
L_009A2E30:;
    if (v0 != 0) goto L_009A2E44;
    v0 = func_00B29C80();
    v0 = (u64) 0 < (u64) v0;
L_009A2E44:;
    if (v0 != 0) goto L_009A2D58;
    s2 = 0; goto L_009A2D58;
L_009A2E54:;
    v0 = func_009A2AA0(a0, a1, a2, a3);
    if (v0 == 0) goto L_009A2D88;
    v0 = 1; goto L_009A2F28;
L_009A2E6C:;
    v0 = (s32) 0x590000U;
    s0 = 0;
    v0 = (*(volatile u8 *) (u32) (v0 + 7638));
    { s32 c_ = v0 == 0; s4 = 0; if (c_) goto L_009A2EA0; }
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = 5;
    { s32 c_ = v1 == v0; s3 = 1; if (c_) goto L_009A2EC4; }
L_009A2E94:;
    if (s3 == 0) goto L_009A2EA0;
    s4 = 1;
L_009A2EA0:;
    if (s4 == 0) goto L_009A2D90;
    v0 = (*(volatile s32 *) (u32) (gp + -19552));
    v0 = (*(volatile s32 *) (u32) (v0 + 108));
    if (v0 == 0) goto L_009A2D90;
    s0 = 1;
    at = (u64) s2 < (u64) (s64) 8; goto L_009A2D94;
L_009A2EC4:;
    v0 = v1 ^ 0x5;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 == 0) goto L_009A2F08;
    v0 = func_00B29E20();
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) goto L_009A2EF4;
    v0 = func_00B29B90();
    v0 = (u64) 0 < (u64) v0;
L_009A2EF4:;
    if (v0 != 0) goto L_009A2F08;
    v0 = func_00B29C80();
    v0 = (u64) 0 < (u64) v0;
L_009A2F08:;
    if (v0 != 0) goto L_009A2E94;
    s3 = 0; goto L_009A2E94;
L_009A2F18:;
    a0 = 1; func_0017E120(a0);
    goto L_009A2DF8;
L_009A2F28:;
    return v0;
}
