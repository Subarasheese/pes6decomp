/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288580(void);
s32 func_00288670(s32, s32);
s32 func_00A0EB90(s32, s32, s32, s32);
s32 func_00BBB8C0(s32);

s32 func_00AA2C30(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    s2 = a0;
    s1 = a1;
    s0 = a2; v0 = func_00288580();
    if (v0 != 0) { a0 = 3; goto L_00AA2EE0; }
L_00AA2C5C:;
    v0 = (*(volatile u8 *) (u32) (s2 + 37));
    if (v0 != 0) goto L_00AA2D30;
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) goto L_00AA2CC4;
    v1 = (*(volatile u8 *) (u32) (s2 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    v1 = v1 ^ 0x1;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    at = 0 < v0;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_00AA2CB4; }
    at = v0 < 23;
    if (at == 0) goto L_00AA2CB4;
    a0 = 1;
L_00AA2CB4:;
    if (a0 != 0) goto L_00AA2CC4;
    v0 = (s32) 0x57e40000U; goto L_00AA2D20;
L_00AA2CC4:;
    a0 = (*(volatile u8 *) (u32) (s2 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_00AA2CF8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00AA2CF8:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
L_00AA2D20:;
    at = 0xc400;
    at = v0 < at;
    if (at == 0) goto L_00AA2E94;
L_00AA2D30:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (v1 != v0) { a2 = (*(volatile u8 *) (u32) (s2 + 18)); goto L_00AA2DF0; }
    a2 = (*(volatile u8 *) (u32) (s2 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 108));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    a0 = 99;
    v1 = (s32) 0x66660000U;
    a0 = (s32) ((u32) a0 - (u32) v0);
    v0 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 + 0x64U);
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) v0 + 0x200U); goto L_00AA2E94;
L_00AA2DF0:;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 108));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    a0 = 99;
    v1 = (s32) 0x66660000U;
    a0 = (s32) ((u32) a0 - (u32) v0);
    v0 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 + 0x64U);
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) v0 + 0x400U);
L_00AA2E94:;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0xc2500000U;
    f0.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (v1 + 20));
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00AA2EB4;
    s0 = (s32) ((u32) s0 + 0xffffff00U);
L_00AA2EB4:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v1 == v0) { v0 = s0; goto L_00AA2F24; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7962));
    if (v0 == 0) { a0 = s2; goto L_00AA2F14; }
L_00AA2ED8:;
    v0 = s0; goto L_00AA2F24;
L_00AA2EE0:;
    v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 + 0x66U);
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    s0 = (s32) ((u32) v0 + (u32) v1); goto L_00AA2C5C;
L_00AA2F14:;
    a1 = s1; v0 = func_00A0EB90(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + (u32) v0); goto L_00AA2ED8;
L_00AA2F24:;
    return v0;
}
