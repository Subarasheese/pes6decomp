/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00947830(s32, s32, s32, s32, s32, s32, s32, s32, f32);
void func_0094E8A0(s32, s32, s32, s32);
void func_0094EDF0(s32, s32, s32, s32);
s32 func_0094F310(s32, s32, s32, s32);
s32 func_0094F7D0(void);
s32 func_00952340(void);
s32 func_009526C0(void);

s32 func_00952C00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v1 = (s32) 0x970000U;
    v0 = (s32) 0x970000U;
    v1 = (s32) ((u32) v1 + 0xffff80d0U);
    v0 = (*(volatile s8 *) (u32) (v0 + -32540));
    v0 = (s32) ((u32) v0 << 4);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    at = (u64) v0 < (u64) (s64) 7;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00952D68; }
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6a40U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x952c50U) goto L_00952C50; if (t_ == 0x952c8cU) goto L_00952C8C; if (t_ == 0x952d20U) goto L_00952D20; if (t_ == 0x952d30U) goto L_00952D30; if (t_ == 0x952d40U) goto L_00952D40; if (t_ == 0x952d50U) goto L_00952D50; if (t_ == 0x952d60U) goto L_00952D60; }
L_00952C50:;
    v0 = func_009526C0();
    s0 = v0;
    a0 = 2;
    if (s0 != a0) { v0 = s0; goto L_00952D6C; }
    v0 = (s32) 0x970000U;
    v1 = (s32) 0x970000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -32540));
    v1 = (s32) ((u32) v1 + 0xffff80d0U);
    s0 = 0;
    v0 = (s32) ((u32) v0 << 4);
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) v0) = (u32) a0; goto L_00952D68;
L_00952C8C:;
    v0 = func_00952340();
    s0 = v0;
    v0 = 2;
    if (s0 != v0) goto L_00952D68;
    v1 = (s32) 0x970000U;
    a4 = (s32) 0x970000U;
    a3 = (*(volatile s8 *) (u32) (v1 + -32540));
    a2 = (s32) 0x970000U;
    a1 = (s32) 0x970000U;
    a4 = (s32) ((u32) a4 + 0xffff80c4U);
    a0 = (s32) 0x970000U;
    a2 = (s32) ((u32) a2 + 0xffff80c8U);
    a5 = a3 ^ 0x1;
    v1 = (s32) 0x970000U;
    a3 = (s32) ((u32) a3 << 4);
    a5 = (s32) ((u32) a5 << 4);
    a3 = (s32) ((u32) a4 + (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffff80d0U);
    a4 = (s32) ((u32) a4 + (u32) a5);
    s0 = 0;
    a4 = (*(volatile s32 *) (u32) a4);
    (*(volatile u32 *) (u32) a3) = (u32) a4;
    a0 = (*(volatile s8 *) (u32) (a0 + -32540));
    a3 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 4);
    a3 = (s32) ((u32) a3 << 4);
    a0 = (s32) ((u32) a2 + (u32) a0);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (*(volatile s32 *) (u32) a2);
    (*(volatile u32 *) (u32) a0) = (u32) a2;
    v1 = (*(volatile s8 *) (u32) (v1 + -32540));
    v1 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) a1 + (u32) v1);
    (*(volatile u32 *) (u32) v1) = (u32) v0; goto L_00952D68;
L_00952D20:;
    v0 = func_00947830(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    s0 = v0; goto L_00952D68;
L_00952D30:;
    v0 = func_0094F7D0();
    s0 = v0; goto L_00952D68;
L_00952D40:;
    v0 = func_0094F310(a0, a1, a2, a3);
    s0 = v0; goto L_00952D68;
L_00952D50:;
    func_0094EDF0(a0, a1, a2, a3);
    goto L_00952D68;
L_00952D60:;
    func_0094E8A0(a0, a1, a2, a3);
L_00952D68:;
    v0 = s0;
L_00952D6C:;
    return v0;
}
