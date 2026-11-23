/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void Pes6Heap_Free(s32);
void func_00259960(void);
void func_00259C10(s32, s32);
void func_00259C80(s32, s32);
void func_00259CE0(s32);
s32 func_0025E0E0(s32);
void func_0025E100(s32, s32);
void memcpy(s32, s32, s32);

void func_00259320(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi1 = 0, lo1 = 0;
    s32 hi = 0, lo = 0;

    a0 = 7;
    v0 = func_0025E0E0(a0);
    v1 = 2;
    if (v0 != v1) goto L_002594C4;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffcf44U); func_00259CE0(a0);
    a0 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffcf40U);
    a1 = (s32) ((u32) a1 + 0xffffcf44U); func_00259C80(a0, a1);
    a0 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffcf48U);
    a1 = (s32) ((u32) a1 + 0xffffcf4cU); func_00259C10(a0, a1);
    v0 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0xffffcf4cU);
    a0 = (s32) ((u32) a0 + 0xffffcf48U);
    a5 = (*(volatile s16 *) (u32) v0);
    a1 = (s32) 0x590000U;
    a3 = (*(volatile s16 *) (u32) (v0 + 2));
    v1 = (s32) 0x590000U;
    a4 = (*(volatile s16 *) (u32) a0);
    a2 = (*(volatile s16 *) (u32) (a0 + 2));
    v0 = (s32) 0x590000U;
    a4 = (s32) ((u32) a5 - (u32) a4);
    a0 = (*(volatile s32 *) (u32) (v0 + -12448));
    v0 = (s32) ((u32) a3 - (u32) a2);
    a2 = (s32) ((u32) a4 + 0x1U);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u16 *) (u32) (a1 + -12464)) = (u16) a2;
    { s32 c_ = a0 == 0; (*(volatile u16 *) (u32) (v1 + -12462)) = (u16) v0; if (c_) goto L_002593E8; }
    Pes6Heap_Free(a0);
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -12448)) = (u32) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -12444)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + -12440)) = (u32) 0;
L_002593E8:;
    v0 = (s32) 0x590000U;
    a1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -12452));
    a0 = (s32) ((u32) v0 << 1); v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -12448)) = (u32) v0;
    a3 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (a0 + -12444)) = (u32) v0;
    a2 = (*(volatile s32 *) (u32) (v1 + -12452));
    a0 = v0;
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) a2);
    a1 = (*(volatile s32 *) (u32) (v1 + -12460));
    (*(volatile u32 *) (u32) (a3 + -12440)) = (u32) v0; memcpy(a0, a1, a2);
    s1 = (s32) 0x590000U;
    s0 = (s32) 0x590000U;
    s1 = (s32) ((u32) s1 + 0xffffcf48U);
    s0 = (s32) ((u32) s0 + 0xffffcf4cU);
    s2 = (*(volatile s16 *) (u32) (s1 + 2));
    v0 = (*(volatile s16 *) (u32) (s0 + 2));
    at = v0 < s2;
    if (at != 0) goto L_002594B0;
L_00259454:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (s1 + 2));
    a2 = (*(volatile s16 *) (u32) (v0 + -12464));
    v0 = (s32) ((u32) s2 - (u32) v1);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -12440));
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) v1 + (u32) a0);
    v0 = (*(volatile s16 *) (u32) (v0 + -12456));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s2; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a1 = lo1; }
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -12460));
    v0 = (*(volatile s16 *) (u32) s1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a1 = (s32) ((u32) v1 + (u32) v0); memcpy(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (s0 + 2));
    s2 = (s32) ((u32) s2 + 0x1U);
    at = v0 < s2;
    if (at == 0) goto L_00259454;
L_002594B0:;
    func_00259960();
    a0 = 7;
    a1 = 3; func_0025E100(a0, a1);
L_002594C4:;
    return;
}
