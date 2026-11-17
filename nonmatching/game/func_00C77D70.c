/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DF420(s64, s64);
void func_001DF4F0(s64, s64);
s64 func_002F96F0(s64, s64);
void func_002FA790(s64, s64, s64, s64, f32, f32);
void func_00C77F00(s64, s64, s64, s64);

void func_00C77D70(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v1 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffbe10U);
    a1 = (*(volatile s32 *) (u32) (gp + -19260));
    a0 = (s32) ((u32) a1 << 5);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 108));
    v1 = v1 & 0x1;
    if (v1 != 0) { ; goto L_00C77EF0; }
    v1 = (s32) 0xcd0000U;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0xffffbe3cU);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    (*(volatile u32 *) (u32) (v1 + 8)) = (u32) v0;
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) v0;
    (*(volatile u32 *) (u32) (v1 + 24)) = (u32) v0; func_00C77F00(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 4; v0 = func_002F96F0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
    a1 = v0;
    v0 = (s32) 0xcd0000U;
    a2 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe14U);
    a2 = (s32) ((u32) a2 + 0xffff8720U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a3 = 2; func_002FA790(a0, a1, a2, a3, f12.f, f13.f);
    s0 = 0;
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
L_00C77E30:;
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = s0; v0 = func_002F96F0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_001DF4F0(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 2;
    if (at != 0) { a0 = (*(volatile s32 *) (u32) (gp + -19260)); goto L_00C77E30; }
    s0 = 0;
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
L_00C77E78:;
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = s0; v0 = func_002F96F0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 255; func_001DF420(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 2;
    if (at != 0) { a0 = (*(volatile s32 *) (u32) (gp + -19260)); goto L_00C77E78; }
    a3 = (*(volatile s32 *) (u32) (gp + -19260));
    a1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 + 0xffffbe10U);
    v1 = -2;
    a0 = (s64) ((u64) 0 + (u64) (s64) 1);
    a2 = (s32) ((u32) a3 << 5);
    a2 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a2 << 2);
    a2 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile u8 *) (u32) (a2 + 108));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a2 + 108)) = (u8) v1;
L_00C77EF0:;
    return;
}
