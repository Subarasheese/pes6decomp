/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6TextureCache_Invalidate(s64);
s64 func_001454C0(s64);
s64 func_0014AE80(s64);

void func_002D0A00(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v0 = 4;
    v1 = (s32) ((u32) sp + 0x4cU);
    s2 = a0;
    s1 = a1;
    { s32 c_ = v1 == 0; s0 = a2; if (c_) goto L_002D0A48; }
L_002D0A2C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002D0A2C;
L_002D0A48:;
    a0 = s2; v0 = func_001454C0(a0);
    a0 = v0;
    if (a0 == 0) { ; goto L_002D0B04; }
    if (s1 != 0) { v1 = (*(volatile u8 *) (u32) s1); goto L_002D0A70; }
    goto L_002D0B00;
    v1 = (*(volatile u8 *) (u32) s1);
L_002D0A70:;
    v0 = (*(volatile u16 *) (u32) s1);
    a1 = (*(volatile u8 *) (u32) (s1 + 1));
    v1 = v1 & 0x1f;
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s64) ((u64) v0 << 54);
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) v1;
    v0 = (s64) ((u64) v0 >> 59);
    v1 = (s32) ((u32) v0 << 3);
    v0 = (s64) ((u64) a1 << 57);
    (*(volatile u8 *) (u32) (sp + 77)) = (u8) v1;
    v0 = (s64) ((u64) v0 >> 59);
    v1 = (s32) ((u32) v0 << 3);
    v0 = (s64) ((u64) a1 << 56);
    v0 = (s64) ((u64) v0 >> 63);
    { s32 c_ = v0 == 0; (*(volatile u8 *) (u32) (sp + 78)) = (u8) v1; if (c_) goto L_002D0AB8; }
    v0 = 128; goto L_002D0ABC;
L_002D0AB8:;
    v0 = 0;
L_002D0ABC:;
    (*(volatile u8 *) (u32) (sp + 79)) = (u8) v0; v0 = func_0014AE80(a0);
    v1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffff280U);
    a2 = (*(volatile u8 *) (u32) (sp + 76));
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = s2;
    a3 = (*(volatile s32 *) (u32) v1);
    a1 = (*(volatile u8 *) (u32) (sp + 77));
    a3 = (s32) ((u32) a3 << 2);
    v1 = (*(volatile u8 *) (u32) (sp + 78));
    v0 = (s32) ((u32) v0 + (u32) a3);
    (*(volatile u8 *) (u32) v0) = (u8) a2;
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) a1;
    (*(volatile u8 *) (u32) (v0 + 2)) = (u8) v1; Pes6TextureCache_Invalidate(a0);
L_002D0B00:;
L_002D0B04:;
    return;
}
