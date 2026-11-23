/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Team_GetPlayerParams(s64, s64, s64, s64);
void func_001B9830(s64, s64);
s64 func_00222460(s64, s64, s64, s64);
void func_008B2F30(s64, s64, s64, s64);

void func_00955A20(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x960000U;
    s5 = a0;
    a1 = (s32) ((u32) s5 << 2);
    s2 = (s32) 0x540000U;
    s2 = (s32) ((u32) s2 + 0xffffc300U);
    f0.f = (*(volatile f32 *) (u32) (v1 + 8704));
    v1 = (s32) 0x960000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + 8708));
    (*(volatile f32 *) (u32) (sp + 136)) = f0.f;
    v1 = (s32) 0x960000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 8712));
    (*(volatile f32 *) (u32) (sp + 140)) = f2.f;
    v1 = (s32) 0x960000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 8716));
    (*(volatile f32 *) (u32) (sp + 128)) = f1.f;
    v1 = (s32) 0x970000U;
    v1 = (s32) ((u32) v1 + 0xffffcff0U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) v1);
    v1 = 6;
    { s32 c_ = a0 == v1; (*(volatile f32 *) (u32) (sp + 132)) = f0.f; if (c_) goto L_00955ABC; }
    v1 = 5;
    if (a0 == v1) { v1 = (s32) ((u32) a1 + (u32) sp); goto L_00955AC0; }
    v1 = 4;
    if (a0 == v1) goto L_00955ABC;
    goto L_00955B90;
L_00955ABC:;
    v1 = (s32) ((u32) a1 + (u32) sp);
L_00955AC0:;
    s1 = (*(volatile s32 *) (u32) (v1 + 136));
    v0 = (*(volatile s32 *) (u32) (v1 + 128));
    at = v0 < s1;
    { s32 c_ = at != 0; s4 = s1; if (c_) goto L_00955B28; }
    s6 = (s32) ((u32) v1 + 0x80U);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) s5 << 1);
    v0 = (s32) ((u32) v0 + 0x1bb0U);
    s3 = (s32) ((u32) s1 << 2);
    s0 = (s32) ((u32) v0 + (u32) v1);
L_00955AEC:;
    a0 = (*(volatile u16 *) (u32) s0);
    v0 = (s32) ((u32) s4 - (u32) s1);
    a1 = v0 & 0xff;
    a2 = 0; v0 = func_00222460(a0, a1, a2, a3);
    a1 = v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 20));
    v0 = (s32) ((u32) v0 + (u32) s3);
    a0 = (*(volatile s32 *) (u32) v0); func_008B2F30(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s6);
    s4 = (s32) ((u32) s4 + 0x1U);
    at = v0 < s4;
    { s32 c_ = at == 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_00955AEC; }
L_00955B28:;
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) s5 << 1);
    v0 = (s32) ((u32) v0 + 0x1bb0U);
    a0 = (s32) ((u32) a1 + (u32) s5);
    s1 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x970000U;
    v0 = (s32) ((u32) v0 - (u32) s5);
    v1 = (s32) ((u32) v1 + 0xffffcff0U);
    v0 = (s32) ((u32) v0 << 2);
    s0 = 0;
    s2 = (s32) ((u32) v1 + (u32) v0);
L_00955B58:;
    a0 = (*(volatile u16 *) (u32) s1);
    a1 = s0 & 0xff;
    a2 = 0; v0 = Pes6Team_GetPlayerParams(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (v0 + 1));
    a0 = (*(volatile s32 *) (u32) (s2 + 520));
    v0 = (s64) ((u64) v0 << 56);
    a1 = (s64) ((u64) v0 >> 60); func_001B9830(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 23;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00955B58; }
L_00955B90:;
    return;
}
