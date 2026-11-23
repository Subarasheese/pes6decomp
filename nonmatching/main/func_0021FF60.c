/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
s32 func_0014AAB0(s32, s32);
void func_001CDAD0(s32);

void func_0021FF60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    s5 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 68));
    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffff94a0U); func_001CDAD0(a0);
    v0 = (s32) 0x3d0000U;
    v1 = (*(volatile s32 *) (u32) (s5 + 64));
    v0 = (*(volatile s32 *) (u32) (v0 + 31264));
    if (v1 != v0) goto L_0021FFB4;
    s3 = 0;
    s2 = 6; goto L_00220044;
L_0021FFB4:;
    v0 = (s32) 0x3d0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31268));
    if (v1 != v0) goto L_0021FFD0;
    s3 = 7;
    s2 = 15; goto L_00220044;
L_0021FFD0:;
    v0 = (s32) 0x3d0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31272));
    if (v1 != v0) goto L_0021FFEC;
    s3 = 16;
    s2 = 18; goto L_00220044;
L_0021FFEC:;
    v0 = (s32) 0x3d0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31276));
    if (v1 != v0) goto L_00220008;
    s3 = 19;
    s2 = 25; goto L_00220044;
L_00220008:;
    v0 = (s32) 0x3d0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31280));
    if (v1 != v0) goto L_00220024;
    s3 = 26;
    s2 = s3; goto L_00220044;
L_00220024:;
    v0 = (s32) 0x3d0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31284));
    if (v1 != v0) { s3 = 0; goto L_00220040; }
    s3 = 27;
    s2 = 32; goto L_00220044;
L_00220040:;
    s2 = 5;
L_00220044:;
    at = s2 < s3;
    { s32 c_ = at != 0; s4 = s3; if (c_) goto L_00220090; }
    v0 = (s32) ((u32) s3 << 2);
    s1 = (s32) ((u32) s0 + (u32) v0);
L_00220058:;
    a1 = (*(volatile s32 *) (u32) s1);
    if (a1 == 0) goto L_00220080;
    a0 = (*(volatile s32 *) (u32) (s5 + 68));
    v0 = (s32) ((u32) s4 - (u32) s3);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_0014AAB0(a0, a1);
L_00220080:;
    s4 = (s32) ((u32) s4 + 0x1U);
    at = s2 < s4;
    { s32 c_ = at == 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00220058; }
L_00220090:;
    at = s2 < s3;
    if (at != 0) goto L_00220200;
    a3 = (s32) ((u32) s2 - (u32) s3);
    a2 = (s32) ((u32) a3 + 0x1U);
    at = a2 < 9;
    { s32 c_ = at != 0; a1 = (s32) ((u32) s2 + 0xfffffff8U); if (c_) goto L_002201D0; }
    at = s2 < s3;
    a6 = 0;
    a5 = 0;
    a0 = 0;
    v1 = 0;
    { s32 c_ = at != 0; v0 = 0; if (c_) goto L_002200E4; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = s2 < at;
    if (at == 0) goto L_002200E4;
    v0 = 1;
L_002200E4:;
    if (v0 == 0) goto L_00220104;
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = s3 < at;
    if (at == 0) goto L_00220104;
    v1 = 1;
L_00220104:;
    if (v1 == 0) goto L_0022011C;
    v0 = (s32) 0x80000000U;
    if (s3 == v0) goto L_0022011C;
    a0 = 1;
L_0022011C:;
    if (a0 == 0) goto L_00220158;
    a0 = (s32) 0x80000000U;
    v0 = (s32) ((u32) 0 - (u32) s3);
    v1 = s2 & a0;
    v0 = v0 & a0;
    { s32 c_ = v1 != v0; a4 = 1; if (c_) goto L_0022014C; }
    v0 = a3 & a0;
    if (v1 == v0) goto L_0022014C;
    a4 = 0;
L_0022014C:;
    if (a4 == 0) goto L_00220158;
    a5 = 1;
L_00220158:;
    if (a5 == 0) goto L_0022018C;
    v1 = (s32) 0x80000000U;
    v0 = a3 & v1;
    { s32 c_ = v0 != 0; a0 = 1; if (c_) goto L_00220180; }
    v0 = a2 & v1;
    if (v0 == 0) goto L_00220180;
    a0 = 0;
L_00220180:;
    if (a0 == 0) goto L_0022018C;
    a6 = 1;
L_0022018C:;
    if (a6 == 0) goto L_002201D0;
    v0 = (s32) ((u32) s3 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0);
L_0022019C:;
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    s3 = (s32) ((u32) s3 + 0x8U);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0;
    at = a1 < s3;
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 20)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) 0;
    { s32 c_ = at == 0; v0 = (s32) ((u32) v0 + 0x20U); if (c_) goto L_0022019C; }
L_002201D0:;
    at = s2 < s3;
    if (at != 0) goto L_00220200;
    v0 = (s32) ((u32) s3 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0);
L_002201E4:;
    s3 = (s32) ((u32) s3 + 0x1U);
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    at = s2 < s3;
    v0 = (s32) ((u32) v0 + 0x4U);
    if (at == 0) goto L_002201E4;
L_00220200:;
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xffff9840U);
    v0 = 1;
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) v0;
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s5 + 68)); Pes6Heap_Free(a0);
    return;
}
