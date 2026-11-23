/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
void func_0023EC10(s64, s64);
void func_008C0270(s64, s64, s64, s64);

s64 func_008BFB90(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc270U);
    v0 = 512;
    s1 = (s32) 0x540000U;
    s0 = a0;
    a0 = (*(volatile u8 *) (u32) (gp + -32364));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { s32 c_ = v1 == v0; s1 = (s32) ((u32) s1 + 0xffffc300U); if (c_) goto L_008BFCFC; }
    v0 = 256;
    if (v1 == v0) { v0 = (*(volatile s8 *) (u32) (s0 + 9)); goto L_008BFC40; }
    v0 = 2;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008BFC1C; }
    v0 = 1;
    if (v1 == v0) { v0 = (s32) 0x84020000U; goto L_008BFBF8; }
    goto L_008BFDBC;
L_008BFBF8:;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = (*(volatile s8 *) (u32) s0);
    if (v0 != 0) { (*(volatile u8 *) (u32) s0) = (u8) 0; goto L_008BFC14; }
    v0 = 2; goto L_008C0258;
L_008BFC14:;
    v0 = 9; goto L_008C0258;
L_008BFC1C:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = (*(volatile s8 *) (u32) s0);
    if (v0 != 0) { (*(volatile u8 *) (u32) s0) = (u8) 0; goto L_008BFC38; }
    v0 = 1; goto L_008C0258;
L_008BFC38:;
    v0 = 10; goto L_008C0258;
L_008BFC40:;
    if (v0 == 0) { a1 = (*(volatile s8 *) (u32) s0); goto L_008BFC7C; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf803; SD_call(a0);
    v0 = (*(volatile s8 *) (u32) (s0 + 8));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) v0;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    if (v0 >= 0) goto L_008BFC78;
    v0 = (*(volatile s8 *) (u32) (s0 + 9));
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) v0;
L_008BFC78:;
    a1 = (*(volatile s8 *) (u32) s0);
L_008BFC7C:;
    if (a1 == 0) goto L_008BFCE8;
    a0 = (*(volatile s8 *) (u32) (s0 + 8));
    v0 = 424;
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) a1 + (u32) v1);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v1 = (s32) ((u32) s0 + (u32) v0);
    v0 = (*(volatile s8 *) (u32) (v1 + 29));
    if (v0 == 0) goto L_008BFCC0;
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    if (v0 == 0) goto L_008BFCE8;
L_008BFCC0:;
    v0 = (*(volatile s8 *) (u32) s0);
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) s0) = (u8) v0;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    if (v0 >= 0) goto L_008BFC78;
    v0 = 13;
    (*(volatile u8 *) (u32) s0) = (u8) v0; goto L_008BFC78;
L_008BFCE8:;
    a0 = (s32) ((u32) s1 + 0x10U);
    a1 = 1; func_0023EC10(a0, a1);
    goto L_008BFDBC;
L_008BFCFC:;
    v0 = (*(volatile s8 *) (u32) (s0 + 9));
    if (v0 == 0) { a1 = (*(volatile s8 *) (u32) s0); goto L_008BFD40; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf803; SD_call(a0);
    v0 = (*(volatile s8 *) (u32) (s0 + 8));
    v0 = (s32) ((u32) v0 + 0x1U);
    v1 = (s64) ((u64) v0 << 56);
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) v0;
    v0 = (*(volatile s8 *) (u32) (s0 + 9));
    v1 = v1 >> 56;
    at = v0 < v1;
    if (at == 0) goto L_008BFD3C;
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) 0;
L_008BFD3C:;
    a1 = (*(volatile s8 *) (u32) s0);
L_008BFD40:;
    if (a1 == 0) goto L_008BFDB0;
    a0 = (*(volatile s8 *) (u32) (s0 + 8));
    v0 = 424;
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) a1 + (u32) v1);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v1 = (s32) ((u32) s0 + (u32) v0);
    v0 = (*(volatile s8 *) (u32) (v1 + 29));
    if (v0 == 0) goto L_008BFD88;
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    if (v0 == 0) goto L_008BFDB0;
L_008BFD88:;
    v0 = (*(volatile s8 *) (u32) s0);
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) s0) = (u8) v0;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    if (v0 >= 0) goto L_008BFD3C;
    v0 = 13;
    (*(volatile u8 *) (u32) s0) = (u8) v0; goto L_008BFD3C;
L_008BFDB0:;
    a0 = (s32) ((u32) s1 + 0x10U);
    a1 = 1; func_0023EC10(a0, a1);
L_008BFDBC:;
    func_008C0270(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (gp + -32364));
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc230U);
    v0 = 32;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) { a0 = (*(volatile s8 *) (u32) s0); goto L_008C0150; }
    v0 = 16;
    if (v1 == v0) { a2 = (*(volatile s8 *) (u32) s0); goto L_008C0040; }
    v0 = 128;
    if (v1 == v0) { a1 = (*(volatile s8 *) (u32) (s0 + 8)); goto L_008BFF28; }
    v0 = 64;
    if (v1 == v0) { a1 = (*(volatile s8 *) (u32) (s0 + 8)); goto L_008BFE14; }
    v0 = 0; goto L_008C0258;
L_008BFE14:;
    a0 = 424;
    a2 = (*(volatile s8 *) (u32) s0);
    v1 = 1;
    v0 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) a2 + (u32) v0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    a4 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (a4 + 24));
    if (v0 != v1) { v0 = (*(volatile s16 *) (u32) (a4 + 14)); goto L_008BFE5C; }
    v0 = (s32) 0x8c000000U;
    a0 = v0 | 0x8005; SD_call(a0);
    v0 = 0; goto L_008C0258;
L_008BFE5C:;
    a3 = (s32) ((u32) a4 + 0xeU);
    { s32 c_ = a2 == 0; a6 = v0; if (c_) goto L_008BFF08; }
L_008BFE68:;
    a4 = (s64) ((u64) a1 << 56);
    a1 = (s64) ((u64) a2 << 56);
    a4 = a4 >> 56;
    a2 = (s32) ((u32) a4 << 1);
    a1 = a1 >> 56;
    a2 = (s32) ((u32) a2 + (u32) a4);
    a2 = (s32) ((u32) a2 << 2);
    a2 = (s32) ((u32) a2 + (u32) a4);
    a1 = (s32) ((u32) a1 + (u32) a2);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a2 = (s32) ((u32) s0 + (u32) a1);
    a1 = (*(volatile s16 *) (u32) (a2 + 18));
    if (a6 == a1) goto L_008BFEB0;
    a1 = (*(volatile s16 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    (*(volatile u16 *) (u32) a3) = (u16) a1; goto L_008BFEC8;
L_008BFEB0:;
    a1 = (*(volatile s8 *) (u32) (a2 + 28));
    if (a1 != v1) goto L_008BFEC8;
    a1 = (*(volatile s16 *) (u32) (a2 + 22));
    (*(volatile u16 *) (u32) a3) = (u16) a1;
L_008BFEC8:;
    a1 = (*(volatile s8 *) (u32) (s0 + 8));
    a2 = (*(volatile s8 *) (u32) s0);
    a3 = (s32) ((u32) a1 << 1);
    a3 = (s32) ((u32) a3 + (u32) a1);
    a3 = (s32) ((u32) a3 << 2);
    a3 = (s32) ((u32) a3 + (u32) a1);
    a3 = (s32) ((u32) a2 + (u32) a3);
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a5 = (s32) ((u32) s0 + (u32) a3);
    a6 = (*(volatile s16 *) (u32) (a5 + 14));
    a4 = (s32) ((u32) a6 << 2);
    a4 = (s32) ((u32) a5 + (u32) a4);
    a4 = (*(volatile s32 *) (u32) (a4 + 32));
    { s32 c_ = a4 != 0; a3 = (s32) ((u32) a5 + 0xeU); if (c_) goto L_008BFE68; }
L_008BFF08:;
    if (v0 == a6) { v0 = 5; goto L_008C0258; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf803; SD_call(a0);
    v0 = 5;
    goto L_008C0258;
L_008BFF28:;
    a0 = 424;
    a2 = (*(volatile s8 *) (u32) s0);
    v1 = 1;
    v0 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) a2 + (u32) v0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    a4 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (a4 + 24));
    if (v0 != v1) { v0 = (*(volatile s16 *) (u32) (a4 + 14)); goto L_008BFF70; }
    v0 = (s32) 0x8c000000U;
    a0 = v0 | 0x8005; SD_call(a0);
    v0 = 0; goto L_008C0258;
L_008BFF70:;
    a3 = (s32) ((u32) a4 + 0xeU);
    { s32 c_ = a2 == 0; a6 = v0; if (c_) goto L_008C0020; }
L_008BFF7C:;
    a4 = (s64) ((u64) a1 << 56);
    a1 = (s64) ((u64) a2 << 56);
    a4 = a4 >> 56;
    a2 = (s32) ((u32) a4 << 1);
    a1 = a1 >> 56;
    a2 = (s32) ((u32) a2 + (u32) a4);
    a2 = (s32) ((u32) a2 << 2);
    a2 = (s32) ((u32) a2 + (u32) a4);
    a1 = (s32) ((u32) a1 + (u32) a2);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a2 = (s32) ((u32) s0 + (u32) a1);
    a1 = (*(volatile s16 *) (u32) (a2 + 22));
    if (a6 == a1) goto L_008BFFC8;
    a1 = (*(volatile s16 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u16 *) (u32) a3) = (u16) a1; goto L_008BFFE0;
L_008BFFC8:;
    a1 = (*(volatile s8 *) (u32) (a2 + 28));
    if (a1 != v1) goto L_008BFFE0;
    a1 = (*(volatile s16 *) (u32) (a2 + 18));
    (*(volatile u16 *) (u32) a3) = (u16) a1;
L_008BFFE0:;
    a1 = (*(volatile s8 *) (u32) (s0 + 8));
    a2 = (*(volatile s8 *) (u32) s0);
    a3 = (s32) ((u32) a1 << 1);
    a3 = (s32) ((u32) a3 + (u32) a1);
    a3 = (s32) ((u32) a3 << 2);
    a3 = (s32) ((u32) a3 + (u32) a1);
    a3 = (s32) ((u32) a2 + (u32) a3);
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a5 = (s32) ((u32) s0 + (u32) a3);
    a6 = (*(volatile s16 *) (u32) (a5 + 14));
    a4 = (s32) ((u32) a6 << 2);
    a4 = (s32) ((u32) a5 + (u32) a4);
    a4 = (*(volatile s32 *) (u32) (a4 + 32));
    { s32 c_ = a4 != 0; a3 = (s32) ((u32) a5 + 0xeU); if (c_) goto L_008BFF7C; }
L_008C0020:;
    if (v0 == a6) { v0 = 6; goto L_008C0258; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf803; SD_call(a0);
    v0 = 6;
    goto L_008C0258;
L_008C0040:;
    a1 = 13;
    a5 = (s32) 0x510000U;
    a0 = 7;
    a4 = (s32) 0x590000U;
    v1 = 4;
    v0 = 424;
    t4 = 1;
L_008C005C:;
    a3 = (*(volatile s8 *) (u32) s0);
L_008C0060:;
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    (*(volatile u8 *) (u32) s0) = (u8) a3;
    a3 = (s64) ((u64) a3 << 56);
    a3 = a3 >> 56;
    if (a3 >= 0) goto L_008C0080;
    (*(volatile u8 *) (u32) s0) = (u8) a1;
L_008C0080:;
    a3 = (*(volatile s32 *) (u32) (a5 + 4048));
    if (a3 != a0) { a3 = (*(volatile s8 *) (u32) s0); goto L_008C00F0; }
    a3 = (*(volatile u8 *) (u32) (a4 + 7177));
    if (a3 != v1) goto L_008C00EC;
    a3 = (*(volatile s8 *) (u32) s0);
    if (a3 == v1) goto L_008C0130;
    if (a3 == 0) goto L_008C0130;
    a7 = (*(volatile s8 *) (u32) (s0 + 8));
    a6 = (s32) ((u32) a7 << 1);
    a6 = (s32) ((u32) a6 + (u32) a7);
    a6 = (s32) ((u32) a6 << 2);
    a6 = (s32) ((u32) a6 + (u32) a7);
    a6 = (s32) ((u32) a3 + (u32) a6);
    { s64 m_ = (s64) (s32) a6 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a6 = lo; }
    a7 = (s32) ((u32) s0 + (u32) a6);
    a6 = (*(volatile s32 *) (u32) (a7 + 24));
    if (a6 != 0) { a3 = (*(volatile s8 *) (u32) s0); goto L_008C0060; }
    a6 = (*(volatile s8 *) (u32) (a7 + 29));
    if (a6 != t4) goto L_008C005C;
    goto L_008C0130;
L_008C00EC:;
    a3 = (*(volatile s8 *) (u32) s0);
L_008C00F0:;
    if (a3 == 0) goto L_008C0130;
    a7 = (*(volatile s8 *) (u32) (s0 + 8));
    a6 = (s32) ((u32) a7 << 1);
    a6 = (s32) ((u32) a6 + (u32) a7);
    a6 = (s32) ((u32) a6 << 2);
    a6 = (s32) ((u32) a6 + (u32) a7);
    a6 = (s32) ((u32) a3 + (u32) a6);
    { s64 m_ = (s64) (s32) a6 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a6 = lo; }
    a7 = (s32) ((u32) s0 + (u32) a6);
    a6 = (*(volatile s32 *) (u32) (a7 + 24));
    if (a6 != 0) goto L_008C005C;
    a6 = (*(volatile s8 *) (u32) (a7 + 29));
    if (a6 != t4) goto L_008C005C;
L_008C0130:;
    if (a2 == a3) { v0 = 3; goto L_008C0258; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = 3;
    goto L_008C0258;
L_008C0150:;
    a3 = (s32) 0x510000U;
    v1 = 7;
    a2 = (s32) 0x590000U;
    v0 = 4;
    a7 = 424;
    a6 = 1;
L_008C0168:;
    a1 = (*(volatile s8 *) (u32) s0);
L_008C016C:;
    a1 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u8 *) (u32) s0) = (u8) a1;
    a1 = (s64) ((u64) a1 << 56);
    a1 = a1 >> 56;
    at = a1 < 14;
    if (at != 0) goto L_008C0190;
    (*(volatile u8 *) (u32) s0) = (u8) 0;
L_008C0190:;
    a1 = (*(volatile s32 *) (u32) (a3 + 4048));
    if (a1 != v1) { a1 = (*(volatile s8 *) (u32) s0); goto L_008C0200; }
    a1 = (*(volatile u8 *) (u32) (a2 + 7177));
    if (a1 != v0) goto L_008C01FC;
    a1 = (*(volatile s8 *) (u32) s0);
    if (a1 == v0) goto L_008C0240;
    if (a1 == 0) goto L_008C0240;
    a5 = (*(volatile s8 *) (u32) (s0 + 8));
    a4 = (s32) ((u32) a5 << 1);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a4 = (s32) ((u32) a4 << 2);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a4 = (s32) ((u32) a1 + (u32) a4);
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) a7; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a5 = (s32) ((u32) s0 + (u32) a4);
    a4 = (*(volatile s32 *) (u32) (a5 + 24));
    if (a4 != 0) { a1 = (*(volatile s8 *) (u32) s0); goto L_008C016C; }
    a4 = (*(volatile s8 *) (u32) (a5 + 29));
    if (a4 != a6) goto L_008C0168;
    goto L_008C0240;
L_008C01FC:;
    a1 = (*(volatile s8 *) (u32) s0);
L_008C0200:;
    if (a1 == 0) goto L_008C0240;
    a5 = (*(volatile s8 *) (u32) (s0 + 8));
    a4 = (s32) ((u32) a5 << 1);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a4 = (s32) ((u32) a4 << 2);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a4 = (s32) ((u32) a1 + (u32) a4);
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) a7; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a5 = (s32) ((u32) s0 + (u32) a4);
    a4 = (*(volatile s32 *) (u32) (a5 + 24));
    if (a4 != 0) goto L_008C0168;
    a4 = (*(volatile s8 *) (u32) (a5 + 29));
    if (a4 != a6) goto L_008C0168;
L_008C0240:;
    if (a0 == a1) { v0 = 4; goto L_008C0258; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = 4;
L_008C0258:;
    return v0;
}
