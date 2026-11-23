/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002EBEF0(s32);
void func_008B31A0(s32, s32, s32, s32);
void func_008C9E80(s32, s32, s32, s32);
void func_008CA300(s32, s32, s32, s32);
void func_008CA810(s32, s32, s32, s32);
void func_00946B30(s32, s32);
void func_00948560(s32, s32, s32, s32);

void func_009488E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x960000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 32544));
    if (v0 != 0) goto L_00948A18;
    v0 = (s32) 0x960000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 32545));
    v0 = v0 < 17;
    if (v0 != 0) goto L_00948A18;
    v0 = (s32) 0x970000U;
    v1 = (s32) 0x970000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -32540));
    v1 = (s32) ((u32) v1 + 0xffff80d0U);
    v0 = (s32) ((u32) v0 << 4);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    at = (u64) v0 < (u64) (s64) 7;
    if (at == 0) { a0 = (*(volatile s32 *) (u32) (gp + -18244)); goto L_00948B28; }
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6960U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x948950U) goto L_00948950; if (t_ == 0x9489c0U) goto L_009489C0; if (t_ == 0x9489e4U) goto L_009489E4; }
L_00948950:;
    a0 = (s32) ((u32) sp + 0x1eU);
    a1 = 0; func_00946B30(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -18248)); v0 = func_002EBEF0(a0);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -18228)); goto L_00948990; }
    v0 = (*(volatile s32 *) (u32) (gp + -18228));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18244));
    a1 = 0; func_008CA300(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18244)); goto L_009489AC;
L_00948990:;
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18244));
    a1 = 1; func_008CA300(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18244));
L_009489AC:;
    a1 = (*(volatile u16 *) (u32) (sp + 30));
    a2 = 0; func_008CA810(a0, a1, a2, a3);
    goto L_00948B24;
L_009489C0:;
    v0 = (*(volatile s32 *) (u32) (gp + -18228));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18244));
    a1 = 0; func_008CA300(a0, a1, a2, a3);
    goto L_00948B24;
L_009489E4:;
    a0 = (*(volatile s32 *) (u32) (gp + -18244));
    a1 = 0xffff;
    a2 = 0; func_008CA810(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18244));
    a1 = 0; func_008CA300(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18228));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    goto L_00948B24;
L_00948A18:;
    v0 = (s32) 0x970000U;
    v1 = (s32) 0x970000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -32540));
    v1 = (s32) ((u32) v1 + 0xffff80d0U);
    v0 = (s32) ((u32) v0 << 4);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    at = (u64) v0 < (u64) (s64) 7;
    if (at == 0) goto L_00948B24;
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6940U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x948a5cU) goto L_00948A5C; if (t_ == 0x948accU) goto L_00948ACC; }
L_00948A5C:;
    a0 = (s32) ((u32) sp + 0x1eU);
    a1 = 0; func_00946B30(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -18248)); v0 = func_002EBEF0(a0);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -18228)); goto L_00948A9C; }
    v0 = (*(volatile s32 *) (u32) (gp + -18228));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18244));
    a1 = 0; func_008CA300(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18244)); goto L_00948AB8;
L_00948A9C:;
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18244));
    a1 = 1; func_008CA300(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18244));
L_00948AB8:;
    a1 = (*(volatile u16 *) (u32) (sp + 30));
    a2 = 0; func_008CA810(a0, a1, a2, a3);
    goto L_00948B24;
L_00948ACC:;
    a0 = (*(volatile s32 *) (u32) (gp + -18244));
    a1 = 0xffff;
    a2 = 0; func_008CA810(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18244));
    a1 = 1; func_008CA300(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18228));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18248)); v0 = func_002EBEF0(a0);
    if (v0 != 0) goto L_00948B24;
    a0 = (*(volatile s32 *) (u32) (gp + -18244));
    a1 = 0; func_008CA300(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18228));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
L_00948B24:;
    a0 = (*(volatile s32 *) (u32) (gp + -18244));
L_00948B28:;
    func_008C9E80(a0, a1, a2, a3);
    func_00948560(a0, a1, a2, a3);
    return;
}
