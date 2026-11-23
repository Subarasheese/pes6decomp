/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void Pes6Heap_Free(s32);
void func_001BC2B0(s32, s32, s32, s32);
s32 func_00225820(void);
s32 func_002260F0(s32);
void func_00361E90(s32, s32);
void func_00C99A90(s32, s32, s32, s32);
s32 func_00C9A270(s32, s32, s32, s32);

void func_008F9780(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5672));
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = (*(volatile s32 *) (u32) v0); func_00C99A90(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -5672)); Pes6Heap_Free(a0);
    v0 = (s32) 0x3b0000U;
    { s32 c_ = s0 == 0; (*(volatile u32 *) (u32) (v0 + -5672)) = (u32) 0; if (c_) goto L_008F9844; }
    v0 = func_00225820();
    a0 = v0 & 0xff; v0 = func_002260F0(a0);
    v1 = (s32) 0x590000U;
    a1 = 255;
    a0 = (*(volatile u8 *) (u32) (v1 + 10241));
    if (a0 != a1) { a1 = (s32) ((u32) v0 + 0x4cU); goto L_008F97F8; }
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 10587));
    if (v1 == a1) { a0 = 1; goto L_008F97F4; }
    a0 = 0; goto L_008F97F4;
L_008F97F4:;
    a1 = (s32) ((u32) v0 + 0x4cU);
L_008F97F8:;
    func_00361E90(a0, a1);
    a0 = 1;
    a1 = 8; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) 0xc0000U;
    a1 = (s32) 0x900000U;
    a3 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v1 + -5672)) = (u32) v0;
    a0 = a0 | 0x3b;
    a1 = (s32) ((u32) a1 + 0xffff9730U);
    a2 = 0;
    a3 = (s32) ((u32) a3 + 0xffff9780U); v0 = func_00C9A270(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5672));
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) v0; goto L_008F984C;
L_008F9844:;
    func_001BC2B0(a0, a1, a2, a3);
L_008F984C:;
    return;
}
