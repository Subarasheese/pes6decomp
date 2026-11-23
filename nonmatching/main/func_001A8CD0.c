/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
void func_001CDAD0(s32);

void func_001A8CD0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s1 = (*(volatile s32 *) (u32) a0);
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (s1 + 4));
    if (a0 == 0) goto L_001A8CFC;
    Pes6Heap_Free(a0);
L_001A8CFC:;
    v0 = (*(volatile s32 *) (u32) (s0 + 68));
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 68)); func_001CDAD0(a0);
    a1 = (*(volatile s32 *) (u32) (s0 + 68));
    a0 = 0;
    v1 = 0;
    a1 = (*(volatile s32 *) (u32) (a1 + 4));
    a2 = (*(volatile s32 *) (u32) a1);
    (*(volatile u32 *) (u32) (gp + -23224)) = (u32) a2;
    a1 = (*(volatile s32 *) (u32) a2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    (*(volatile u32 *) (u32) a2) = (u32) a1;
    a2 = (*(volatile s32 *) (u32) (gp + -23224));
    a1 = (*(volatile s32 *) (u32) (a2 + 4));
    a1 = (s32) ((u32) a2 + (u32) a1);
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) a1;
    a2 = (*(volatile s32 *) (u32) (gp + -23224));
    a1 = (*(volatile s32 *) (u32) (a2 + 8));
    a1 = (s32) ((u32) a2 + (u32) a1);
    (*(volatile u32 *) (u32) (a2 + 8)) = (u32) a1;
    a2 = (*(volatile s32 *) (u32) (gp + -23224));
    a1 = (*(volatile s32 *) (u32) (a2 + 12));
    a1 = (s32) ((u32) a2 + (u32) a1);
    (*(volatile u32 *) (u32) (a2 + 12)) = (u32) a1;
    a2 = (*(volatile s32 *) (u32) (gp + -23224));
    a1 = (*(volatile s32 *) (u32) (a2 + 16));
    a1 = (s32) ((u32) a2 + (u32) a1);
    (*(volatile u32 *) (u32) (a2 + 16)) = (u32) a1;
    a2 = (*(volatile s32 *) (u32) (gp + -23224));
    a1 = (*(volatile s32 *) (u32) (a2 + 20));
    a1 = (s32) ((u32) a2 + (u32) a1);
    (*(volatile u32 *) (u32) (a2 + 20)) = (u32) a1;
    a1 = (*(volatile s32 *) (u32) (s0 + 68));
    a1 = (*(volatile s32 *) (u32) (a1 + 4));
    a1 = (*(volatile s32 *) (u32) (a1 + 4));
    (*(volatile u32 *) (u32) (gp + -23216)) = (u32) a1;
L_001A8D90:;
    a3 = (*(volatile s32 *) (u32) (gp + -23216));
    a2 = (s32) ((u32) a3 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) a2);
    if (a1 == 0) goto L_001A8DC8;
    a1 = (s32) ((u32) a3 + (u32) a1);
    (*(volatile u32 *) (u32) a2) = (u32) a1;
    a3 = (*(volatile s32 *) (u32) (gp + -23216));
    a1 = (s32) ((u32) a3 + (u32) v1);
    a2 = (*(volatile s32 *) (u32) a1);
    a1 = (*(volatile s32 *) (u32) (a2 + 4));
    a1 = (s32) ((u32) a3 + (u32) a1);
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) a1;
L_001A8DC8:;
    a0 = (s32) ((u32) a0 + 0x1U);
    a1 = a0 < 2;
    { s32 c_ = a1 != 0; v1 = (s32) ((u32) v1 + 0x4U); if (c_) goto L_001A8D90; }
    return;
}
