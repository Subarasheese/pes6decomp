/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00188910(s32);
s32 func_00B29CB0(void);

void func_00B277E0(s32 a0) {
    s32 v0 = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = func_00B29CB0();
    if (v0 == 0) { a0 = (s32) ((u32) sp + 0x10U); goto L_00B27800; }
    v0 = 0; goto L_00B2780C;
L_00B27800:;
    func_00188910(a0);
    v0 = (*(volatile s32 *) (u32) (sp + 40));
L_00B2780C:;
    return;
}
