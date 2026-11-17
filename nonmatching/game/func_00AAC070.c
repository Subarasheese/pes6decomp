/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00A14EC0(s64, s64);
void func_00AABA00(s64, s64, s64, s64, f32, f32);

void func_00AAC070(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;

    s0 = a0;
    a1 = s0; v0 = func_00A14EC0(a0, a1);
    if (v0 == 0) goto L_00AAC0A8;
    v1 = (*(volatile s32 *) (u32) (s0 + 276));
    at = (u64) v1 < (u64) (s64) 289;
    if (at != 0) goto L_00AAC0A8;
L_00AAC0A0:;
    goto L_00AAC144;
L_00AAC0A8:;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a1 = (s32) 0x590000U;
    v0 = (s32) 0xb30f0000U;
    a0 = (*(volatile u8 *) (u32) (s0 + 17));
    a1 = (s32) ((u32) a1 + 0x2980U);
    v0 = v0 | 0x6353;
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 140));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 58);
    a0 = (s32) ((u32) v1 + 0x94U);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) a0 - (u32) v1);
    a1 = (s32) ((u32) v1 << 2);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a1 >> 31);
    v0 = hi;
    a0 = s0;
    a2 = 1;
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) v0 >> 7;
    a1 = (s32) ((u32) v0 + (u32) v1); func_00AABA00(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00AAC0A0;
L_00AAC144:;
    return;
}
