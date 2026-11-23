/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);

s32 func_00214A60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    a3 = 3;
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (s32) ((u32) sp + 0x58U);
    s3 = a0;
    a0 = 1;
    a4 = s3;
    s0 = (s32) 0x210000U;
    s0 = (s32) ((u32) s0 + 0x4d80U); v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s2 = v0;
    v0 = -126;
    if (s2 != v0) goto L_00214CFC;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 12));
    a1 = (*(volatile s32 *) (u32) (v0 + -32252));
    a4 = 0;
    v1 = (*(volatile s16 *) (u32) (s3 + 14));
    (*(volatile u16 *) (u32) (sp + 84)) = (u16) a0;
    at = 0 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 86)) = (u16) v1; if (c_) goto L_00214AD8; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_00214AD8:;
    v0 = (s32) 0x540000U;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_00214BB4; }
    a2 = a1; goto L_00214BB4;
L_00214AF4:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_00214B40;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00214B40; }
L_00214B0C:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_00214B2C;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a1) goto L_00214B2C;
    a0 = a4; goto L_00214B40;
L_00214B2C:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < a2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_00214B0C; }
L_00214B40:;
    a1 = (*(volatile s32 *) (u32) (sp + 88));
    { s32 c_ = a1 < 0; s1 = 0; if (c_) goto L_00214BCC; }
    v1 = -255;
    v0 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (v0 + -28240)) = (u32) v1;
L_00214B58:;
    if (s1 != 0) { (*(volatile u32 *) (u32) (s3 + 32)) = (u32) s1; goto L_00214C64; }
L_00214B60:;
    v0 = (s32) 0x530000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    if (v0 != v1) goto L_00214CFC;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a4 = 0;
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_00214CD0; }
    a1 = a2;
L_00214B90:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00214B90;
    goto L_00214CD0;
L_00214BB4:;
    a1 = (*(volatile s16 *) (u32) (sp + 84));
    v0 = -1;
    if (a1 == v0) goto L_00214B40;
    v1 = (s32) ((u32) sp + 0x56U); goto L_00214AF4;
L_00214BCC:;
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_00214C40; }
    v0 = 0; goto L_00214C40;
L_00214BDC:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9790U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = -125;
    s1 = (*(volatile s32 *) (u32) v1);
    if (s1 == v0) goto L_00214C54;
    v0 = -124;
    if (s1 == v0) goto L_00214C54;
    v0 = -127;
    if (s1 == v0) goto L_00214C54;
L_00214C18:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    if (v0 != 0) goto L_00214B58;
    v1 = 1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31568)) = (u32) v1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31572)) = (u32) s1; goto L_00214B58;
L_00214C40:;
    at = a1 < -10;
    if (at == 0) goto L_00214BDC;
    v0 = -10; goto L_00214BDC;
L_00214C54:;
    func_0021CD70(a0, a1);
    goto L_00214C18;
L_00214C64:;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_00214CA0; }
    a1 = a2;
L_00214C80:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00214C80;
L_00214CA0:;
    if (v1 == s0) goto L_00214CC8;
L_00214CA8:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_00214CA8;
L_00214CC8:;
    s2 = (s32) ((u32) a3 - (u32) a4); goto L_00214B60;
L_00214CD0:;
    if (v1 == s0) goto L_00214CF8;
L_00214CD8:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_00214CD8;
L_00214CF8:;
    s2 = (s32) ((u32) a3 - (u32) a4);
L_00214CFC:;
    v0 = s2;
    return v0;
}
