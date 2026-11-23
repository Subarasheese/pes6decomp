/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Process_Create(s32, s32, s32, s32, s32);
void Pes6Process_Destroy(s32, s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Process_GetWork(s32);
void Pes6Process_Unlink(s32);
void func_001BBC50(s32, s32, s32, s32);
void func_001F1EA0(s32, s32, s32, s32);
s32 func_001F1F10(s32, s32, s32, s32);
s32 func_001F2050(s32, s32, s32, s32);
void func_001F2290(s32, s32);
s32 func_001F2330(s32, s32, s32, s32);
void func_001F3C80(s32);
void func_001F3D10(s32, s32);
void func_001F3D80(s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00214540(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    if (s1 == 0) goto L_002145C0;
    s2 = (*(volatile s32 *) (u32) (s1 + 4));
    if (s2 == 0) goto L_002145C0;
    if (s2 == 0) goto L_002145C0;
L_00214570:;
    v0 = (*(volatile s32 *) (u32) s2);
    if (v0 == 0) goto L_00214580;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0;
L_00214580:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    if (v0 == 0) goto L_00214590;
    (*(volatile u32 *) (u32) v0) = (u32) 0;
L_00214590:;
    a0 = (*(volatile s32 *) (u32) (s2 + 1440)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s2 + 1424)); func_001F1EA0(a0, a1, a2, a3);
    s0 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (*(volatile s32 *) (u32) (s2 + 1444)); Pes6Process_Unlink(a0);
    a0 = (*(volatile s32 *) (u32) (s2 + 1444)); Pes6Process_Destroy(a0, a1, a2, a3, a4, a5, a6, a7);
    { s32 c_ = s0 != 0; s2 = s0; if (c_) goto L_00214570; }
L_002145C0:;
    a0 = (s32) 0x210000U;
    a1 = (s32) 0x210000U;
    a2 = (s32) 0x210000U;
    a5 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) a0 + 0x11c0U);
    a1 = (s32) ((u32) a1 + 0x11e0U);
    a2 = (s32) ((u32) a2 + 0x1160U);
    a3 = 1456;
    a4 = 0;
    a5 = (s32) ((u32) a5 + 0x44d0U); v0 = Pes6Process_Create(a0, a1, a2, a3, a4);
    s0 = v0;
    if (s0 != 0) { a0 = s0; goto L_00214600; }
    v0 = 0; goto L_00214708;
L_00214600:;
    func_001BBC50(a0, a1, a2, a3);
    a0 = s0; v0 = Pes6Process_GetWork(a0);
    (*(volatile u32 *) (u32) (v0 + 1444)) = (u32) s0;
    s0 = v0;
    { s32 c_ = s1 == 0; (*(volatile u32 *) (u32) v0) = (u32) s1; if (c_) goto L_00214624; }
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) s0;
L_00214624:;
    v0 = func_001F1F10(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 1424)) = (u32) v0;
    v0 = (s32) 0xc3680000U;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v0;
    v0 = (s32) 0xc32a0000U;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 1424));
    a1 = 1; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 1424));
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    v0 = (s32) 0x41200000U;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v0;
    s2 = 0;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    s1 = s0;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) 0;
L_00214680:;
    a0 = (*(volatile s32 *) (u32) (s0 + 1424)); v0 = func_001F2050(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 1428)) = (u32) v0;
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 1428));
    a1 = 0; func_001F3D10(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00214680; }
    a0 = (*(volatile s32 *) (u32) (s0 + 1432)); v0 = func_001F2330(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 1436)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F2290(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 1436));
    a1 = 1; func_001F3D10(a0, a1);
    v0 = (s32) 0x45030000U;
    v0 = v0 | 0x4000;
    f12.i = (s32) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 1428)); func_001F3C80(a0);
    v0 = (s32) 0x45030000U;
    v0 = v0 | 0x2000;
    f12.i = (s32) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 1432)); func_001F3C80(a0);
    v0 = s0;
L_00214708:;
    return v0;
}
