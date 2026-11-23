/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00645860(s32);
void func_00655B80(s32);
void func_00655D10(void);
void func_00656020(s32, s32);

void func_00620280(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a2 = (s32) 0x650000U;
    a2 = (s32) ((u32) a2 + 0x6e10U);
    a1 = (s32) ((u32) sp + 0x40U);
    s1 = a0;
    a0 = 7;
L_006202A4:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    a2 = (s32) ((u32) a2 + 0x2U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_006202A4; }
    a2 = (s32) 0x650000U;
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = (s32) ((u32) a2 + 0x6e20U);
    a0 = 7;
L_006202D4:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    a2 = (s32) ((u32) a2 + 0x2U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_006202D4; }
    v0 = s1 & 0xff;
    v0 = v0 < 14;
    if (v0 != 0) { s0 = s1 & 0xff; goto L_0062030C; }
    s1 = 0;
    s0 = s1 & 0xff;
L_0062030C:;
    v0 = s0 ^ 0x2;
    a0 = (u64) v0 < (u64) (s64) 1; func_00655D10();
    a0 = 3; func_00655B80(a0);
    s1 = s1 & 0xff;
    v0 = (s32) ((u32) s1 + (u32) sp);
    a0 = (*(volatile u8 *) (u32) (v0 + 64)); v0 = func_00645860(a0);
    a0 = v0;
    a1 = 3; func_00656020(a0, a1);
    v1 = (s32) ((u32) s1 + (u32) sp);
    a1 = (*(volatile u8 *) (u32) (v1 + 48));
    if (a1 == 0) { ; goto L_006203D8; }
    a0 = 9;
    if (a1 == a0) { v0 = 7; goto L_00620388; }
    v1 = 1;
    if (a1 == v1) { a0 = 95; goto L_0062036C; }
    goto L_006203D4;
L_0062036C:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 4; func_00656020(a0, a1);
    goto L_006203D4;
L_00620388:;
    if (s0 != v0) goto L_006203C0;
    a0 = 39; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 4; func_00656020(a0, a1);
    a0 = 9; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 5; func_00656020(a0, a1);
    goto L_006203D4;
L_006203C0:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 4; func_00656020(a0, a1);
L_006203D4:;
L_006203D8:;
    return;
}
