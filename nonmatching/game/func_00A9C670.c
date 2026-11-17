/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B30B0(s64, s64);
s64 func_00A13E50(s64, s64);
s64 func_00A1FE80(s64, s64);
s64 func_00BC03A0(s64, s64, s64, s64);

s64 func_00A9C670(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) (v0 + 80));
    { s32 c_ = v0 != 0; s1 = a0; if (c_) goto L_00A9C6A8; }
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    at = v0 < 4353;
    if (at != 0) goto L_00A9C6A8;
    goto L_00A9C828;
L_00A9C6A8:;
    a0 = (*(volatile u16 *) (u32) (s1 + 38));
    a1 = (*(volatile u16 *) (u32) (s1 + 40));
    s0 = 0; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 17;
    if (at == 0) { v0 = (*(volatile s32 *) (u32) (s1 + 28)); goto L_00A9C804; }
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    a0 = (*(volatile u16 *) (u32) (v0 + 48)); v0 = func_00BC03A0(a0, a1, a2, a3);
    v1 = 37;
    if (v0 == v1) goto L_00A9C818;
    v1 = 36;
    if (v0 == v1) goto L_00A9C818;
    a3 = (*(volatile u8 *) (u32) (s1 + 18));
    a2 = (s32) 0x590000U;
    v1 = (s32) 0xb30f0000U;
    a1 = (*(volatile u8 *) (u32) (s1 + 17));
    a2 = (s32) ((u32) a2 + 0x2980U);
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = v1 | 0x6353;
    a0 = (s32) ((u32) a3 << 4);
    a3 = (s32) ((u32) a0 - (u32) a3);
    a0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a3 << 3);
    a3 = (s32) ((u32) a0 - (u32) a3);
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a1 = (s32) ((u32) a3 << 8);
    a0 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a0 + 140));
    a0 = (s64) ((u64) a0 << 56);
    a0 = (s64) ((u64) a0 >> 58);
    a1 = (s32) ((u32) a0 + 0x94U);
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a1 - (u32) a0);
    a1 = (s32) ((u32) a0 << 4);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a1 >> 31);
    v1 = hi;
    f0.f = (*(volatile f32 *) (u32) (v0 + 2044));
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) v1 >> 7;
    v1 = (s32) ((u32) v1 + (u32) a0);
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_00A9C7C8;
    f0.f = (*(volatile f32 *) (u32) (v0 + 48));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00A9C7A4; }
L_00A9C7A4:;
    at = v0 < 3009;
    if (at != 0) goto L_00A9C7C8;
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    a1 = (*(volatile s32 *) (u32) (s1 + 88));
    a0 = (s32) ((u32) v0 + 0x400U); v0 = func_00A13E50(a0, a1);
    a1 = (*(volatile u8 *) (u32) (s1 + 92)); goto L_00A9C7DC;
L_00A9C7C8:;
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    a1 = (*(volatile s32 *) (u32) (s1 + 88));
    a0 = (s32) ((u32) v0 + 0x600U); v0 = func_00A13E50(a0, a1);
    a1 = (*(volatile u8 *) (u32) (s1 + 92));
L_00A9C7DC:;
    a0 = v0;
    v1 = 5376;
    v0 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 2);
    a1 = (s32) ((u32) v1 - (u32) v0); v0 = func_00A1FE80(a0, a1);
    s0 = v0;
L_00A9C7FC:;
    v0 = s0; goto L_00A9C824;
L_00A9C804:;
    a1 = 4352;
    a0 = (s32) ((u32) v0 + 0x200U); v0 = func_00A1FE80(a0, a1);
    goto L_00A9C824;
L_00A9C818:;
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    s0 = (s32) ((u32) s0 + (u32) v0); goto L_00A9C7FC;
L_00A9C824:;
L_00A9C828:;
    return v0;
}
