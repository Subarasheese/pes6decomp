/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002C4740(s32, s32);
s32 func_002C5DD0(s32);
s32 func_00C129C0(s32);
s32 func_00C132B0(s32);
s32 func_00C132C0(s32);
void func_00C22390(s32, s32);
void func_00C57E20(s32, s32, s32);
void func_00C58020(s32, s32);
void func_00C582D0(s32, s32);

void func_00C57C90(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    s0 = a1;
    a0 = s0; v0 = func_00C132C0(a0);
    v1 = v0 & 0xff;
    at = (u64) v1 < (u64) (s64) 35;
    if (at == 0) goto L_00C57DFC;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x4890U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xc57ce0U) goto L_00C57CE0; if (t_ == 0xc57cf4U) goto L_00C57CF4; if (t_ == 0xc57d08U) goto L_00C57D08; if (t_ == 0xc57d60U) goto L_00C57D60; if (t_ == 0xc57da4U) goto L_00C57DA4; if (t_ == 0xc57de8U) goto L_00C57DE8; }
L_00C57CE0:;
    a0 = s1;
    a1 = s0; func_00C58020(a0, a1);
    goto L_00C57DE8;
L_00C57CF4:;
    a0 = s1;
    a1 = s0; func_00C582D0(a0, a1);
    goto L_00C57DE8;
L_00C57D08:;
    a0 = s0; v0 = func_00C132B0(a0);
    v0 = v0 & 0xff;
    a0 = s0;
    v1 = (s32) v0 >> 5;
    v0 = v0 & 0x1f;
    (*(volatile u8 *) (u32) (sp + 75)) = (u8) v0;
    v0 = v1 & 0x1;
    (*(volatile u8 *) (u32) (sp + 74)) = (u8) v0;
    v0 = 15;
    (*(volatile u8 *) (u32) (sp + 72)) = (u8) v0; v0 = func_002C5DD0(a0);
    v1 = -1;
    if (v0 == v1) goto L_00C57DF0;
    v0 = (s32) 0x3fc00000U;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v0;
L_00C57D4C:;
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x48U); func_00C22390(a0, a1);
    goto L_00C57DE8;
L_00C57D60:;
    a0 = s0; v0 = func_00C132B0(a0);
    a1 = v0 & 0xff;
    v1 = (s32) 0x40a00000U;
    v0 = (s32) a1 >> 5;
    a0 = s1;
    v0 = v0 & 0x1;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v1;
    (*(volatile u8 *) (u32) (sp + 66)) = (u8) v0;
    v0 = a1 & 0x1f;
    (*(volatile u8 *) (u32) (sp + 67)) = (u8) v0;
    a1 = (s32) ((u32) sp + 0x40U);
    v0 = 14;
    (*(volatile u8 *) (u32) (sp + 64)) = (u8) v0; func_00C22390(a0, a1);
    goto L_00C57DE8;
L_00C57DA4:;
    a0 = s0; v0 = func_00C129C0(a0);
    if (v0 != 0) goto L_00C57DFC;
    a0 = s0; v0 = func_00C132B0(a0);
    s2 = v0 & 0xff;
    a0 = s0;
    v0 = (s32) s2 >> 5;
    a1 = v0 & 0x1; v0 = func_002C4740(a0, a1);
    v1 = v0 & 0xff;
    if (v1 != s2) goto L_00C57DFC;
    a0 = s1;
    a1 = s0; func_00C57E20(a0, a1, a2);
L_00C57DE8:;
    goto L_00C57E00;
L_00C57DF0:;
    v0 = (s32) 0xbfc00000U;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v0; goto L_00C57D4C;
L_00C57DFC:;
L_00C57E00:;
    return;
}
