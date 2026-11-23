/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B6A30(s32, s32, s32, s32);
s32 func_001C4698(s32, s32, s32);
s32 func_0021E000(s32);
s32 func_002211E0(void);
void func_0023EA10(s32, s32, s32, s32);
s32 func_0023EFE0(void);
void func_0023FC70(void);
void func_009345B0(s32, s32, s32, s32);
void func_00934710(s32);
s32 func_0093D040(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00941CD0(s32, s32, s32, s32, s32, s32, s32, s32);
void memcpy(s32, s32, s32);

s32 func_0093A450(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U); v0 = func_002211E0();
    s1 = v0;
    a1 = (*(volatile s8 *) (u32) (gp + -18504));
    v0 = (s32) 0x960000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -8816));
    v0 = (s32) 0x960000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -8812));
    (*(volatile f32 *) (u32) (sp + 56)) = f1.f;
    v0 = 3;
    { s32 c_ = a1 == v0; (*(volatile f32 *) (u32) (sp + 60)) = f0.f; if (c_) goto L_0093A5C4; }
    a0 = 2;
    if (a1 == a0) { v0 = (*(volatile s8 *) (u32) (s0 + 9)); goto L_0093A56C; }
    v1 = 1;
    if (a1 == v1) { a0 = 0; goto L_0093A508; }
    if (a1 == 0) goto L_0093A4BC;
    v0 = 0; goto L_0093A628;
L_0093A4BC:;
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -15607));
    { s32 c_ = v0 != v1; (*(volatile u8 *) (u32) (gp + -18504)) = (u8) a0; if (c_) goto L_0093A624; }
    a0 = (s32) 0x960000U;
    a1 = s1;
    a0 = (s32) ((u32) a0 + 0x7a30U);
    a2 = 92; v0 = func_001C4698(a0, a1, a2);
    if (v0 == 0) goto L_0093A624;
    v0 = (s32) 0x960000U;
    v1 = (*(volatile s32 *) (u32) (s1 + 64));
    v0 = (*(volatile s32 *) (u32) (v0 + 31344));
    if (v0 == v1) goto L_0093A624;
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -18504)) = (u8) v0; goto L_0093A624;
L_0093A508:;
    v0 = func_0023EFE0();
    v1 = 1;
    if (v0 == v1) { a0 = 2; goto L_0093A550; }
    if (v0 == 0) goto L_0093A52C;
    v0 = 0; goto L_0093A564;
L_0093A52C:;
    a1 = (s32) 0x960000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0x7a30U);
    a2 = 92; memcpy(a0, a1, a2);
    v0 = (*(volatile s8 *) (u32) (gp + -18504));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18504)) = (u8) v0; goto L_0093A624;
L_0093A550:;
    v1 = (s32) 0x960000U;
    (*(volatile u8 *) (u32) (gp + -18504)) = (u8) 0;
    v0 = 0;
    (*(volatile u8 *) (u32) (v1 + 31376)) = (u8) a0; goto L_0093A628;
L_0093A564:;
    goto L_0093A62C;
L_0093A56C:;
    if (v0 != a0) { a0 = 0; goto L_0093A590; }
    v1 = (s32) 0x960000U;
    v0 = (s32) 0x960000U;
    v1 = (*(volatile s8 *) (u32) (v1 + 31387));
    (*(volatile u32 *) (u32) (s1 + 72)) = (u32) v1;
    v0 = (*(volatile s8 *) (u32) (v0 + 31388));
    (*(volatile u32 *) (u32) (s1 + 68)) = (u32) v0;
    a0 = 0;
L_0093A590:;
    v0 = func_00941CD0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) { a0 = 0; goto L_0093A5B4; }
    v0 = (*(volatile s8 *) (u32) (gp + -18504));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18504)) = (u8) v0;
    a0 = 0;
L_0093A5B4:;
    func_0023EA10(a0, a1, a2, a3);
    goto L_0093A624;
L_0093A5C4:;
    a0 = 20437; v0 = func_001B6A30(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_0093A624;
    v0 = func_0093D040(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_0093A624;
    a0 = 339; v0 = func_0021E000(a0);
    a1 = v0;
    a0 = 0;
    a2 = 1;
    a3 = (s32) ((u32) sp + 0x38U); func_009345B0(a0, a1, a2, a3);
    a0 = 0; func_00934710(a0);
    func_0023FC70();
    (*(volatile u8 *) (u32) (gp + -18504)) = (u8) 0;
    v0 = 1; goto L_0093A628;
L_0093A624:;
    v0 = 0;
L_0093A628:;
L_0093A62C:;
    return v0;
}
