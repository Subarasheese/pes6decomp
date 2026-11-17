/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00207390(s32, s32);
s32 func_00208310(s32);
void func_00209A00(s32, s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
void func_00B35E10(s32, s32, s32);
void func_00B89080(s32, s32, s32, f32, f32);
s32 func_00BBB8C0(s32);

void func_00B895E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    a1 = (s32) ((u32) sp + 0x3cU);
    a2 = (s32) ((u32) sp + 0x38U);
    s1 = a0;
    func_00B35E10(a0, a1, a2);
    f12.f = (*(volatile f32 *) (u32) (sp + 60));
    f13.f = (*(volatile f32 *) (u32) (sp + 56));
    a0 = (*(volatile s32 *) (u32) s1); v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a3 = (*(volatile s32 *) (u32) s1);
    v1 = 1;
    a2 = (s32) 0x10000U;
    a1 = 0x8001;
    a0 = 136;
    (*(volatile u16 *) (u32) (a3 + 44)) = (u16) v0;
    a3 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    a4 = (*(volatile u16 *) (u32) (a3 + 38));
    a3 = (*(volatile u16 *) (u32) (a3 + 44));
    (*(volatile u8 *) (u32) (v0 + 82)) = (u8) v1;
    v0 = (s32) ((u32) a4 - (u32) a3);
    v1 = (s32) ((u32) v0 + (u32) a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    v1 = v1 & 0xffff;
    s0 = v1 < a1;
    (*(volatile u8 *) (u32) (v0 + 80)) = (u8) 0; v0 = func_00BBB8C0(a0);
    { s32 c_ = v0 >= 0; v1 = v0 & 0x1; if (c_) goto L_00B8966C; }
    if (v1 == 0) goto L_00B8966C;
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
L_00B8966C:;
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = 1320;
    (*(volatile u8 *) (u32) (v0 + 78)) = (u8) v1;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile u16 *) (u32) (v0 + 48));
    if (v0 != a0) goto L_00B89714;
    v1 = (*(volatile s32 *) (u32) s1);
L_00B89690:;
    v0 = s0 & 0xff;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    a0 = (s32) ((u32) v1 + 0x2dU);
    v1 = (*(volatile u8 *) (u32) (v1 + 45));
    if (v1 != v0) { (*(volatile u8 *) (u32) a0) = (u8) s0; goto L_00B89750; }
    a5 = (*(volatile s32 *) (u32) s1);
L_00B896AC:;
    a4 = (s32) 0xcc0000U;
    a1 = (s32) 0xcc0000U;
    a3 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a2 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    f0.f = (*(volatile f32 *) (u32) (a5 + 224));
    (*(volatile f32 *) (u32) (a4 + -13568)) = f0.f;
    f12.f = (*(volatile f32 *) (u32) (a1 + -13568));
    a1 = (*(volatile s32 *) (u32) s1);
    f0.f = (*(volatile f32 *) (u32) (a1 + 232));
    (*(volatile f32 *) (u32) (a3 + -13564)) = f0.f;
    f13.f = (*(volatile f32 *) (u32) (v1 + -13564));
    v1 = (*(volatile s32 *) (u32) s1);
    v1 = (*(volatile u16 *) (u32) (v1 + 38));
    (*(volatile u16 *) (u32) (a2 + -13570)) = (u16) v1;
    a1 = (*(volatile u16 *) (u32) (v0 + -13570));
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = (*(volatile u8 *) (u32) (v0 + 45));
    a0 = s1; func_00B89080(a0, a1, a2, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = 5;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00B89768;
L_00B89714:;
    v0 = func_00208310(a0);
    v1 = (*(volatile s32 *) (u32) s1);
    a1 = 1320;
    v0 = (*(volatile u8 *) (u32) (v0 + 1));
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    v0 = (s32) ((u32) v0 << 1);
    a2 = v0 & 0xffff; func_00209A00(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 8; func_00207390(a0, a1);
    v1 = (*(volatile s32 *) (u32) s1); goto L_00B89690;
L_00B89750:;
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 8; func_00207390(a0, a1);
    a5 = (*(volatile s32 *) (u32) s1); goto L_00B896AC;
L_00B89768:;
    return;
}
