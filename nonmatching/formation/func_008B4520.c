/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
s32 func_0023D820(void);
s32 func_008B4130(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008B4920(void);
s32 func_008BC3B0(void);
s32 func_008BF0E0(void);
void func_008CB190(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008E6650(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_008B4520(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    v0 = (s32) ((u32) gp + 0xffffac90U);
    v1 = (*(volatile u8 *) (u32) a0);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v1);
    { s32 c_ = v0 == 0; s1 = a0; if (c_) goto L_008B4550; }
    v0 = 0; goto L_008B4664;
L_008B4550:;
    v0 = 1;
    (*(volatile u8 *) (u32) v1) = (u8) v0; v0 = func_008BF0E0();
    if (v0 != 0) goto L_008B456C;
    v0 = 0; goto L_008B4664;
L_008B456C:;
    v0 = func_008BC3B0();
    if (v0 == 0) goto L_008B4584;
    v0 = 0; goto L_008B4664;
L_008B4584:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = 14;
    { s32 c_ = v1 == v0; s0 = (*(volatile u16 *) (u32) (s1 + 520)); if (c_) goto L_008B45BC; }
    v0 = func_0023D820();
    v1 = 1;
    if (v0 == v1) { a0 = s0; goto L_008B45C0; }
    v0 = func_008B4920();
    if (v0 == 0) goto L_008B45D0;
L_008B45BC:;
    a0 = s0;
L_008B45C0:;
    v0 = Pes6Team_ResolveSpecialId(a0);
    s0 = v0 & 0xffff; goto L_008B45FC;
L_008B45D0:;
    v0 = func_008B4920();
    if (v0 == 0) { a2 = (*(volatile s32 *) (u32) (s1 + 104)); goto L_008B4600; }
    a0 = s0; v0 = Pes6Team_ResolveSpecialId(a0);
    v1 = v0 & 0xffff;
    v0 = 221;
    if (v1 != v0) goto L_008B45FC;
    s0 = v0 & 0xffff;
L_008B45FC:;
    a2 = (*(volatile s32 *) (u32) (s1 + 104));
L_008B4600:;
    a0 = s0 & 0xffff;
    a1 = 0;
    v1 = 410;
    v0 = a1 & 0xff;
L_008B4610:;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) a2 + (u32) v0);
    v0 = (*(volatile u16 *) (u32) v0);
    if (a0 != v0) { v0 = (s32) ((u32) a1 + 0x1U); goto L_008B4650; }
    a0 = s1;
    a2 = 10; v0 = func_008B4130(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s1 + 0xb0cU);
    a1 = (s32) ((u32) s1 + 0x208U); func_008CB190(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s1 + 0x129cU);
    a1 = (s32) ((u32) s1 + 0x208U); func_008E6650(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 1; goto L_008B4664;
L_008B4650:;
    a1 = v0 & 0xff;
    v0 = a1 < 10;
    if (v0 != 0) { v0 = a1 & 0xff; goto L_008B4610; }
    v0 = 0;
L_008B4664:;
    return v0;
}
