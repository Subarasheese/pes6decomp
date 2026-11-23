/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002781A0(s32);
void func_0028C320(s32);
void func_009832E0(s32);
s32 func_009A0270(void);

void func_00274760(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 hi = 0, lo = 0;

    s3 = a0;
    s2 = a1;
    a0 = (s32) 0x590000U;
    s0 = s3 & 0xff;
    v1 = s2 & 0xff;
    v0 = (s32) ((u32) s0 << 4);
    a0 = (s32) ((u32) a0 + 0x2a54U);
    a1 = (s32) ((u32) v0 - (u32) s0);
    s1 = a2;
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) v0) = (u8) 0; v0 = func_009A0270();
    a0 = s0; v0 = func_002781A0(a0);
    if (v0 != 0) goto L_00274864;
    if (s1 == 0) goto L_00274864;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1ef6U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    a3 = (*(volatile u8 *) (u32) v1);
    at = 0 < a3;
    { s32 c_ = at == 0; v0 = 0; if (c_) goto L_00274874; }
    v1 = (s32) 0x590000U;
    a0 = 139;
    v1 = (s32) ((u32) v1 + 0x1e00U);
    a1 = (s32) ((u32) v1 + (u32) s0);
    a2 = (*(volatile u8 *) (u32) (a1 + 248));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1a90U);
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = s2 & 0xff;
    a1 = (s32) ((u32) a2 << 3);
    a1 = (s32) ((u32) a1 + (u32) v1);
L_00274830:;
    v1 = (*(volatile u8 *) (u32) (a1 + 83));
    if (a0 == v1) goto L_00274874;
    v0 = (s32) ((u32) v0 + 0x1U);
    v1 = v0 < a3;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_00274830; }
    v1 = 139; goto L_00274878;
L_00274854:;
    if (v0 != a3) goto L_00274864;
    a0 = s3 & 0xff; func_009832E0(a0);
L_00274864:;
    a0 = s3; func_0028C320(a0);
    goto L_002748A0;
L_00274874:;
    v1 = 139;
L_00274878:;
    a1 = s2 & 0xff;
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1a97U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (a1 == v1) goto L_00274854;
    v0 = (s32) ((u32) a3 + 0x1U); goto L_00274854;
L_002748A0:;
    return;
}
