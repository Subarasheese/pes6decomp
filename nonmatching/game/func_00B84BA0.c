/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B33A0(s32, s32, s32);
s32 func_00B2A420(s32);
void func_00B35E10(s32, s32, s32);
s32 func_00B84E00(s32, s32, s32);
void func_00B84FD0(s32, s32, s32, f32, f32);
void func_00BD3BA0(s32, s32, s32);
void func_00BD3BE0(s32, s32);
void func_00BD3CF0(s32, s32, s32, s32, f32, f32);
s32 func_00BF6270(void);

void func_00B84BA0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    s0 = a0; v0 = func_00BF6270();
    a0 = v0; v0 = func_00B2A420(a0);
    a0 = s0; func_00B84FD0(a0, a1, a2, f12.f, f13.f);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x2cU);
    a2 = (s32) ((u32) sp + 0x28U); func_00B35E10(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s0);
    f2.f = (*(volatile f32 *) (u32) (sp + 44));
    f0.i = (s32) 0;
    f1.f = (*(volatile f32 *) (u32) (v0 + 224));
    f1.f = f2.f * f1.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00B84C04;
    a0 = s0;
    a1 = 0;
    a2 = 1; func_00BD3BA0(a0, a1, a2);
L_00B84C04:;
    v0 = (*(volatile s32 *) (u32) s0);
    f12.f = (*(volatile f32 *) (u32) (v0 + 108));
    f13.f = (*(volatile f32 *) (u32) (v0 + 112));
    a0 = s0; func_00BD3CF0(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 5;
    a1 = (*(volatile u8 *) (u32) (a0 + 18));
    if (a1 == v1) goto L_00B84CBC;
    a0 = (*(volatile u8 *) (u32) (a0 + 12));
    v1 = 1;
    if (a0 != v1) goto L_00B84CD0;
    v1 = 4;
    if (a1 != v1) goto L_00B84CEC;
    a0 = (*(volatile s32 *) (u32) s0);
    f1.f = (*(volatile f32 *) (u32) (a0 + 108));
    f0.f = (*(volatile f32 *) (u32) (a0 + 112));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x3840000U;
    at = at | 0x1;
    at = (u64) v0 < (u64) at;
    if (at != 0) goto L_00B84CEC;
    a2 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (a2 + 80));
    a0 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u8 *) (u32) (a2 + 80)) = (u8) a0;
    v1 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) ((u32) v1 << 1);
    at = v1 < a1;
    if (at == 0) goto L_00B84CEC;
    a0 = s0;
    a1 = 2; func_00BD3BE0(a0, a1);
L_00B84CB4:;
    goto L_00B84CF0;
L_00B84CBC:;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 22)) = (u8) 0;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) 0; goto L_00B84CB4;
L_00B84CD0:;
    a0 = s0; v0 = func_00B84E00(a0, a1, a2);
    a0 = s0;
    a1 = v0 & 0xff; func_00BD3BE0(a0, a1);
    goto L_00B84CB4;
L_00B84CEC:;
L_00B84CF0:;
    return;
}
