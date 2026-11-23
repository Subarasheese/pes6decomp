/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 Pes6PauseEvSet_Start(s32, s32, s32);
void SD_call(s32);
void func_001BC300(s32, s32, s32, s32);
s32 func_002F7970(s32, s32, s32, s32);
s32 func_00308400(void);
s32 func_0081D2C0(s32, s32, s32, s32);

s32 func_00C76360(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v0 = func_002F7970(a0, a1, a2, a3);
    if (v0 == 0) goto L_00C763A4;
    v0 = func_0081D2C0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 0; goto L_00C76404; }
    v0 = func_00308400();
    if (v0 == 0) goto L_00C763A4;
    v0 = 0;
    goto L_00C76404;
L_00C763A4:;
    func_001BC300(a0, a1, a2, a3);
    a0 = 1;
    a1 = 24; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    a0 = (s32) 0x3b0000U;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (a0 + -5676)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (v1 + 7607));
    if (v0 != 0) goto L_00C763DC;
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
L_00C763DC:;
    a0 = (s32) 0xc70000U;
    a1 = (s32) 0xc70000U;
    a0 = (s32) ((u32) a0 + 0x5fe0U);
    a1 = (s32) ((u32) a1 + 0x5fa0U);
    a2 = 0; v0 = Pes6PauseEvSet_Start(a0, a1, a2);
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5676));
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) v0;
    v0 = 0;
L_00C76404:;
    return v0;
}
