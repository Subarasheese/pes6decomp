/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001D7D60(s32, s32);
void func_001D7D80(s32, s32, s32, s32);
void func_001DF330(s32, s32);
s32 func_008B2900(s32);
s32 func_008C13D0(s32, s32, s32);
s32 func_008C1490(s32, s32, s32, s32, f32);

void func_008D4520(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    a0 = (*(volatile s32 *) (u32) (a0 + 28));
    { s32 c_ = a0 == 0; s0 = 0; if (c_) goto L_008D4674; }
    v1 = (*(volatile s32 *) (u32) (s2 + 32));
    if (v1 == 0) { a1 = (s32) ((u32) sp + 0x50U); goto L_008D4560; }
    goto L_008D4678;
    a1 = (s32) ((u32) sp + 0x50U);
L_008D4560:;
    a2 = 260; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    a0 = 55;
    f0.f = (*(volatile f32 *) (u32) (sp + 84));
    a1 = (s32) ((u32) sp + 0x40U);
    (*(volatile f32 *) (u32) (sp + 64)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 8));
    (*(volatile f32 *) (u32) (sp + 72)) = f0.f; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s1 = v0;
    a1 = 0;
    a0 = s1;
    (*(volatile u32 *) (u32) (s2 + 32)) = (u32) s1; func_001D7D60(a0, a1);
    v1 = (*(volatile s8 *) (u32) s2);
    v0 = 2;
    if (v1 == v0) { s0 = 1; goto L_008D45F4; }
    v0 = 4;
    if (v1 == v0) goto L_008D45F0;
    v0 = 5;
    if (v1 == v0) goto L_008D45F0;
    a1 = 1;
    if (v1 == a1) { a0 = s1; goto L_008D45E0; }
    a0 = s1; goto L_008D45F8;
    a0 = s1;
L_008D45E0:;
    func_001D7D80(a0, a1, a2, a3);
    goto L_008D45F4;
L_008D45F0:;
    s0 = 1;
L_008D45F4:;
    a0 = s1;
L_008D45F8:;
    a1 = 141;
    a2 = 0; v0 = func_008C13D0(a0, a1, a2);
    { s32 c_ = s0 == 0; (*(volatile u32 *) (u32) (s2 + 40)) = (u32) v0; if (c_) goto L_008D4674; }
    a0 = 0; v0 = func_008B2900(a0);
    a0 = s1;
    a1 = 142;
    a2 = v0; v0 = func_008C13D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s2 + 48)) = (u32) v0;
    a0 = 1; v0 = func_008B2900(a0);
    a0 = s1;
    a1 = 143;
    a2 = v0; v0 = func_008C13D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s2 + 56)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s2 + 48));
    if (v1 == 0) { v1 = (*(volatile s32 *) (u32) (s2 + 56)); goto L_008D4660; }
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = 1; func_001DF330(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s2 + 56));
L_008D4660:;
    if (v1 == 0) goto L_008D4674;
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = 1; func_001DF330(a0, a1);
L_008D4674:;
L_008D4678:;
    return;
}
