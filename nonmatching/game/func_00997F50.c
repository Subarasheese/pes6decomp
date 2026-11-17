/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0099C460(s64);

void func_00997F50(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0;

    a0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (a0 + 7972));
    a0 = 4;
    if (a1 == a0) goto L_00997FA4;
    a0 = 6;
    if (a1 == a0) goto L_00997FA4;
    a0 = 3;
    if (a1 == a0) goto L_00997FA4;
    a0 = 1;
    if (a1 == a0) goto L_00997FA4;
    a0 = 2;
    if (a1 == a0) goto L_00997FA4;
    goto L_00998148;
L_00997FA4:;
    a1 = (s32) 0x590000U;
    a4 = (s32) 0x590000U;
    a3 = (*(volatile u8 *) (u32) (a1 + 7757));
    a5 = 0;
    a0 = 255;
    a4 = (s32) ((u32) a4 + 0x2800U);
L_00997FBC:;
    a1 = (*(volatile u8 *) (u32) (a4 + 16));
    if (a3 != a1) goto L_00997FD0;
    a0 = a5;
L_00997FD0:;
    a2 = (*(volatile u8 *) (u32) (a4 + 17));
    a5 = (s32) ((u32) a5 + 0x1U);
    a1 = a5 < 8;
    (*(volatile u8 *) (u32) (a4 + 16)) = (u8) a2;
    { s32 c_ = a1 != 0; a4 = (s32) ((u32) a4 + 0x28U); if (c_) goto L_00997FBC; }
    a1 = (s32) 0x590000U;
    a4 = (*(volatile u8 *) (u32) (a1 + 10562));
    a1 = 255;
    { s32 c_ = a4 == a1; a5 = 0; if (c_) goto L_00998030; }
    v1 = (s32) ((u32) a4 << 2);
    a1 = (s32) 0x590000U;
    a2 = (s32) ((u32) v1 + (u32) a4);
    a1 = (s32) ((u32) a1 + 0x2810U);
    v1 = (s32) 0x590000U;
    a3 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) v1 + 0x2803U);
    a2 = (s32) ((u32) a1 + (u32) a3);
    a1 = (s32) ((u32) v1 + (u32) a3);
    a1 = (*(volatile u8 *) (u32) a1);
    { s32 c_ = a1 != 0; v1 = (*(volatile u8 *) (u32) a2); if (c_) goto L_00998030; }
    a5 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00998030:;
    a1 = 255;
    if (a0 == a1) goto L_00998064;
    a2 = (s32) ((u32) a0 << 2);
    a1 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + (u32) a0);
    a1 = (s32) ((u32) a1 + 0x2803U);
    a2 = (s32) ((u32) a2 << 3);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile u8 *) (u32) a1);
    if (a1 != 0) goto L_00998064;
    a5 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00998064:;
    if (a5 != 0) goto L_00998178;
    a1 = 255;
    if (a4 != a1) goto L_00998150;
L_00998078:;
    a3 = (s32) 0x590000U;
    a2 = 0;
    a3 = (s32) ((u32) a3 + 0x2800U);
L_00998084:;
    if (a2 == a0) { (*(volatile u8 *) (u32) (a3 + 16)) = (u8) v1; goto L_00998090; }
L_00998090:;
    a2 = (s32) ((u32) a2 + 0x1U);
    a1 = a2 < 8;
    a3 = (s32) ((u32) a3 + 0x28U);
    if (a1 != 0) goto L_00998084;
L_009980A8:;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 9983));
    v1 = 5;
    if (a0 == v1) goto L_009980F4;
    v1 = 2;
    if (a0 == v1) goto L_009980F4;
    v1 = 3;
    if (a0 == v1) goto L_009980F4;
    v1 = 4;
    if (a0 == v1) goto L_009980F4;
    v1 = 1;
    if (a0 == v1) goto L_009980F4;
    goto L_00998140;
L_009980F4:;
    a1 = 255;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 10562)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (v1 + 7757));
    a2 = (s32) 0x590000U;
    a3 = 0;
    a2 = (s32) ((u32) a2 + 0x2800U);
    v1 = (s32) 0x590000U;
L_00998118:;
    a0 = (*(volatile u8 *) (u32) (a2 + 16));
    (*(volatile u8 *) (u32) (a2 + 17)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 16));
    if (a1 == a0) { (*(volatile u8 *) (u32) (v1 + 10562)) = (u8) a3; goto L_00998130; }
L_00998130:;
    a3 = (s32) ((u32) a3 + 0x1U);
    a0 = a3 < 8;
    { s32 c_ = a0 != 0; a2 = (s32) ((u32) a2 + 0x28U); if (c_) goto L_00998118; }
L_00998140:;
    goto L_00998190;
L_00998148:;
    goto L_00998190;
L_00998150:;
    a1 = (s32) 0x590000U;
    a2 = (s32) ((u32) a4 << 2);
    a3 = (*(volatile u8 *) (u32) (a1 + 7757));
    a2 = (s32) ((u32) a2 + (u32) a4);
    a2 = (s32) ((u32) a2 << 3);
    a1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x2810U);
    a1 = (s32) ((u32) a1 + (u32) a2);
    (*(volatile u8 *) (u32) a1) = (u8) a3; goto L_00998078;
L_00998178:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7757)); func_0099C460(a0);
    goto L_009980A8;
L_00998190:;
    return;
}
