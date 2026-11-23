/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);

s32 func_0021C500(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = -1;
    v1 = (*(volatile s16 *) (u32) (a0 + 12));
    s1 = (*(volatile s32 *) (u32) (a0 + 196));
    s0 = (*(volatile s32 *) (u32) (a0 + 208));
    a1 = (*(volatile s16 *) (u32) (a0 + 14));
    { s32 c_ = v1 == v0; s2 = a0; if (c_) goto L_0021C5A8; }
    if (a1 == v0) goto L_0021C5A8;
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x4cU);
    a2 = (s32) ((u32) sp + 0x48U);
    a3 = a0;
    a4 = s2; v0 = func_0021CA90(a0, a1, a2, a3, a4);
L_0021C550:;
    v1 = -126;
    if (v0 != v1) goto L_0021C5C0;
    v1 = (s32) ((u32) s0 << 4);
    a3 = (*(volatile s32 *) (u32) (s2 + 40));
    a0 = (s32) ((u32) s1 + (u32) v1);
    a2 = (*(volatile s32 *) (u32) (s2 + 36));
    { s32 c_ = a0 == 0; a1 = (*(volatile s32 *) (u32) (sp + 72)); if (c_) goto L_0021C594; }
    v0 = 2;
    if (a2 == v0) goto L_0021C584;
    a3 = (s32) ((u32) a3 << 3);
L_0021C584:;
    v0 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u16 *) (u32) (v0 + 4)) = (u16) a2;
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) a3; func_0021CD70(a0, a1);
L_0021C594:;
    v1 = (s32) ((u32) s0 + 0x1U);
    v0 = -1;
    (*(volatile u32 *) (u32) (s2 + 208)) = (u32) v1;
    goto L_0021C5C4;
L_0021C5A8:;
    (*(volatile u32 *) (u32) (s2 + 36)) = (u32) 0;
    v1 = -10;
    (*(volatile u32 *) (u32) (s2 + 40)) = (u32) 0;
    v0 = -126;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) v1; goto L_0021C550;
L_0021C5C0:;
L_0021C5C4:;
    return v0;
}
