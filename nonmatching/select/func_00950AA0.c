/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_0023EC10(s32, s32);
s32 func_002EBF80(s32);
void func_002EC3F0(s32, s32, s32, s32);
void func_002ECB10(s32, s32, s32);
void func_00946980(void);

void func_00950AA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    a1 = 1;
    v1 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = v1 != a1; s0 = a0; if (c_) goto L_00950B04; }
    v0 = (s32) 0x970000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -32575));
    if (v0 != 0) { v0 = (s32) 0x84000000U; goto L_00950AE4; }
    v0 = (s32) 0x970000U;
    a0 = (*(volatile s32 *) (u32) (gp + -18248));
    a1 = (*(volatile u16 *) (u32) (v0 + -32564));
    a2 = 0; func_002ECB10(a0, a1, a2);
    v0 = (s32) 0x84000000U;
L_00950AE4:;
    a0 = v0 | 0x8401; SD_call(a0);
    (*(volatile u32 *) (u32) s0) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (gp + -18248));
    a1 = 0; func_002EC3F0(a0, a1, a2, a3);
    goto L_00950CE8;
L_00950B04:;
    v0 = (s32) 0x970000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -32574));
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -18248)); goto L_00950B40; }
    v0 = (s32) 0x970000U;
    a0 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + 0xffff80d0U);
    a2 = 4;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffc310U);
    (*(volatile u32 *) (u32) v0) = (u32) a2; func_0023EC10(a0, a1);
    goto L_00950CE8;
L_00950B40:;
    v0 = func_002EBF80(a0);
    a2 = (s32) 0x960000U;
    v1 = v0 & 0xffff;
    a3 = 0;
    a2 = (s32) ((u32) a2 + 0x7f20U);
    a0 = 0xffff;
L_00950B5C:;
    a1 = (*(volatile u16 *) (u32) (a2 + 4));
    if (a1 == v1) goto L_00950BA8;
    if (a1 != a0) { a3 = (s32) ((u32) a3 + 0x1U); goto L_00950B9C; }
    a0 = (s32) 0x960000U;
    a1 = (s32) ((u32) a3 << 1);
    a0 = (s32) ((u32) a0 + 0x7f24U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u16 *) (u32) a0) = (u16) v1;
    a1 = (s32) 0x970000U;
    a1 = (*(volatile s32 *) (u32) (a1 + -32580));
    a0 = (s32) 0x970000U;
    a1 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + -32580)) = (u32) a1; goto L_00950BA8;
L_00950B9C:;
    at = a3 < 204;
    { s32 c_ = at != 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_00950B5C; }
L_00950BA8:;
    a0 = (s32) 0x970000U;
    a3 = (*(volatile s8 *) (u32) (a0 + -32574));
    a1 = (s32) 0x970000U;
    a0 = (s32) 0x960000U;
    a2 = (*(volatile s8 *) (u32) (a0 + 32544));
    a0 = (s32) ((u32) a3 + 0xffffffffU);
    { s32 c_ = a2 == 0; (*(volatile u8 *) (u32) (a1 + -32574)) = (u8) a0; if (c_) goto L_00950C98; }
    a0 = 2;
    if (a2 == a0) goto L_00950C40;
    a0 = 1;
    if (a2 == a0) goto L_00950BE8;
    goto L_00950CE8;
L_00950BE8:;
    a3 = (s32) 0x960000U;
    a5 = 0;
    a3 = (s32) ((u32) a3 + 0x7f20U);
    a1 = 281;
L_00950BF8:;
    a4 = 0;
    a2 = a3;
L_00950C00:;
    a0 = (*(volatile u16 *) (u32) (a2 + 4684));
    if (a0 != v1) goto L_00950C18;
    (*(volatile u16 *) (u32) (a2 + 4684)) = (u16) a1;
    (*(volatile u32 *) (u32) (a2 + 4688)) = (u32) 0;
L_00950C18:;
    a4 = (s32) ((u32) a4 + 0x1U);
    a0 = a4 < 4;
    { s32 c_ = a0 != 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_00950C00; }
    a5 = (s32) ((u32) a5 + 0x1U);
    a0 = a5 < 8;
    { s32 c_ = a0 != 0; a3 = (s32) ((u32) a3 + 0x20U); if (c_) goto L_00950BF8; }
    goto L_00950CE8;
L_00950C40:;
    a5 = (s32) 0x960000U;
    a3 = 0;
    a5 = (s32) ((u32) a5 + 0x7f20U);
    a1 = 281;
L_00950C50:;
    a2 = 0;
    a4 = a5;
L_00950C58:;
    a0 = (*(volatile u16 *) (u32) (a4 + 5708));
    if (a0 != v1) goto L_00950C70;
    (*(volatile u16 *) (u32) (a4 + 5708)) = (u16) a1;
    (*(volatile u32 *) (u32) (a4 + 5712)) = (u32) 0;
L_00950C70:;
    a2 = (s32) ((u32) a2 + 0x1U);
    a0 = a2 < 10;
    { s32 c_ = a0 != 0; a4 = (s32) ((u32) a4 + 0x8U); if (c_) goto L_00950C58; }
    a3 = (s32) ((u32) a3 + 0x1U);
    a0 = a3 < 2;
    { s32 c_ = a0 != 0; a5 = (s32) ((u32) a5 + 0x50U); if (c_) goto L_00950C50; }
    goto L_00950CE8;
L_00950C98:;
    a5 = (s32) 0x960000U;
    a3 = 0;
    a5 = (s32) ((u32) a5 + 0x7f20U);
    a1 = 281;
L_00950CA8:;
    a2 = 0;
    a4 = a5;
L_00950CB0:;
    a0 = (*(volatile u16 *) (u32) (a4 + 5196));
    if (a0 != v1) goto L_00950CC8;
    (*(volatile u16 *) (u32) (a4 + 5196)) = (u16) a1;
    (*(volatile u32 *) (u32) (a4 + 5200)) = (u32) 0;
L_00950CC8:;
    a2 = (s32) ((u32) a2 + 0x1U);
    a0 = a2 < 16;
    { s32 c_ = a0 != 0; a4 = (s32) ((u32) a4 + 0x8U); if (c_) goto L_00950CB0; }
    a3 = (s32) ((u32) a3 + 0x1U);
    a0 = a3 < 2;
    { s32 c_ = a0 != 0; a5 = (s32) ((u32) a5 + 0x80U); if (c_) goto L_00950CA8; }
L_00950CE8:;
    a0 = 255;
    v1 = (s32) 0x970000U;
    (*(volatile u8 *) (u32) (v1 + -32575)) = (u8) a0; func_00946980();
    return;
}
