/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00311460(s32, s32);
s32 func_00311A50(s32, s32, s32);
void func_00326730(s32, s32, s32, s32);
s32 func_003414D0(s32, s32, s32, s32);
s32 func_008F8660(s32, s32, s32);

s32 func_008F8A60(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a2 = 255;
    s1 = a1;
    s0 = a0;
    a1 = 2;
    a0 = (s32) ((u32) sp + 0x4fU); v0 = func_003414D0(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (sp + 79));
    a2 = s1;
    a0 = (s32) ((u32) sp + 0x4cU);
    a1 = (s32) ((u32) sp + 0x48U);
    v0 = v0 ^ 0x1;
    a3 = v0 & 0xff; func_00326730(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (sp + 72));
    v0 = 1;
    if (v1 == v0) { a2 = (*(volatile u8 *) (u32) (sp + 79)); goto L_008F8ACC; }
    v1 = (*(volatile u8 *) (u32) (sp + 76));
    if (v1 == 0) goto L_008F8AC8;
    goto L_008F8B34;
L_008F8AC8:;
    a2 = (*(volatile u8 *) (u32) (sp + 79));
L_008F8ACC:;
    a1 = s0;
    a0 = (s32) ((u32) sp + 0x30U); v0 = func_008F8660(a0, a1, a2);
    s0 = v0;
    if (s0 == 0) { v0 = s0; goto L_008F8B30; }
    a2 = (*(volatile u8 *) (u32) (gp + -20064));
    a0 = (s32) ((u32) sp + 0x4eU);
    a1 = (s32) ((u32) sp + 0x4dU); v0 = func_00311A50(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (sp + 49));
    v0 = (*(volatile u8 *) (u32) (sp + 78));
    if (a0 != v0) { a1 = (*(volatile u8 *) (u32) (sp + 50)); goto L_008F8B18; }
    v1 = (*(volatile u8 *) (u32) (sp + 50));
    v0 = (*(volatile u8 *) (u32) (sp + 77));
    if (v1 == v0) { s0 = 0; goto L_008F8B2C; }
    a1 = (*(volatile u8 *) (u32) (sp + 50));
L_008F8B18:;
    v0 = func_00311460(a0, a1);
    if (v0 != 0) goto L_008F8B2C;
    s0 = 0;
L_008F8B2C:;
    v0 = s0;
L_008F8B30:;
L_008F8B34:;
    return v0;
}
