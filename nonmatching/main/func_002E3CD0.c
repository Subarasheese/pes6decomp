/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE790(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF370(s32, s32);
void func_001EF900(s32, s32);
s32 func_00209F60(s32, s32, s32, s32, s32);
void func_0020A460(s32, s32, s32, s32);

s32 func_002E3CD0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a2;
    s0 = (*(volatile s32 *) (u32) a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    s1 = a1; func_0020A460(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = s1;
    a2 = s3;
    a3 = (s32) ((u32) sp + 0x7cU);
    a4 = 0; v0 = func_00209F60(a0, a1, a2, a3, a4);
    s2 = v0;
    if (s2 != 0) { (*(volatile u32 *) (u32) (sp + 96)) = (u32) 0; goto L_002E3D30; }
    v0 = 0; goto L_002E3DC0;
L_002E3D30:;
    s1 = 0;
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) 0;
    s0 = s4;
    v0 = (*(volatile s32 *) (u32) s4);
    f0.f = (*(volatile f32 *) (u32) (v0 + 20));
    (*(volatile f32 *) (u32) (sp + 104)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    (*(volatile f32 *) (u32) (sp + 108)) = f0.f;
L_002E3D50:;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = s2; func_001EEAC0(a0, a1);
    a1 = (*(volatile s32 *) (u32) (sp + 124));
    a0 = (*(volatile s32 *) (u32) (s0 + 4)); func_001EE790(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (s32) ((u32) sp + 0x60U); func_001EF370(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 2;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002E3D50; }
    v1 = (*(volatile u8 *) (u32) (s4 + 16));
    v0 = (*(volatile u8 *) (u32) (s4 + 17));
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    v0 = v1 & v0;
    s0 = v0 & 0xff;
    a1 = s0; func_001EF900(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s4 + 18));
    v0 = s0 & 0xff;
    a0 = (*(volatile s32 *) (u32) (s4 + 8));
    v0 = v0 & v1;
    a1 = v0 & 0xff; func_001EF900(a0, a1);
    (*(volatile u32 *) (u32) (s4 + 12)) = (u32) s3;
    v0 = 1;
L_002E3DC0:;
    return v0;
}
