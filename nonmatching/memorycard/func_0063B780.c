/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00623430(void);

s32 func_0063B780(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    s1 = 0;
    s0 = 0;
L_0063B7B0:;
    v0 = func_00623430();
    v1 = 1;
    v1 = (s32) ((u32) v1 << (s0 & 31));
    v0 = v1 & v0;
    if (v0 == 0) goto L_0063B7E0;
    v0 = (*(volatile s16 *) (u32) s4);
    { s32 c_ = v0 != s0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_0063B7E0; }
    s1 = (s32) ((u32) s1 + 0x1U);
L_0063B7E0:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 2;
    if (v0 != 0) goto L_0063B7B0;
    v1 = (s32) 0x660000U;
    v0 = 15;
    v1 = (s32) ((u32) v1 + 0xffffb150U);
    v1 = (s32) ((u32) v1 + (u32) s1);
    { s32 c_ = s3 == v0; v1 = (*(volatile u8 *) (u32) v1); if (c_) goto L_0063B8FC; }
    v0 = 127;
    if (s3 == v0) { v0 = (s32) ((u32) v1 + 0x6U); goto L_0063B8E4; }
    v0 = 12;
    if (s3 == v0) goto L_0063B8CC;
    v0 = 11;
    if (s3 == v0) goto L_0063B8CC;
    v0 = 10;
    if (s3 == v0) goto L_0063B8CC;
    v0 = 9;
    if (s3 == v0) goto L_0063B8CC;
    v0 = 8;
    if (s3 == v0) goto L_0063B8CC;
    v0 = 7;
    if (s3 == v0) goto L_0063B8CC;
    v0 = 6;
    if (s3 == v0) goto L_0063B8CC;
    v0 = 5;
    if (s3 == v0) goto L_0063B8CC;
    v0 = 4;
    if (s3 == v0) goto L_0063B8CC;
    v0 = 3;
    if (s3 == v0) goto L_0063B8CC;
    v0 = 2;
    if (s3 == v0) goto L_0063B8CC;
    v0 = 1;
    if (s3 == v0) goto L_0063B8CC;
    if (s3 == 0) goto L_0063B8B4;
    v0 = 28; goto L_0063B90C;
L_0063B8B4:;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffb158U);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v1 + (u32) v0); goto L_0063B90C;
L_0063B8CC:;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffb160U);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v1 + (u32) v0); goto L_0063B90C;
L_0063B8E4:;
    a0 = 28;
    v1 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (v1 + -11248)) = (u8) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (v1 + -11224)) = (u8) a0; goto L_0063B91C;
L_0063B8FC:;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffb165U);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) v0);
L_0063B90C:;
    a0 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (a0 + -11248)) = (u8) s2;
    (*(volatile u8 *) (u32) (v1 + -11224)) = (u8) v0;
L_0063B91C:;
    return v0;
}
