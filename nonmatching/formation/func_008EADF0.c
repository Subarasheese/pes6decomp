/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001DF460(s32, s32);
void func_002DF0A0(s32, s32);
void func_008B9C60(s32, s32, s32, s32);
s32 func_008C5050(s32);

void func_008EADF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s1 = a1;
    v1 = (*(volatile s32 *) (u32) (a0 + 36));
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_008EAFA4; }
    v1 = (*(volatile s32 *) (u32) (s0 + 44));
    if (v1 != 0) { v1 = (*(volatile s32 *) (u32) (s0 + 60)); goto L_008EAE30; }
    goto L_008EAFA8;
    v1 = (*(volatile s32 *) (u32) (s0 + 60));
L_008EAE30:;
    if (v1 == 0) goto L_008EAFA4;
    v1 = s1 & 0xff;
    at = v1 < 2;
    if (at == 0) goto L_008EAFA4;
    s3 = 0;
    s2 = s0;
L_008EAE50:;
    a0 = (*(volatile s32 *) (u32) (s2 + 52));
    a1 = 1; func_008B9C60(a0, a1, a2, a3);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_008EAE50; }
    v1 = s1 & 0xff;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffc6e0U);
    s1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (s0 + 60));
    a2 = (*(volatile u16 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x50U); v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 44));
    a1 = (s32) ((u32) sp + 0x50U); func_002DF0A0(a0, a1);
    v0 = (s32) ((u32) s1 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 52));
    a1 = 0; func_008B9C60(a0, a1, a2, a3);
    a0 = (*(volatile s8 *) (u32) s0);
    v1 = 2;
    if (a0 == v1) { s2 = 0; goto L_008EAF40; }
    if (a0 == 0) { s2 = 0; goto L_008EAED0; }
    goto L_008EAFA4;
    s2 = 0;
L_008EAED0:;
    s3 = s0;
L_008EAED4:;
    v1 = (*(volatile s32 *) (u32) (s3 + 112));
    if (v1 == 0) goto L_008EAEF8;
    a0 = 1; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) (s3 + 112));
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
L_008EAEF8:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 2;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_008EAED4; }
    v1 = (s32) ((u32) s1 + (u32) s0);
    s0 = (s32) ((u32) v1 + 0x70U);
    v1 = (*(volatile s32 *) (u32) (v1 + 112));
    if (v1 == 0) goto L_008EAFA4;
    a0 = 0; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
    goto L_008EAFA4;
    s2 = 0;
L_008EAF40:;
    s3 = s0;
L_008EAF44:;
    v1 = (*(volatile s32 *) (u32) (s3 + 124));
    if (v1 == 0) goto L_008EAF68;
    a0 = 1; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) (s3 + 124));
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
L_008EAF68:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 2;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_008EAF44; }
    v1 = (s32) ((u32) s1 + (u32) s0);
    s0 = (s32) ((u32) v1 + 0x7cU);
    v1 = (*(volatile s32 *) (u32) (v1 + 124));
    if (v1 == 0) goto L_008EAFA4;
    a0 = 0; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
L_008EAFA4:;
L_008EAFA8:;
    return;
}
