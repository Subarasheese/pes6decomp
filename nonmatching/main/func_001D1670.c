/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6PacketStream_AppendGsAD(s64, s64, s64);
s64 func_001D2F90(s64, s64, s64, s64);

void func_001D1670(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[28];
    s64 sp = (s32) (u32) frame;

    s7 = a1;
    s6 = 0;
    v1 = (*(volatile u16 *) (u32) (a0 + 2));
    s4 = (*(volatile s32 *) (u32) (a0 + 12));
    at = 0 < v1;
    { s32 c_ = at == 0; s5 = a0; if (c_) goto L_001D183C; }
    s1 = 0;
    fp = (s32) ((u32) sp + 0xc9U);
L_001D16C0:;
    if (s4 == 0) goto L_001D17FC;
    v0 = (*(volatile s32 *) (u32) (s5 + 8));
    a1 = (s32) ((u32) sp + 0xdcU);
    s0 = (s32) ((u32) sp + 0xd8U);
    (*(volatile u32 *) (u32) (sp + 216)) = (u32) v0;
    a0 = (*(volatile u16 *) (u32) s4);
    v0 = (*(volatile s32 *) (u32) (sp + 216));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 216)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s5 + 8));
    (*(volatile u32 *) (u32) a1) = (u32) v0;
    a0 = (*(volatile u16 *) (u32) (s4 + 2));
    v0 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) a0 << 1);
    s4 = (s32) ((u32) s4 + 0x4U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) a1) = (u32) v0;
L_001D171C:;
    a0 = 2;
    a1 = (s32) ((u32) sp + 0xd8U);
    a2 = (s32) ((u32) sp + 0xa0U);
    a3 = (s32) ((u32) sp + 0xd0U); v0 = func_001D2F90(a0, a1, a2, a3);
    if (v0 == 0) goto L_001D17E0;
    s3 = (s32) ((u32) sp + 0xa0U);
    s2 = 0;
L_001D1740:;
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = 255;
    a2 = (*(volatile u8 *) (u32) (a0 + 12));
    v0 = (*(volatile u8 *) (u32) (a0 + 13));
    a1 = (*(volatile u8 *) (u32) (a0 + 14));
    (*(volatile u8 *) (u32) (sp + 200)) = (u8) a2;
    (*(volatile u8 *) (u32) fp) = (u8) v0;
    a0 = (*(volatile u8 *) (u32) (a0 + 15));
    v0 = (s32) ((u32) sp + 0xcaU);
    { s32 c_ = a0 != v1; (*(volatile u8 *) (u32) v0) = (u8) a1; if (c_) goto L_001D1774; }
    v1 = 128; goto L_001D1778;
L_001D1774:;
    v1 = (s32) a0 >> 1;
L_001D1778:;
    v0 = (s32) ((u32) sp + 0xcbU);
    a0 = s7;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v0 = (s32) ((u32) sp + 0xccU);
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    a2 = (*(volatile s64 *) (u32) (sp + 200));
    a1 = 1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a3 = (*(volatile s32 *) (u32) (s3 + 4));
    a0 = s7;
    v1 = (*(volatile s32 *) (u32) (s3 + 8));
    a1 = 4;
    v0 = (*(volatile s32 *) (u32) (s3 + 12));
    a2 = (*(volatile s32 *) (u32) s3);
    a3 = (s64) ((u64) a3 << 16);
    v1 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) v0 << 56);
    a2 = a2 | a3;
    v1 = v1 | a2;
    a2 = v0 | v1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    s0 = (s32) ((u32) s0 + 0x4U);
    v1 = s2 < 2;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x10U); if (c_) goto L_001D1740; }
L_001D17E0:;
    v1 = (*(volatile u16 *) (u32) (s5 + 2));
    s6 = (s32) ((u32) s6 + 0x1U);
    v1 = s6 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x2U); if (c_) goto L_001D16C0; }
    goto L_001D1840;
L_001D17FC:;
    a2 = (*(volatile s32 *) (u32) (s5 + 8));
    v0 = (s32) ((u32) s1 << 1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v1 = (s32) ((u32) s1 + 0x1U);
    a1 = (s32) ((u32) v0 << 3);
    a0 = (s32) ((u32) sp + 0xdcU);
    v0 = (s32) ((u32) v1 << 1);
    s0 = (s32) ((u32) sp + 0xd8U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a2 + (u32) a1);
    (*(volatile u32 *) (u32) (sp + 216)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s5 + 8));
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) a0) = (u32) v0; goto L_001D171C;
L_001D183C:;
L_001D1840:;
    return;
}
