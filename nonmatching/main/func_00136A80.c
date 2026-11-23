/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0010D800(s32);
s32 sceSdRemote(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00136A80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, s0 = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 68)); func_0010D800(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 88)); func_0010D800(a0);
    a0 = 1;
    a1 = 0x8010;
    a2 = 2048;
    a3 = 3840; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 1;
    a1 = 0x8010;
    a2 = 2049;
    a3 = 4044; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 260;
    a0 = 1;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v0;
    a1 = 0x8130;
    a2 = 0;
    a3 = (s32) ((u32) sp + 0x20U);
    (*(volatile u16 *) (u32) (sp + 40)) = (u16) 0;
    (*(volatile u16 *) (u32) (sp + 42)) = (u16) 0;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) 0; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 1;
    a1 = 0x8130;
    a2 = a0;
    a3 = (s32) ((u32) sp + 0x20U); v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 1;
    a1 = 0x8070;
    a2 = 2;
    a3 = a0; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 1;
    a1 = 0x8070;
    a2 = 3;
    a3 = a0; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = 0;
L_00136B34:;
    a2 = s0 | 0x980;
    a0 = 1;
    a1 = 0x8010;
    a3 = 16383; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    a2 = s0 | 0xa80;
    a0 = 1;
    a1 = 0x8010;
    a3 = 16383; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 2;
    if (v0 != 0) goto L_00136B34;
    v0 = 1;
    return;
}
