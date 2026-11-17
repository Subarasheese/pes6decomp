/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BC8DB0(s32);

void func_00BC6A60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    at = a0 < 5;
    s4 = a0;
    if (at == 0) goto L_00BC6BB8;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffd390U);
    s2 = (s32) ((u32) v0 + (u32) v1);
L_00BC6A98:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    if (v0 == 0) goto L_00BC6BB8;
    v0 = (s32) ((u32) s4 + 0x1U);
    a0 = (s32) 0xcc0000U;
    a4 = v0 & 0xff;
    a3 = s4 & 0xff;
    a0 = (s32) ((u32) a0 + 0xffffd390U);
    v1 = (s32) ((u32) a4 << 2);
    v0 = (s32) ((u32) a3 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a2 = (*(volatile s32 *) (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = 11816;
L_00BC6AD8:;
    v1 = (*(volatile s32 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    a2 = (s32) ((u32) a2 + 0x8U);
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_00BC6AD8; }
    v0 = (s32) ((u32) a4 << 1);
    v1 = (s32) 0xcc0000U;
    a0 = (s32) ((u32) v0 + (u32) a4);
    v1 = (s32) ((u32) v1 + 0xffffd3b0U);
    v0 = (s32) ((u32) a3 << 1);
    a0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a3);
    a0 = (s32) ((u32) a0 + (u32) a4);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a3);
    a1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) v1 + (u32) v0);
    v1 = 13;
L_00BC6B38:;
    v0 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x4U);
    a0 = (s32) ((u32) a0 + 0x4U);
    if (v1 > 0) goto L_00BC6B38;
    v0 = (s32) ((u32) s4 + 0x1U);
    s3 = 0;
    s1 = v0 & 0xff;
    s0 = s4 & 0xff;
L_00BC6B68:;
    a0 = s3; v0 = func_00BC8DB0(a0);
    if (v0 == 0) goto L_00BC6B98;
    v1 = (*(volatile u8 *) (u32) (v0 + 6));
    if (v1 != s1) goto L_00BC6B98;
    v1 = 6;
    { s32 c_ = s0 != v1; (*(volatile u8 *) (u32) (v0 + 6)) = (u8) s0; if (c_) goto L_00BC6B98; }
    (*(volatile u32 *) (u32) v0) = (u32) 0;
L_00BC6B98:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 6;
    if (v0 != 0) goto L_00BC6B68;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 5;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00BC6A98; }
L_00BC6BB8:;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) s4 << 2);
    v0 = (s32) ((u32) v0 + 0xffffd390U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = s4 & 0xff;
    s1 = 0;
    (*(volatile u32 *) (u32) v0) = (u32) 0;
L_00BC6BD4:;
    a0 = s1; v0 = func_00BC8DB0(a0);
    if (v0 == 0) goto L_00BC6C00;
    v1 = (*(volatile u8 *) (u32) (v0 + 6));
    if (v1 != s0) goto L_00BC6C00;
    v1 = 6;
    (*(volatile u8 *) (u32) (v0 + 6)) = (u8) v1;
    (*(volatile u32 *) (u32) v0) = (u32) 0;
L_00BC6C00:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 6;
    if (v1 != 0) goto L_00BC6BD4;
    return;
}
