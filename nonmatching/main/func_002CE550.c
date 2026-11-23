/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
void func_001E7370(s32, s32);
s32 func_0021E000(s32);
s32 func_002F8210(s32);

void func_002CE550(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a0;
    s0 = a1; v0 = Pes6Team_ResolveSpecialId(a0);
    s1 = v0 & 0xffff;
    v1 = s1 < 204;
    if (v1 != 0) { a0 = s2; goto L_002CE588; }
    a0 = 0; goto L_002CE5D0;
L_002CE588:;
    v0 = func_002F8210(a0);
    if (v0 != 0) { a0 = s1 & 0xffff; goto L_002CE5A0; }
    a0 = 0; goto L_002CE5D0;
L_002CE5A0:;
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xffffeb30U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    if (a0 != 0) goto L_002CE5C4;
    a0 = 0; goto L_002CE5D0;
L_002CE5C4:;
    v0 = func_0021E000(a0);
    a0 = v0;
L_002CE5D0:;
    if (a0 == 0) { ; goto L_002CE5E4; }
    a1 = s0; func_001E7370(a0, a1);
L_002CE5E4:;
    return;
}
