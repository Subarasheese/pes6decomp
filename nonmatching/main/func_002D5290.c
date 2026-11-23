/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
void func_00220B70(s32);
s32 func_0022F2D0(s32);
s32 func_0022F330(s32, s32);
s32 func_0023D820(void);

void func_002D5290(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = 14;
    { s32 c_ = a0 == v0; s0 = a1; if (c_) goto L_002D533C; }
    v0 = 4;
    if (a0 == v0) { a1 = a2 & 0xff; goto L_002D5308; }
    v0 = 2;
    if (a0 == v0) goto L_002D5304;
    v0 = 1;
    if (a0 == v0) goto L_002D5304;
    v0 = func_0023D820();
    if (v0 == 0) goto L_002D52F0;
    v0 = (s32) 0x3e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -21692)); v0 = func_001F08B0(a0);
    goto L_002D5344;
L_002D52F0:;
    v0 = (s32) 0x3e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -21696)); v0 = func_001F08B0(a0);
    goto L_002D5344;
L_002D5304:;
    a1 = a2 & 0xff;
L_002D5308:;
    a0 = s0 & 0xff; v0 = func_0022F330(a0, a1);
    v1 = 27;
    if (v0 != v1) { a0 = v0; goto L_002D532C; }
    a0 = s0; v0 = func_0022F2D0(a0);
    goto L_002D5344;
L_002D532C:;
    func_00220B70(a0);
    goto L_002D5344;
L_002D533C:;
    a0 = s0; v0 = func_0022F2D0(a0);
L_002D5344:;
    if (v0 != 0) { ; goto L_002D5354; }
    v0 = (s32) ((u32) gp + 0xffff82a0U);
L_002D5354:;
    return;
}
