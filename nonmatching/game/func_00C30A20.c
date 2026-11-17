/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002937A0(s32);
s32 func_00997360(s32);

void func_00C30A20(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    a0 = (*(volatile u8 *) (u32) a0); v0 = func_00997360(a0);
    if (v0 == 0) goto L_00C30BF8;
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) 0;
    s1 = 1;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) 0;
L_00C30A74:;
    s0 = (s32) ((u32) s2 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) (s0 + 192)); v0 = func_002937A0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xfffffffbU);
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) goto L_00C30AD0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x3940U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xc30ab0U) goto L_00C30AB0; if (t_ == 0xc30ab8U) goto L_00C30AB8; if (t_ == 0xc30ac0U) goto L_00C30AC0; if (t_ == 0xc30ac8U) goto L_00C30AC8; }
L_00C30AB0:;
    v0 = 1; goto L_00C30AD8;
L_00C30AB8:;
    v0 = 2; goto L_00C30AD8;
L_00C30AC0:;
    v0 = 3; goto L_00C30AD8;
L_00C30AC8:;
    v0 = 4; goto L_00C30AD8;
L_00C30AD0:;
    v0 = 0;
L_00C30AD8:;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v0 + (u32) sp);
    a0 = (*(volatile u8 *) (u32) (s0 + 92));
    v0 = (*(volatile s32 *) (u32) (v1 + 96));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 96)) = (u32) v0; v0 = func_002937A0(a0);
    v1 = v0 & 0xff;
    v1 = (s32) ((u32) v1 + 0xfffffffbU);
    at = (u64) v1 < (u64) (s64) 8;
    if (at == 0) goto L_00C30B48;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x3920U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xc30ab0U) goto L_00C30AB0; if (t_ == 0xc30ab8U) goto L_00C30AB8; if (t_ == 0xc30ac0U) goto L_00C30AC0; if (t_ == 0xc30ac8U) goto L_00C30AC8; if (t_ == 0xc30b28U) goto L_00C30B28; if (t_ == 0xc30b30U) goto L_00C30B30; if (t_ == 0xc30b38U) goto L_00C30B38; if (t_ == 0xc30b40U) goto L_00C30B40; }
L_00C30B28:;
    v1 = 1; goto L_00C30B50;
L_00C30B30:;
    v1 = 2; goto L_00C30B50;
L_00C30B38:;
    v1 = 3; goto L_00C30B50;
L_00C30B40:;
    v1 = 4; goto L_00C30B50;
L_00C30B48:;
    v1 = 0;
L_00C30B50:;
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) v1 + (u32) sp);
    s1 = (s32) ((u32) s1 + 0x1U);
    a0 = (*(volatile s32 *) (u32) (a1 + 64));
    v1 = s1 < 11;
    a0 = (s32) ((u32) a0 + 0x1U);
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (a1 + 64)) = (u32) a0; if (c_) goto L_00C30A74; }
    a1 = (*(volatile s32 *) (u32) (sp + 96));
    a0 = (*(volatile s32 *) (u32) (sp + 64));
    v1 = a1 < a0;
    if (v1 != 0) goto L_00C30BE0;
    if (a1 == a0) { a0 = (*(volatile s32 *) (u32) (sp + 100)); goto L_00C30BD0; }
L_00C30B8C:;
    a0 = (*(volatile s32 *) (u32) (sp + 96));
    v1 = (*(volatile s32 *) (u32) (sp + 64));
    at = v1 < a0;
    if (at != 0) goto L_00C30BEC;
    a0 = (*(volatile s32 *) (u32) (sp + 112));
    v1 = (*(volatile s32 *) (u32) (sp + 80));
    v1 = a0 < v1;
    if (v1 != 0) goto L_00C30BEC;
    a0 = (*(volatile s32 *) (u32) (sp + 108));
    v1 = (*(volatile s32 *) (u32) (sp + 76));
    v1 = a0 < v1;
    if (v1 != 0) goto L_00C30BEC;
L_00C30BC8:;
    goto L_00C30BFC;
L_00C30BD0:;
    v1 = (*(volatile s32 *) (u32) (sp + 68));
    at = a0 < v1;
    if (at == 0) goto L_00C30B8C;
L_00C30BE0:;
    v1 = 1;
    (*(volatile u8 *) (u32) (s2 + 23)) = (u8) v1; goto L_00C30BC8;
L_00C30BEC:;
    v1 = 2;
    (*(volatile u8 *) (u32) (s2 + 23)) = (u8) v1; goto L_00C30BC8;
L_00C30BF8:;
L_00C30BFC:;
    return;
}
