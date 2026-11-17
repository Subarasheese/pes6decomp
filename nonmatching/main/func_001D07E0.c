/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6PacketStream_AppendGsAD(s64, s64, s64);
f32 func_00140F40(s64, s64, s64);
s64 func_001D4A10(s64, s64);
s64 func_001D4C20(s64, s64, s64);

void func_001D07E0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 hi = 0, lo = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    a3 = (s32) 0x3f800000U;
    a2 = (s32) ((u32) sp + 0xb4U);
    v1 = (s32) ((u32) sp + 0xbcU);
    fp = a0;
    s5 = a1;
    a1 = (s32) ((u32) sp + 0xb8U);
    s2 = 0;
    s3 = (*(volatile s32 *) (u32) (a0 + 12));
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) a3;
    a0 = (*(volatile u16 *) (u32) (a0 + 2));
    s7 = (s32) ((u32) a0 + 0x2U);
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) 0;
    at = 0 < s7;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) 0;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 244)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 248)) = (u32) 0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 208)) = (u32) 0; if (c_) goto L_001D09F8; }
    s1 = 0;
L_001D0880:;
    v0 = 3;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s2 / (s32) v0); hi = (s32) ((s32) s2 % (s32) v0); lo = q_; }
    s6 = hi;
    { s32 c_ = s3 == 0; a0 = (*(volatile s32 *) (u32) (fp + 8)); if (c_) goto L_001D09F0; }
    v1 = (*(volatile u16 *) (u32) s3);
    v0 = (s32) ((u32) v1 << 1);
    s3 = (s32) ((u32) s3 + 0x2U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    s4 = (s32) ((u32) a0 + (u32) v0);
L_001D08AC:;
    f0.f = (*(volatile f32 *) (u32) s4);
    v0 = (s32) ((u32) s6 << 4);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (s32) ((u32) sp + 0xa0U);
    s0 = (s32) ((u32) v0 + 0xb0U);
    a2 = 1;
    v0 = (s32) ((u32) sp + 0xa4U);
    a0 = s0;
    (*(volatile f32 *) (u32) (sp + 160)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s4 + 4));
    (*(volatile f32 *) (u32) v0) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s4 + 8));
    v0 = (s32) ((u32) sp + 0xa8U);
    (*(volatile f32 *) (u32) v0) = f0.f; f0.f = func_00140F40(a0, a1, a2);
    v0 = (s32) ((u32) s6 << 2);
    v1 = 255;
    v0 = (s32) ((u32) v0 + (u32) sp);
    (*(volatile f32 *) (u32) (v0 + 240)) = f0.f;
    v0 = (*(volatile u8 *) (u32) (s4 + 12));
    a2 = (*(volatile u8 *) (u32) (s4 + 13));
    a1 = (*(volatile u8 *) (u32) (s4 + 14));
    a0 = (*(volatile u8 *) (u32) (s4 + 15));
    (*(volatile u8 *) (u32) (sp + 232)) = (u8) v0;
    v0 = (s32) ((u32) sp + 0xe9U);
    (*(volatile u8 *) (u32) v0) = (u8) a2;
    v0 = (s32) ((u32) sp + 0xeaU);
    { s32 c_ = a0 != v1; (*(volatile u8 *) (u32) v0) = (u8) a1; if (c_) goto L_001D0928; }
    v1 = 128; goto L_001D092C;
L_001D0928:;
    v1 = (s32) a0 >> 1;
L_001D092C:;
    v0 = (s32) ((u32) sp + 0xebU);
    a0 = s5;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v0 = (s32) ((u32) sp + 0xecU);
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    a2 = (*(volatile s64 *) (u32) (sp + 232));
    a1 = 1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = 3;
    a1 = (s32) ((u32) sp + 0xb0U);
    a2 = (s32) ((u32) sp + 0xf0U);
    s4 = 4; v0 = func_001D4C20(a0, a1, a2);
    if (v0 != 0) goto L_001D096C;
    s4 = 12;
L_001D096C:;
    v0 = s2 < 2;
    if (v0 != 0) goto L_001D09A4;
    v0 = (s32) 0x530000U;
    v1 = 1;
    v0 = (*(volatile u8 *) (u32) (v0 + -21759));
    if (v0 != v1) goto L_001D09A4;
    a0 = (s32) ((u32) sp + 0xb0U);
    a1 = s2; v0 = func_001D4A10(a0, a1);
    if (v0 != 0) goto L_001D09A4;
    s4 = 12;
L_001D09A4:;
    a3 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = s4;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    a0 = s5;
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    a2 = (*(volatile s32 *) (u32) s0);
    a3 = (s64) ((u64) a3 << 16);
    v1 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) v0 << 56);
    a2 = a2 | a3;
    v1 = v1 | a2;
    a2 = v0 | v1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < s7;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x18U); if (c_) goto L_001D0880; }
    goto L_001D09FC;
L_001D09F0:;
    s4 = (s32) ((u32) a0 + (u32) s1); goto L_001D08AC;
L_001D09F8:;
L_001D09FC:;
    return;
}
