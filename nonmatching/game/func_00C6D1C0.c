/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002D55B0(s32);
void func_002D5630(s32, s32);
s32 func_002D5870(s32);
void func_002D5930(s32, s32, s32);
s32 func_00C6D340(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00C6D1C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v0 = (s32) 0xcd0000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -17540));
    at = (u64) s0 < (u64) (s64) 6;
    if (at == 0) goto L_00C6D31C;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0x4b80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xc6d200U) goto L_00C6D200; if (t_ == 0xc6d21cU) goto L_00C6D21C; if (t_ == 0xc6d24cU) goto L_00C6D24C; if (t_ == 0xc6d264U) goto L_00C6D264; if (t_ == 0xc6d2d4U) goto L_00C6D2D4; if (t_ == 0xc6d2f0U) goto L_00C6D2F0; }
L_00C6D200:;
    v0 = func_00C6D340(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_00C6D31C;
    s0 = v1; goto L_00C6D31C;
L_00C6D21C:;
    a0 = (s32) 0xcd0000U;
    s1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffbb5cU); v0 = func_002D5870(a0);
    if (v0 != 0) { v0 = 1; goto L_00C6D23C; }
    s1 = 1;
    v0 = 1;
L_00C6D23C:;
    if (s1 != v0) goto L_00C6D31C;
    s0 = 2; goto L_00C6D31C;
L_00C6D24C:;
    a0 = (s32) 0xcd0000U;
    a1 = 120;
    a0 = (s32) ((u32) a0 + 0xffffbb70U); func_002D5630(a0, a1);
    s0 = 3; goto L_00C6D31C;
L_00C6D264:;
    a0 = (s32) 0xcd0000U;
    s1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffbb70U); v0 = func_002D55B0(a0);
    v1 = 1;
    if (v0 != v1) { v1 = 1; goto L_00C6D288; }
    s1 = v1;
    v1 = 1;
L_00C6D288:;
    if (s1 != v1) goto L_00C6D31C;
    a0 = (s32) 0xcd0000U;
    a2 = 0;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffbb50U);
L_00C6D2A0:;
    v0 = (*(volatile s32 *) (u32) (a0 + 68));
    if (v0 == 0) goto L_00C6D2B0;
    a2 = v1;
L_00C6D2B0:;
    a1 = (s32) ((u32) a1 + 0x1U);
    at = a1 < 2;
    { s32 c_ = at != 0; a0 = (s32) ((u32) a0 + 0x18U); if (c_) goto L_00C6D2A0; }
    v0 = 1;
    if (a2 != v0) goto L_00C6D31C;
    s0 = 4; goto L_00C6D31C;
L_00C6D2D4:;
    a0 = (s32) 0xcd0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffbb5cU);
    a2 = 8; func_002D5930(a0, a1, a2);
    s0 = 5; goto L_00C6D31C;
L_00C6D2F0:;
    a0 = (s32) 0xcd0000U;
    s1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffbb5cU); v0 = func_002D5870(a0);
    if (v0 != 0) { v0 = 1; goto L_00C6D310; }
    s1 = 1;
    v0 = 1;
L_00C6D310:;
    if (s1 != v0) goto L_00C6D31C;
    s0 = 0;
L_00C6D31C:;
    v1 = (s32) 0xcd0000U;
    v0 = 1;
    (*(volatile u32 *) (u32) (v1 + -17540)) = (u32) s0;
    return;
}
