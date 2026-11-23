/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002B5470(s64, s64);
s64 func_002CA770(s64, s64);
s64 func_008B9660(void);
s64 func_0099D2C0(s64, s64, s64, s64);
s64 func_0099D470(s64, s64, s64, s64);
s64 func_00B29B50(s64, s64, s64, s64);
s64 func_00BF3FC0(s64, s64, s64, s64);

void func_008C0060(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 hi = 0, lo = 0;

    s3 = a2;
    s1 = a0;
    s0 = a1;
    a1 = (s32) ((u32) s0 + 0x28U); func_002B5470(a0, a1);
    (*(volatile u8 *) (u32) s0) = (u8) 0;
    s2 = 0;
L_008C0094:;
    v0 = func_008B9660();
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 5;
    if (v1 == v0) goto L_008C00C8;
    v0 = 4;
    if (v1 == v0) goto L_008C00C8;
    goto L_008C00D0;
L_008C00C8:;
    v0 = 1; goto L_008C00D8;
L_008C00D0:;
    v0 = 0;
L_008C00D8:;
    if (v0 == 0) goto L_008C0100;
    a0 = s1 & 0xff;
    a1 = s2; v0 = func_002CA770(a0, a1);
    v1 = (u64) 0 < (u64) v0;
    v0 = (s32) ((u32) s0 + (u32) s2);
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) v1; goto L_008C0110;
L_008C0100:;
    v1 = 1;
    v0 = (s32) ((u32) s0 + (u32) s2);
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) v1;
L_008C0110:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 11;
    if (v0 != 0) goto L_008C0094;
    v0 = 255;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) v0;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v0;
    (*(volatile u8 *) (u32) (s0 + 14)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 15)) = (u8) v0; v0 = func_008B9660();
    a0 = (s64) ((u64) v0 << 48);
    v1 = 4;
    a0 = a0 >> 48;
    if (a0 == v1) goto L_008C0160;
    v1 = 1;
    if (a0 == v1) goto L_008C0160;
    goto L_008C0320;
L_008C0160:;
    v1 = (s32) 0x590000U;
    a0 = 255;
    a1 = (*(volatile u8 *) (u32) (v1 + 7757));
    if (a1 == a0) { a1 = 1; goto L_008C0180; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) v1); hi = (s32) ((s32) a1 % (s32) v1); lo = q_; }
    a1 = hi;
L_008C0180:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 18));
    if (v1 == s1) goto L_008C01AC;
    v1 = 0; goto L_008C01E4;
L_008C01AC:;
    v1 = (s32) 0x590000U;
    a0 = 3;
    a1 = (*(volatile u8 *) (u32) (v1 + 7972));
    if (a1 == a0) { v1 = 1; goto L_008C01E4; }
    v1 = 4;
    if (a1 == v1) goto L_008C01E0;
    v1 = 1;
    if (a1 == v1) goto L_008C01E0;
    v1 = 0; goto L_008C01E4;
L_008C01E0:;
    v1 = 1;
L_008C01E4:;
    if (v1 == 0) goto L_008C0320;
    a0 = 0; v0 = func_0099D470(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    v0 = v0 < 11;
    if (v0 != 0) { a0 = 0; goto L_008C020C; }
    v0 = 0; goto L_008C0218;
L_008C020C:;
    v0 = func_0099D470(a0, a1, a2, a3);
    v0 = v0 & 0xff;
L_008C0218:;
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 40));
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v0; v0 = func_00BF3FC0(a0, a1, a2, a3);
    if (v0 == 0) { v1 = 1; goto L_008C0254; }
    a0 = 1; v0 = func_0099D470(a0, a1, a2, a3);
    a0 = v0 & 0xff;
    v1 = 2;
    a0 = (s32) ((u32) a0 + (u32) s0);
    a0 = (*(volatile u8 *) (u32) (a0 + 40));
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) a0;
    (*(volatile u8 *) (u32) (s0 + 14)) = (u8) v1; goto L_008C0258;
L_008C0254:;
    (*(volatile u8 *) (u32) (s0 + 14)) = (u8) v1;
L_008C0258:;
    v1 = (s32) 0x590000U;
    a0 = 255;
    a1 = (*(volatile u8 *) (u32) (v1 + 7757));
    if (a1 == a0) { a1 = 1; goto L_008C0278; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) v1); hi = (s32) ((s32) a1 % (s32) v1); lo = q_; }
    a1 = hi;
L_008C0278:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    s2 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (s2 + 18));
    if (v1 == s1) goto L_008C02A4;
    v1 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_008C031C;
L_008C02A4:;
    v0 = func_008B9660();
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 4;
    if (v1 != v0) { a0 = s2; goto L_008C02DC; }
    v0 = func_00B29B50(a0, a1, a2, a3);
    if (v0 == 0) goto L_008C02D8;
    v1 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_008C031C;
L_008C02D8:;
    a0 = s2;
L_008C02DC:;
    v0 = func_0099D2C0(a0, a1, a2, a3);
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 7972));
    v1 = 1;
    { s32 c_ = a0 == v1; a1 = v0 & 0xff; if (c_) goto L_008C0318; }
    v1 = 4;
    if (a0 == v1) { v1 = a1 & 0xff; goto L_008C031C; }
    v1 = 3;
    if (a0 == v1) goto L_008C0318;
    v1 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_008C031C;
L_008C0318:;
    v1 = a1 & 0xff;
L_008C031C:;
    (*(volatile u8 *) (u32) (s0 + 15)) = (u8) v1;
L_008C0320:;
    if (s3 != 0) goto L_008C03B8;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x1ef6U);
    a0 = (s32) ((u32) a0 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) a0);
    (*(volatile u8 *) (u32) (s0 + 30)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (s0 + 30));
    { s32 c_ = a0 <= 0; v1 = 0; if (c_) goto L_008C03B8; }
    a1 = 139;
    a3 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a3 = (s32) ((u32) a3 + 0x1a90U);
    a0 = s0;
    a1 = (s32) 0x590000U;
    a3 = (s32) ((u32) a3 + (u32) a4);
    a1 = (s32) ((u32) a1 + 0x1e00U);
    a1 = (s32) ((u32) a1 + (u32) s1);
    a2 = (s32) ((u32) a1 + 0xf8U);
L_008C0370:;
    a1 = (*(volatile u8 *) (u32) a2);
    a1 = (s32) ((u32) v1 + (u32) a1);
    a1 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) a3 + (u32) a1);
    a1 = (*(volatile u8 *) (u32) (a1 + 82));
    (*(volatile u8 *) (u32) (a0 + 16)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) a2);
    a1 = (s32) ((u32) v1 + (u32) a1);
    a1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 + 0x1U);
    a1 = (s32) ((u32) a3 + (u32) a1);
    a1 = (*(volatile u8 *) (u32) (a1 + 83));
    (*(volatile u8 *) (u32) (a0 + 17)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (s0 + 30));
    a1 = v1 < a1;
    { s32 c_ = a1 != 0; a0 = (s32) ((u32) a0 + 0x2U); if (c_) goto L_008C0370; }
L_008C03B8:;
    return;
}
