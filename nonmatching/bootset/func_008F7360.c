/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
s32 func_001F01D0(s32);
void func_001F0210(s32, s32, s32, s32);
void func_001F0590(s32);
s32 func_0021DF90(s32);
void func_002CBF00(s32);
s32 func_002CBF10(void);
s32 func_008F6080(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008F6830(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008F75B0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008F76C0(void);
void func_008F7B60(s32, s32, s32, s32);
void func_008F7C70(s32, s32, s32, s32);
s32 func_008F81C0(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_008F7360(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x900000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -24408));
    at = (u64) v0 < (u64) (s64) 8;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_008F739C; }
    v1 = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9f80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8f739cU) goto L_008F739C; if (t_ == 0x8f73f8U) goto L_008F73F8; if (t_ == 0x8f7414U) goto L_008F7414; if (t_ == 0x8f7458U) goto L_008F7458; if (t_ == 0x8f7478U) goto L_008F7478; if (t_ == 0x8f7498U) goto L_008F7498; if (t_ == 0x8f74b8U) goto L_008F74B8; if (t_ == 0x8f74d8U) goto L_008F74D8; }
L_008F739C:;
    func_008F7C70(a0, a1, a2, a3);
    a0 = 0; v0 = func_0021DF90(a0);
    a0 = v0; v0 = func_001F01D0(a0);
    if (v0 != 0) goto L_008F73DC;
    a0 = 0; v0 = func_0021DF90(a0);
    a0 = v0; func_001F0590(a0);
    v1 = 1;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v0 + -24400)) = (u32) v1; goto L_008F73E4;
L_008F73DC:;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v0 + -24400)) = (u32) 0;
L_008F73E4:;
    func_008F76C0();
    v1 = 1;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v0 + -24408)) = (u32) v1;
L_008F73F8:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) { v0 = s0; goto L_008F7520; }
    v1 = 2;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v0 + -24408)) = (u32) v1;
L_008F7414:;
    v0 = func_002CBF10();
    v1 = 3;
    if (v0 == v1) { v1 = 6; goto L_008F744C; }
    v1 = 2;
    if (v0 == v1) goto L_008F7448;
    v1 = 1;
    v1 = 3;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v0 + -24408)) = (u32) v1; goto L_008F751C;
L_008F7448:;
    v1 = 6;
L_008F744C:;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v0 + -24408)) = (u32) v1; goto L_008F751C;
L_008F7458:;
    v0 = func_008F6830(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_008F751C;
    v1 = 4;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v0 + -24408)) = (u32) v1; goto L_008F751C;
L_008F7478:;
    v0 = func_008F81C0(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_008F751C;
    v1 = 5;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v0 + -24408)) = (u32) v1; goto L_008F751C;
L_008F7498:;
    v0 = func_008F75B0(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_008F751C;
    v1 = 7;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v0 + -24408)) = (u32) v1; goto L_008F751C;
L_008F74B8:;
    v0 = func_008F6080(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_008F751C;
    v1 = 7;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v0 + -24408)) = (u32) v1; goto L_008F751C;
L_008F74D8:;
    func_008F7B60(a0, a1, a2, a3);
    v0 = (s32) 0x900000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -24400));
    if (v0 != v1) { a0 = 0; goto L_008F7508; }
    a0 = 0; v0 = func_0021DF90(a0);
    a0 = v0; func_001F0210(a0, a1, a2, a3);
    a0 = 0;
L_008F7508:;
    func_002CBF00(a0);
    v0 = (s32) 0x900000U;
    s0 = 1;
    (*(volatile u32 *) (u32) (v0 + -24408)) = (u32) 0;
L_008F751C:;
    v0 = s0;
L_008F7520:;
    return v0;
}
