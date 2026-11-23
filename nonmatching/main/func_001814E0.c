/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0017E640(s32, s32, s32, s32);
void func_0017F840(s32);
void func_001807D0(s32, s32, s32, s32);
void func_00180950(s32, s32, s32, s32);
void func_001809E0(s32, s32, s32, s32);
void func_00180A60(s32, s32, s32, s32, s32, s32);
s32 func_00180C20(s32, s32);
s32 func_001C80F0(s32);
s32 func_001C9C78(s32);
s32 func_001CDA40(s32);
s32 func_001CDA50(s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_001814E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 frame[114];
    s32 sp = (s32) (u32) frame;

    a0 = 5;
    func_0017E640(a0, a1, a2, a3);
    a0 = 0; func_0017F840(a0);
    s2 = (s32) 0x3e0000U;
    s5 = 0;
    s2 = (s32) ((u32) s2 + 0x6340U);
    s7 = 0;
L_00181528:;
    v0 = (*(volatile s32 *) (u32) s2);
    if (v0 != 0) goto L_00181540;
    v0 = 0; goto L_001815F0;
L_00181540:;
    a3 = (*(volatile s32 *) (u32) (s2 + 4));
    if (a3 != 0) goto L_00181558;
    v0 = 0; goto L_001815F0;
L_00181558:;
    v0 = (s32) 0x390000U;
    a2 = (*(volatile s32 *) (u32) (v0 + 28672));
    a1 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) sp + 0x290U);
    a1 = (s32) ((u32) a1 + 0xffffca80U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) sp + 0x290U); v0 = func_001C80F0(a0);
    s0 = v0;
    { s32 c_ = s0 == 0; s3 = 0; if (c_) goto L_001815A8; }
    s1 = (s32) ((u32) sp + 0x290U);
L_00181588:;
    a0 = (*(volatile s8 *) (u32) s1); v0 = func_001C9C78(a0);
    (*(volatile u8 *) (u32) s1) = (u8) v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (u64) s3 < (u64) s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_00181588; }
L_001815A8:;
    a0 = 0;
    a1 = s5; v0 = func_00180C20(a0, a1);
    v1 = (s32) ((u32) v0 << 2);
    a3 = (*(volatile s32 *) (u32) s2);
    v0 = (s32) 0x3b0000U;
    a0 = 0;
    v0 = (s32) ((u32) v0 + 0x7750U);
    a1 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = s5;
    a4 = (*(volatile s32 *) (u32) v0);
    a5 = (s32) ((u32) sp + 0x290U); func_00180A60(a0, a1, a2, a3, a4, a5);
    func_00180950(a0, a1, a2, a3);
    v0 = 1;
L_001815F0:;
    if (v0 == 0) goto L_00181600;
    func_001807D0(a0, a1, a2, a3);
L_00181600:;
    a0 = s5; v0 = func_001CDA50(a0);
    a0 = v0; v0 = func_001CDA40(a0);
    s4 = v0;
    v0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) s4 << 4);
    v0 = (s32) ((u32) v0 + 0x6340U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s6 = (s32) ((u32) s7 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) s6);
    if (v0 != 0) goto L_00181640;
    v0 = 0; goto L_001816F0;
L_00181640:;
    a3 = (*(volatile s32 *) (u32) (s6 + 4));
    if (a3 != 0) goto L_00181658;
    v0 = 0; goto L_001816F0;
L_00181658:;
    v0 = (s32) 0x390000U;
    a2 = (*(volatile s32 *) (u32) (v0 + 28672));
    a1 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) sp + 0x190U);
    a1 = (s32) ((u32) a1 + 0xffffca80U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) sp + 0x190U); v0 = func_001C80F0(a0);
    s0 = v0;
    { s32 c_ = s0 == 0; s3 = 0; if (c_) goto L_001816A8; }
    s1 = (s32) ((u32) sp + 0x190U);
L_00181688:;
    a0 = (*(volatile s8 *) (u32) s1); v0 = func_001C9C78(a0);
    (*(volatile u8 *) (u32) s1) = (u8) v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (u64) s3 < (u64) s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_00181688; }
L_001816A8:;
    a0 = s4;
    a1 = s5; v0 = func_00180C20(a0, a1);
    v1 = (s32) ((u32) v0 << 2);
    a3 = (*(volatile s32 *) (u32) s6);
    v0 = (s32) 0x3b0000U;
    a1 = s4;
    v0 = (s32) ((u32) v0 + 0x7750U);
    a0 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = s5;
    a4 = (*(volatile s32 *) (u32) v0);
    a5 = (s32) ((u32) sp + 0x190U); func_00180A60(a0, a1, a2, a3, a4, a5);
    func_00180950(a0, a1, a2, a3);
    v0 = 1;
L_001816F0:;
    if (v0 == 0) goto L_00181700;
    func_001807D0(a0, a1, a2, a3);
L_00181700:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 2;
    s2 = (s32) ((u32) s2 + 0x8U);
    { s32 c_ = v0 != 0; s7 = (s32) ((u32) s7 + 0x8U); if (c_) goto L_00181528; }
    v1 = (s32) 0x390000U;
    v0 = (s32) 0x3e0000U;
    a2 = (*(volatile s32 *) (u32) (v1 + 28672));
    a1 = (s32) 0x3d0000U;
    a3 = (*(volatile s32 *) (u32) (v0 + 25604));
    a0 = (s32) ((u32) sp + 0x90U);
    a1 = (s32) ((u32) a1 + 0xffffca80U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) sp + 0x90U); v0 = func_001C80F0(a0);
    s0 = v0;
    { s32 c_ = s0 == 0; s2 = 0; if (c_) goto L_00181768; }
    s1 = (s32) ((u32) sp + 0x90U);
L_0018174C:;
    a0 = (*(volatile s8 *) (u32) s1); v0 = func_001C9C78(a0);
    (*(volatile u8 *) (u32) s1) = (u8) v0;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = (u64) s2 < (u64) s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_0018174C; }
L_00181768:;
    v0 = (s32) 0x3e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 25600));
    v0 = (s32) 0x3b0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + 30560));
    a2 = (s32) ((u32) sp + 0x90U); func_001809E0(a0, a1, a2, a3);
    func_00180950(a0, a1, a2, a3);
    func_001807D0(a0, a1, a2, a3);
    return;
}
