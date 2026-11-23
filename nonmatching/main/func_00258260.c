/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00154070(s32);
void func_0025E100(s32, s32);
s32 func_0025F820(void);
void func_0025F830(s32);

void func_00258260(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    { s32 c_ = s1 == 0; s0 = a2; if (c_) goto L_002583B8; }
    if (s0 == 0) goto L_002583B8;
    a0 = (s32) ((u32) sp + 0x4cU); func_0025F830(a0);
    v0 = func_0025F820();
    a2 = (*(volatile u8 *) (u32) (sp + 77));
    a0 = s2 & 0xff;
    at = a2 < a0;
    { s32 c_ = at == 0; a1 = v0 & 0xffff; if (c_) goto L_002582B8; }
    a1 = a1 & 0xffff; goto L_002582CC;
L_002582B8:;
    v1 = (*(volatile u8 *) (u32) (sp + 76));
    at = a0 < v1;
    if (at == 0) v1 = s2;
    a2 = v1 & 0xff;
    a1 = a1 & 0xffff;
L_002582CC:;
    a0 = s1 & 0xffff;
    v1 = (s32) 0x590000U;
    at = a1 < a0;
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) (v1 + -12484)) = (u8) a2; if (c_) goto L_002582E8; }
    goto L_002582F8;
L_002582E8:;
    if (a0 >= 0) goto L_002582F4;
    a0 = 0;
L_002582F4:;
    a1 = a0;
L_002582F8:;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (a0 + -12486)) = (u16) a1;
    v1 = (*(volatile u16 *) (u32) (v1 + -12486));
    if (v1 != 0) goto L_00258318;
    goto L_002583B8;
L_00258318:;
    v0 = v1 & 0xffff;
    a0 = (s32) ((u32) v0 << 2); v0 = func_00154070(a0);
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -12500)) = (u32) v0;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u16 *) (u32) (v1 + -12486));
    at = 0 < v1;
    { s32 c_ = at == 0; a6 = 0; if (c_) goto L_00258398; }
    a0 = 128;
    v1 = (s32) 0x590000U;
    a2 = 255;
L_0025834C:;
    a5 = (*(volatile u8 *) (u32) s0);
    a4 = (*(volatile u8 *) (u32) (s0 + 1));
    a3 = (*(volatile u8 *) (u32) (s0 + 2));
    a1 = (*(volatile u8 *) (u32) (s0 + 3));
    (*(volatile u8 *) (u32) v0) = (u8) a5;
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) a4;
    (*(volatile u8 *) (u32) (v0 + 2)) = (u8) a3;
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (s0 + 3));
    if (a1 == a2) goto L_002583AC;
    a1 = (s32) a1 >> 1;
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) a1;
L_00258380:;
    a1 = (*(volatile u16 *) (u32) (v1 + -12486));
    a6 = (s32) ((u32) a6 + 0x1U);
    s0 = (s32) ((u32) s0 + 0x4U);
    a1 = a6 < a1;
    { s32 c_ = a1 != 0; v0 = (s32) ((u32) v0 + 0x4U); if (c_) goto L_0025834C; }
L_00258398:;
    a0 = 3;
    a1 = 1; func_0025E100(a0, a1);
    goto L_002583B8;
L_002583AC:;
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) a0; goto L_00258380;
L_002583B8:;
    return;
}
