/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001C80F0(s32);
s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);

s32 func_002153E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    a0 = (s32) ((u32) s3 + 0x38U);
    s0 = (s32) 0x210000U;
    s0 = (s32) ((u32) s0 + 0x4d80U); v0 = func_001C80F0(a0);
    if (v0 != 0) goto L_00215428;
    v0 = 1;
    s2 = -126;
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v0;
L_00215420:;
    v0 = s2; goto L_0021560C;
L_00215428:;
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (s32) ((u32) sp + 0x58U);
    a3 = 13;
    a4 = s3; v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s2 = v0;
    v0 = -126;
    if (s2 != v0) goto L_00215420;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 12));
    a1 = (*(volatile s32 *) (u32) (v0 + -32252));
    a4 = 0;
    v1 = (*(volatile s16 *) (u32) (s3 + 14));
    (*(volatile u16 *) (u32) (sp + 84)) = (u16) a0;
    at = 0 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 86)) = (u16) v1; if (c_) goto L_0021547C; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_0021547C:;
    v0 = (s32) 0x540000U;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_00215544; }
    a2 = a1; goto L_00215544;
    v1 = (s32) ((u32) sp + 0x56U);
L_0021549C:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_002154E8;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_002154E8; }
L_002154B4:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_002154D4;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a1) goto L_002154D4;
    a0 = a4; goto L_002154E8;
L_002154D4:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < a2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_002154B4; }
L_002154E8:;
    a1 = (*(volatile s32 *) (u32) (sp + 88));
    { s32 c_ = a1 < 0; s1 = 0; if (c_) goto L_0021555C; }
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) a1;
L_002154F8:;
    if (s1 == 0) goto L_00215420;
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) s1;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_002155D8; }
    a1 = a2;
L_00215520:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00215520;
    goto L_002155D8;
L_00215544:;
    a1 = (*(volatile s16 *) (u32) (sp + 84));
    v0 = -1;
    if (a1 == v0) goto L_002154E8;
    v1 = (s32) ((u32) sp + 0x56U); goto L_0021549C;
L_0021555C:;
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_002155B4; }
    v0 = 0; goto L_002155B4;
    v0 = -10;
L_00215570:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9730U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = -125;
    s1 = (*(volatile s32 *) (u32) v1);
    if (s1 == v0) goto L_002155C8;
    v0 = -124;
    if (s1 == v0) goto L_002155C8;
    v0 = -127;
    if (s1 == v0) goto L_002155C8;
L_002155AC:;
    goto L_002154F8;
L_002155B4:;
    at = a1 < -10;
    if (at == 0) goto L_00215570;
    v0 = -10; goto L_00215570;
L_002155C8:;
    func_0021CD70(a0, a1);
    goto L_002155AC;
L_002155D8:;
    if (v1 == s0) goto L_00215600;
L_002155E0:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_002155E0;
L_00215600:;
    s2 = (s32) ((u32) a3 - (u32) a4);
    goto L_00215420;
L_0021560C:;
    return v0;
}
