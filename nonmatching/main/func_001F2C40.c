/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6PacketStream_AppendGsAD(s64, s64, s64);
s64 func_001F3B20(void);

s64 func_001F2C40(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 gp = 0x3ef370;
    s64 frame[28];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    s0 = (*(volatile u8 *) (u32) (a1 + 72));
    (*(volatile u32 *) (u32) (sp + 212)) = (u32) a1; v0 = func_001F3B20();
    a2 = v0;
    a0 = s4;
    a1 = 6; v0 = Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 212));
    fp = s0 & 0xff;
    v1 = (s32) ((u32) fp << 1);
    s7 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) v1 + (u32) fp);
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0;
    v1 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0x2bb0U);
    s7 = (s32) ((u32) s7 + 0x2b50U);
    s2 = (s32) ((u32) v0 + 0x50U);
    v0 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 + 0x2bd0U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0;
    v0 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v0;
L_001F2CD0:;
    v1 = (*(volatile u8 *) (u32) (s2 + 8));
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001F2CE4; }
    v0 = 128;
L_001F2CE4:;
    v1 = (*(volatile u8 *) (u32) (s2 + 9));
    (*(volatile u8 *) (u32) (sp + 216)) = (u8) v0;
    v0 = 255;
    if (v1 != v0) { v1 = (s32) v1 >> 1; goto L_001F2CFC; }
    v1 = 128;
L_001F2CFC:;
    v0 = (s32) ((u32) sp + 0xd9U);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s2 + 10));
    v0 = 255;
    if (v1 != v0) { v1 = (s32) v1 >> 1; goto L_001F2D18; }
    v1 = 128;
L_001F2D18:;
    v0 = (s32) ((u32) sp + 0xdaU);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s2 + 11));
    v0 = 255;
    if (v1 != v0) { v1 = (s32) v1 >> 1; goto L_001F2D34; }
    v1 = 128;
L_001F2D34:;
    v0 = (s32) ((u32) sp + 0xdbU);
    a0 = s4;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v1 = (s32) 0x3f800000U;
    v0 = (s32) ((u32) sp + 0xdcU);
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    a2 = (*(volatile s64 *) (u32) (sp + 216));
    a1 = 1; v0 = Pes6PacketStream_AppendGsAD(a0, a1, a2);
    s6 = (*(volatile s32 *) (u32) (sp + 176));
    s5 = 0;
    s1 = (*(volatile s32 *) (u32) (sp + 160));
L_001F2D64:;
    v0 = (s32) ((u32) s2 + (u32) s5);
    v0 = (*(volatile u8 *) (u32) (v0 + 13));
    if (v0 != 0) goto L_001F2E60;
L_001F2D78:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 3;
    s6 = (s32) ((u32) s6 + 0x4U);
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_001F2D64; }
    v0 = (*(volatile s32 *) (u32) (sp + 192));
    s7 = (s32) ((u32) s7 + 0x20U);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0;
    v0 = v0 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x110U); if (c_) goto L_001F2CD0; }
    v0 = (*(volatile s32 *) (u32) (sp + 212));
    v1 = (s32) 0x3d0000U;
    s3 = (s32) 0x3a0000U;
    s0 = (s32) 0x3a0000U;
    a0 = (s32) ((u32) fp << 2);
    v1 = (s32) ((u32) v1 + 0x2be8U);
    s5 = 0;
    s3 = (s32) ((u32) s3 + 0xffff9470U);
    s2 = (s32) ((u32) v1 + (u32) a0);
    s0 = (s32) ((u32) s0 + 0xffff9460U);
    s6 = (s32) ((u32) v0 + 0x160U);
    v0 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 + 0x2bc8U);
    s1 = (s32) ((u32) v0 + (u32) a0);
L_001F2DE0:;
    a2 = (*(volatile s64 *) (u32) s3);
    a0 = s4;
    a1 = 1; v0 = Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) s2);
    v0 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 + 0x2b90U);
    a0 = s4;
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile s64 *) (u32) v0);
    a1 = 3; v0 = Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (gp + -23048));
    v1 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) s6 + (u32) v1);
    { u32 t_ = (u32) v0; a0 = (s32) ((u32) v1 + 0x90U); v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    a1 = (*(volatile s32 *) (u32) s0);
    a0 = s4;
    a2 = v0; v0 = Pes6PacketStream_AppendGsAD(a0, a1, a2);
    s5 = (s32) ((u32) s5 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x8U);
    v1 = s5 < 4;
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x1U);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001F2DE0; }
    goto L_001F2ED8;
L_001F2E60:;
    s0 = (s32) 0x3a0000U;
    s3 = 0;
    s0 = (s32) ((u32) s0 + 0xffff9460U);
L_001F2E70:;
    v0 = (s32) ((u32) s6 + (u32) s3);
    v0 = (*(volatile u8 *) (u32) v0);
    a0 = s4;
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) s7 + (u32) v0);
    a2 = (*(volatile s64 *) (u32) v0);
    a1 = 3; v0 = Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (s32) ((u32) s1 + (u32) s3);
    v0 = (*(volatile s32 *) (u32) (gp + -23048));
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) s2 + (u32) v1);
    { u32 t_ = (u32) v0; a0 = (s32) ((u32) v1 + 0x90U); v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    a1 = (*(volatile s32 *) (u32) s0);
    a2 = v0;
    a0 = s4; v0 = Pes6PacketStream_AppendGsAD(a0, a1, a2);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001F2E70; }
    goto L_001F2D78;
L_001F2ED8:;
    return v0;
}
