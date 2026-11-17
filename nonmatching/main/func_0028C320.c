/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0028C460(s32);

s32 func_0028C320(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[38];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (v1 + 7177));
    v1 = 5;
    if (a1 == v1) { a1 = a0 & 0xff; goto L_0028C414; }
L_0028C344:;
    a3 = a0 & 0xff;
    v0 = 139;
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    v1 = (s32) ((u32) a3 << 4);
    a0 = (s32) ((u32) v1 - (u32) a3);
    a1 = (s32) 0x590000U;
    v1 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) a1 + 0x1a90U);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a5 = (s32) ((u32) sp + 0x30U);
    v0 = (s32) 0x590000U;
    a2 = (s32) ((u32) a1 + (u32) a2);
    v0 = (s32) ((u32) v0 + 0x2980U);
    v1 = (s32) ((u32) v1 << 8);
    a1 = (s32) ((u32) v0 + (u32) v1);
    a6 = 0;
    a4 = a5;
    v0 = 1;
L_0028C38C:;
    a0 = (*(volatile u8 *) (u32) (a2 + 7));
    v1 = (*(volatile u8 *) (u32) (a1 + 212));
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) a5) = (u8) a0; if (c_) goto L_0028C428; }
    v1 = (*(volatile u8 *) (u32) (a1 + 248));
    if (v1 != 0) goto L_0028C428;
    (*(volatile u8 *) (u32) (a5 + 208)) = (u8) 0;
L_0028C3B0:;
    v1 = (s32) ((u32) a1 + 0x68U);
    (*(volatile u32 *) (u32) (a4 + 32)) = (u32) v1;
    a6 = (s32) ((u32) a6 + 0x1U);
    v1 = a6 < 32;
    a2 = (s32) ((u32) a2 + 0x1U);
    a5 = (s32) ((u32) a5 + 0x1U);
    a1 = (s32) ((u32) a1 + 0x348U);
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x4U); if (c_) goto L_0028C38C; }
    v1 = 139;
    v0 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v0 + 0x1a96U);
    a0 = (s32) ((u32) sp + 0x30U);
    s1 = (s32) ((u32) v0 + (u32) v1);
    s0 = (*(volatile u8 *) (u32) s1);
    (*(volatile u8 *) (u32) (sp + 288)) = (u8) s0; v0 = func_0028C460(a0);
    (*(volatile u8 *) (u32) s1) = (u8) v0;
    a0 = s0 & 0xff;
    v1 = (*(volatile u8 *) (u32) s1);
    if (a0 != v1) goto L_0028C430;
L_0028C40C:;
    goto L_0028C444;
L_0028C414:;
    v1 = 1;
    if (a1 != v1) goto L_0028C344;
    goto L_0028C440;
L_0028C428:;
    (*(volatile u8 *) (u32) (a5 + 208)) = (u8) v0; goto L_0028C3B0;
L_0028C430:;
    a0 = 1;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7932)) = (u8) a0; goto L_0028C40C;
L_0028C440:;
L_0028C444:;
    return v0;
}
