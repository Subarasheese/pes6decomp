/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001DF460(s32, s32);
void func_001DF820(s32, s32, s32, s32);
s32 func_001F08B0(s32);
void func_002DF0A0(s32, s32);
void func_008C1430(s32, f32, f32);
s32 func_008C5050(s32);

void func_008DFC10(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v1 = (*(volatile s32 *) (u32) (a0 + 36));
    { s32 c_ = v1 == 0; s3 = a0; if (c_) goto L_008DFD5C; }
    v1 = (*(volatile s32 *) (u32) (s3 + 48));
    if (v1 == 0) { ; goto L_008DFD60; }
    v1 = (*(volatile s32 *) (u32) (s3 + 40));
    if (v1 != 0) { a0 = (*(volatile s32 *) (u32) (s3 + 44)); goto L_008DFC58; }
    goto L_008DFD5C;
    a0 = (*(volatile s32 *) (u32) (s3 + 44));
L_008DFC58:;
    if (a0 == 0) goto L_008DFD5C;
    v1 = a1 & 0xff;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffc3e0U);
    s0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a2 = (*(volatile u16 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x50U); v0 = func_001D7A20(a0, a1, a2);
    f12.f = (*(volatile f32 *) (u32) (sp + 80));
    f13.f = (*(volatile f32 *) (u32) (sp + 84));
    a0 = (*(volatile s32 *) (u32) (s3 + 48)); func_008C1430(a0, f12.f, f13.f);
    a0 = (*(volatile s32 *) (u32) (s3 + 48));
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = 85; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s3 + 40));
    a1 = (s32) ((u32) sp + 0x50U); func_002DF0A0(a0, a1);
    s2 = 0;
    s1 = s3;
L_008DFCB4:;
    v1 = (*(volatile s32 *) (u32) (s1 + 52));
    if (v1 == 0) goto L_008DFCD8;
    a0 = 1; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) (s1 + 52));
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
L_008DFCD8:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 5;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008DFCB4; }
    v1 = (s32) ((u32) s0 + (u32) s3);
    s1 = (s32) ((u32) v1 + 0x34U);
    v1 = (*(volatile s32 *) (u32) (v1 + 52));
    if (v1 == 0) { v1 = (*(volatile s32 *) (u32) (s3 + 72)); goto L_008DFD18; }
    a0 = 0; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s3 + 72));
L_008DFD18:;
    if (v1 == 0) goto L_008DFD5C;
    v1 = (s32) 0x8f0000U;
    v0 = (s32) 0x10c0000U;
    v1 = (s32) ((u32) v1 + 0xffffc3c0U);
    v0 = v0 | 0x13;
    v1 = (s32) ((u32) v1 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v1);
    if (a0 != v0) goto L_008DFD44;
    a0 = (*(volatile s32 *) (u32) s3);
L_008DFD44:;
    v0 = func_001F08B0(a0);
    v1 = (*(volatile s32 *) (u32) (s3 + 72));
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF820(a0, a1, a2, a3);
L_008DFD5C:;
L_008DFD60:;
    return;
}
