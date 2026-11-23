/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Process_Create(s32, s32, s32, s32, s32);
s32 Pes6Process_GetWork(s32);
void Pes6Process_Start(s32, s32, s32, s32);
s32 func_001BA5A0(s32, s32, s32, s32);
void func_001BC760(s32, s32);
void func_001BC7A0(s32, s32);
s32 func_001BC7C0(void);
s32 func_001BC7D0(s32, s32, s32);

void func_001BC490(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    a0 = 8;
    a1 = 0;
    a2 = 0;
    v0 = func_001BC7D0(a0, a1, a2);
    a0 = v0; v0 = func_001BA5A0(a0, a1, a2, a3);
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -26000)) = (u32) v0; v0 = func_001BC7C0();
    a1 = (s32) 0x1c0000U;
    a5 = (s32) 0x3d0000U;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0xffffc7f0U);
    a2 = 0;
    a3 = v0;
    a4 = 0;
    a5 = (s32) ((u32) a5 + 0x1708U); v0 = Pes6Process_Create(a0, a1, a2, a3, a4);
    s0 = v0;
    a0 = s0; Pes6Process_Start(a0, a1, a2, a3);
    v0 = (s32) 0x530000U;
    a0 = s0;
    (*(volatile u32 *) (u32) (v0 + -25996)) = (u32) s0; v0 = Pes6Process_GetWork(a0);
    a0 = v0;
    a1 = 1; func_001BC7A0(a0, a1);
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25996)); v0 = Pes6Process_GetWork(a0);
    a0 = v0;
    a1 = 1; func_001BC760(a0, a1);
    return;
}
