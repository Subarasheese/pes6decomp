/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s64, s64);
s64 func_001D7A20(s64, s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001DF460(s64, s64);
void func_001F3C80(s64);
void func_002DF0A0(s64, s64);
void func_008C1430(s64, f32, f32);
s64 func_008C5050(s64);

void func_008E1C70(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    v1 = (*(volatile s32 *) (u32) (a0 + 48));
    { s32 c_ = v1 == 0; s0 = 2; if (c_) goto L_008E1E24; }
    v1 = (*(volatile s32 *) (u32) (s4 + 60));
    if (v1 == 0) { ; goto L_008E1E28; }
    v1 = (*(volatile s32 *) (u32) (s4 + 52));
    if (v1 != 0) { a0 = (*(volatile s32 *) (u32) (s4 + 56)); goto L_008E1CC0; }
    goto L_008E1E24;
    a0 = (*(volatile s32 *) (u32) (s4 + 56));
L_008E1CC0:;
    if (a0 == 0) goto L_008E1E24;
    v1 = a1 & 0xff;
    v0 = 15;
    if (v1 == v0) { s0 = 1; goto L_008E1CFC; }
    v0 = 14;
    if (v1 == v0) { s0 = 0; goto L_008E1CFC; }
    goto L_008E1CFC;
    s0 = 0;
    goto L_008E1CFC;
    s0 = 1;
L_008E1CFC:;
    s2 = a1 & 0xff;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffc510U);
    s1 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a2 = (*(volatile u16 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x60U); v0 = func_001D7A20(a0, a1, a2);
    f12.f = (*(volatile f32 *) (u32) (sp + 96));
    f13.f = (*(volatile f32 *) (u32) (sp + 100));
    a0 = (*(volatile s32 *) (u32) (s4 + 60)); func_008C1430(a0, f12.f, f13.f);
    a0 = (*(volatile s32 *) (u32) (s4 + 60));
    a1 = (s64) ((u64) s0 << 48);
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s4 + 60));
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 224; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s4 + 60));
    a1 = 224; f0.f = func_001D79A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s4 + 48));
    f12.i = f0.i; func_001F3C80(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 52));
    a1 = (s32) ((u32) sp + 0x60U); func_002DF0A0(a0, a1);
    s3 = 0;
    a0 = s3 & 0xff;
L_008E1D78:;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) s4 + (u32) v1);
    s0 = (s32) ((u32) v1 + 0x40U);
    v1 = (*(volatile s32 *) (u32) (v1 + 64));
    if (v1 == 0) goto L_008E1DD8;
    v0 = (s32) ((u32) s4 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 32));
    if (v0 == 0) goto L_008E1DC0;
    a0 = 1; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
    goto L_008E1DD8;
L_008E1DC0:;
    a0 = 2; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
L_008E1DD8:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 16;
    if (v1 != 0) { a0 = s3 & 0xff; goto L_008E1D78; }
    v1 = (s32) ((u32) s2 + (u32) s4);
    v1 = (*(volatile u8 *) (u32) (v1 + 32));
    if (v1 == 0) goto L_008E1E24;
    v1 = (s32) ((u32) s1 + (u32) s4);
    s0 = (s32) ((u32) v1 + 0x40U);
    v1 = (*(volatile s32 *) (u32) (v1 + 64));
    if (v1 == 0) goto L_008E1E24;
    a0 = 0; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
L_008E1E24:;
L_008E1E28:;
    return;
}
