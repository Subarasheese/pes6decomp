/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s64, s64);
void func_002D5610(s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);
void func_00C77D70(s64, s64, s64, s64, f32, f32);
void func_00C88DD0(s64, s64, s64, s64);
void func_00C88EC0(s64, s64, s64);
void memset(s64, s64, s64);

void func_00C77490(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffbe10U);
    a1 = 0;
    a2 = 124;
    (*(volatile u32 *) (u32) (gp + -19260)) = (u32) 0; memset(a0, a1, a2);
    a3 = (*(volatile s32 *) (u32) (gp + -19260));
    v0 = (s32) 0x590000U;
    a1 = (s32) 0xcd0000U;
    s0 = 0;
    v1 = (s32) ((u32) gp + 0xffffb4c8U);
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    a2 = (s32) ((u32) a3 << 5);
    a0 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) a2 - (u32) a3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) ((u32) a1 + 0xffffbe10U);
    a0 = (s32) ((u32) a2 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    at = s0 < 4;
    (*(volatile u32 *) (u32) v1) = (u32) a0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (a0 + 104)) = (u32) v0; if (c_) goto L_00C77560; }
    a3 = (*(volatile s32 *) (u32) (gp + -19260));
L_00C77500:;
    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffbe10U);
    v0 = (s32) ((u32) s0 << 3);
    v1 = -2;
    a1 = (s64) ((u64) 0 + (u64) (s64) 1);
    a2 = (s32) ((u32) a3 << 5);
    a2 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a2 << 2);
    a3 = (s32) ((u32) a0 + (u32) a2);
    v0 = (s32) ((u32) a3 + (u32) v0);
    a2 = (s32) ((u32) a3 + (u32) s0);
    a0 = (s32) ((u32) v0 + 0x48U);
    (*(volatile u8 *) (u32) (a2 + 114)) = (u8) 0;
    v0 = (*(volatile u8 *) (u32) (a3 + 113));
    v0 = v0 & v1;
    v0 = v0 | a1;
    (*(volatile u8 *) (u32) (a3 + 113)) = (u8) v0;
    (*(volatile u8 *) (u32) (a2 + 118)) = (u8) 0; func_002D5610(a0);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 4;
    if (v0 != 0) { a3 = (*(volatile s32 *) (u32) (gp + -19260)); goto L_00C77500; }
L_00C77560:;
    a2 = (*(volatile s32 *) (u32) (gp + -19260));
    a0 = (s32) 0xcd0000U;
    v0 = -2;
    a0 = (s32) ((u32) a0 + 0xffffbe10U);
    v1 = 0 & 0x1;
    a1 = (s32) ((u32) a2 << 5);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a1 + 113));
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (a1 + 113)) = (u8) v0; func_00C77D70(a0, a1, a2, a3, f12.f, f13.f);
    a1 = (s32) 0xc70000U;
    a2 = (s32) 0xc70000U;
    a0 = 29;
    a1 = (s32) ((u32) a1 + 0x73a0U);
    a2 = (s32) ((u32) a2 + 0x7200U); func_00C88EC0(a0, a1, a2);
    a1 = (s32) 0xc70000U;
    a2 = (s32) 0xc70000U;
    a0 = 29;
    a1 = (s32) ((u32) a1 + 0x7120U);
    a2 = (s32) ((u32) a2 + 0x70f0U); func_00C88DD0(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (gp + -19260));
    v1 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffbe10U);
    a0 = (s32) ((u32) a1 << 5);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 108));
    v1 = v1 & 0x1;
    if (v1 == 0) goto L_00C77650;
    a0 = (*(volatile s32 *) (u32) a0); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00C77650; }
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
L_00C7760C:;
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 0; func_001D7D60(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < s0;
    if (v1 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -19260)); goto L_00C7760C; }
L_00C77650:;
    return;
}
