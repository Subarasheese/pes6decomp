/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Ball_CopyPosition(s32);
void Pes6Job_SetField4(s32, s32);
void Pes6MatchPlayer_GetTeamRelativeXZ(s32, s32, s32);
s32 func_0030F240(s32);
s32 func_0030FE30(s32, s32);
s32 func_00333600(s32);
s32 func_00338530(s32);
s32 func_003395B0(s32);
s32 func_00341090(s32);

s32 func_00343150(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    a0 = 4; v0 = func_00333600(a0);
    if (v0 == 0) { a0 = (s32) ((u32) sp + 0x4fU); goto L_0034317C; }
    v0 = 0; goto L_00343218;
L_0034317C:;
    v0 = func_0030F240(a0);
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x40U); goto L_00343194; }
    v0 = 0; goto L_00343218;
L_00343194:;
    a1 = 1; v0 = func_0030FE30(a0, a1);
    a0 = (*(volatile s32 *) (u32) (sp + 64)); v0 = func_00341090(a0);
    if (v0 == 0) { a2 = (*(volatile u8 *) (u32) (sp + 79)); goto L_003431B4; }
    v0 = 0; goto L_00343218;
L_003431B4:;
    a0 = (s32) ((u32) sp + 0x48U);
    a1 = (s32) ((u32) sp + 0x44U); Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    v0 = (s32) 0x46100000U;
    v0 = v0 | 0x6400;
    f1.f = (*(volatile f32 *) (u32) (sp + 72));
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; f2.f = (*(volatile f32 *) (u32) (sp + 68)); if (c_) goto L_00343208; }
    f1.i = f2.i & 0x7FFFFFFF;
    v0 = (s32) 0x45910000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 0; goto L_0034320C; }
    v0 = 1; goto L_0034320C;
L_00343208:;
    v0 = 0;
L_0034320C:;
    if (v0 != 0) { v0 = 1; goto L_00343218; }
    v0 = 0;
L_00343218:;
    if (v0 == 0) { a0 = (s32) ((u32) sp + 0x30U); goto L_00343228; }
    v0 = 0; goto L_00343288;
L_00343228:;
    Pes6Ball_CopyPosition(a0);
    v0 = (s32) 0x46100000U;
    v0 = v0 | 0x6400;
    f1.f = (*(volatile f32 *) (u32) (sp + 48));
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; f2.f = (*(volatile f32 *) (u32) (sp + 56)); if (c_) goto L_00343278; }
    f1.i = f2.i & 0x7FFFFFFF;
    v0 = (s32) 0x45910000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 0; goto L_0034327C; }
    v0 = 1; goto L_0034327C;
L_00343278:;
    v0 = 0;
L_0034327C:;
    if (v0 == 0) { v0 = 1; goto L_00343288; }
    v0 = 0;
L_00343288:;
    if (v0 != 0) { v0 = (s32) 0x80000000U; goto L_00343298; }
    v0 = 0; goto L_003432DC;
L_00343298:;
    a0 = v0 | 0x69; v0 = func_00338530(a0);
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 60)); goto L_003432B0; }
    v0 = 0; goto L_003432DC;
L_003432B0:;
    v0 = func_003395B0(a0);
    a1 = (s32) 0x340000U;
    a2 = (s32) 0x3e0000U;
    s1 = v0;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0x32f0U);
    a2 = (s32) ((u32) a2 + 0x61a8U); Pes6Job_SetField4(a0, a1);
    (*(volatile u32 *) (u32) (s0 + 56)) = (u32) s1;
    v0 = 0;
L_003432DC:;
    return v0;
}
