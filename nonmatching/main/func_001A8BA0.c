/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
s32 func_0017F9A0(s32, s32, s32, s32, s32);

void func_001A8BA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x3b0000U;
    a0 = -1;
    a1 = (*(volatile s32 *) (u32) (v1 + -984));
    (*(volatile u32 *) (u32) (gp + -23220)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) a1);
    if (v1 == a0) goto L_001A8C90;
    s1 = 0;
    s0 = (s32) ((u32) sp + 0x40U);
L_001A8BD4:;
    v0 = (s32) ((u32) a1 + (u32) s1);
    a0 = 20;
    v0 = (s32) ((u32) v0 + 0x4U);
    v1 = (s32) ((u32) sp + 0x30U);
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v0;
L_001A8BE8:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 1)) = (u8) 0;
    a0 = (s32) ((u32) a0 + 0xfffffffbU);
    (*(volatile u8 *) (u32) (v1 + 2)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 4)) = (u8) 0;
    { s32 c_ = a0 > 0; v1 = (s32) ((u32) v1 + 0x5U); if (c_) goto L_001A8BE8; }
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -1005));
    v0 = (*(volatile s32 *) (u32) (v0 + -984));
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    if (a0 == 0) goto L_001A8C48;
    Pes6Heap_Free(a0);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -984));
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0;
L_001A8C48:;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -984));
    a1 = (s32) 0x1b0000U;
    a1 = (s32) ((u32) a1 + 0xffff8cb0U);
    a2 = (s32) ((u32) sp + 0x4cU);
    a3 = 4;
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0);
    a4 = (s32) ((u32) sp + 0x30U); v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    v1 = (s32) 0x3b0000U;
    s1 = (s32) ((u32) s1 + 0x8U);
    a1 = (*(volatile s32 *) (u32) (v1 + -984));
    a0 = (s32) ((u32) a1 + (u32) s1);
    v1 = -1;
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 != v1) goto L_001A8BD4;
L_001A8C90:;
    return;
}
