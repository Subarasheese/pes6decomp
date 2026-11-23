/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_0023EC10(s32, s32);

s32 func_00959D20(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffff8194U);
    v1 = 2;
    s2 = a0;
    s0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) 0x8e0000U;
    v0 = (s32) ((u32) v0 + 0xffffc270U);
    a0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v0);
    { s32 c_ = a0 == v1; s1 = 0; if (c_) goto L_00959D8C; }
    v0 = 1;
    if (a0 == v0) { v0 = (s32) 0x84020000U; goto L_00959D78; }
    a0 = (*(volatile u8 *) (u32) s0); goto L_00959DCC;
L_00959D78:;
    s1 = v1;
    a0 = v0 | 0x8400; SD_call(a0);
    goto L_00959DC8;
L_00959D8C:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7980));
    v0 = 3;
    { s32 c_ = v1 == v0; s1 = 1; if (c_) goto L_00959DB4; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
    goto L_00959DC8;
L_00959DB4:;
    if (s2 != 0) goto L_00959DC8;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
L_00959DC8:;
    a0 = (*(volatile u8 *) (u32) s0);
L_00959DCC:;
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc230U);
    v0 = 32;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) goto L_00959E50;
    v0 = 16;
    if (v1 == v0) goto L_00959E00;
    v0 = s1; goto L_00959E9C;
L_00959E00:;
    v0 = (s32) 0x970000U;
    s0 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcff8U);
    a0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) a0);
    v0 = 1;
    if (v1 != v0) goto L_00959E98;
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = (s32) 0x970000U;
    a1 = 1;
    v0 = (s32) ((u32) v0 + 0xffffcff0U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (s32) ((u32) v0 + 0x19cU); func_0023EC10(a0, a1);
    goto L_00959E98;
L_00959E50:;
    v0 = (s32) 0x970000U;
    s0 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcff8U);
    a0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) a0);
    if (v0 != 0) goto L_00959E98;
    v1 = 1;
    v0 = (s32) 0x84000000U;
    (*(volatile u32 *) (u32) a0) = (u32) v1;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = (s32) 0x970000U;
    a1 = 1;
    v0 = (s32) ((u32) v0 + 0xffffcff0U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (s32) ((u32) v0 + 0x19cU); func_0023EC10(a0, a1);
L_00959E98:;
    v0 = s1;
L_00959E9C:;
    return v0;
}
