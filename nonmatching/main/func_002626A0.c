/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00221150(void);
s64 func_00263170(void);
void func_009A6990(s64, s64);
s64 func_009A6D40(void);
void func_00B293C0(s64);

void func_002626A0(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 hi = 0, lo = 0;

    s2 = a0;
    v0 = s2 & 0xffff;
    if (v0 != 0) goto L_002626C4;
    s2 = (s64) ((u64) 0 + (u64) (s64) 10);
L_002626C4:;
    s0 = s2 & 0xffff;
    { s32 c_ = s0 != 0; s1 = s0; if (c_) goto L_002626D4; }
    s1 = (s64) ((u64) 0 + (u64) (s64) 10);
L_002626D4:;
    v0 = func_00263170();
    if (v0 == 0) { v0 = 0; goto L_002626EC; }
    v0 = func_00221150();
L_002626EC:;
    (*(volatile u16 *) (u32) (v0 + 12)) = (u16) s1;
    a0 = s2; func_00B293C0(a0);
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7638));
    if (v1 == 0) { ; goto L_00262748; }
    v0 = func_009A6D40();
    v1 = (s32) 0x590000U;
    a0 = (s32) 0x66660000U;
    a1 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = a0 | 0x6667;
    a0 = (s32) ((u32) v0 + 0x8U);
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v0 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    a1 = (s32) ((u32) v0 + (u32) v1); func_009A6990(a0, a1);
L_00262748:;
    return;
}
