/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0014AEE0(s32, s32, s32, s32);
s32 func_001540C0(void);
void func_001540D0(s32);
s32 func_001E6500(s32);
s32 func_001E6530(s32);
s32 func_001E65D0(s32);
s32 func_001E6D00(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001E6E10(s32);
s32 func_001E9130(s32, s32, s32, s32, s32);
s32 func_001E96B0(s32, s32, s32, s32, s32);

void func_001E7E00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v0 = -1;
    s5 = a0;
    s4 = a1;
    s3 = a2;
    s2 = a3;
    { s32 c_ = s2 == v0; s1 = a4; if (c_) goto L_001E7EE0; }
    f0.f = (*(volatile f32 *) (u32) s4);
L_001E7E40:;
    v0 = (s32) 0x3f800000U;
    f1.i = (s32) v0;
    fcc = f1.f == f0.f;
    if (fcc) { f0.f = (*(volatile f32 *) (u32) (s4 + 4)); goto L_001E7F10; }
L_001E7E58:;
    if (s3 == 0) { a0 = s5; goto L_001E7F84; }
    v1 = (*(volatile s16 *) (u32) s3);
    v0 = (*(volatile s16 *) (u32) (s3 + 2));
    (*(volatile u16 *) (u32) (sp + 124)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 126)) = (u16) v0;
L_001E7E70:;
    if (s1 < 0) goto L_001E7FA0;
L_001E7E78:;
    a0 = s5; v0 = func_001E65D0(a0);
    v1 = 1;
    if (v0 == v1) { a0 = s5; goto L_001E7EBC; }
    v1 = 2;
    if (v0 == v1) { a0 = s5; goto L_001E7EA0; }
    v0 = s0; goto L_001E7ED8;
L_001E7EA0:;
    a1 = s4;
    a3 = s2;
    a4 = s1;
    a2 = (s32) ((u32) sp + 0x7cU); v0 = func_001E9130(a0, a1, a2, a3, a4);
    s0 = v0; goto L_001E7ED4;
L_001E7EBC:;
    a1 = s4;
    a3 = s2;
    a4 = s1;
    a2 = (s32) ((u32) sp + 0x7cU); v0 = func_001E96B0(a0, a1, a2, a3, a4);
    s0 = v0;
L_001E7ED4:;
    v0 = s0;
L_001E7ED8:;
    goto L_001E7FB4;
L_001E7EE0:;
    s2 = 0;
L_001E7EE4:;
    a0 = (s32) ((u32) s2 + 0x7116U); v0 = func_001E6E10(a0);
    if (v0 != 0) { s2 = (s32) ((u32) s2 + 0x1U); goto L_001E7EFC; }
    s2 = (s32) ((u32) s2 + 0x7116U); goto L_001E7F08;
L_001E7EFC:;
    v0 = s2 < 40;
    if (v0 != 0) goto L_001E7EE4;
L_001E7F08:;
    f0.f = (*(volatile f32 *) (u32) s4); goto L_001E7E40;
L_001E7F10:;
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001E7E58;
    v0 = (*(volatile s32 *) (u32) (s5 + 8));
    s0 = (*(volatile s32 *) (u32) (v0 + 12)); v0 = func_001540C0();
    s3 = v0;
    a0 = s0; v0 = func_001E6E10(a0);
    if (v0 == 0) goto L_001E7F74;
    v0 = func_001540C0();
    s1 = v0;
    a0 = s3; func_001540D0(a0);
    a0 = s0;
    a1 = s2; v0 = func_0014AEE0(a0, a1, a2, a3);
    if (v0 == 0) goto L_001E7F6C;
    a0 = v0; v0 = func_001E6D00(a0, a1, a2, a3, a4, a5, a6, a7);
L_001E7F6C:;
    a0 = s1; func_001540D0(a0);
L_001E7F74:;
    a0 = s2; v0 = func_001E6E10(a0);
    goto L_001E7FB0;
L_001E7F84:;
    v0 = func_001E6530(a0);
    (*(volatile u16 *) (u32) (sp + 124)) = (u16) v0;
    a0 = s5; v0 = func_001E6500(a0);
    (*(volatile u16 *) (u32) (sp + 126)) = (u16) v0; goto L_001E7E70;
L_001E7FA0:;
    v0 = func_001540C0();
    s1 = v0; goto L_001E7E78;
L_001E7FB0:;
L_001E7FB4:;
    return;
}
