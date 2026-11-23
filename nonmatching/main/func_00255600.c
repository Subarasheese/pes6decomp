/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0024FB20(s32, s32, s32, s32);
s32 func_00251B10(void);
s32 func_00251B20(void);
s32 func_00255B90(void);
s32 func_00255BA0(s32, s32, s32);

s32 func_00255600(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    { s32 c_ = a1 == 0; s0 = a0; if (c_) goto L_0025584C; }
L_00255618:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -14872));
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_00255840;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8f60U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x255648U) goto L_00255648; if (t_ == 0x255714U) goto L_00255714; if (t_ == 0x2557a0U) goto L_002557A0; if (t_ == 0x2557c0U) goto L_002557C0; if (t_ == 0x2557e8U) goto L_002557E8; if (t_ == 0x255840U) goto L_00255840; }
L_00255648:;
    v0 = 1;
    a1 = 0;
    (*(volatile u32 *) (u32) (gp + -22420)) = (u32) v0;
    a2 = 0;
    v0 = (s32) 0x22000000U;
    a3 = 0;
    a0 = v0 | 0x2b;
    (*(volatile u32 *) (u32) (gp + -22424)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 8));
    (*(volatile u32 *) (u32) (gp + -22416)) = (u32) v0; v0 = func_0024FB20(a0, a1, a2, a3);
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
    (*(volatile u32 *) (u32) (gp + -22412)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    v0 = (s32) ((u32) v0 >> 4);
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_00255704;
    v0 = (*(volatile s32 *) (u32) (s0 + 24));
    (*(volatile u32 *) (u32) (gp + -22396)) = (u32) v0;
L_00255704:;
    v1 = 2;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) v1; goto L_00255840;
L_00255714:;
    v0 = (*(volatile s32 *) (u32) (gp + -22416));
    v1 = (*(volatile s32 *) (u32) (gp + -22412));
    v0 = (s32) ((u32) v0 - (u32) v1);
    { s32 c_ = v0 <= 0; (*(volatile u32 *) (u32) (gp + -22416)) = (u32) v0; if (c_) goto L_0025585C; }
L_00255728:;
    a1 = (*(volatile s32 *) (u32) (gp + -22412));
    v0 = (s32) 0x22000000U;
    a0 = v0 | 0x21;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -14828)); v0 = func_00251B10();
    v1 = (*(volatile s32 *) (u32) (gp + -22424));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (gp + -22404)) = (u32) v0; v0 = func_00251B20();
    (*(volatile u32 *) (u32) (gp + -22400)) = (u32) v0; v0 = func_00251B10();
    a0 = (*(volatile s32 *) (u32) (gp + -22404));
    a1 = (*(volatile s32 *) (u32) (gp + -22400));
    a2 = v0; v0 = func_00255BA0(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (gp + -22424));
    v1 = 3;
    (*(volatile u32 *) (u32) (gp + -22408)) = (u32) v0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) v1;
    v0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22424)) = (u32) v0; goto L_00255840;
L_002557A0:;
    a0 = (*(volatile s32 *) (u32) (gp + -22408)); v0 = func_00255B90();
    if (v0 >= 0) goto L_00255840;
    v1 = 4;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) v1; goto L_00255840;
L_002557C0:;
    v0 = (s32) 0x22000000U;
    a1 = 0;
    a0 = v0 | 0x23;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    v1 = 5;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) v1; goto L_00255840;
L_002557E8:;
    v0 = (s32) 0x22000000U;
    a1 = 0;
    a0 = v0 | 0x1b;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    if (v0 != 0) { v0 = (s32) 0x22000000U; goto L_0025586C; }
    v1 = 0;
L_0025580C:;
    v0 = 1;
    if (v1 != v0) goto L_00255840;
    v0 = (*(volatile s32 *) (u32) (gp + -22420));
    if (v0 != 0) { v1 = 2; goto L_002558A4; }
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    v0 = (s32) ((u32) v0 >> 8);
    v0 = v0 & 0x1;
    if (v0 != 0) { a1 = (*(volatile s32 *) (u32) (gp + -22396)); goto L_00255888; }
L_00255838:;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) 0;
L_00255840:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -14872)); goto L_002558B0;
L_0025584C:;
    v1 = 1;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) v1; goto L_00255618;
L_0025585C:;
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) (gp + -22420)) = (u32) 0;
    (*(volatile u32 *) (u32) (gp + -22412)) = (u32) v0; goto L_00255728;
L_0025586C:;
    a1 = 0;
    a0 = v0 | 0x1c;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    v1 = 1; goto L_0025580C;
L_00255888:;
    v0 = (s32) 0x22000000U;
    a0 = v0 | 0x30;
    a2 = 0;
    a3 = 0; v0 = func_0024FB20(a0, a1, a2, a3);
    goto L_00255838;
L_002558A4:;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -14872)) = (u32) v1; goto L_00255840;
L_002558B0:;
    return v0;
}
