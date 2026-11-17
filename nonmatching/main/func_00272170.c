/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Free(s32, s32);
s32 func_001454C0(s32);
s32 func_00145590(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0017FA00(s32, s32, s32, s32, s32);

s32 func_00272170(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x590000U;
    s0 = (*(volatile u8 *) (u32) (v1 + 7114));
    v1 = (*(volatile s32 *) (u32) (gp + -22240));
    if (v1 == 0) goto L_002721D8;
    v1 = (*(volatile s32 *) (u32) (gp + -22236));
    if (v1 == s0) goto L_0027221C;
    a0 = 140; v0 = func_001454C0(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -22240));
    { s32 c_ = a0 == 0; s1 = v0; if (c_) goto L_002721C0; }
    v0 = Pes6Heap_Free(a0, a1);
    (*(volatile u32 *) (u32) (gp + -22240)) = (u32) 0;
L_002721C0:;
    if (s1 == 0) goto L_002721D8;
    a0 = s1; v0 = func_00145590(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s1; v0 = Pes6Heap_Free(a0, a1);
L_002721D8:;
    v1 = (*(volatile s32 *) (u32) (gp + -22232));
    a1 = (s32) 0x180000U;
    (*(volatile u32 *) (u32) (gp + -22236)) = (u32) s0;
    v0 = (s32) ((u32) gp + 0xffffa920U);
    a1 = (s32) ((u32) a1 + 0xffffe290U);
    a2 = (s32) ((u32) sp + 0x3cU);
    a3 = 4;
    a0 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0; v0 = func_0017FA00(a0, a1, a2, a3, a4);
    v0 = (*(volatile s32 *) (u32) (gp + -22232));
    a1 = (s32) 0x180000U;
    a1 = (s32) ((u32) a1 + 0xffffe1d0U);
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 0; v0 = func_0017FA00(a0, a1, a2, a3, a4);
L_0027221C:;
    return v0;
}
