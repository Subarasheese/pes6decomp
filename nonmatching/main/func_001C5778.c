/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void _Bfree(s32, s32);
s32 _i2b(s32, s32, s32, s32);
s32 _multiply(s32, s32, s32, s32);
s32 func_001C51B8(s32, s32, s32, s32);

s32 func_001C5778(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s1 = a2;
    v0 = s1 & 0x3;
    s3 = a0;
    s2 = a1;
    if (v0 == 0) goto L_001C57C0;
    v0 = (s32) ((u32) v0 << 2);
    a2 = (s32) 0x3d0000U;
    a2 = (s32) ((u32) a2 + (u32) v0);
    a2 = (*(volatile s32 *) (u32) (a2 + 7164));
    a3 = 0; v0 = func_001C51B8(a0, a1, a2, a3);
    s2 = v0;
L_001C57C0:;
    s1 = (s32) s1 >> 2;
    { s32 c_ = s1 == 0; v0 = s2; if (c_) goto L_001C5858; }
    s0 = (*(volatile s32 *) (u32) (s3 + 72));
    { s32 c_ = s0 != 0; v0 = s1 & 0x1; if (c_) goto L_001C5824; }
    a0 = s3;
    a1 = 625; v0 = _i2b(a0, a1, a2, a3);
    s0 = v0;
    (*(volatile u32 *) (u32) (s3 + 72)) = (u32) v0;
    (*(volatile u32 *) (u32) s0) = (u32) 0; goto L_001C5820;
L_001C57F8:;
    if (v1 != 0) { s0 = v1; goto L_001C5820; }
    a1 = s0;
    a2 = s0;
    a0 = s3; v0 = _multiply(a0, a1, a2, a3);
    v1 = v0;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    s0 = v1;
L_001C5820:;
    v0 = s1 & 0x1;
L_001C5824:;
    { s32 c_ = v0 == 0; s1 = (s32) s1 >> 1; if (c_) goto L_001C584C; }
    a1 = s2;
    a0 = s3;
    a2 = s0; v0 = _multiply(a0, a1, a2, a3);
    a0 = s3;
    a1 = s2;
    s2 = v0; _Bfree(a0, a1);
L_001C584C:;
    if (s1 != 0) { v1 = (*(volatile s32 *) (u32) s0); goto L_001C57F8; }
    v0 = s2;
L_001C5858:;
    return v0;
}
