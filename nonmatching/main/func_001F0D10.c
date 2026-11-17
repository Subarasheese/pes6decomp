/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6PacketStream_AppendGsAD(s64, s64, s64);
s64 func_001F3B20(void);

s64 func_001F0D10(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 gp = 0x3ef370;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 + 0x2af0U);
    s7 = a1;
    s4 = a0;
    v1 = (*(volatile u8 *) (u32) (a1 + 72));
    s0 = (s32) ((u32) s7 + 0x160U);
    v1 = (s32) ((u32) v1 << 5);
    fp = (s32) ((u32) v0 + (u32) v1); v0 = func_001F3B20();
    a2 = v0;
    a0 = s4;
    a1 = 6; v0 = Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s7 + 83));
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001F0D84; }
    v0 = 128;
L_001F0D84:;
    v1 = (*(volatile u8 *) (u32) (s7 + 84));
    (*(volatile u8 *) (u32) (sp + 168)) = (u8) v0;
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001F0D9C; }
    v0 = 128;
L_001F0D9C:;
    v1 = (*(volatile u8 *) (u32) (s7 + 85));
    (*(volatile u8 *) (u32) (sp + 169)) = (u8) v0;
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001F0DB4; }
    v0 = 128;
L_001F0DB4:;
    v1 = (*(volatile u8 *) (u32) (s7 + 86));
    (*(volatile u8 *) (u32) (sp + 170)) = (u8) v0;
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001F0DCC; }
    v0 = 128;
L_001F0DCC:;
    (*(volatile u8 *) (u32) (sp + 171)) = (u8) v0;
    a0 = s4;
    v0 = (s32) 0x3f800000U;
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) v0;
    a2 = (*(volatile s64 *) (u32) (sp + 168));
    a1 = 1; v0 = Pes6PacketStream_AppendGsAD(a0, a1, a2);
    s6 = (s32) 0x3d0000U;
    s2 = (s32) 0x3d0000U;
    s5 = 0;
    s6 = (s32) ((u32) s6 + 0x2ab0U);
    s2 = (s32) ((u32) s2 + 0x2a80U);
L_001F0DFC:;
    v1 = (s32) ((u32) s7 + (u32) s5);
    v1 = (*(volatile u8 *) (u32) (v1 + 74));
    if (v1 != 0) goto L_001F0E2C;
L_001F0E10:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v1 = s5 < 9;
    s6 = (s32) ((u32) s6 + 0x4U);
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_001F0DFC; }
    goto L_001F0E98;
L_001F0E2C:;
    s1 = (s32) 0x3d0000U;
    s3 = 0;
    s1 = (s32) ((u32) s1 + 0x2ae0U);
L_001F0E38:;
    v0 = (s32) ((u32) s6 + (u32) s3);
    v0 = (*(volatile u8 *) (u32) v0);
    a0 = s4;
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) fp + (u32) v0);
    a2 = (*(volatile s64 *) (u32) v0);
    a1 = 3; v0 = Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (s32) ((u32) s2 + (u32) s3);
    v0 = (*(volatile s32 *) (u32) (gp + -23048));
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 4);
    { u32 t_ = (u32) v0; a0 = (s32) ((u32) s0 + (u32) v1); v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    a1 = (*(volatile s32 *) (u32) s1);
    a0 = s4;
    a2 = v0; v0 = Pes6PacketStream_AppendGsAD(a0, a1, a2);
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 4;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_001F0E38; }
    goto L_001F0E10;
L_001F0E98:;
    return v0;
}
