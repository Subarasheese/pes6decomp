/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0030DA70(s64);
s64 func_0030DAF0(s64);
s64 func_00325C20(s64);
s64 func_00325C50(s64);

s64 func_00333CE0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    v0 = 13;
    s3 = a0;
    s2 = a1;
    v1 = s2 & 0xff;
    s0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) s0 + (u32) s3);
    v1 = (*(volatile s32 *) (u32) (v1 + 8));
    { s32 c_ = v1 != v0; s1 = a2; if (c_) goto L_00333D24; }
    (*(volatile u8 *) (u32) (s3 + 52)) = (u8) s2; goto L_00333D2C;
L_00333D24:;
    v0 = 255;
    (*(volatile u8 *) (u32) (s3 + 52)) = (u8) v0;
L_00333D2C:;
    v1 = (s32) ((u32) s0 + (u32) s3);
    v0 = 10;
    v1 = (*(volatile s32 *) (u32) (v1 + 16));
    if (v1 == v0) { a0 = s1; goto L_00333D6C; }
    v0 = 11;
    if (v1 == v0) { (*(volatile u8 *) (u32) (s3 + 53)) = (u8) s2; goto L_00333E2C; }
    v0 = 13;
    if (v1 == v0) goto L_00333D60;
    v0 = 255; goto L_00333E28;
L_00333D60:;
    (*(volatile u8 *) (u32) (s3 + 53)) = (u8) s2;
    goto L_00333E2C;
L_00333D6C:;
    v0 = func_00325C20(a0);
    if (v0 != 0) { a0 = 0; goto L_00333D90; }
    a0 = s1; v0 = func_00325C50(a0);
    if (v0 == 0) { a2 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_00333E20; }
    a0 = 0;
L_00333D90:;
    v0 = func_0030DAF0(a0);
    v0 = (s64) ((u64) v0 << 48);
    a0 = 1;
    v0 = v0 >> 48;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) v0; v0 = func_0030DAF0(a0);
    v0 = (s64) ((u64) v0 << 48);
    v1 = (s32) ((u32) s0 + (u32) sp);
    v0 = v0 >> 48;
    a0 = 0;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (v1 + 80));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 80)) = (u32) v0; v0 = func_0030DA70(a0);
    v1 = (s32) ((u32) v0 << 1);
    a0 = 1;
    v0 = (*(volatile s32 *) (u32) (sp + 80));
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) v0; v0 = func_0030DA70(a0);
    a1 = (*(volatile s32 *) (u32) (sp + 84));
    a2 = s2 & 0xff;
    v1 = a2 ^ 0x1;
    a0 = (s32) ((u32) s0 + (u32) sp);
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) a1 + (u32) v0);
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (a0 + 88));
    v0 = (*(volatile s32 *) (u32) (v1 + 88));
    at = v0 < a0;
    if (at == 0) { a2 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_00333E20; }
L_00333E20:;
    (*(volatile u8 *) (u32) (s3 + 53)) = (u8) a2; goto L_00333E2C;
L_00333E28:;
    (*(volatile u8 *) (u32) (s3 + 53)) = (u8) v0;
L_00333E2C:;
    v0 = 1;
    return v0;
}
