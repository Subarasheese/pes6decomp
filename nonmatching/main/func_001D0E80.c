/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6PacketStream_AppendGsAD(s64, s64, s64);
f32 func_00140F40(s64, s64, s64);
s64 func_001D4C20(s64, s64, s64);

void func_001D0E80(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[28];
    s64 sp = (s32) (u32) frame;

    v0 = 255;
    s6 = a1;
    s2 = a0;
    a3 = (*(volatile u8 *) (u32) (a0 + 4));
    a2 = (*(volatile u8 *) (u32) (a0 + 5));
    a1 = (*(volatile u8 *) (u32) (a0 + 6));
    v1 = (*(volatile u8 *) (u32) (a0 + 7));
    s1 = (*(volatile s32 *) (u32) (a0 + 12));
    (*(volatile u8 *) (u32) (sp + 208)) = (u8) a3;
    (*(volatile u8 *) (u32) (sp + 209)) = (u8) a2;
    { s32 c_ = v1 != v0; (*(volatile u8 *) (u32) (sp + 210)) = (u8) a1; if (c_) goto L_001D0EE4; }
    v0 = 128; goto L_001D0EE8;
L_001D0EE4:;
    v0 = (s32) v1 >> 1;
L_001D0EE8:;
    (*(volatile u8 *) (u32) (sp + 211)) = (u8) v0;
    a0 = s6;
    (*(volatile u32 *) (u32) (sp + 212)) = (u32) 0;
    a2 = (*(volatile s64 *) (u32) (sp + 208));
    a1 = 1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (s32) 0x3f800000U;
    a1 = (s32) ((u32) sp + 0xb4U);
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) v1;
    a0 = (s32) ((u32) sp + 0xb8U);
    a2 = (*(volatile u16 *) (u32) (s2 + 2));
    v1 = (s32) ((u32) sp + 0xbcU);
    s0 = 0;
    s7 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 216)) = (u32) 0;
    at = 0 < s7;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) 0;
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) 0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0; if (c_) goto L_001D1040; }
    s5 = 0;
    fp = (s32) ((u32) sp + 0xa4U);
L_001D0F58:;
    { s32 c_ = s0 >= 0; s4 = s0 & 0x1; if (c_) goto L_001D0F6C; }
    if (s4 == 0) goto L_001D0F6C;
    s4 = (s32) ((u32) s4 + 0xfffffffeU);
L_001D0F6C:;
    { s32 c_ = s1 == 0; a0 = (*(volatile s32 *) (u32) (s2 + 8)); if (c_) goto L_001D1048; }
    v1 = (*(volatile u16 *) (u32) s1);
    v0 = (s32) ((u32) v1 << 1);
    s1 = (s32) ((u32) s1 + 0x2U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v0);
L_001D0F90:;
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
    a0 = 2;
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (s32) ((u32) sp + 0xb0U);
    (*(volatile f32 *) (u32) (v0 + 216)) = f0.f;
    a2 = (s32) ((u32) sp + 0xd8U);
    s4 = 4; v0 = func_001D4C20(a0, a1, a2);
    if (v0 != 0) goto L_001D0FF8;
    s4 = 12;
L_001D0FF8:;
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
    { s32 c_ = v1 != 0; s5 = (s32) ((u32) s5 + 0x18U); if (c_) goto L_001D0F58; }
L_001D1040:;
    goto L_001D1050;
L_001D1048:;
    v1 = (s32) ((u32) a0 + (u32) s5); goto L_001D0F90;
L_001D1050:;
    return;
}
