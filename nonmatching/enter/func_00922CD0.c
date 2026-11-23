/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 Pes6Wind_GetSpeed(void);
void func_001D7D60(s64, s64);
void func_001DF4F0(s64, s64);
void func_001EDAE0(s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);

void func_00922CD0(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    v1 = (s32) ((u32) gp + 0xffffb270U);
    s2 = a0;
    a0 = (*(volatile s32 *) (u32) (gp + -19860));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (a0 + 32));
    v1 = v1 & 0x1;
    if (v1 == 0) { ; goto L_00922E58; }
    a0 = (*(volatile s32 *) (u32) a0); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00922D60; }
    v1 = (*(volatile s32 *) (u32) (gp + -19860));
L_00922D24:;
    v0 = (s32) ((u32) gp + 0xffffb270U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = s2 & 0xff; func_001D7D60(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19860)); goto L_00922D24; }
L_00922D60:;
    v1 = (*(volatile s32 *) (u32) (gp + -19860));
    v0 = (s32) ((u32) gp + 0xffffb270U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 32));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { s1 = 1; goto L_00922DB4; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_00922DA8; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_00922DA8:;
    a1 = s2 & 0xff; func_001EDAE0(a0, a1);
    s1 = 1;
L_00922DB4:;
    v1 = (*(volatile s32 *) (u32) (gp + -19860));
L_00922DB8:;
    v0 = (s32) ((u32) gp + 0xffffb270U);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00922DE8;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_00922DE8:;
    a0 = s0;
    a1 = s2 & 0xff; func_001DF4F0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 4;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19860)); goto L_00922DB8; }
    f0.f = Pes6Wind_GetSpeed();
    v0 = (s32) 0x3f800000U;
    f1.i = (s32) v0;
    fcc = f0.f < f1.f;
    if (!fcc) { v1 = (*(volatile s32 *) (u32) (gp + -19860)); goto L_00922E2C; }
    s2 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -19860));
L_00922E2C:;
    v0 = (s32) ((u32) gp + 0xffffb270U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; v0 = func_002F96F0(a0, a1);
    a1 = s2 & 0xff;
    a0 = v0; func_001D7D60(a0, a1);
L_00922E58:;
    return;
}
