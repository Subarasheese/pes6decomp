/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s32, s32);
void func_001DF420(s32, s32);
s32 func_002D5870(s32);
s32 func_002D58A0(s32);
s32 func_002F9630(s32);
s32 func_002F96F0(s32, s32);
s32 func_0035A260(void);

s32 func_009249B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { s32 c_ = v0 == 0; s2 = 0; if (c_) goto L_00924B78; }
    s0 = (*(volatile s32 *) (u32) (v0 + 24));
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffa940U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; s1 = 0; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v1 = 1;
    if (v0 != v1) { v0 = (u64) s0 < (u64) (s64) 7; goto L_00924A1C; }
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = (u64) s0 < (u64) (s64) 7;
L_00924A1C:;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_00924A2C; }
    s1 = 1;
    v0 = (*(volatile s32 *) (u32) (gp + -19844));
L_00924A2C:;
    v1 = (s32) ((u32) gp + 0xffffb280U);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 24)) = (u32) s0;
    v0 = (*(volatile s32 *) (u32) (gp + -19844));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8U); v0 = func_002D5870(a0);
    if (v0 == 0) goto L_00924B50;
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8U); v0 = func_002D58A0(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
    s0 = v0;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 40));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_00924B50;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s3 = v0;
    { s32 c_ = s3 <= 0; s4 = 0; if (c_) goto L_00924AF8; }
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
L_00924ABC:;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s4; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = s0 & 0xff; func_001D76B0(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s3;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_00924ABC; }
L_00924AF8:;
    s4 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
L_00924B00:;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    a1 = s4;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s3 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00924B30;
    s3 = (*(volatile s32 *) (u32) (v0 + 12));
L_00924B30:;
    a0 = s3;
    a1 = s0 & 0xff; func_001DF420(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    at = s4 < 6;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_00924B00; }
L_00924B50:;
    v0 = 1;
    if (s1 == v0) { s2 = 1; goto L_00924B7C; }
    v0 = func_0035A260();
    if (v0 == 0) goto L_00924B7C;
    s2 = 1;
    goto L_00924B7C;
L_00924B78:;
    s2 = 1;
L_00924B7C:;
    v0 = s2;
    return v0;
}
