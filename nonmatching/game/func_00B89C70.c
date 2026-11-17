/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B2A420(s32);

void func_00B89C70(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v0 = (s32) 0xcc0000U;
    v0 = (s32) ((u32) v0 + 0xffffcd82U);
    s3 = a0;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u8 *) (u32) (v1 + 81));
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) v0); v0 = func_00B2A420(a0);
    a0 = (*(volatile s32 *) (u32) (s3 + 4));
    v1 = (s32) 0xcc0000U;
    a1 = (*(volatile s32 *) (u32) v0);
    v1 = (*(volatile u8 *) (u32) (v1 + -12928));
    a0 = (*(volatile u8 *) (u32) (a0 + 81));
    s2 = (s32) ((u32) a0 + 0xffffffffU);
    at = s2 < v1;
    { s32 c_ = at == 0; a1 = (*(volatile u16 *) (u32) (a1 + 24)); if (c_) goto L_00B89D20; }
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffcc70U);
    s1 = (s32) ((u32) v1 + (u32) s2);
L_00B89CD8:;
    v1 = 7;
    { s32 c_ = s2 != v1; s0 = a1 & 0xffff; if (c_) goto L_00B89CF0; }
    (*(volatile u8 *) (u32) (s1 + 275)) = (u8) 0; goto L_00B89CF8;
L_00B89CF0:;
    v1 = (*(volatile u8 *) (u32) (s1 + 276));
    (*(volatile u8 *) (u32) (s1 + 275)) = (u8) v1;
L_00B89CF8:;
    a0 = (*(volatile u8 *) (u32) (s1 + 275));
    if (a0 != 0) goto L_00B89D60;
L_00B89D08:;
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -12928));
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_00B89CD8; }
L_00B89D20:;
    v1 = (s32) 0xcc0000U;
    a2 = (*(volatile u8 *) (u32) (v1 + -12915));
    a1 = 255;
    a0 = 125;
    v1 = (s32) 0xcc0000U;
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    (*(volatile u8 *) (u32) (v1 + -12915)) = (u8) a2;
    v1 = (*(volatile s32 *) (u32) (s3 + 4));
    (*(volatile u8 *) (u32) (v1 + 81)) = (u8) a1;
    v1 = (*(volatile s32 *) (u32) (s3 + 4));
    (*(volatile u8 *) (u32) (v1 + 82)) = (u8) 0;
    v1 = (*(volatile s32 *) (u32) s3);
    (*(volatile u8 *) (u32) (v1 + 102)) = (u8) 0;
    v1 = (*(volatile s32 *) (u32) s3);
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00B89D88;
L_00B89D60:;
    v0 = func_00B2A420(a0);
    v1 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (s32) ((u32) s2 + 0x1U);
    (*(volatile u8 *) (u32) (v1 + 81)) = (u8) a0;
    v1 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile u16 *) (u32) (v1 + 24));
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) s0; goto L_00B89D08;
L_00B89D88:;
    return;
}
