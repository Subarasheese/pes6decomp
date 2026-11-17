/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002ACB00(s32, s32, s32, s32);
s32 func_00BBB8C0(s32, s32, s32, s32);

f32 func_002AC490(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;

    s1 = a0;
    s0 = a1;
    a0 = s0;
    v0 = func_002ACB00(a0, a1, a2, a3);
    at = (u64) s1 < (u64) (s64) 10;
    if (at == 0) goto L_002AC7D0;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa220U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2ac4dcU) goto L_002AC4DC; if (t_ == 0x2ac560U) goto L_002AC560; if (t_ == 0x2ac608U) goto L_002AC608; if (t_ == 0x2ac64cU) goto L_002AC64C; if (t_ == 0x2ac6dcU) goto L_002AC6DC; if (t_ == 0x2ac728U) goto L_002AC728; if (t_ == 0x2ac7bcU) goto L_002AC7BC; if (t_ == 0x2ac7c4U) goto L_002AC7C4; if (t_ == 0x2ac7ccU) goto L_002AC7CC; if (t_ == 0x2ac7d0U) goto L_002AC7D0; }
L_002AC4DC:;
    a0 = 5; v0 = func_00BBB8C0(a0, a1, a2, a3);
    v1 = 4;
    if (v0 == v1) { v0 = (s32) 0x44fa0000U; goto L_002AC554; }
    v1 = 3;
    if (v0 == v1) { v0 = (s32) 0x447a0000U; goto L_002AC548; }
    v1 = 2;
    if (v0 == v1) { v0 = (s32) 0x44480000U; goto L_002AC53C; }
    v1 = 1;
    if (v0 == v1) { v0 = (s32) 0x442f0000U; goto L_002AC530; }
    if (v0 == 0) { v0 = (s32) 0x43c80000U; goto L_002AC524; }
    f0.i = f20.i; goto L_002AC7D4;
L_002AC524:;
    f20.i = (s32) v0;
    goto L_002AC7D0;
L_002AC530:;
    f20.i = (s32) v0;
    goto L_002AC7D0;
L_002AC53C:;
    f20.i = (s32) v0;
    goto L_002AC7D0;
L_002AC548:;
    f20.i = (s32) v0;
    goto L_002AC7D0;
L_002AC554:;
    f20.i = (s32) v0;
    goto L_002AC7D0;
L_002AC560:;
    a0 = 5; v0 = func_00BBB8C0(a0, a1, a2, a3);
    v1 = 4;
    if (v0 == v1) goto L_002AC5E8;
    v1 = 3;
    if (v0 == v1) goto L_002AC5D8;
    v1 = 2;
    if (v0 == v1) goto L_002AC5C8;
    v1 = 1;
    if (v0 == v1) goto L_002AC5B8;
    if (v0 == 0) goto L_002AC5A8;
    goto L_002AC5F0;
L_002AC5A8:;
    v0 = (s32) 0x43c80000U;
    f20.i = (s32) v0;
    goto L_002AC5F0;
L_002AC5B8:;
    v0 = (s32) 0x442f0000U;
    f20.i = (s32) v0;
    goto L_002AC5F0;
L_002AC5C8:;
    v0 = (s32) 0x44480000U;
    f20.i = (s32) v0;
    goto L_002AC5F0;
L_002AC5D8:;
    v0 = (s32) 0x447a0000U;
    f20.i = (s32) v0;
    goto L_002AC5F0;
L_002AC5E8:;
    v0 = (s32) 0x44fa0000U;
    f20.i = (s32) v0;
L_002AC5F0:;
    f0.f = (*(volatile f32 *) (u32) (s0 + 8));
    fcc = f20.f == f0.f;
    if (fcc) goto L_002AC560;
    goto L_002AC7D0;
L_002AC608:;
    a0 = 100; v0 = func_00BBB8C0(a0, a1, a2, a3);
    f0.i = (s32) v0;
    v1 = (s32) 0x42c80000U;
    f2.f = (f32) f0.i;
    v0 = (s32) 0x461c0000U;
    a0 = v0 | 0x4000;
    v0 = (s32) 0x457a0000U;
    f1.i = (s32) a0;
    f0.i = (s32) v1;
    f1.f = f1.f * f2.f;
    f1.f = f1.f / f0.f;
    f0.i = (s32) v0;
    f20.f = f0.f + f1.f; goto L_002AC7D0;
L_002AC64C:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 132));
    v0 = (s32) 0x465a0000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { v0 = (s32) 0x457a0000U; goto L_002AC674; }
    (*(volatile f32 *) (u32) (s0 + 132)) = f0.f; goto L_002AC694;
L_002AC674:;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { f0.i = f1.i; goto L_002AC690; }
    goto L_002AC690;
L_002AC690:;
    (*(volatile f32 *) (u32) (s0 + 132)) = f0.f;
L_002AC694:;
    a0 = 40; v0 = func_00BBB8C0(a0, a1, a2, a3);
    f1.f = (*(volatile f32 *) (u32) (s0 + 132));
    v0 = (s32) ((u32) v0 + 0x28U);
    f0.i = (s32) v0;
    v1 = (s32) 0x442f0000U;
    f2.i = (s32) v1;
    f3.f = (f32) f0.i;
    v0 = (s32) 0x42c80000U;
    f1.f = f1.f - f2.f;
    f1.f = f1.f * f3.f;
    f0.i = (s32) v0;
    f0.f = f1.f / f0.f;
    f20.f = f2.f + f0.f; goto L_002AC7D0;
L_002AC6DC:;
    a0 = 100; v0 = func_00BBB8C0(a0, a1, a2, a3);
    f1.i = (s32) v0;
    v1 = (s32) 0x42c80000U;
    f1.f = (f32) f1.i;
    v0 = (s32) 0x447a0000U;
    f0.i = (s32) v0;
    f2.f = f0.f * f1.f;
    v0 = (s32) 0x468c0000U;
    v0 = v0 | 0xa000;
    f1.i = (s32) v1;
    f0.i = (s32) v0;
    f1.f = f2.f / f1.f;
    f20.f = f0.f + f1.f; goto L_002AC7D0;
L_002AC728:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 132));
    v0 = (s32) 0x46940000U;
    v0 = v0 | 0x7000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { v0 = (s32) 0x468c0000U; goto L_002AC750; }
    (*(volatile f32 *) (u32) (s0 + 132)) = f0.f; goto L_002AC774;
L_002AC750:;
    v0 = v0 | 0xa000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { f0.i = f1.i; goto L_002AC770; }
    goto L_002AC770;
L_002AC770:;
    (*(volatile f32 *) (u32) (s0 + 132)) = f0.f;
L_002AC774:;
    a0 = 40; v0 = func_00BBB8C0(a0, a1, a2, a3);
    f1.f = (*(volatile f32 *) (u32) (s0 + 132));
    v0 = (s32) ((u32) v0 + 0x28U);
    f0.i = (s32) v0;
    v1 = (s32) 0x442f0000U;
    f2.i = (s32) v1;
    f3.f = (f32) f0.i;
    v0 = (s32) 0x42c80000U;
    f1.f = f1.f - f2.f;
    f1.f = f1.f * f3.f;
    f0.i = (s32) v0;
    f0.f = f1.f / f0.f;
    f20.f = f2.f + f0.f; goto L_002AC7D0;
L_002AC7BC:;
    f20.f = (*(volatile f32 *) (u32) (s0 + 132)); goto L_002AC7D0;
L_002AC7C4:;
    f20.f = (*(volatile f32 *) (u32) (s0 + 128)); goto L_002AC7D0;
L_002AC7CC:;
    f20.f = (*(volatile f32 *) (u32) (s0 + 128));
L_002AC7D0:;
    f0.i = f20.i;
L_002AC7D4:;
    return f0.f;
}
