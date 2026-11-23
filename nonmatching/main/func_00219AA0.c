/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);
s32 strcmp(s32, s32);

s32 func_00219AA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    a3 = 2;
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (s32) ((u32) sp + 0x58U);
    s3 = a0;
    a0 = 1;
    a4 = s3;
    s0 = (s32) 0x220000U;
    s0 = (s32) ((u32) s0 + 0xffff87c0U); v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s2 = v0;
    v0 = -126;
    if (s2 != v0) goto L_00219D0C;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 12));
    a1 = (*(volatile s32 *) (u32) (v0 + -32252));
    a4 = 0;
    v1 = (*(volatile s16 *) (u32) (s3 + 14));
    (*(volatile u16 *) (u32) (sp + 84)) = (u16) a0;
    at = 0 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 86)) = (u16) v1; if (c_) goto L_00219B18; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_00219B18:;
    v0 = (s32) 0x540000U;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_00219C54; }
    a2 = a1; goto L_00219C54;
L_00219B34:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_00219B80;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00219B80; }
L_00219B4C:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_00219B6C;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a1) goto L_00219B6C;
    a0 = a4; goto L_00219B80;
L_00219B6C:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < a2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_00219B4C; }
L_00219B80:;
    a1 = (*(volatile s32 *) (u32) (sp + 88));
    { s32 c_ = a1 < 0; s1 = 0; if (c_) goto L_00219C6C; }
    (*(volatile u32 *) (u32) (s3 + 132)) = (u32) a1;
    v0 = (*(volatile s32 *) (u32) (s3 + 16));
    a1 = (*(volatile s32 *) (u32) (s3 + 184));
    v1 = (*(volatile s32 *) (u32) (v0 + 28));
    { s32 c_ = v1 == 0; a0 = 0; if (c_) goto L_00219BAC; }
    v0 = (s32) ((u32) a1 << 5);
    a0 = (s32) ((u32) v1 + (u32) v0);
L_00219BAC:;
    a1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a1 + 0xffff9190U); v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_00219C08;
    v1 = (*(volatile s32 *) (u32) (s3 + 52));
    v0 = 256;
    v1 = v1 & 0x100;
    if (v1 != v0) goto L_00219C08;
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s16 *) (u32) (s3 + 14));
    v0 = (*(volatile s16 *) (u32) (v0 + -28234));
    if (v1 != v0) goto L_00219C08;
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s16 *) (u32) (s3 + 12));
    v0 = (*(volatile s16 *) (u32) (v0 + -28236));
    if (v1 != v0) goto L_00219C08;
    v1 = (*(volatile s32 *) (u32) (s3 + 132));
    v0 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (v0 + -28240)) = (u32) v1;
L_00219C08:;
    if (s1 == 0) goto L_00219D0C;
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) s1;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_00219CE4; }
    a1 = a2;
L_00219C30:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00219C30;
    goto L_00219CE4;
L_00219C54:;
    a1 = (*(volatile s16 *) (u32) (sp + 84));
    v0 = -1;
    if (a1 == v0) goto L_00219B80;
    v1 = (s32) ((u32) sp + 0x56U); goto L_00219B34;
L_00219C6C:;
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_00219CC0; }
    v0 = 0; goto L_00219CC0;
L_00219C7C:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9370U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = -125;
    s1 = (*(volatile s32 *) (u32) v1);
    if (s1 == v0) goto L_00219CD4;
    v0 = -124;
    if (s1 == v0) goto L_00219CD4;
    v0 = -127;
    if (s1 == v0) goto L_00219CD4;
L_00219CB8:;
    goto L_00219C08;
L_00219CC0:;
    at = a1 < -10;
    if (at == 0) goto L_00219C7C;
    v0 = -10; goto L_00219C7C;
L_00219CD4:;
    func_0021CD70(a0, a1);
    goto L_00219CB8;
L_00219CE4:;
    if (v1 == s0) goto L_00219D08;
L_00219CEC:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_00219CEC;
L_00219D08:;
    s2 = (s32) ((u32) a3 - (u32) a4);
L_00219D0C:;
    v0 = s2;
    return v0;
}
