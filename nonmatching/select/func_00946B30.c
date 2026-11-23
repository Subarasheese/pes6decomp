/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002EBEF0(s32);
s32 func_002EBF80(s32);

void func_00946B30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x970000U;
    s1 = a0;
    v1 = (*(volatile s8 *) (u32) (v1 + -32540));
    a0 = (s32) 0x970000U;
    a0 = (s32) ((u32) a0 + 0xffff80d0U);
    v1 = (s32) ((u32) v1 << 4);
    a0 = (s32) ((u32) a0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = a0 != 0; s0 = a1; if (c_) goto L_00946BBC; }
    a0 = (*(volatile s32 *) (u32) (gp + -18248)); v0 = func_002EBEF0(a0);
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -18248)); goto L_00946B8C; }
    v1 = 0xffff;
    { s32 c_ = s0 == 0; (*(volatile u16 *) (u32) s1) = (u16) v1; if (c_) goto L_00946D84; }
    (*(volatile u32 *) (u32) s0) = (u32) 0; goto L_00946D84;
L_00946B8C:;
    v0 = func_002EBF80(a0);
    { s32 c_ = s0 == 0; (*(volatile u16 *) (u32) s1) = (u16) v0; if (c_) goto L_00946D84; }
    v1 = (s32) 0x970000U;
    a0 = 255;
    v1 = (*(volatile s32 *) (u32) (v1 + -32536));
    if (v1 == a0) { (*(volatile u32 *) (u32) s0) = (u32) 0; goto L_00946D84; }
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) s0) = (u32) v1; goto L_00946D84;
L_00946BBC:;
    a0 = (s32) 0x960000U;
    a1 = (*(volatile s8 *) (u32) (a0 + 32544));
    if (a1 == 0) goto L_00946D04;
    a0 = 2;
    if (a1 == a0) goto L_00946C70;
    a0 = 1;
    if (a1 == a0) goto L_00946BEC;
    goto L_00946D88;
L_00946BEC:;
    a3 = (s32) 0x970000U;
    a2 = (s32) 0x970000U;
    a3 = (s32) ((u32) a3 + 0xffff80c4U);
    a0 = (s32) 0x970000U;
    a1 = (s32) ((u32) a3 + (u32) v1);
    a2 = (s32) ((u32) a2 + 0xffff80c8U);
    a1 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) a2 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffff916cU);
    a1 = (s32) ((u32) a1 << 5);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u16 *) (u32) v1);
    { s32 c_ = s0 == 0; (*(volatile u16 *) (u32) s1) = (u16) v1; if (c_) goto L_00946D84; }
    v1 = (s32) 0x970000U;
    a0 = (s32) 0x970000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -32540));
    a0 = (s32) ((u32) a0 + 0xffff9170U);
    v1 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (s32) ((u32) a2 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    a1 = (s32) ((u32) a1 << 5);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) s0) = (u32) v1; goto L_00946D84;
L_00946C70:;
    a4 = (s32) 0x970000U;
    a2 = (s32) 0x970000U;
    a4 = (s32) ((u32) a4 + 0xffff80c4U);
    a0 = (s32) 0x970000U;
    a1 = (s32) ((u32) a4 + (u32) v1);
    a2 = (s32) ((u32) a2 + 0xffff80c8U);
    a3 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) a2 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffff956cU);
    a1 = (s32) ((u32) a3 << 2);
    a1 = (s32) ((u32) a1 + (u32) a3);
    v1 = (s32) ((u32) v1 << 3);
    a1 = (s32) ((u32) a1 << 4);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u16 *) (u32) v1);
    { s32 c_ = s0 == 0; (*(volatile u16 *) (u32) s1) = (u16) v1; if (c_) goto L_00946D84; }
    v1 = (s32) 0x970000U;
    a0 = (s32) 0x970000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -32540));
    a0 = (s32) ((u32) a0 + 0xffff9570U);
    v1 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) a4 + (u32) v1);
    v1 = (s32) ((u32) a2 + (u32) v1);
    a2 = (*(volatile s32 *) (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    a1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) ((u32) v1 << 3);
    a1 = (s32) ((u32) a1 << 4);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) s0) = (u32) v1; goto L_00946D84;
L_00946D04:;
    a3 = (s32) 0x970000U;
    a2 = (s32) 0x970000U;
    a3 = (s32) ((u32) a3 + 0xffff80c4U);
    a0 = (s32) 0x970000U;
    a1 = (s32) ((u32) a3 + (u32) v1);
    a2 = (s32) ((u32) a2 + 0xffff80c8U);
    a1 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) a2 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffff936cU);
    a1 = (s32) ((u32) a1 << 7);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u16 *) (u32) v1);
    { s32 c_ = s0 == 0; (*(volatile u16 *) (u32) s1) = (u16) v1; if (c_) goto L_00946D84; }
    v1 = (s32) 0x970000U;
    a0 = (s32) 0x970000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -32540));
    a0 = (s32) ((u32) a0 + 0xffff9370U);
    v1 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (s32) ((u32) a2 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    a1 = (s32) ((u32) a1 << 7);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) s0) = (u32) v1;
L_00946D84:;
L_00946D88:;
    return;
}
