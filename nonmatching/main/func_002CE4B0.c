/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
void func_001E7140(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0021E000(s32);
s32 func_002F8210(s32);

void func_002CE4B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    v0 = Pes6Team_ResolveSpecialId(a0);
    s0 = v0 & 0xffff;
    v1 = s0 < 204;
    if (v1 != 0) { a0 = s1; goto L_002CE4E0; }
    a0 = 0; goto L_002CE528;
L_002CE4E0:;
    v0 = func_002F8210(a0);
    if (v0 != 0) { a0 = s0 & 0xffff; goto L_002CE4F8; }
    a0 = 0; goto L_002CE528;
L_002CE4F8:;
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xffffeb30U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    if (a0 != 0) goto L_002CE51C;
    a0 = 0; goto L_002CE528;
L_002CE51C:;
    v0 = func_0021E000(a0);
    a0 = v0;
L_002CE528:;
    if (a0 == 0) { ; goto L_002CE53C; }
    func_001E7140(a0, a1, a2, a3, a4, a5, a6, a7);
L_002CE53C:;
    return;
}
