/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
s64 func_001CDAA0(void);
s64 func_001F08B0(s64);
s64 func_00220830(s64);
s64 func_002781A0(s64);
s64 func_008472D0(s64, s64, s64, s64);
s64 func_00858C20(s64, s64, s64, s64);
s64 func_008BC3B0(void);
void func_008D3490(s64, s64, s64, s64);
s64 func_008D90A0(s64, s64, s64, s64);

s64 func_008B4D70(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 hi = 0, lo = 0;

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_008B4FB8; }
    v0 = 1;
    if (a1 == v0) { v0 = (*(volatile u8 *) (u32) (s0 + 22)); goto L_008B4DCC; }
    if (a1 == 0) { v0 = (s32) 0x3f0000U; goto L_008B4DA8; }
    v0 = 0; goto L_008B4FBC;
L_008B4DA8:;
    a0 = v0 | 0x13; v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s0 + 0x1ca8U);
    a2 = v0;
    a1 = 0;
    a3 = 1; func_008D3490(a0, a1, a2, a3);
    goto L_008B4FB8;
L_008B4DCC:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v0;
    a0 = (*(volatile u8 *) (u32) (s0 + 25)); v0 = func_008D90A0(a0, a1, a2, a3);
    if (v0 == 0) goto L_008B4E0C;
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = func_001CDAA0();
    v1 = (s32) 0x3c0000U;
    v1 = (s32) ((u32) v1 + 0x54c0U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v0;
L_008B4E0C:;
    v0 = func_001CDAA0();
    a0 = (s32) 0x3c0000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    a0 = (s32) ((u32) a0 + 0x54c0U);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = v1 < v0;
    if (v0 != 0) goto L_008B4FB8;
    s0 = (*(volatile u8 *) (u32) s0); v0 = func_008BC3B0();
    if (v0 != 0) { a0 = s0 & 0xff; goto L_008B4F98; }
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0x80;
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) goto L_008B4E94;
    v0 = (s32) 0x8b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 5198));
    a0 = v0 & 0x1; v0 = func_00858C20(a0, a1, a2, a3);
    s1 = (s64) ((u64) v0 << 48);
    s1 = s1 >> 48; v0 = func_008472D0(a0, a1, a2, a3);
    v0 = (*(volatile s16 *) (u32) v0);
    v0 = s1 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 != 0) goto L_008B4E94;
    v0 = 1; goto L_008B4F80;
L_008B4E94:;
    v1 = (s32) 0x8f0000U;
    v0 = 1;
    v1 = (*(volatile u16 *) (u32) (v1 + -7792));
    v1 = v1 & 0xf;
    v1 = (s64) ((u64) v1 << 48);
    v1 = v1 >> 48;
    if (v1 != v0) goto L_008B4F14;
    a0 = s0 & 0xff;
    v1 = 12836;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a1 = (s32) 0x590000U;
    a2 = 0;
    a1 = (s32) ((u32) a1 + 0x2800U);
    v1 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 + 0xffffe750U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (v1 + 25));
L_008B4EDC:;
    v1 = (*(volatile u8 *) (u32) a1);
    if (v1 != a0) { a2 = (s32) ((u32) a2 + 0x1U); goto L_008B4F00; }
    v1 = (*(volatile u8 *) (u32) (a1 + 8));
    if (v1 != v0) goto L_008B4EFC;
    goto L_008B4F80;
L_008B4EFC:;
    a2 = (s32) ((u32) a2 + 0x1U);
L_008B4F00:;
    v1 = a2 < 8;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x28U); if (c_) goto L_008B4EDC; }
    v0 = 0; goto L_008B4F80;
L_008B4F14:;
    v0 = func_008BC3B0();
    if (v0 == 0) goto L_008B4F2C;
    v0 = 0; goto L_008B4F80;
L_008B4F2C:;
    v0 = (s32) 0x8f0000U;
    v1 = 7;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0xf;
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48;
    if (a0 == v1) { v0 = 0; goto L_008B4F80; }
    v0 = 6;
    if (a0 == v0) goto L_008B4F6C;
    v0 = 8;
    if (a0 == v0) goto L_008B4F6C;
    a0 = s0 & 0xff; goto L_008B4F78;
L_008B4F6C:;
    v0 = 0;
    goto L_008B4F80;
L_008B4F78:;
    v0 = func_002781A0(a0);
L_008B4F80:;
    v1 = 1;
    if (v0 != v1) goto L_008B4F94;
    v0 = (s64) ((u64) 0 + (u64) (s64) 33); goto L_008B4FB0;
L_008B4F94:;
    a0 = s0 & 0xff;
L_008B4F98:;
    v0 = func_00220830(a0);
    v1 = 1;
    if (v0 != v1) { v0 = (s64) ((u64) 0 + (u64) (s64) 32); goto L_008B4FB0; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 36);
L_008B4FB0:;
    v0 = v0 & 0xff; goto L_008B4FBC;
L_008B4FB8:;
    v0 = 0;
L_008B4FBC:;
    return v0;
}
