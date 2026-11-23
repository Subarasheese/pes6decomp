/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001BE5B0(s32);
s32 func_002646D0(s32);
void func_00264790(s32, s32);
void func_002648E0(s32);
void func_002648F0(s32);

s32 func_008F6080(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = 0;
    s0 = (*(volatile s32 *) (u32) a0);
    a0 = s0; func_002648F0(a0);
    a0 = s0; v0 = func_002646D0(a0);
    v1 = v0 & 0xff;
    a1 = 3;
    if (v1 == a1) { s1 = 1; goto L_008F611C; }
    v0 = 2;
    if (v1 == v0) { a0 = s0; goto L_008F6110; }
    a1 = 1;
    if (v1 == a1) { a0 = 0; goto L_008F60EC; }
    if (v1 == 0) { a0 = s0; goto L_008F60E0; }
    a0 = s0; goto L_008F6120;
L_008F60E0:;
    func_00264790(a0, a1);
    a0 = 0;
L_008F60EC:;
    v0 = func_001BE5B0(a0);
    if (v0 == 0) goto L_008F611C;
    a0 = s0;
    a1 = 2; func_00264790(a0, a1);
    goto L_008F611C;
L_008F6110:;
    func_00264790(a0, a1);
    s1 = 1;
L_008F611C:;
    a0 = s0;
L_008F6120:;
    func_002648E0(a0);
    v0 = s1;
    return v0;
}
