/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s32, s32);
void func_002EBFE0(s32, s32);
void func_002EC160(s32, s32);
void func_008B2E50(s32, s32, s32, s32);
void func_008B31A0(s32, s32, s32, s32);
void func_008B31E0(s32, s32, s32, s32);

void func_00957810(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x960000U;
    s3 = a0;
    a0 = (s32) 0x970000U;
    s2 = (s32) 0x540000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 8432));
    s1 = (s32) ((u32) s3 << 2);
    a0 = (s32) ((u32) a0 + 0xffffcff0U);
    s2 = (s32) ((u32) s2 + 0xffffc300U);
    a0 = (s32) ((u32) a0 + (u32) s1);
    v1 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) a0);
    f0.f = (*(volatile f32 *) (u32) (v1 + 8436));
    (*(volatile f32 *) (u32) (sp + 88)) = f1.f;
    v1 = 4;
    { s32 c_ = a0 == v1; (*(volatile f32 *) (u32) (sp + 92)) = f0.f; if (c_) goto L_00957888; }
    v1 = 3;
    if (a0 == v1) goto L_00957888;
    v1 = 2;
    if (a0 == v1) goto L_00957888;
    goto L_009579B0;
L_00957888:;
    v1 = (s32) 0x970000U;
    v1 = (s32) ((u32) v1 + 0xffffcff8U);
    s0 = (s32) ((u32) v1 + (u32) s1);
    v1 = (*(volatile s32 *) (u32) s0);
    if (v1 != 0) { ; goto L_00957A50; }
    if (s3 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -18200)); goto L_009578D0; }
    v0 = (*(volatile s32 *) (u32) (gp + -18200));
    a0 = (*(volatile s32 *) (u32) (v0 + 24));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 20));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_008B2E50(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s0); goto L_009578F0;
L_009578D0:;
    a0 = (*(volatile s32 *) (u32) (v0 + 28));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 20));
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 1; func_008B2E50(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s0);
L_009578F0:;
    if (v0 != 0) goto L_00957918;
    v0 = (s32) 0x970000U;
    v0 = (s32) ((u32) v0 + 0xffffd1a0U);
    s2 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = 0; func_002EBFE0(a0, a1);
    v0 = (*(volatile s32 *) (u32) s0); goto L_00957934;
L_00957918:;
    v0 = (s32) 0x970000U;
    v0 = (s32) ((u32) v0 + 0xffffd1a0U);
    s2 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = 1; func_002EBFE0(a0, a1);
    v0 = (*(volatile s32 *) (u32) s0);
L_00957934:;
    if (v0 != 0) { v1 = (s32) ((u32) s1 + (u32) sp); goto L_0095796C; }
    if (s3 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -18200)); goto L_0095795C; }
    v0 = (*(volatile s32 *) (u32) (gp + -18200));
    a0 = (*(volatile s32 *) (u32) (v0 + 52));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    goto L_00957968;
L_0095795C:;
    a0 = (*(volatile s32 *) (u32) (v0 + 56));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
L_00957968:;
    v1 = (s32) ((u32) s1 + (u32) sp);
L_0095796C:;
    v0 = (*(volatile s32 *) (u32) (gp + -18200));
    v1 = (*(volatile s32 *) (u32) (v1 + 88));
    s0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18200));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_008B31E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = 1; func_002EC160(a0, a1);
    goto L_00957A4C;
L_009579B0:;
    if (s3 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -18200)); goto L_009579F0; }
    v0 = (*(volatile s32 *) (u32) (gp + -18200));
    a0 = (*(volatile s32 *) (u32) (v0 + 24));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18200));
    a0 = (*(volatile s32 *) (u32) (v0 + 52));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 20));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_008B2E50(a0, a1, a2, a3);
    goto L_00957A1C;
L_009579F0:;
    a0 = (*(volatile s32 *) (u32) (v0 + 28));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18200));
    a0 = (*(volatile s32 *) (u32) (v0 + 56));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 20));
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 0; func_008B2E50(a0, a1, a2, a3);
L_00957A1C:;
    v0 = (s32) 0x970000U;
    v0 = (s32) ((u32) v0 + 0xffffd1b0U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001EF900(a0, a1);
    v0 = (s32) 0x970000U;
    v0 = (s32) ((u32) v0 + 0xffffd1a0U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_002EC160(a0, a1);
L_00957A4C:;
L_00957A50:;
    return;
}
