/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0099CB60(s32, s32, s32, s32);
s32 func_00AFBA70(s32);
s32 func_00B29D60(void);
s32 func_00B29DA0(void);
s32 func_00BEF020(s32, s32, s32, s32);

s32 func_00BFF4F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 hi = 0, lo = 0;

    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    s0 = a0;
    a0 = 5;
    if (v1 == a0) goto L_00BFF654;
L_00BFF514:;
    at = (u64) s0 < (u64) (s64) 7;
    if (at == 0) goto L_00BFF684;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) s0 << 2);
    a0 = (s32) ((u32) a0 + 0x2a50U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xbff53cU) goto L_00BFF53C; if (t_ == 0xbff5b4U) goto L_00BFF5B4; if (t_ == 0xbff5d8U) goto L_00BFF5D8; if (t_ == 0xbff64cU) goto L_00BFF64C; }
L_00BFF53C:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7767)); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) goto L_00BFF57C;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7767)); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00BFF580;
L_00BFF57C:;
    a0 = 1;
L_00BFF580:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00BEF020(a0, a1, a2, a3);
    v1 = (s32) 0x590000U;
    a0 = 255;
    (*(volatile u8 *) (u32) (v1 + 7757)) = (u8) v0;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7758)) = (u8) a0; goto L_00BFF64C;
L_00BFF5B4:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7767)); v0 = func_00AFBA70(a0);
    v1 = (s32) 0x590000U;
    a0 = 255;
    (*(volatile u8 *) (u32) (v1 + 7757)) = (u8) v0;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7758)) = (u8) a0; goto L_00BFF64C;
L_00BFF5D8:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7767)); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) goto L_00BFF618;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7767)); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00BFF61C;
L_00BFF618:;
    a0 = 1;
L_00BFF61C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_0099CB60(a0, a1, a2, a3);
    v1 = (s32) 0x590000U;
    a0 = 255;
    (*(volatile u8 *) (u32) (v1 + 7757)) = (u8) v0;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7758)) = (u8) a0;
L_00BFF64C:;
    goto L_00BFF688;
L_00BFF654:;
    v0 = func_00B29DA0();
    if (v0 == 0) goto L_00BFF66C;
L_00BFF664:;
    goto L_00BFF684;
L_00BFF66C:;
    v0 = func_00B29D60();
    if (v0 == 0) goto L_00BFF514;
    goto L_00BFF664;
L_00BFF684:;
L_00BFF688:;
    return v0;
}
