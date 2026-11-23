/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001839A0(s32, s32, s32, s32);
void func_001CEA60(s32, s32, s32, s32);
void func_001CEAB0(void);
void func_001CEB90(void);
void func_001CEBD0(s32);
void func_001CEC70(void);
void func_001CECC0(s32);
s32 func_001D3090(s32);
void func_001D3260(s32, s32, s32, s32);

void func_00198150(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 560));
    if (v1 == 0) goto L_001982B8;
    s2 = (s32) ((u32) sp + 0x68U);
    s4 = 1;
    s3 = 0;
    s1 = 0;
    s0 = s2;
L_00198190:;
    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 560));
    a0 = (s32) ((u32) v1 + (u32) s1);
    v1 = (*(volatile s32 *) (u32) (a0 + 1688));
    if (v1 != 0) goto L_001981D4;
    v1 = 1;
    (*(volatile u32 *) (u32) s0) = (u32) v1;
L_001981B0:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = (u64) s3 < (u64) (s64) 2;
    s1 = (s32) ((u32) s1 + 0x1194U);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00198190; }
    if (s4 == 0) goto L_001981F8;
    goto L_001982B8;
L_001981D4:;
    a1 = (s32) ((u32) a0 + 0x17c0U);
    a2 = 0;
    a0 = 0; v0 = func_001839A0(a0, a1, a2, a3);
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) s0) = (u32) v0; if (c_) goto L_001981B0; }
    s4 = 0; goto L_001981B0;
L_001981F8:;
    a0 = 96; func_001CECC0(a0);
    func_001CEB90();
    a0 = 2; func_001CEBD0(a0);
    func_001CEAB0();
    func_001CEC70();
    s0 = 0;
    s1 = 0;
L_00198228:;
    a0 = (*(volatile s32 *) (u32) s2);
    v1 = 1;
    if (a0 != v1) goto L_00198254;
L_00198238:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = (u64) s0 < (u64) (s64) 2;
    s2 = (s32) ((u32) s2 + 0x4U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x1194U); if (c_) goto L_00198228; }
    goto L_001982B8;
L_00198254:;
    v0 = (s32) 0x520000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 560));
    v0 = (s32) ((u32) v0 + (u32) s1);
    s3 = (s32) ((u32) v0 + 0x17b0U);
    a0 = s3; v0 = func_001D3090(a0);
    a0 = (s32) ((u32) v0 + 0x128U); func_001CECC0(a0);
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x390000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 560));
    v1 = (s32) ((u32) v1 + 0x7750U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 1692));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); func_001CEA60(a0, a1, a2, a3);
    a0 = s3; func_001D3260(a0, a1, a2, a3);
    func_001CEC70();
    goto L_00198238;
L_001982B8:;
    return;
}
