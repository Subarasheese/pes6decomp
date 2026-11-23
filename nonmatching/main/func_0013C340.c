/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00104688(s32, s32, s32, s32);
s32 func_00129BA0(s32, s32, s32, s32);
void func_0013C560(s32, s32);

void func_0013C340(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x500000U;
    s5 = a0;
    a2 = (*(volatile s32 *) (u32) (v1 + -11904));
    v1 = 2;
    { s32 c_ = a2 == v1; s4 = a1; if (c_) goto L_0013C3A4; }
    v1 = 1;
    if (a2 == v1) goto L_0013C394;
    if (a2 == 0) goto L_0013C508;
    goto L_0013C508;
L_0013C394:;
    func_0013C560(a0, a1);
    goto L_0013C508;
L_0013C3A4:;
    v0 = func_00129BA0(a0, a1, a2, a3);
    s1 = (s32) 0x500000U;
    s3 = v0;
    s2 = -4;
    s1 = (s32) ((u32) s1 + 0xffffd170U);
    s0 = (s32) ((u32) sp + 0x78U);
L_0013C3C0:;
    f0.f = (*(volatile f32 *) (u32) (s1 + 48));
    v0 = (s32) 0x370000U;
    a2 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = s3;
    a2 = (s32) ((u32) a2 + 0x6230U);
    a3 = 1;
    (*(volatile f32 *) (u32) (v0 + 25144)) = f0.f; func_00104688(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = v0 < 9;
    if (v0 != 0) { v0 = 1; goto L_0013C510; }
L_0013C3F8:;
    v0 = (*(volatile s32 *) (u32) s0);
    at = 0xfff8;
    at = v0 < at;
    if (at == 0) goto L_0013C518;
L_0013C410:;
    v0 = (*(volatile s32 *) (u32) s0);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 3;
    (*(volatile u32 *) (u32) (s1 + 20)) = (u32) v0;
    { s32 c_ = at != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0013C3C0; }
    a0 = s5;
    a1 = s4; func_0013C560(a0, a1);
    a2 = (s32) 0x500000U;
    a0 = (s32) 0x500000U;
    f1.i = (s32) 0;
    a4 = 2;
    a2 = (s32) ((u32) a2 + 0xffffd188U);
    a0 = (s32) ((u32) a0 + 0xffffd180U);
L_0013C44C:;
    v1 = (*(volatile s32 *) (u32) (a2 + 112));
    if (v1 == 0) goto L_0013C4F8;
    f2.f = (*(volatile f32 *) (u32) (a2 + 48));
    f0.f = (*(volatile f32 *) (u32) (a2 + 140));
    f2.f = f2.f + f0.f;
    fcc = f2.f < f1.f;
    if (!fcc) goto L_0013C478;
    f2.i = f1.i;
L_0013C478:;
    a1 = (*(volatile s32 *) (u32) (a2 + 112));
    a3 = (s32) ((u32) a4 + 0xffffffffU);
    v1 = a3 < -4;
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (a2 + 112)) = (u32) a1;
    { s32 c_ = v1 != 0; (*(volatile f32 *) (u32) (a2 + 48)) = f2.f; if (c_) goto L_0013C4C0; }
    v1 = (s32) ((u32) a3 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
L_0013C4A0:;
    f0.f = (*(volatile f32 *) (u32) (v1 + 48));
    fcc = f0.f < f2.f;
    if (fcc) goto L_0013C528;
L_0013C4B0:;
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    at = a3 < -4;
    { s32 c_ = at == 0; v1 = (s32) ((u32) v1 + 0xfffffffcU); if (c_) goto L_0013C4A0; }
L_0013C4C0:;
    a1 = (s32) ((u32) a4 + 0x1U);
    at = a1 < 3;
    if (at == 0) goto L_0013C4F8;
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
L_0013C4D8:;
    f0.f = (*(volatile f32 *) (u32) (v1 + 48));
    fcc = f0.f <= f2.f;
    if (!fcc) goto L_0013C530;
L_0013C4E8:;
    a1 = (s32) ((u32) a1 + 0x1U);
    at = a1 < 3;
    { s32 c_ = at != 0; v1 = (s32) ((u32) v1 + 0x4U); if (c_) goto L_0013C4D8; }
L_0013C4F8:;
    a4 = (s32) ((u32) a4 + 0xffffffffU);
    at = a4 < -4;
    { s32 c_ = at == 0; a2 = (s32) ((u32) a2 + 0xfffffffcU); if (c_) goto L_0013C44C; }
L_0013C508:;
    goto L_0013C538;
L_0013C510:;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_0013C3F8;
L_0013C518:;
    v0 = 0xffff;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_0013C410;
L_0013C528:;
    (*(volatile f32 *) (u32) (v1 + 48)) = f2.f; goto L_0013C4B0;
L_0013C530:;
    (*(volatile f32 *) (u32) (v1 + 48)) = f2.f; goto L_0013C4E8;
L_0013C538:;
    return;
}
