/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00293620(s32, s32, s32, s32);

s32 func_0099D910(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 hi = 0, lo = 0;

    a2 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + 0x2980U);
    a3 = (*(volatile u8 *) (u32) (a0 + 18));
    s0 = a0;
    v1 = (*(volatile u8 *) (u32) (a0 + 17));
    a1 = (*(volatile u8 *) (u32) (s0 + 16));
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
    a0 = (s32) ((u32) v0 + 0x68U); v0 = func_00293620(a0, a1, a2, a3);
    a3 = (*(volatile u8 *) (u32) (s0 + 18));
    a2 = (s32) 0x590000U;
    v1 = (s32) 0x66660000U;
    a1 = (*(volatile u8 *) (u32) (s0 + 17));
    a2 = (s32) ((u32) a2 + 0x2980U);
    v1 = v1 | 0x6667;
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) a3 << 4);
    a3 = (s32) ((u32) a0 - (u32) a3);
    a0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a3 << 3);
    a3 = (s32) ((u32) a0 - (u32) a3);
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a1 = (s32) ((u32) a3 << 8);
    a0 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a0 + 127));
    a0 = a0 & 0x7f;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a0 >> 31);
    v1 = hi;
    v1 = (s32) v1 >> 2;
    v1 = (s32) ((u32) v1 + (u32) a0);
    at = (u64) v1 < (u64) (s64) 6;
    if (at == 0) goto L_0099DA10;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffa2c0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x99da00U) goto L_0099DA00; if (t_ == 0x99da04U) goto L_0099DA04; if (t_ == 0x99da08U) goto L_0099DA08; if (t_ == 0x99da0cU) goto L_0099DA0C; }
L_0099DA00:;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
L_0099DA04:;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
L_0099DA08:;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
L_0099DA0C:;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
L_0099DA10:;
    if (v0 < 0) { v0 = 0; goto L_0099DA18; }
L_0099DA18:;
    at = v0 < 10;
    if (at != 0) goto L_0099DA28;
    v0 = 9;
L_0099DA28:;
    v0 = v0 & 0xff;
    return v0;
}
