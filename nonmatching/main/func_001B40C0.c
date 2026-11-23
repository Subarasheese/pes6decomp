/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s64);
s64 func_001454C0(s64);
void func_0014EAE0(s64, s64);
void func_0014F2F0(s64, s64, s64, s64, s64);
s64 func_001515F0(s64, s64, s64, s64, s64, s64);
void func_001CDAD0(s64);

void func_001B40C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 hi = 0, lo = 0;

    v0 = 3;
    s1 = a0;
    s2 = (*(volatile s32 *) (u32) a0);
    s0 = (*(volatile s32 *) (u32) (a0 + 68));
    s3 = (*(volatile s32 *) (u32) (a0 + 4));
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s2 / (s32) v0); hi = (s32) ((s32) s2 % (s32) v0); lo = q_; }
    v1 = hi;
    a0 = s0;
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    s5 = (s32) ((u32) v0 << 1); func_001CDAD0(a0);
    v0 = (s32) 0x3a0000U;
    v1 = (s32) ((u32) s3 << 1);
    v0 = (s32) ((u32) v0 + 0xffff8310U);
    s3 = (s32) ((u32) s0 + 0x4U);
    s4 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x55550000U;
    v0 = v0 | 0x5556;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) s2 >> 31);
    v0 = hi;
    s2 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) s2 + 0x514U); v0 = func_001454C0(a0);
    a0 = v0;
    a2 = (s64) ((u64) s5 << 48);
    v0 = (*(volatile s32 *) (u32) s3);
    a2 = a2 >> 48;
    a4 = (*(volatile s16 *) (u32) s4);
    a1 = (*(volatile s32 *) (u32) v0);
    a3 = 0; func_0014F2F0(a0, a1, a2, a3, a4);
    v0 = (*(volatile s32 *) (u32) s0);
    at = v0 < 2;
    if (at != 0) goto L_001B41D4;
    v0 = (*(volatile s32 *) (u32) s3);
    s0 = (*(volatile s32 *) (u32) (v0 + 4));
    if (s0 == 0) goto L_001B41D4;
    a0 = (s32) ((u32) s2 + 0x517U); v0 = func_001454C0(a0);
    { s32 c_ = s5 >= 0; v1 = (s32) s5 >> 2; if (c_) goto L_001B41A8; }
    v1 = (s32) ((u32) s5 + 0x3U);
    v1 = (s32) v1 >> 2;
L_001B41A8:;
    a4 = (*(volatile s16 *) (u32) s4);
    a2 = (s64) ((u64) v1 << 48);
    a2 = a2 >> 48;
    a0 = v0;
    a1 = s0;
    a3 = 0; func_0014F2F0(a0, a1, a2, a3, a4);
L_001B41C4:;
    a0 = (*(volatile s32 *) (u32) (s1 + 68)); Pes6Heap_Free(a0);
    goto L_001B4248;
L_001B41D4:;
    a0 = 0;
    a1 = 1;
    a2 = 2;
    a3 = 128;
    a4 = 64;
    a5 = 0; v0 = func_001515F0(a0, a1, a2, a3, a4, a5);
    s0 = v0;
    v0 = (*(volatile s32 *) (u32) s3);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = s0; func_0014EAE0(a0, a1);
    a0 = (s32) ((u32) s2 + 0x517U); v0 = func_001454C0(a0);
    { s32 c_ = s5 >= 0; v1 = (s32) s5 >> 2; if (c_) goto L_001B421C; }
    v1 = (s32) ((u32) s5 + 0x3U);
    v1 = (s32) v1 >> 2;
L_001B421C:;
    a4 = (*(volatile s16 *) (u32) s4);
    a2 = (s64) ((u64) v1 << 48);
    a2 = a2 >> 48;
    a0 = v0;
    a1 = s0;
    a3 = 0; func_0014F2F0(a0, a1, a2, a3, a4);
    a0 = s0; Pes6Heap_Free(a0);
    goto L_001B41C4;
L_001B4248:;
    return;
}
