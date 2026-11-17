/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001A7250(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_001A70C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[44];
    s32 sp = (s32) (u32) frame;

    a5 = (*(volatile s32 *) (u32) (gp + -23260));
    { s32 c_ = a5 == 0; s0 = 0; if (c_) goto L_001A7158; }
    a2 = (s32) 0x3b0000U;
    a3 = (s32) ((u32) sp + 0x40U);
    a2 = (s32) ((u32) a2 + 0x220U);
    v1 = -1;
L_001A70F0:;
    a0 = (*(volatile u8 *) (u32) (a5 + 1));
    if (a0 == 0) goto L_001A7148;
    a0 = (*(volatile u8 *) (u32) (a5 + 51));
    if (a0 == 0) { (*(volatile u32 *) (u32) a3) = (u32) v1; goto L_001A7138; }
    { s32 c_ = a0 != 0; a4 = (*(volatile u8 *) (u32) (a5 + 49)); if (c_) goto L_001A7118; }
    a4 = 0;
L_001A7118:;
    a0 = (s32) ((u32) a0 << 4);
    a1 = (s32) ((u32) a2 + (u32) a0);
    a0 = (s32) ((u32) a4 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a1 = (*(volatile u16 *) (u32) (a5 + 64));
    a0 = (*(volatile s32 *) (u32) (a0 + 16));
    a0 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u32 *) (u32) a3) = (u32) a0;
L_001A7138:;
    (*(volatile u32 *) (u32) (a3 + 4)) = (u32) a5;
    a3 = (s32) ((u32) a3 + 0x8U);
    s0 = (s32) ((u32) s0 + 0x1U);
L_001A7148:;
    a5 = (*(volatile s32 *) (u32) (a5 + 36));
    if (a5 != 0) goto L_001A70F0;
L_001A7158:;
    a1 = (s32) ((u32) s0 + 0xffffffffU);
    at = 0 < a1;
    { s32 c_ = at == 0; a5 = 0; if (c_) goto L_001A71C0; }
    a3 = (s32) ((u32) sp + 0x40U);
L_001A716C:;
    a4 = (s32) ((u32) a5 + 0x1U);
    at = a4 < s0;
    if (at == 0) goto L_001A71B0;
    v1 = (s32) ((u32) a4 << 3);
    v1 = (s32) ((u32) v1 + (u32) sp);
    a2 = (s32) ((u32) v1 + 0x40U);
L_001A7188:;
    a0 = (*(volatile s32 *) (u32) a3);
    v1 = (*(volatile s32 *) (u32) a2);
    at = v1 < a0;
    if (at != 0) goto L_001A71D8;
L_001A71A0:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < s0;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_001A7188; }
L_001A71B0:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < a1;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_001A716C; }
L_001A71C0:;
    v1 = 0 < s0;
    { s32 c_ = v1 != 0; s1 = 0; if (c_) goto L_001A7208; }
L_001A71CC:;
    goto L_001A7230;
L_001A71D8:;
    f3.f = (*(volatile f32 *) (u32) a3);
    f2.f = (*(volatile f32 *) (u32) (a3 + 4));
    f1.f = (*(volatile f32 *) (u32) a2);
    f0.f = (*(volatile f32 *) (u32) (a2 + 4));
    (*(volatile f32 *) (u32) (sp + 344)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 348)) = f2.f;
    (*(volatile f32 *) (u32) a3) = f1.f;
    (*(volatile f32 *) (u32) (a3 + 4)) = f0.f;
    (*(volatile f32 *) (u32) a2) = f3.f;
    (*(volatile f32 *) (u32) (a2 + 4)) = f2.f; goto L_001A71A0;
L_001A7208:;
    s2 = (s32) ((u32) sp + 0x40U);
L_001A720C:;
    a0 = (*(volatile s32 *) (u32) (s2 + 4)); v0 = func_001A7250(a0, a1, a2, a3, a4, a5, a6, a7);
    s1 = (s32) ((u32) s1 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x8U);
    v1 = s1 < s0;
    if (v1 != 0) goto L_001A720C;
    goto L_001A71CC;
L_001A7230:;
    return v0;
}
