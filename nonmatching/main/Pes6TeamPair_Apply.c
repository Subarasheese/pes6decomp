/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
s32 func_002918C0(s32);

s32 Pes6TeamPair_Apply(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s3 = a0;
    s2 = a1;
    a0 = 0;
    s1 = 0; v0 = func_002918C0(a0);
    s0 = (s32) 0x8d0000U;
    s0 = (s32) ((u32) s0 + 0xffffed40U);
L_0023D8D8:;
    s4 = (*(volatile u16 *) (u32) s0);
    a0 = s3; v0 = Pes6Team_ResolveSpecialId(a0);
    v0 = v0 & 0xffff;
    if (s4 != v0) { s4 = (*(volatile u16 *) (u32) s0); goto L_0023D92C; }
    s4 = (*(volatile u16 *) (u32) (s0 + 2));
    a0 = s2; v0 = Pes6Team_ResolveSpecialId(a0);
    v0 = v0 & 0xffff;
    if (s4 != v0) goto L_0023D928;
    v0 = (s32) 0x8d0000U;
    v1 = (s32) ((u32) s1 << 3);
    v0 = (s32) ((u32) v0 + 0xffffed44U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002918C0(a0);
    goto L_0023D998;
L_0023D928:;
    s4 = (*(volatile u16 *) (u32) s0);
L_0023D92C:;
    a0 = s2; v0 = Pes6Team_ResolveSpecialId(a0);
    v1 = v0 & 0xffff;
    if (s4 != v1) { a0 = (*(volatile u16 *) (u32) s0); goto L_0023D97C; }
    s4 = (*(volatile u16 *) (u32) (s0 + 2));
    a0 = s3; v0 = Pes6Team_ResolveSpecialId(a0);
    v1 = v0 & 0xffff;
    if (s4 != v1) goto L_0023D978;
    v0 = (s32) 0x8d0000U;
    v1 = (s32) ((u32) s1 << 3);
    v0 = (s32) ((u32) v0 + 0xffffed44U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002918C0(a0);
    goto L_0023D998;
L_0023D978:;
    a0 = (*(volatile u16 *) (u32) s0);
L_0023D97C:;
    v1 = 0xffff;
    if (a0 == v1) goto L_0023D998;
    s0 = (s32) ((u32) s0 + 0x8U);
    s1 = (s32) ((u32) s1 + 0x1U); goto L_0023D8D8;
L_0023D998:;
    return v0;
}
