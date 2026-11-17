/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002937A0(s32, s32, s32, s32);
s32 func_002C62E0(s32, s32, s32, s32);
s32 func_002C7220(s32, s32, s32, s32);
void memset(s32, s32, s32);

s32 func_0028EF40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    v0 = 7;
    s7 = a3;
    s6 = a1;
    s5 = a0;
    a0 = (s32) ((u32) sp + 0xacU);
    a1 = 0;
    (*(volatile u32 *) (u32) (sp + 168)) = (u32) a2;
    s1 = 4;
    if (a4 == 0) s1 = v0;
    a2 = 3;
    memset(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 168));
    s4 = 0;
    s3 = 0;
    s2 = s5;
    v0 = (s32) ((u32) s5 + (u32) v0);
    fp = (s32) ((u32) v0 + 0x128U);
L_0028EFB0:;
    v0 = (s32) ((u32) s6 + (u32) s3);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) { s0 = (*(volatile s32 *) (u32) (s2 + 168)); goto L_0028F0B4; }
L_0028EFC0:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 32;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_0028EFB0; }
    v0 = (*(volatile s32 *) (u32) (sp + 168));
    v0 = (s32) ((u32) v0 + (u32) s5);
    a0 = (*(volatile u8 *) (u32) (v0 + 296)); v0 = func_002937A0(a0, a1, a2, a3);
    s0 = v0 & 0xff;
    s1 = 0;
L_0028EFE8:;
    v0 = (s32) ((u32) s7 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) goto L_0028F130;
L_0028EFF8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 11;
    if (v0 != 0) goto L_0028EFE8;
    v1 = (*(volatile u8 *) (u32) (sp + 172));
    a0 = s4 & 0xff;
    at = v1 < a0;
    if (at == 0) goto L_0028F050;
    v0 = (s32) ((u32) sp + 0xadU);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v1 + (u32) v0);
    at = a0 < v0;
    if (at == 0) goto L_0028F158;
    v0 = (s32) ((u32) v0 - (u32) a0);
    v0 = v0 < 2;
    if (v0 != 0) { v0 = 2; goto L_0028F048; }
    v0 = 3;
L_0028F048:;
    goto L_0028F160;
L_0028F050:;
    if (a0 != v1) { v0 = (s32) ((u32) sp + 0xaeU); goto L_0028F070; }
    v0 = (s32) ((u32) sp + 0xadU);
    v1 = 3;
    a0 = (*(volatile u8 *) (u32) v0);
    v0 = 1;
    if (a0 != 0) v0 = v1; goto L_0028F15C;
L_0028F070:;
    v0 = (*(volatile u8 *) (u32) v0);
    at = v0 < v1;
    if (at == 0) { v0 = 4; goto L_0028F15C; }
    v1 = (s32) ((u32) v1 + 0x4U);
    v0 = (s32) ((u32) v0 >> 1);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 - (u32) v0);
    v0 = v1 < 4;
    if (v0 != 0) { v0 = 4; goto L_0028F15C; }
    at = v1 < 7;
    if (at != 0) { v0 = v1 & 0xff; goto L_0028F0AC; }
    v0 = 6;
L_0028F0AC:;
    goto L_0028F15C;
L_0028F0B4:;
    a1 = (*(volatile u8 *) (u32) fp);
    a0 = s0; v0 = func_002C62E0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    at = v0 < 9;
    if (at == 0) goto L_0028F0F8;
    v0 = v0 < s1;
    if (v0 != 0) goto L_0028EFC0;
    v0 = (s32) ((u32) sp + 0xadU);
    v0 = (*(volatile u8 *) (u32) v0);
    v1 = (s32) ((u32) v0 + 0x1U);
    v0 = (s32) ((u32) sp + 0xadU);
    (*(volatile u8 *) (u32) v0) = (u8) v1; goto L_0028EFC0;
L_0028F0F8:;
    v0 = (*(volatile u8 *) (u32) (sp + 172));
    a0 = s0;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (sp + 172)) = (u8) v0; v0 = func_002C7220(a0, a1, a2, a3);
    at = v0 < 2;
    if (at != 0) goto L_0028EFC0;
    v0 = (s32) ((u32) sp + 0xaeU);
    v0 = (*(volatile u8 *) (u32) v0);
    v1 = (s32) ((u32) v0 + 0x1U);
    v0 = (s32) ((u32) sp + 0xaeU);
    (*(volatile u8 *) (u32) v0) = (u8) v1; goto L_0028EFC0;
L_0028F130:;
    v0 = (s32) ((u32) s5 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) (v0 + 296)); v0 = func_002937A0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (s0 != v0) goto L_0028EFF8;
    v0 = (s32) ((u32) s4 + 0x1U);
    s4 = v0 & 0xff; goto L_0028EFF8;
L_0028F158:;
    v0 = 0;
L_0028F15C:;
L_0028F160:;
    return v0;
}
