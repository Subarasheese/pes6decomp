/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6PacketStream_AppendGsAD(s64, s64, s64);
f32 func_00140F40(s64, s64, s64);
s64 func_001D4A10(s64, s64);
s64 func_001D4C20(s64, s64, s64);

void func_001D0C40(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    s64 hi = 0, lo = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    v0 = 255;
    s6 = a1;
    s2 = a0;
    a3 = (*(volatile u8 *) (u32) (a0 + 4));
    a2 = (*(volatile u8 *) (u32) (a0 + 5));
    a1 = (*(volatile u8 *) (u32) (a0 + 6));
    v1 = (*(volatile u8 *) (u32) (a0 + 7));
    s1 = (*(volatile s32 *) (u32) (a0 + 12));
    (*(volatile u8 *) (u32) (sp + 232)) = (u8) a3;
    (*(volatile u8 *) (u32) (sp + 233)) = (u8) a2;
    { s32 c_ = v1 != v0; (*(volatile u8 *) (u32) (sp + 234)) = (u8) a1; if (c_) goto L_001D0CA4; }
    v0 = 128; goto L_001D0CA8;
L_001D0CA4:;
    v0 = (s32) v1 >> 1;
L_001D0CA8:;
    (*(volatile u8 *) (u32) (sp + 235)) = (u8) v0;
    a0 = s6;
    (*(volatile u32 *) (u32) (sp + 236)) = (u32) 0;
    a2 = (*(volatile s64 *) (u32) (sp + 232));
    a1 = 1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (s32) 0x3f800000U;
    a1 = (s32) ((u32) sp + 0xb4U);
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) v1;
    a0 = (s32) ((u32) sp + 0xb8U);
    a2 = (*(volatile u16 *) (u32) (s2 + 2));
    v1 = (s32) ((u32) sp + 0xbcU);
    s0 = 0;
    s7 = (s32) ((u32) a2 + 0x2U);
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) 0;
    at = 0 < s7;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) 0;
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 244)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 248)) = (u32) 0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 208)) = (u32) 0; if (c_) goto L_001D0E40; }
    s5 = 0;
    fp = (s32) ((u32) sp + 0xa4U);
L_001D0D2C:;
    v0 = 3;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    s4 = hi;
    { s32 c_ = s1 == 0; a0 = (*(volatile s32 *) (u32) (s2 + 8)); if (c_) goto L_001D0E48; }
    v1 = (*(volatile u16 *) (u32) s1);
    v0 = (s32) ((u32) v1 << 1);
    s1 = (s32) ((u32) s1 + 0x2U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v0);
L_001D0D58:;
    v0 = (s32) ((u32) s4 << 4);
    f0.f = (*(volatile f32 *) (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    s3 = (s32) ((u32) v0 + 0xb0U);
    a1 = (s32) ((u32) sp + 0xa0U);
    v0 = (s32) ((u32) sp + 0xa8U);
    a2 = 1;
    a0 = s3;
    (*(volatile f32 *) (u32) (sp + 160)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 4));
    (*(volatile f32 *) (u32) fp) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 8));
    (*(volatile f32 *) (u32) v0) = f0.f; f0.f = func_00140F40(a0, a1, a2);
    v0 = (s32) ((u32) s4 << 2);
    a0 = 3;
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (s32) ((u32) sp + 0xb0U);
    (*(volatile f32 *) (u32) (v0 + 240)) = f0.f;
    a2 = (s32) ((u32) sp + 0xf0U);
    s4 = 4; v0 = func_001D4C20(a0, a1, a2);
    if (v0 != 0) goto L_001D0DC0;
    s4 = 12;
L_001D0DC0:;
    v0 = s0 < 2;
    if (v0 != 0) goto L_001D0DF8;
    v0 = (s32) 0x530000U;
    v1 = 1;
    v0 = (*(volatile u8 *) (u32) (v0 + -21759));
    if (v0 != v1) goto L_001D0DF8;
    a0 = (s32) ((u32) sp + 0xb0U);
    a1 = s0; v0 = func_001D4A10(a0, a1);
    if (v0 != 0) goto L_001D0DF8;
    s4 = 12;
L_001D0DF8:;
    a3 = (*(volatile s32 *) (u32) (s3 + 4));
    v1 = (*(volatile s32 *) (u32) (s3 + 8));
    a1 = s4;
    v0 = (*(volatile s32 *) (u32) (s3 + 12));
    a0 = s6;
    a2 = (*(volatile s32 *) (u32) s3);
    a3 = (s64) ((u64) a3 << 16);
    v1 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) v0 << 56);
    a2 = a2 | a3;
    v1 = v1 | a2;
    a2 = v0 | v1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < s7;
    { s32 c_ = v1 != 0; s5 = (s32) ((u32) s5 + 0x18U); if (c_) goto L_001D0D2C; }
L_001D0E40:;
    goto L_001D0E50;
L_001D0E48:;
    v1 = (s32) ((u32) a0 + (u32) s5); goto L_001D0D58;
L_001D0E50:;
    return;
}
