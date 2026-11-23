/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00223960(s64);
void memcpy(s64, s64, s64);

s64 func_002371F0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    if (a0 != 0) goto L_00237288;
    a1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = (s32) ((u32) a1 + 0xffff9b48U);
    a2 = 8;
    s1 = (s64) ((u64) 0 + (u64) (s64) 294);
    s0 = (s64) ((u64) 0 + (u64) (s64) 295); memcpy(a0, a1, a2);
    a1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) sp + 0x58U);
    a1 = (s32) ((u32) a1 + 0xffff9b50U);
    a2 = 8; memcpy(a0, a1, a2);
    a1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = (s32) ((u32) a1 + 0xffff9b58U);
    a2 = 8; memcpy(a0, a1, a2);
    a1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) sp + 0x48U);
    a1 = (s32) ((u32) a1 + 0xffff9b60U);
    a2 = 8; memcpy(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x6cU);
    a1 = (s32) ((u32) gp + 0xffff8178U);
    a2 = 2; memcpy(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x68U);
    a1 = (s32) ((u32) gp + 0xffff817cU);
    a2 = 2; memcpy(a0, a1, a2);
    a0 = s1; goto L_00237304;
L_00237288:;
    a1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = (s32) ((u32) a1 + 0xffff9b50U);
    a2 = 8;
    s1 = (s64) ((u64) 0 + (u64) (s64) 295);
    s0 = (s64) ((u64) 0 + (u64) (s64) 294); memcpy(a0, a1, a2);
    a1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) sp + 0x58U);
    a1 = (s32) ((u32) a1 + 0xffff9b48U);
    a2 = 8; memcpy(a0, a1, a2);
    a1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = (s32) ((u32) a1 + 0xffff9b60U);
    a2 = 8; memcpy(a0, a1, a2);
    a1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) sp + 0x48U);
    a1 = (s32) ((u32) a1 + 0xffff9b58U);
    a2 = 8; memcpy(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x6cU);
    a1 = (s32) ((u32) gp + 0xffff817cU);
    a2 = 2; memcpy(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x68U);
    a1 = (s32) ((u32) gp + 0xffff8178U);
    a2 = 2; memcpy(a0, a1, a2);
    a0 = s1;
L_00237304:;
    v0 = func_00223960(a0);
    a0 = s0;
    s2 = v0; v0 = func_00223960(a0);
    s0 = (*(volatile s32 *) (u32) v0);
    s1 = v0;
    a1 = (*(volatile s32 *) (u32) s2);
    a2 = 8252;
    a0 = s0; memcpy(a0, a1, a2);
    a1 = s2;
    a0 = s1;
    a2 = 4504; memcpy(a0, a1, a2);
    (*(volatile u32 *) (u32) s1) = (u32) s0;
    a0 = (*(volatile s32 *) (u32) (s0 + 60));
    v1 = (*(volatile s32 *) (u32) (sp + 80));
    if (a0 != v1) { v1 = (*(volatile s32 *) (u32) (sp + 84)); goto L_00237360; }
    v1 = (*(volatile s32 *) (u32) (sp + 76));
    (*(volatile u32 *) (u32) (s0 + 60)) = (u32) v1; goto L_00237370;
L_00237360:;
    if (a0 != v1) { a0 = (*(volatile s32 *) (u32) (s0 + 64)); goto L_00237374; }
    v1 = (*(volatile s32 *) (u32) (sp + 76));
    (*(volatile u32 *) (u32) (s0 + 60)) = (u32) v1;
L_00237370:;
    a0 = (*(volatile s32 *) (u32) (s0 + 64));
L_00237374:;
    v1 = (*(volatile s32 *) (u32) (sp + 80));
    if (a0 != v1) { v1 = (*(volatile s32 *) (u32) (sp + 84)); goto L_0023738C; }
    v1 = (*(volatile s32 *) (u32) (sp + 76));
    (*(volatile u32 *) (u32) (s0 + 64)) = (u32) v1; goto L_0023739C;
L_0023738C:;
    if (a0 != v1) { a1 = (s32) ((u32) s0 + 0x158U); goto L_002373A0; }
    v1 = (*(volatile s32 *) (u32) (sp + 76));
    (*(volatile u32 *) (u32) (s0 + 64)) = (u32) v1;
L_0023739C:;
    a1 = (s32) ((u32) s0 + 0x158U);
L_002373A0:;
    a2 = 0;
L_002373A4:;
    a3 = (*(volatile u8 *) (u32) (a1 + 3));
    a0 = (*(volatile u8 *) (u32) (sp + 108));
    at = a3 < a0;
    if (at != 0) goto L_002373E0;
    v1 = (*(volatile u8 *) (u32) (sp + 109));
    at = v1 < a3;
    if (at != 0) goto L_002373E0;
    v1 = (*(volatile u8 *) (u32) (sp + 104));
    a0 = (s32) ((u32) a3 - (u32) a0);
    a0 = a0 & 0xff;
    v1 = (s32) ((u32) a0 + (u32) v1);
    a3 = v1 & 0xff;
L_002373E0:;
    a2 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u8 *) (u32) (a1 + 3)) = (u8) a3;
    v1 = a2 < 4;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x18U); if (c_) goto L_002373A4; }
    a2 = 0;
L_002373F8:;
    a1 = (*(volatile u16 *) (u32) (s1 + 4404));
    a0 = (*(volatile u16 *) (u32) (sp + 96));
    at = a1 < a0;
    if (at != 0) goto L_00237438;
    v1 = (*(volatile u16 *) (u32) (sp + 98));
    v1 = v1 < a1;
    if (v1 != 0) goto L_00237438;
    v1 = (s32) ((u32) a1 - (u32) a0);
    (*(volatile u16 *) (u32) (s1 + 4404)) = (u16) v1;
    a0 = (*(volatile u16 *) (u32) (s1 + 4404));
    v1 = (*(volatile u16 *) (u32) (sp + 88));
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u16 *) (u32) (s1 + 4404)) = (u16) v1; goto L_00237478;
L_00237438:;
    a0 = (*(volatile u16 *) (u32) (sp + 100));
    at = a1 < a0;
    if (at != 0) goto L_00237478;
    v1 = (*(volatile u16 *) (u32) (sp + 102));
    v1 = v1 < a1;
    if (v1 != 0) goto L_00237478;
    v1 = (*(volatile u16 *) (u32) (s1 + 4404));
    v1 = (s32) ((u32) v1 - (u32) a0);
    (*(volatile u16 *) (u32) (s1 + 4404)) = (u16) v1;
    a0 = (*(volatile u16 *) (u32) (s1 + 4404));
    v1 = (*(volatile u16 *) (u32) (sp + 92));
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u16 *) (u32) (s1 + 4404)) = (u16) v1;
L_00237478:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 32;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x2U); if (c_) goto L_002373F8; }
    return v0;
}
