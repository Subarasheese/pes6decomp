/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void strcpy(s32, s32);

void func_00252590(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0;
    s32 hi1 = 0, lo1 = 0;
    s32 hi = 0, lo = 0;

    a4 = (s32) 0x580000U;
    a3 = (s32) 0x580000U;
    a2 = (s32) 0x580000U;
    a5 = (*(volatile s32 *) (u32) (a0 + 8));
    v0 = 212;
    a1 = (s32) 0x580000U;
    v1 = (s32) 0x580000U;
    a4 = (s32) ((u32) a4 + 0x50f0U);
    a6 = -1;
    a3 = (s32) ((u32) a3 + 0x50ecU);
    a2 = (s32) ((u32) a2 + 0x50f4U);
    a1 = (s32) ((u32) a1 + 0x5128U);
    v1 = (s32) ((u32) v1 + 0x512cU);
    { s64 m_ = (s64) (s32) a5 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a5 = lo; }
    a4 = (s32) ((u32) a4 + (u32) a5);
    (*(volatile u32 *) (u32) a4) = (u32) a6;
    a4 = (*(volatile s32 *) (u32) (a0 + 8));
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) v0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a4 = lo1; }
    a3 = (s32) ((u32) a3 + (u32) a4);
    (*(volatile u32 *) (u32) a3) = (u32) a6;
    a3 = (*(volatile s32 *) (u32) (a0 + 8));
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a2 = (s32) ((u32) a2 + (u32) a3);
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (*(volatile s32 *) (u32) (a0 + 8));
    a3 = (*(volatile s32 *) (u32) (a0 + 12));
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a2 = lo1; }
    a1 = (s32) ((u32) a1 + (u32) a2);
    (*(volatile u32 *) (u32) a1) = (u32) a3;
    a1 = (*(volatile s32 *) (u32) (a0 + 8));
    a2 = (*(volatile s32 *) (u32) (a0 + 16));
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u32 *) (u32) v1) = (u32) a2;
    a1 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = a1 != 0; s0 = a0; if (c_) goto L_00252830; }
L_00252630:;
    a1 = (*(volatile s32 *) (u32) (s0 + 8));
    a2 = 212;
    v1 = (s32) 0x580000U;
    v0 = (s32) 0x580000U;
    v1 = (s32) ((u32) v1 + 0x50e4U);
    v0 = (s32) ((u32) v0 + 0x5134U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) a1;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    a0 = (*(volatile s32 *) (u32) (s0 + 20));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a2; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v1 = lo1; }
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) a0;
    v0 = (*(volatile s8 *) (u32) (s0 + 24));
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (s0 + 8)); goto L_0025284C; }
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    v0 = (s32) 0x580000U;
    v0 = (s32) ((u32) v0 + 0x5138U);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) v0) = (u8) 0;
    a2 = (*(volatile s32 *) (u32) (s0 + 8));
L_00252690:;
    v0 = 212;
    t5 = (s32) 0x580000U;
    t4 = (s32) 0x580000U;
    a7 = (s32) 0x580000U;
    a6 = (s32) 0x580000U;
    a5 = (s32) 0x580000U;
    a4 = (s32) 0x580000U;
    a3 = (s32) 0x580000U;
    a1 = (s32) 0x580000U;
    a0 = (s32) 0x580000U;
    t5 = (s32) ((u32) t5 + 0x5178U);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); t6 = lo; }
    v1 = -1;
    t4 = (s32) ((u32) t4 + 0x517cU);
    a7 = (s32) ((u32) a7 + 0x5180U);
    a6 = (s32) ((u32) a6 + 0x5184U);
    a5 = (s32) ((u32) a5 + 0x5188U);
    a4 = (s32) ((u32) a4 + 0x518cU);
    a3 = (s32) ((u32) a3 + 0x5190U);
    t5 = (s32) ((u32) t5 + (u32) t6);
    a2 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) t5) = (u32) v1;
    a1 = (s32) ((u32) a1 + 0x5194U);
    t5 = (*(volatile s32 *) (u32) (s0 + 8));
    a0 = (s32) ((u32) a0 + 0x51a8U);
    a2 = (s32) ((u32) a2 + 0x5124U);
    { s64 m_ = (s64) (s32) t5 * (s64) (s32) v0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); t5 = lo1; }
    t4 = (s32) ((u32) t4 + (u32) t5);
    (*(volatile u32 *) (u32) t4) = (u32) 0;
    t4 = (*(volatile s32 *) (u32) (s0 + 8));
    { s64 m_ = (s64) (s32) t4 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); t4 = lo; }
    a7 = (s32) ((u32) a7 + (u32) t4);
    (*(volatile u32 *) (u32) a7) = (u32) 0;
    a7 = (*(volatile s32 *) (u32) (s0 + 8));
    { s64 m_ = (s64) (s32) a7 * (s64) (s32) v0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a7 = lo1; }
    a6 = (s32) ((u32) a6 + (u32) a7);
    (*(volatile u32 *) (u32) a6) = (u32) 0;
    a6 = (*(volatile s32 *) (u32) (s0 + 8));
    { s64 m_ = (s64) (s32) a6 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a6 = lo; }
    a5 = (s32) ((u32) a5 + (u32) a6);
    (*(volatile u32 *) (u32) a5) = (u32) 0;
    a5 = (*(volatile s32 *) (u32) (s0 + 8));
    a6 = (*(volatile s32 *) (u32) (s0 + 108));
    { s64 m_ = (s64) (s32) a5 * (s64) (s32) v0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a5 = lo1; }
    a4 = (s32) ((u32) a4 + (u32) a5);
    (*(volatile u32 *) (u32) a4) = (u32) a6;
    a4 = (*(volatile s32 *) (u32) (s0 + 8));
    a5 = (*(volatile s32 *) (u32) (s0 + 112));
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a3 = (s32) ((u32) a3 + (u32) a4);
    (*(volatile u32 *) (u32) a3) = (u32) a5;
    a3 = (*(volatile s32 *) (u32) (s0 + 8));
    a4 = (*(volatile s32 *) (u32) (s0 + 116));
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) v0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a3 = lo1; }
    a1 = (s32) ((u32) a1 + (u32) a3);
    (*(volatile u32 *) (u32) a1) = (u32) a4;
    a1 = (*(volatile s32 *) (u32) (s0 + 8));
    a3 = (*(volatile s32 *) (u32) (s0 + 136));
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) a0) = (u32) a3;
    a0 = (*(volatile s32 *) (u32) (s0 + 8));
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a3 = lo1; }
    a0 = (s32) ((u32) a2 + (u32) a3);
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 != v1) goto L_002527C8;
    v1 = (s32) 0x580000U;
    a1 = 3;
    v1 = (s32) ((u32) v1 + 0x50e8U);
    a0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u32 *) (u32) v1) = (u32) a1;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) a2 + (u32) v0);
    (*(volatile u32 *) (u32) v0) = (u32) a0; goto L_002527EC;
L_002527C8:;
    v1 = (s32) 0x580000U;
    a0 = 1;
    v1 = (s32) ((u32) v1 + 0x50e8U);
    v1 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u32 *) (u32) v1) = (u32) a0;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) a2 + (u32) v0);
    (*(volatile u32 *) (u32) v0) = (u32) a0;
L_002527EC:;
    a1 = (*(volatile s32 *) (u32) (s0 + 8));
    a2 = 212;
    a0 = (s32) 0x580000U;
    v1 = (s32) 0x580000U;
    a3 = (*(volatile s32 *) (u32) (s0 + 140));
    a0 = (s32) ((u32) a0 + 0x51acU);
    v1 = (s32) ((u32) v1 + 0x51b0U);
    v0 = 1;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) a0) = (u32) a3;
    a0 = (*(volatile s32 *) (u32) (s0 + 8));
    a1 = (*(volatile s32 *) (u32) (s0 + 144));
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a2; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a0 = lo1; }
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) a1; goto L_00252870;
L_00252830:;
    a0 = (*(volatile s32 *) (u32) (s0 + 8));
    v1 = (s32) 0x580000U;
    v1 = (s32) ((u32) v1 + 0x50e0U);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) v0) = (u32) a1; goto L_00252630;
L_0025284C:;
    v0 = (s32) 0x580000U;
    v0 = (s32) ((u32) v0 + 0x50e0U);
    a1 = (s32) ((u32) s0 + 0x18U);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0x58U); strcpy(a0, a1);
    a2 = (*(volatile s32 *) (u32) (s0 + 8)); goto L_00252690;
L_00252870:;
    return;
}
