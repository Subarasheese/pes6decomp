/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void Pes6Heap_Free(s32);
s32 func_0025EC50(void);
s32 func_0025EC60(s32);
s32 func_0025EC80(s32);
s32 func_0025ECE0(s32);
void func_0025ED00(s32, s32);

void func_00259F10(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    a1 = (s32) 0x590000U;
    a0 = 3;
    a1 = (s32) ((u32) a1 + 0xffffcf8cU);
    func_0025ED00(a0, a1);
    a0 = 3; v0 = func_0025EC80(a0);
    v1 = (s32) 0x590000U;
    a0 = 3;
    (*(volatile u32 *) (u32) (v1 + -12400)) = (u32) v0; v0 = func_0025ECE0(a0);
    v1 = (s32) 0x590000U;
    a0 = 3;
    (*(volatile u32 *) (u32) (v1 + -12396)) = (u32) v0; v0 = func_0025EC50();
    v1 = (s32) 0x590000U;
    a0 = 3;
    (*(volatile u32 *) (u32) (v1 + -12392)) = (u32) v0; v0 = func_0025EC60(a0);
    v1 = (s32) 0x590000U;
    s0 = (s32) 0x590000U;
    s1 = 0;
    (*(volatile u32 *) (u32) (v1 + -12388)) = (u32) v0;
    s0 = (s32) ((u32) s0 + 0xffffcf80U);
L_00259F7C:;
    a0 = (*(volatile s32 *) (u32) (s0 + 40));
    if (a0 == 0) goto L_00259F90;
    Pes6Heap_Free(a0);
L_00259F90:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s16 *) (u32) (v0 + -12404));
    a1 = 2; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) v0;
    v1 = s1 < 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00259F7C; }
    v1 = (s32) 0x590000U;
    a0 = 2;
    (*(volatile u16 *) (u32) (v1 + -12364)) = (u16) 0;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + -12362)) = (u8) a0;
    return;
}
