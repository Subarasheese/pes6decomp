/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);

s32 func_00963340(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    a2 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + 0x2980U);
    a3 = (*(volatile u8 *) (u32) (a0 + 18));
    a1 = 30;
    v1 = (*(volatile u8 *) (u32) (a0 + 17));
    v0 = (s32) ((u32) a3 << 4);
    a0 = (s32) ((u32) v0 - (u32) a3);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) v0 - (u32) a0);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a0 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a2 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 116));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21378));
    at = (u64) v1 < (u64) (s64) 6;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_00963438; }
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffff9c40U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x9633c8U) goto L_009633C8; if (t_ == 0x9633e4U) goto L_009633E4; if (t_ == 0x963410U) goto L_00963410; if (t_ == 0x963438U) goto L_00963438; }
L_009633C8:;
    a0 = 50;
    { s32 c_ = v0 >= 0; v1 = (s32) v0 >> 2; if (c_) goto L_009633DC; }
    v0 = (s32) ((u32) v0 + 0x3U);
    v1 = (s32) v0 >> 2;
L_009633DC:;
    a1 = (s32) ((u32) a0 - (u32) v1); goto L_00963438;
L_009633E4:;
    v1 = (s32) 0x66660000U;
    a0 = 30;
    v1 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v0 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) ((u32) a0 - (u32) v0); goto L_00963438;
L_00963410:;
    v1 = (s32) 0x66660000U;
    a0 = 10;
    v1 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v0 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) ((u32) a0 - (u32) v0);
L_00963438:;
    v0 = a1;
    return v0;
}
