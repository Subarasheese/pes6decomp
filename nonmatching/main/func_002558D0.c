/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0024FB20(s32, s32, s32, s32);
s32 func_00251B10(void);
s32 func_00251B20(void);
s32 func_00255B90(void);
s32 func_00255BA0(s32, s32, s32);

s32 func_002558D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    { s32 c_ = a1 == 0; s0 = a0; if (c_) goto L_00255AF8; }
L_002558E8:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -14872));
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_00255AEC;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8f80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x255918U) goto L_00255918; if (t_ == 0x2559c8U) goto L_002559C8; if (t_ == 0x255a54U) goto L_00255A54; if (t_ == 0x255a74U) goto L_00255A74; if (t_ == 0x255a9cU) goto L_00255A9C; if (t_ == 0x255aecU) goto L_00255AEC; }
L_00255918:;
    v0 = 1;
    a1 = 0;
    (*(volatile u32 *) (u32) (gp + -22448)) = (u32) v0;
    a2 = 0;
    v0 = (s32) 0x22000000U;
    a3 = 0;
    a0 = v0 | 0x2b;
    (*(volatile u32 *) (u32) (gp + -22452)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 8));
    (*(volatile u32 *) (u32) (gp + -22444)) = (u32) v0; v0 = func_0024FB20(a0, a1, a2, a3);
    v0 = (s32) 0x22000000U;
    a1 = 2;
    a0 = v0 | 0x1e;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (s0 + 28));
    v0 = (s32) 0x22000000U;
    a0 = v0 | 0x1f;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    v0 = func_00251B20();
    a1 = v0;
    a2 = 0;
    v0 = (s32) 0x22000000U;
    a3 = 0;
    a0 = v0 | 0x25; v0 = func_0024FB20(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (s0 + 24));
    v0 = (s32) 0x22000000U;
    a0 = v0 | 0x30;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    v0 = func_00251B10();
    (*(volatile u32 *) (u32) (gp + -22440)) = (u32) v0;
    v1 = 2;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) v1; goto L_00255AEC;
L_002559C8:;
    v0 = (*(volatile s32 *) (u32) (gp + -22444));
    v1 = (*(volatile s32 *) (u32) (gp + -22440));
    v0 = (s32) ((u32) v0 - (u32) v1);
    { s32 c_ = v0 <= 0; (*(volatile u32 *) (u32) (gp + -22444)) = (u32) v0; if (c_) goto L_00255B08; }
L_002559DC:;
    a1 = (*(volatile s32 *) (u32) (gp + -22440));
    v0 = (s32) 0x22000000U;
    a0 = v0 | 0x21;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -14828)); v0 = func_00251B10();
    v1 = (*(volatile s32 *) (u32) (gp + -22452));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (gp + -22432)) = (u32) v0; v0 = func_00251B20();
    (*(volatile u32 *) (u32) (gp + -22428)) = (u32) v0; v0 = func_00251B10();
    a0 = (*(volatile s32 *) (u32) (gp + -22432));
    a1 = (*(volatile s32 *) (u32) (gp + -22428));
    a2 = v0; v0 = func_00255BA0(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (gp + -22452));
    v1 = 3;
    (*(volatile u32 *) (u32) (gp + -22436)) = (u32) v0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) v1;
    v0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22452)) = (u32) v0; goto L_00255AEC;
L_00255A54:;
    a0 = (*(volatile s32 *) (u32) (gp + -22436)); v0 = func_00255B90();
    if (v0 >= 0) goto L_00255AEC;
    v1 = 4;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) v1; goto L_00255AEC;
L_00255A74:;
    v0 = (s32) 0x22000000U;
    a1 = 0;
    a0 = v0 | 0x23;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    v1 = 5;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) v1; goto L_00255AEC;
L_00255A9C:;
    v0 = (s32) 0x22000000U;
    a1 = 0;
    a0 = v0 | 0x1b;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    if (v0 != 0) { v0 = (s32) 0x22000000U; goto L_00255B18; }
    v1 = 0;
L_00255AC0:;
    v0 = 1;
    if (v1 != v0) goto L_00255AEC;
    v0 = (*(volatile s32 *) (u32) (gp + -22448));
    if (v0 != 0) { v1 = 2; goto L_00255AE4; }
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) 0; goto L_00255AEC;
L_00255AE4:;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) v1;
L_00255AEC:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -14872)); goto L_00255B34;
L_00255AF8:;
    v1 = 1;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) v1; goto L_002558E8;
L_00255B08:;
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) (gp + -22448)) = (u32) 0;
    (*(volatile u32 *) (u32) (gp + -22440)) = (u32) v0; goto L_002559DC;
L_00255B18:;
    a1 = 0;
    a0 = v0 | 0x1c;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    v1 = 1; goto L_00255AC0;
L_00255B34:;
    return v0;
}
