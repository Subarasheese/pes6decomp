/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Task_AddDraw(s32, s32);
void func_001BA5B0(s32, s32, s32, s32);
s32 func_001BC110(s32, s32, s32, s32);
void func_001BC490(s32, s32, s32, s32);
void func_001D6C40(s32, s32);
void func_001DED30(s32);
s32 func_0020E300(void);

void func_001BBCD0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3f800000U;
    a0 = (s32) ((u32) sp + 0x38U);
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) 0; func_001DED30(a0);
    s0 = (s32) 0x530000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffff9a68U);
L_001BBD00:;
    v0 = (*(volatile s32 *) (u32) s0);
    if (v0 != 0) goto L_001BBD18;
    v0 = func_001BC110(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
L_001BBD18:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 2;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001BBD00; }
    a0 = (s32) 0x1c0000U;
    a1 = 5;
    a0 = (s32) ((u32) a0 + 0xffffbc70U); Pes6Task_AddDraw(a0, a1);
    func_001BA5B0(a0, a1, a2, a3);
    func_001BC490(a0, a1, a2, a3);
    v0 = func_0020E300();
    a0 = 12;
    a1 = v0; func_001D6C40(a0, a1);
    return;
}
