/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D80(s64, s64, s64, s64);
s64 func_008B9430(void);
s64 func_008C1490(s64, s64, s64, s64, f32);

void func_008EABD0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u64 qh_v0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    s2 = a0;
    v1 = (*(volatile s32 *) (u32) (a0 + 60));
    { s32 c_ = v1 != 0; s1 = a1; if (c_) goto L_008EACA0; }
    { u32 a_ = (u32) (a2 + 0) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) ((u32) sp + 0x40U);
    a0 = 31;
    { u32 a_ = (u32) (sp + 64) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s0 = v0;
    a2 = 3;
    (*(volatile u32 *) (u32) (s2 + 60)) = (u32) s0;
    { s32 c_ = s1 == a2; (*(volatile u8 *) (u32) s2) = (u8) s1; if (c_) goto L_008EACA0; }
    a1 = 4;
    if (s1 == a1) goto L_008EAC84;
    v1 = 2;
    if (s1 == v1) { a0 = s0; goto L_008EAC74; }
    a1 = 1;
    if (s1 == a1) { a0 = s0; goto L_008EAC64; }
    if (s1 == 0) { a0 = s0; goto L_008EAC54; }
    goto L_008EACA4;
L_008EAC54:;
    func_001D7D80(a0, a1, a2, a3);
    goto L_008EACA0;
L_008EAC64:;
    a1 = a2; func_001D7D80(a0, a1, a2, a3);
    goto L_008EACA0;
L_008EAC74:;
    func_001D7D80(a0, a1, a2, a3);
    goto L_008EACA0;
L_008EAC84:;
    v0 = func_008B9430();
    if (v0 != 0) goto L_008EACA0;
    a0 = s0;
    a1 = 5; func_001D7D80(a0, a1, a2, a3);
L_008EACA0:;
L_008EACA4:;
    return;
}
