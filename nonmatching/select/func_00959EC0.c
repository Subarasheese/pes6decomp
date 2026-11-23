/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B6A30(s32, s32, s32, s32);
void func_001B9C60(s32, s32, s32, s32);
void func_001EDBA0(s32, s32, s32, s32);
void func_001EDD90(s32, s32, s32, s32);
s32 func_0023F330(void);
void func_002405A0(s32, s32, s32, s32);
void func_002DC1D0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002E33D0(s32, s32, s32, s32);
void func_002E4570(s32, s32, s32, s32);
void func_002E4F00(s32, s32, s32, s32);
void func_002ED130(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002F4E10(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008B3040(s32, s32, s32, s32);
s32 func_008B32E0(s32, s32, s32, s32);

s32 func_00959EC0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U); v0 = func_0023F330();
    a0 = v0; v0 = func_001B6A30(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v0 = 0; goto L_0095A01C; }
    s2 = 0;
    s1 = 0;
L_00959F04:;
    v0 = (*(volatile s32 *) (u32) (gp + -18200));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 32;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00959F04; }
    a0 = (s32) ((u32) gp + 0xffffb8e8U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x14U); func_002405A0(a0, a1, a2, a3);
    func_008B3040(a0, a1, a2, a3);
    s1 = (s32) 0x970000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0xffffcff0U);
L_00959F48:;
    a0 = (*(volatile s32 *) (u32) (s1 + 424)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s1 + 432)); func_002ED130(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s1 + 456)); func_002E4570(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 464)); func_002E4570(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 472)); func_002E4570(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 480)); func_002E33D0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 488)); func_001B9C60(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 496)); func_001B9C60(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 504)); func_002DC1D0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s1 + 704)); func_002E4F00(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (s1 + 448));
    a0 = (*(volatile s32 *) (u32) (s1 + 440)); func_001EDBA0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 440)); func_001EDD90(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 712)); func_002F4E10(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00959F48; }
    s3 = (s32) 0x970000U;
    s0 = 0;
    s3 = (s32) ((u32) s3 + 0xffffcff0U);
    s2 = s3;
L_00959FD4:;
    s4 = 0;
    s1 = s3;
L_00959FE0:;
    a1 = (*(volatile s32 *) (u32) (s1 + 520));
    a0 = (*(volatile s32 *) (u32) (s2 + 512)); func_001EDBA0(a0, a1, a2, a3);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 23;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00959FE0; }
    a0 = (*(volatile s32 *) (u32) (s2 + 512)); func_001EDD90(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x5cU);
    v0 = s0 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00959FD4; }
    v0 = 1;
L_0095A01C:;
    return v0;
}
