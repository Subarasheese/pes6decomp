/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Process_Create(s32, s32, s32, s32, s32);
s32 Pes6Process_GetWork(s32);
s32 Pes6Process_Start(s32, s32, s32, s32);
s32 func_001F1F10(s32, s32, s32, s32);
s32 func_001F2050(s32, s32, s32, s32);
s32 func_001F27D0(s32, s32);
s32 func_001F2880(s32, s32, s32, s32);
s32 func_001F3D10(s32, s32);

s32 func_002DC240(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a3;
    { s32 c_ = a1 >= 0; f20.i = f12.i; if (c_) goto L_002DC26C; }
    a1 = 0;
L_002DC26C:;
    if (a2 > 0) goto L_002DC278;
    a2 = 1;
L_002DC278:;
    (*(volatile u16 *) (u32) (sp + 80)) = (u16) a1;
    a0 = (s32) 0x2e0000U;
    (*(volatile u16 *) (u32) (sp + 82)) = (u16) a2;
    a1 = (s32) 0x2e0000U;
    a2 = (s32) 0x2e0000U;
    a5 = (s32) 0x3e0000U;
    (*(volatile f32 *) (u32) (sp + 88)) = f13.f;
    a0 = (s32) ((u32) a0 + 0xffffc440U);
    a3 = 68;
    a1 = (s32) ((u32) a1 + 0xffffc5c0U);
    a2 = (s32) ((u32) a2 + 0xffffc430U);
    a4 = 0;
    a5 = (s32) ((u32) a5 + 0xffffc4f8U);
    (*(volatile f32 *) (u32) (sp + 84)) = f20.f; v0 = Pes6Process_Create(a0, a1, a2, a3, a4);
    s0 = v0;
    if (s0 != 0) { a0 = s0; goto L_002DC2C8; }
    v0 = 0; goto L_002DC408;
L_002DC2C8:;
    v0 = Pes6Process_Start(a0, a1, a2, a3);
    a0 = s0; v0 = Pes6Process_GetWork(a0);
    (*(volatile u32 *) (u32) (v0 + 64)) = (u32) s0;
    f2.f = (*(volatile f32 *) (u32) (sp + 80));
    (*(volatile u32 *) (u32) (v0 + 60)) = (u32) 0;
    f1.f = (*(volatile f32 *) (u32) (sp + 84));
    (*(volatile u32 *) (u32) (v0 + 56)) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (sp + 88));
    (*(volatile u32 *) (u32) (v0 + 52)) = (u32) 0;
    s0 = v0;
    (*(volatile f32 *) (u32) v0) = f2.f;
    (*(volatile f32 *) (u32) (v0 + 4)) = f1.f;
    (*(volatile f32 *) (u32) (v0 + 8)) = f0.f;
    (*(volatile f32 *) (u32) (v0 + 28)) = f20.f;
    { s32 c_ = s2 != 0; (*(volatile f32 *) (u32) (v0 + 32)) = f20.f; if (c_) goto L_002DC318; }
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0; goto L_002DC320;
L_002DC318:;
    v0 = 1;
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) v0;
L_002DC320:;
    if (s1 == 0) { v0 = (*(volatile u8 *) (u32) (s0 + 12)); goto L_002DC338; }
    v0 = (*(volatile u8 *) (u32) (s0 + 12));
    v0 = v0 | 0x1;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 12));
L_002DC338:;
    v0 = v0 | 0x10;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 12));
    v0 = v0 & 0x1;
    if (v0 != 0) { v0 = 0; goto L_002DC368; }
    v1 = (*(volatile s16 *) (u32) s0);
    v0 = (*(volatile s16 *) (u32) (s0 + 2));
    at = v0 < v1;
    if (at != 0) { v0 = 1; goto L_002DC368; }
    v0 = 0;
L_002DC368:;
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) (s0 + 12)); goto L_002DC3FC; }
    v0 = (*(volatile s32 *) (u32) (s0 + 52));
    if (v0 != 0) goto L_002DC3F8;
    v0 = func_001F1F10(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) v0;
    a0 = v0;
    a1 = 1; v0 = func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 52)); v0 = func_001F2050(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 56)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 12));
    v0 = (s32) v0 >> 4;
    v0 = v0 & 0x1;
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 56)); goto L_002DC3C8; }
    a0 = (*(volatile s32 *) (u32) (s0 + 56));
    a1 = 1; v0 = func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 56)); goto L_002DC3D4;
L_002DC3C8:;
    a1 = 0; v0 = func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 56));
L_002DC3D4:;
    v0 = func_001F2880(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 60)) = (u32) v0;
    a1 = (*(volatile u8 *) (u32) (s0 + 16));
    a0 = v0; v0 = func_001F27D0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 60));
    a1 = 1; v0 = func_001F3D10(a0, a1);
L_002DC3F8:;
    v1 = (*(volatile u8 *) (u32) (s0 + 12));
L_002DC3FC:;
    v0 = s0;
    v1 = v1 | 0x2;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v1;
L_002DC408:;
    return v0;
}
