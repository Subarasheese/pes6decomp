/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E6E10(s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EEE60(s32, s32);
void func_001EF370(s32, s32);
void func_001EF860(s32, s32);
void func_001EF900(s32, s32);
void func_001F2290(s32, s32);
s32 func_001F2330(s32, s32, s32, s32);
s32 func_001F2410(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void memcpy(s32, s32, s32);

void func_002E7E50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v1 = (*(volatile s32 *) (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v1 + 16));
    { s32 c_ = v0 == 0; s2 = a0; if (c_) goto L_002E7E8C; }
    v0 = (*(volatile s32 *) (u32) (v1 + 20));
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s2 + 36)); goto L_002E7E90; }
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (s2 + 64)); goto L_002E7EA0; }
L_002E7E8C:;
    a0 = (*(volatile s32 *) (u32) (s2 + 36));
L_002E7E90:;
    a1 = 0; func_001EF900(a0, a1);
    goto L_002E8010;
L_002E7EA0:;
    v0 = (*(volatile s32 *) (u32) (s2 + 48));
    v0 = (s32) ((u32) v1 - (u32) v0);
    if (v0 != 0) { at = v0 < 10; goto L_002E7EC4; }
    a0 = (*(volatile s32 *) (u32) (s2 + 36));
    a1 = 0; func_001EF900(a0, a1);
    goto L_002E800C;
L_002E7EC4:;
    if (at != 0) goto L_002E7ED8;
    s1 = 0;
    s0 = 0; goto L_002E7F04;
L_002E7ED8:;
    if (v0 <= 0) { at = v0 < -9; goto L_002E7EEC; }
    s1 = 1;
    s0 = 0; goto L_002E7F04;
L_002E7EEC:;
    if (at != 0) { s1 = 3; goto L_002E7F00; }
    s1 = 2;
    s0 = 1; goto L_002E7F04;
L_002E7F00:;
    s0 = 1;
L_002E7F04:;
    v0 = (*(volatile s32 *) (u32) (s2 + 28));
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s2 + 28)); goto L_002E7F2C; }
    a0 = (*(volatile s32 *) (u32) (s2 + 24)); v0 = func_001F2330(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 28)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F2290(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s2 + 28));
L_002E7F2C:;
    a1 = 1; func_001F3D10(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s2 + 36));
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s2 + 20)); goto L_002E7FD0; }
    a0 = (*(volatile s32 *) (u32) (s2 + 28)); v0 = func_001F2410(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 36)) = (u32) v0;
    a0 = 20000; v0 = func_001E6E10(a0);
    a0 = (*(volatile s32 *) (u32) (s2 + 36));
    a1 = v0; func_001EEAC0(a0, a1);
    v1 = (*(volatile s32 *) (u32) s2);
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x3840U);
    a0 = (s32) ((u32) sp + 0x50U);
    a2 = 16;
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 88));
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (sp + 92));
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 104)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 108)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s2 + 36));
    a1 = (s32) ((u32) sp + 0x60U); func_001EF370(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (sp + 84));
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 64)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s2 + 36));
    a1 = (s32) ((u32) sp + 0x40U); func_001EF860(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s2 + 20));
L_002E7FD0:;
    a0 = (*(volatile s32 *) (u32) (s2 + 36));
    a1 = v0 & 0x1; func_001EF900(a0, a1);
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (s2 + 36));
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0x38f0U);
    a1 = (s32) ((u32) v0 + (u32) v1); func_001EEE60(a0, a1);
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (s2 + 36));
    v1 = (s32) ((u32) s0 << 3);
    v0 = (s32) ((u32) v0 + 0x3900U);
    a1 = (s32) ((u32) v0 + (u32) v1); func_001EE630(a0, a1);
L_002E800C:;
L_002E8010:;
    return;
}
