/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002571B0(s32, s32);
void func_002E7BA0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002E7E50(s32, s32, s32, s32);

void func_002E7360(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v0 = (*(volatile s32 *) (u32) a0);
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (v0 + 16));
    if (a0 != 0) { v0 = (*(volatile s32 *) (u32) (v0 + 20)); goto L_002E7390; }
    s1 = 0;
    v0 = 0; goto L_002E73C8;
L_002E7390:;
    if (v0 != 0) { a1 = (*(volatile s32 *) (u32) (s0 + 12)); goto L_002E73AC; }
    a1 = (*(volatile s32 *) (u32) (s0 + 12)); v0 = func_002571B0(a0, a1);
    s1 = v0;
    v0 = 0; goto L_002E73C8;
L_002E73AC:;
    v0 = func_002571B0(a0, a1);
    s1 = v0;
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 20));
    a1 = (*(volatile s32 *) (u32) (s0 + 12)); v0 = func_002571B0(a0, a1);
L_002E73C8:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) s1;
    v1 = 1;
    (*(volatile u32 *) (u32) (s0 + 64)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    if (v0 != v1) { a0 = s0; goto L_002E73F8; }
    a0 = s0;
    a1 = 8;
    a2 = 0; func_002E7BA0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_002E7408;
L_002E73F8:;
    a1 = 99;
    a2 = 0; func_002E7BA0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
L_002E7408:;
    a2 = 1;
    if (v0 != a2) { a0 = s0; goto L_002E7428; }
    a0 = s0;
    a1 = 8; func_002E7BA0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0; goto L_002E7434;
L_002E7428:;
    a1 = 99; func_002E7BA0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
L_002E7434:;
    func_002E7E50(a0, a1, a2, a3);
    return;
}
