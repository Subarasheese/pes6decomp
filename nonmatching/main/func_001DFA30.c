/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001DFAD0(s32, s32, s32, s32, s32, f32, f32);
s32 func_001EB1D0(s32, s32, s32, s32);
s32 func_001EC0F0(void);
s32 func_001EC4C0(s32, s32, s32);
s32 func_001EC540(s32, s32, s32, s32);

s32 func_001DFA30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 v0 = 0, s0 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };

    if (a2 == 0) goto L_001DFA9C;
    a3 = 0;
    a4 = 0; v0 = func_001DFAD0(a0, a1, a2, a3, a4, f12.f, f13.f);
    s0 = v0;
    if (s0 == 0) goto L_001DFA94;
    v0 = func_001EC0F0();
    (*(volatile u8 *) (u32) (s0 + 119)) = (u8) v0; v0 = func_001EC540(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 88)) = (u32) v0;
    a2 = (s32) 0x1e0000U;
    a0 = (*(volatile s32 *) (u32) (s0 + 88));
    a1 = s0;
    a2 = (s32) ((u32) a2 + 0xffffea50U); v0 = func_001EC4C0(a0, a1, a2);
    a1 = (s32) 0x1e0000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0x1be0U); v0 = func_001EB1D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 92)) = (u32) v0;
L_001DFA94:;
    v0 = s0; goto L_001DFAA0;
L_001DFA9C:;
    v0 = 0;
L_001DFAA0:;
    return v0;
}
