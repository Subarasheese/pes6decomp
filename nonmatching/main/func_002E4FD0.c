/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 func_001F1F10(s64, s64, s64, s64);
void func_001F3D10(s64, s64);
void func_001F3D80(s64, s64, s64);
void func_002E5150(s64, s64);
void func_002E5A40(s64, s64, s64, s64);

s64 func_002E4FD0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    { s32 c_ = s2 != 0; s0 = a2; if (c_) goto L_002E5000; }
    v0 = 0; goto L_002E512C;
L_002E5000:;
    a0 = 1;
    a1 = 36; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    at = s3 < 3;
    { s32 c_ = at != 0; s1 = v0; if (c_) goto L_002E5020; }
    s3 = 2; goto L_002E5030;
L_002E5020:;
    if (s3 >= 0) goto L_002E5030;
    s3 = 0; goto L_002E5030;
L_002E5030:;
    (*(volatile u32 *) (u32) s1) = (u32) s3; v0 = func_001F1F10(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 24)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F3D10(a0, a1);
    f0.f = (*(volatile f32 *) (u32) s2);
    a1 = (s32) ((u32) sp + 0x60U);
    (*(volatile f32 *) (u32) (sp + 96)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s2 + 4));
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s1 + 24));
    a2 = 0; func_001F3D80(a0, a1, a2);
    f0.f = (*(volatile f32 *) (u32) (s2 + 12));
    at = 0x8000;
    at = s0 < at;
    { s32 c_ = at != 0; (*(volatile f32 *) (u32) (s1 + 12)) = f0.f; if (c_) goto L_002E508C; }
    s0 = 32767; goto L_002E509C;
L_002E508C:;
    if (s0 > 0) goto L_002E509C;
    s0 = 1; goto L_002E509C;
L_002E509C:;
    a0 = (s64) ((u64) s0 << 48);
    a1 = 80;
    a0 = a0 >> 48;
    (*(volatile u16 *) (u32) (s1 + 28)) = (u16) s0; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 32)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) 0;
    v0 = (*(volatile s16 *) (u32) (s1 + 28));
    { s32 c_ = v0 <= 0; s2 = 0; if (c_) goto L_002E5118; }
    s0 = 0;
L_002E50D4:;
    v0 = (*(volatile s32 *) (u32) (s1 + 32));
    a1 = s1;
    a0 = (s32) ((u32) v0 + (u32) s0); func_002E5A40(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s1 + 32));
    a1 = (s32) ((u32) sp + 0x50U);
    a0 = (s32) ((u32) v0 + (u32) s0); func_002E5150(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (s1 + 12));
    s2 = (s32) ((u32) s2 + 0x1U);
    f0.f = (*(volatile f32 *) (u32) (sp + 84));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f;
    v0 = (*(volatile s16 *) (u32) (s1 + 28));
    v0 = s2 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x50U); if (c_) goto L_002E50D4; }
L_002E5118:;
    v0 = -1;
    (*(volatile u16 *) (u32) (s1 + 8)) = (u16) v0;
    v0 = 1;
    (*(volatile u8 *) (u32) (s1 + 10)) = (u8) v0;
    v0 = s1;
L_002E512C:;
    return v0;
}
