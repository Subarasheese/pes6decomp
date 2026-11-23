/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E6E10(s32);
void func_001EDAE0(s32, s32);
s32 func_001EDC80(s32, s32);
s32 func_001EDD00(s32, s32, s32, s32);
void func_001EE580(s32, s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF5B0(s32, s32);
void func_001EF900(s32, s32);
void func_002D0640(s32, s32, s32, s32, s32);
void func_002D07A0(s32, s32, s32, s32);
void func_002D0A00(s32, s32, s32);
s32 func_002F82B0(s32, s32);

void func_002CF160(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s3 = a1;
    s2 = a0;
    a0 = s3;
    s0 = a2;
    a1 = s0; v0 = func_002F82B0(a0, a1);
    s1 = v0;
    v0 = (*(volatile u8 *) (u32) (v0 + 58));
    if (v0 == 0) goto L_002CF1BC;
    a0 = s2;
    a1 = s1;
    a2 = s3;
    a3 = s0; func_002D07A0(a0, a1, a2, a3);
    goto L_002CF3A0;
L_002CF1BC:;
    v0 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) s0 << 2);
    v1 = (*(volatile s16 *) (u32) (v0 + -3240));
    a4 = 5;
    v0 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 152)) = (u16) v1;
    a2 = (*(volatile s16 *) (u32) (v0 + -3238));
    v1 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 + 0xffffa7f0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 154)) = (u16) a2;
    a1 = (*(volatile s16 *) (u32) (v0 + -3236));
    a2 = 1;
    s0 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 156)) = (u16) a1;
    v0 = (*(volatile s16 *) (u32) (v0 + -3234));
    a1 = 20460;
    (*(volatile u16 *) (u32) (sp + 158)) = (u16) v0;
    a3 = (*(volatile u8 *) (u32) (s1 + 47));
    a0 = s0; func_002D0640(a0, a1, a2, a3, a4);
    s3 = 5;
    at = s3 < 9;
    if (at == 0) goto L_002CF250;
    v0 = (s32) ((u32) s3 << 1);
L_002CF22C:;
    a0 = s0;
    a1 = (s32) ((u32) s1 + (u32) v0);
    a2 = s3; func_002D0A00(a0, a1, a2);
    s3 = (s32) ((u32) s3 + 0x1U);
    at = s3 < 9;
    if (at != 0) { v0 = (s32) ((u32) s3 << 1); goto L_002CF22C; }
L_002CF250:;
    a0 = s2;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s2; goto L_002CF26C; }
    s1 = v0; goto L_002CF278;
L_002CF26C:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    s1 = v0;
L_002CF278:;
    a0 = s0; v0 = func_001E6E10(a0);
    if (v0 != 0) { a1 = v0; goto L_002CF29C; }
    a0 = s1;
    a1 = 0; func_001EF900(a0, a1);
    a0 = s2; goto L_002CF2C0;
L_002CF29C:;
    a0 = s1; func_001EEAC0(a0, a1);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x98U); func_001EE630(a0, a1);
    a0 = s1;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s2;
L_002CF2C0:;
    a1 = 1; func_001EDAE0(a0, a1);
    v1 = (s32) ((u32) sp + 0x50U);
    { s32 c_ = v1 == 0; v0 = 64; if (c_) goto L_002CF2F0; }
L_002CF2D4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002CF2D4;
L_002CF2F0:;
    a0 = s2;
    a1 = 1; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s2; goto L_002CF30C; }
    s0 = v0; goto L_002CF318;
L_002CF30C:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    s0 = v0;
L_002CF318:;
    a0 = 20460; v0 = func_001E6E10(a0);
    if (v0 != 0) { a1 = v0; goto L_002CF33C; }
    a0 = s0;
    a1 = 0; func_001EF900(a0, a1);
    a0 = s2; goto L_002CF364;
L_002CF33C:;
    a0 = s0; func_001EEAC0(a0, a1);
    a1 = (s32) 0x3b0000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0xfffff2d8U); func_001EE630(a0, a1);
    a0 = s0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s2;
L_002CF364:;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s2; goto L_002CF37C; }
    a0 = v0; goto L_002CF388;
L_002CF37C:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    a0 = v0;
L_002CF388:;
    a1 = (s32) ((u32) sp + 0x50U); func_001EE580(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x50U); func_001EF5B0(a0, a1);
L_002CF3A0:;
    return;
}
