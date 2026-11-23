/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Keyboard_Acquire(s32, s32, s32, s32);
void func_001BC300(s32, s32, s32, s32);
s32 func_001BC3D0(s32, s32, s32, s32);

void func_008D8DF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[36];
    s32 sp = (s32) (u32) frame;

    s5 = a0;
    func_001BC300(a0, a1, a2, a3);
    a2 = (s32) 0x8f0000U;
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = (s32) ((u32) a2 + 0xffffc2d0U);
    a0 = 22;
L_008D8E28:;
    v1 = (*(volatile s32 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v0;
    a2 = (s32) ((u32) a2 + 0x8U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_008D8E28; }
    s2 = (s32) 0x8f0000U;
    s4 = 0;
    s2 = (s32) ((u32) s2 + 0x57d0U);
L_008D8E54:;
    s3 = 0;
    s1 = (s32) ((u32) sp + 0x70U);
    s0 = s2;
L_008D8E60:;
    a0 = (*(volatile s32 *) (u32) s5);
    a3 = (s32) 0x8e0000U;
    a1 = (*(volatile s32 *) (u32) s1);
    a2 = (*(volatile s32 *) (u32) (s1 + 4));
    a3 = (s32) ((u32) a3 + 0xffff8f90U); v0 = func_001BC3D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 22;
    s1 = (s32) ((u32) s1 + 0x8U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008D8E60; }
    s4 = (s32) ((u32) s4 + 0x1U);
    s5 = (s32) ((u32) s5 + 0x4U);
    v0 = s4 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x58U); if (c_) goto L_008D8E54; }
    v1 = (s32) 0x8f0000U;
    v0 = (s32) 0x8f0000U;
    (*(volatile u32 *) (u32) (v1 + 22656)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 22660)) = (u32) 0;
    v1 = (s32) 0x8f0000U;
    v0 = (s32) 0x8f0000U;
    (*(volatile u32 *) (u32) (v1 + 22664)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 22668)) = (u32) 0;
    v1 = (s32) 0x8f0000U;
    v0 = (s32) 0x8f0000U;
    (*(volatile u32 *) (u32) (v1 + 22672)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 22676)) = (u32) 0;
    v1 = (s32) 0x8f0000U;
    v0 = (s32) 0x8f0000U;
    (*(volatile u32 *) (u32) (v1 + 22680)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 22684)) = (u32) 0; Pes6Keyboard_Acquire(a0, a1, a2, a3);
    return;
}
