/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001349C0(s32, s32, s32, s32, s32);
void func_00135830(void);
s32 func_00138930(s32);
void func_00138990(s32);
s32 func_008FBBB8(s32, s32, s32, s32);
void func_008FBC58(s32, s32, s32, s32);
s32 func_008FBCD8(s32, s32, s32, s32);

void func_001381A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;

    s7 = 1;
    s6 = a0;
    s4 = (s32) 0x500000U;
    s4 = (s32) ((u32) s4 + 0xffffdc80U);
    a0 = s4;
    v0 = func_008FBCD8(a0, a1, a2, a3);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 == 0) goto L_00138390;
L_001381F0:;
    v1 = (*(volatile s32 *) (u32) (s6 + 96));
    v0 = 1;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (gp + -23504)); goto L_00138208; }
    s7 = -1; goto L_00138390;
L_00138208:;
    at = (s32) 0x530000U;
    at = at | 0xce8c;
    a0 = (s32) ((u32) v0 + (u32) at); v0 = func_00138930(a0);
    v1 = (u64) 0 < (u64) v0;
    v1 = v1 ^ 0x1;
    if (v1 == 0) goto L_00138258;
L_00138228:;
    func_00135830();
    v0 = (*(volatile s32 *) (u32) (gp + -23504));
    at = (s32) 0x530000U;
    at = at | 0xce8c;
    a0 = (s32) ((u32) v0 + (u32) at); v0 = func_00138930(a0);
    v1 = (u64) 0 < (u64) v0;
    v1 = v1 ^ 0x1;
    if (v1 != 0) goto L_00138228;
L_00138258:;
    a0 = s4;
    a1 = v0;
    a2 = 1265; v0 = func_008FBBB8(a0, a1, a2, a3);
    if (v0 < 0) { s7 = -1; goto L_00138390; }
    v0 = (*(volatile s32 *) (u32) (s4 + 8));
    if (v0 != 0) goto L_00138358;
    v1 = (*(volatile s32 *) (u32) (gp + -23504));
    v0 = (s32) 0x540000U;
    s2 = (*(volatile s32 *) (u32) s4);
    s5 = (*(volatile s32 *) (u32) (s4 + 4));
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + -12644));
    at = 0 < v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_00138358; }
    s1 = 0;
    s0 = 0;
L_001382A8:;
    a0 = (*(volatile s32 *) (u32) (gp + -23504));
    v1 = (s32) 0x540000U;
    a2 = 0;
    v0 = v1;
    a3 = s2;
    a4 = s5;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (*(volatile s32 *) (u32) (v1 + -12656));
    v0 = (*(volatile s32 *) (u32) (v0 + -12660));
    v1 = (s32) ((u32) v1 + (u32) s0);
    a1 = (s32) ((u32) v0 + (u32) s1);
    a0 = (s32) ((u32) v1 + 0x40U); func_001349C0(a0, a1, a2, a3, a4);
    a0 = (*(volatile s32 *) (u32) (gp + -23504));
    v1 = (s32) 0x540000U;
    v0 = v1;
    at = (s32) 0x10000U;
    at = at | 0xe240;
    a2 = 1;
    a3 = s2;
    a4 = s5;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (*(volatile s32 *) (u32) (v1 + -12656));
    v0 = (*(volatile s32 *) (u32) (v0 + -12660));
    v1 = (s32) ((u32) v1 + (u32) s0);
    a1 = (s32) ((u32) v0 + (u32) s1);
    a0 = (s32) ((u32) v1 + (u32) at); func_001349C0(a0, a1, a2, a3, a4);
    v1 = (s32) 0x130000U;
    v0 = (s32) 0x30000U;
    v1 = v1 | 0xc680;
    v0 = v0 | 0xc440;
    s1 = (s32) ((u32) s1 + (u32) v1);
    s0 = (s32) ((u32) s0 + (u32) v0);
    v1 = (*(volatile s32 *) (u32) (gp + -23504));
    v0 = (s32) 0x540000U;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + -12644));
    v0 = s3 < v0;
    if (v0 != 0) goto L_001382A8;
L_00138358:;
    v0 = (*(volatile s32 *) (u32) (gp + -23504));
    at = (s32) 0x530000U;
    at = at | 0xce8c;
    a0 = (s32) ((u32) v0 + (u32) at); func_00138990(a0);
    func_00135830();
    a0 = (s32) 0x500000U;
    a0 = (s32) ((u32) a0 + 0xffffdc80U); v0 = func_008FBCD8(a0, a1, a2, a3);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) goto L_001381F0;
L_00138390:;
    a0 = s4; func_008FBC58(a0, a1, a2, a3);
    v0 = s7;
    return;
}
