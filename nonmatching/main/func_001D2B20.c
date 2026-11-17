/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6PacketStream_AppendGsAD(s64, s64, s64);
s64 func_001D2F90(s64, s64, s64, s64);
s64 func_001D4B30(s64, s64);

void func_001D2B20(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 frame[30];
    s64 sp = (s32) (u32) frame;

    v0 = 255;
    s6 = a1;
    s5 = a0;
    a3 = (*(volatile u8 *) (u32) (a0 + 4));
    a2 = (*(volatile u8 *) (u32) (a0 + 5));
    a1 = (*(volatile u8 *) (u32) (a0 + 6));
    v1 = (*(volatile u8 *) (u32) (a0 + 7));
    s4 = (*(volatile s32 *) (u32) (a0 + 12));
    (*(volatile u8 *) (u32) (sp + 200)) = (u8) a3;
    (*(volatile u8 *) (u32) (sp + 201)) = (u8) a2;
    { s32 c_ = v1 != v0; (*(volatile u8 *) (u32) (sp + 202)) = (u8) a1; if (c_) goto L_001D2B80; }
    v0 = 128; goto L_001D2B84;
L_001D2B80:;
    v0 = (s32) v1 >> 1;
L_001D2B84:;
    (*(volatile u8 *) (u32) (sp + 203)) = (u8) v0;
    a0 = s6;
    (*(volatile u32 *) (u32) (sp + 204)) = (u32) 0;
    a2 = (*(volatile s64 *) (u32) (sp + 200));
    a1 = 1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (*(volatile u16 *) (u32) (s5 + 2));
    at = 0 < v1;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_001D2CA0; }
    at = 0 < v1;
    { s32 c_ = at == 0; s7 = (s32) ((u32) sp + 0x90U); if (c_) goto L_001D2CA0; }
    s0 = 0;
L_001D2BBC:;
    if (s4 == 0) { v0 = (s32) ((u32) s0 << 1); goto L_001D2CA8; }
    v0 = (*(volatile s32 *) (u32) (s5 + 8));
    a2 = (s32) ((u32) sp + 0xe4U);
    a1 = (s32) ((u32) sp + 0xe8U);
    (*(volatile u32 *) (u32) (sp + 224)) = (u32) v0;
    a0 = (*(volatile u16 *) (u32) s4);
    v0 = (*(volatile s32 *) (u32) (sp + 224));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 224)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s5 + 8));
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    a0 = (*(volatile u16 *) (u32) (s4 + 2));
    v0 = (*(volatile s32 *) (u32) a2);
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s5 + 8));
    (*(volatile u32 *) (u32) a1) = (u32) v0;
    a0 = (*(volatile u16 *) (u32) (s4 + 4));
    v0 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) a0 << 1);
    s4 = (s32) ((u32) s4 + 0x6U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) a1) = (u32) v0;
L_001D2C40:;
    a0 = 3;
    a1 = (s32) ((u32) sp + 0xe0U);
    a2 = (s32) ((u32) sp + 0x90U);
    a3 = (s32) ((u32) sp + 0xd0U); v0 = func_001D2F90(a0, a1, a2, a3);
    if (v0 != 0) goto L_001D2C68;
    s2 = 0; goto L_001D2C80;
L_001D2C68:;
    v1 = (s32) 0x530000U;
    a0 = (*(volatile u8 *) (u32) (v1 + -21759));
    v1 = 1;
    if (a0 == v1) goto L_001D2D00;
    s2 = 3;
L_001D2C80:;
    if (s2 != 0) goto L_001D2D28;
L_001D2C88:;
    v1 = (*(volatile u16 *) (u32) (s5 + 2));
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < v1;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x3U); if (c_) goto L_001D2BBC; }
L_001D2CA0:;
    goto L_001D2D80;
L_001D2CA8:;
    a4 = (*(volatile s32 *) (u32) (s5 + 8));
    v0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (s32) ((u32) s0 + 0x1U);
    a3 = (s32) ((u32) v0 << 3);
    a2 = (s32) ((u32) sp + 0xe4U);
    v0 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) sp + 0xe8U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) s0 + 0x2U);
    a1 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v1 << 1);
    a3 = (s32) ((u32) a4 + (u32) a3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 224)) = (u32) a3;
    v1 = (*(volatile s32 *) (u32) (s5 + 8));
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u32 *) (u32) a2) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s5 + 8));
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) a0) = (u32) v0; goto L_001D2C40;
L_001D2D00:;
    a0 = s7;
    a1 = 0;
    s2 = 0; v0 = func_001D4B30(a0, a1);
    v1 = 1;
    if (v0 != v1) goto L_001D2D20;
    s2 = s2 | 0x1;
L_001D2D20:;
    goto L_001D2C80;
L_001D2D28:;
    s3 = (s32) ((u32) sp + 0x90U);
    s2 = 0;
L_001D2D30:;
    a3 = (*(volatile s32 *) (u32) (s3 + 4));
    v1 = (*(volatile s32 *) (u32) (s3 + 8));
    a0 = s6;
    v0 = (*(volatile s32 *) (u32) (s3 + 12));
    a1 = 4;
    a2 = (*(volatile s32 *) (u32) s3);
    a3 = (s64) ((u64) a3 << 16);
    v1 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) v0 << 56);
    a2 = a2 | a3;
    v1 = v1 | a2;
    a2 = v0 | v1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 3;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x10U); if (c_) goto L_001D2D30; }
    goto L_001D2C88;
L_001D2D80:;
    return;
}
