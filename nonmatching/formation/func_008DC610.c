/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F3CA0(s64, s64, s64, s64);
void func_001F3D10(s64, s64);
void func_008D93B0(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008DA4B0(s64, s64, s64, s64);
void D_008DC610(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7);

void func_008DC610(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[42];
    s64 sp = (s32) (u32) frame;

    s1 = a0;
    v1 = (*(volatile s32 *) (u32) (a0 + 232));
    { s32 c_ = v1 == 0; s0 = a1; if (c_) goto L_008DC828; }
    v0 = s0 & 0xff;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 344));
    s2 = (s32) ((u32) v0 + 0x158U); func_001F3CA0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = 0; func_001F3D10(a0, a1);
    if (s0 == 0) { v1 = (*(volatile u8 *) (u32) (s1 + 1)); goto L_008DC684; }
    v1 = (*(volatile u8 *) (u32) (s1 + 24));
    { s32 c_ = v1 == 0; s0 = (s64) ((u64) 0 + (u64) (s64) 1); if (c_) goto L_008DC828; }
    a0 = s1;
    a1 = 0; D_008DC610(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile u8 *) (u32) (s1 + 1));
L_008DC684:;
    v0 = s0 & 0xff;
    s2 = (s32) ((u32) v0 << 2);
    v0 = v0 ^ 0x1;
    a1 = (s32) ((u32) s2 + (u32) s1);
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 << 2);
    s3 = (*(volatile u8 *) (u32) (v1 + 25));
    a0 = (s32) ((u32) v0 + (u32) s1);
    v0 = 13;
    v1 = (*(volatile s32 *) (u32) (a1 + 8));
    a2 = s3;
    (*(volatile u32 *) (u32) (sp + 328)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    (*(volatile u32 *) (u32) (sp + 332)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a1 + 16));
    (*(volatile u32 *) (u32) (sp + 320)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a0 + 16));
    { s32 c_ = s3 != v0; (*(volatile u32 *) (u32) (sp + 324)) = (u32) v1; if (c_) goto L_008DC6D4; }
    a2 = (s64) ((u64) 0 + (u64) (s64) 1);
L_008DC6D4:;
    a3 = a2 & 0xff;
    a0 = (s32) ((u32) sp + 0xd0U);
    a1 = (s32) ((u32) sp + 0x148U);
    a2 = (s32) ((u32) sp + 0x140U); func_008DA4B0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = (s32) ((u32) sp + 0x148U);
    a2 = (s32) ((u32) sp + 0x140U);
    a3 = 0; func_008DA4B0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s1 + 3));
    v0 = v1 & 0x1;
    if (v0 == 0) { v0 = 1; goto L_008DC750; }
    v0 = 13;
    { s32 c_ = s3 == v0; v1 = v1 & 0x4; if (c_) goto L_008DC720; }
    v1 = 4; goto L_008DC740;
L_008DC720:;
    { s32 c_ = v1 == 0; (*(volatile u32 *) (u32) (sp + 312)) = (u32) 0; if (c_) goto L_008DC734; }
    v0 = 2;
    (*(volatile u32 *) (u32) (sp + 316)) = (u32) v0; goto L_008DC788;
L_008DC734:;
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 316)) = (u32) v0; goto L_008DC788;
L_008DC740:;
    v0 = 5;
    (*(volatile u32 *) (u32) (sp + 312)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 316)) = (u32) v0; goto L_008DC788;
L_008DC750:;
    { s32 c_ = s3 == v0; v1 = v1 & 0x4; if (c_) goto L_008DC768; }
    if (s3 == 0) { (*(volatile u32 *) (u32) (sp + 312)) = (u32) 0; goto L_008DC780; }
    v0 = 3; goto L_008DC77C;
L_008DC768:;
    if (v1 == 0) { (*(volatile u32 *) (u32) (sp + 312)) = (u32) v0; goto L_008DC780; }
    v0 = 2;
    (*(volatile u32 *) (u32) (sp + 312)) = (u32) v0; goto L_008DC780;
L_008DC77C:;
    (*(volatile u32 *) (u32) (sp + 312)) = (u32) v0;
L_008DC780:;
    v0 = 5;
    (*(volatile u32 *) (u32) (sp + 316)) = (u32) v0;
L_008DC788:;
    v0 = (s32) ((u32) s2 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 344));
    a1 = 1; func_001F3D10(a0, a1);
    v1 = (s32) ((u32) s1 + (u32) s2);
    s4 = 0;
    s2 = (s32) ((u32) v1 + 0x158U);
    s3 = (s32) ((u32) sp + 0x138U); goto L_008DC808;
L_008DC7AC:;
    if (a0 != 0) goto L_008DC7E0;
    if (s0 == 0) { a3 = 0; goto L_008DC7C0; }
    a3 = 1;
L_008DC7C0:;
    a1 = (*(volatile s32 *) (u32) s2);
    a0 = s1;
    a2 = (*(volatile s32 *) (u32) s3);
    a4 = (s32) ((u32) sp + 0x60U); func_008D93B0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008DC800;
L_008DC7E0:;
    if (s0 == 0) { a3 = 0; goto L_008DC7EC; }
    a3 = 1;
L_008DC7EC:;
    a1 = (*(volatile s32 *) (u32) s2);
    a0 = s1;
    a2 = (*(volatile s32 *) (u32) s3);
    a4 = (s32) ((u32) sp + 0xd0U); func_008D93B0(a0, a1, a2, a3, a4, a5, a6, a7);
L_008DC800:;
    s3 = (s32) ((u32) s3 + 0x4U);
    s4 = (s32) ((u32) s4 + 0x1U);
L_008DC808:;
    at = s4 < 2;
    if (at == 0) goto L_008DC828;
    a0 = (*(volatile s32 *) (u32) s3);
    v1 = a0 < 5;
    if (v1 != 0) goto L_008DC7AC;
L_008DC828:;
    return;
}
