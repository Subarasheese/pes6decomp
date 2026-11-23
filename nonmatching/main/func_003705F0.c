/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6Job_SetDone(s32);
s32 func_0023A3E0(void);

s32 func_003705F0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a1 = 35;
    a2 = (s32) ((u32) sp + 0x48U);
    s1 = a0;
    a0 = (s32) ((u32) sp + 0x30U); Pes6BitSet_Initialize(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 64));
    v0 = 26;
    v1 = (*(volatile s32 *) (u32) (v1 + 44));
    { s32 c_ = v1 == v0; s0 = (*(volatile s32 *) (u32) (s1 + 60)); if (c_) goto L_003706A8; }
    v0 = 24;
    if (v1 == v0) goto L_003706A8;
    v0 = 22;
    if (v1 == v0) goto L_003706A8;
    v0 = 20;
    if (v1 == v0) goto L_003706A8;
    v0 = 18;
    if (v1 == v0) goto L_003706A8;
    v0 = 15;
    if (v1 == v0) goto L_003706A8;
    v0 = 11;
    if (v1 == v0) goto L_003706A8;
    v0 = 13;
    if (v1 == v0) goto L_003706A8;
    v0 = 10;
    if (v1 == v0) goto L_003706A8;
    v0 = 9;
    if (v1 == v0) goto L_003706A8;
    v0 = 28;
    if (v1 == v0) goto L_003706A8;
    v1 = 0; goto L_003706C4;
L_003706A8:;
    v0 = func_0023A3E0();
    v1 = 3;
    v0 = 2;
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v1;
    v1 = 1;
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) v0;
L_003706C4:;
    if (v1 == 0) { a0 = s1; goto L_003706DC; }
    a0 = s1; Pes6Job_SetDone(a0);
    v0 = 0; goto L_003706E8;
L_003706DC:;
    Pes6Job_SetDone(a0);
    v0 = 1;
L_003706E8:;
    return v0;
}
