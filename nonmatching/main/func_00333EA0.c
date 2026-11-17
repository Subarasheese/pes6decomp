/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002929C0(void);
s32 func_00292A30(void);
s32 func_0030DA70(s32);

s32 func_00333EA0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s2 = a1;
    s1 = a2;
    v0 = s1 ^ 0x1;
    v1 = (s32) ((u32) s1 << 1);
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) s2 + (u32) v1);
    v0 = (s32) ((u32) s2 + (u32) v0);
    v1 = (*(volatile s16 *) (u32) v1);
    v0 = (*(volatile s16 *) (u32) v0);
    v1 = (s32) ((u32) v1 - (u32) v0);
    { s32 c_ = v1 <= 0; s3 = a0; if (c_) goto L_00333EF0; }
    v0 = v1; goto L_00333EF4;
L_00333EF0:;
    v0 = (s32) ((u32) 0 - (u32) v1);
L_00333EF4:;
    if (v0 == 0) goto L_00333F0C;
    if (v1 <= 0) { v0 = (s32) ((u32) v1 + 0xbU); goto L_00333F94; }
    v0 = (s32) ((u32) v1 + 0xfU); goto L_00333F94;
L_00333F0C:;
    v0 = func_00292A30();
    if (v0 != 0) { a0 = 0; goto L_00333F30; }
    v0 = func_002929C0();
    if (v0 == 0) { v0 = 13; goto L_00333F94; }
    a0 = 0;
L_00333F30:;
    v0 = func_0030DA70(a0);
    s0 = v0;
    a0 = 1; v0 = func_0030DA70(a0);
    if (s1 != 0) { v1 = (*(volatile s16 *) (u32) s2); goto L_00333F74; }
    v0 = (*(volatile s16 *) (u32) (s2 + 2));
    at = v0 < s0;
    if (at == 0) goto L_00333F64;
    v0 = 15; goto L_00333F94;
L_00333F64:;
    if (s0 != v0) { v0 = 11; goto L_00333F94; }
    v0 = 13; goto L_00333F94;
L_00333F74:;
    at = v1 < v0;
    if (at == 0) { v0 = (*(volatile s16 *) (u32) (s2 + 2)); goto L_00333F88; }
    v0 = 15; goto L_00333F94;
L_00333F88:;
    if (s0 != v0) { v0 = 11; goto L_00333F94; }
    v0 = 13;
L_00333F94:;
    (*(volatile u32 *) (u32) s3) = (u32) v0;
    v0 = 1;
    return v0;
}
