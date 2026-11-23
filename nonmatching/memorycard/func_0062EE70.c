/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D6D30(s32, s32);
s32 func_001D6E70(s32, s32, s32);
void func_001EDAE0(s32, s32);
void func_001EF900(s32, s32);
s32 func_001F08B0(s32);
void func_0063A580(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0063ACE0(s32, s32, s32, s32);

void func_0062EE70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    s1 = 0;
    s0 = s3;
L_0062EE94:;
    v0 = (*(volatile s32 *) (u32) (s0 + 336));
    if (v0 != 0) goto L_0062EF40;
    a2 = (*(volatile u8 *) (u32) (s3 + 596));
    v1 = (s32) 0x650000U;
    a0 = (s32) 0x650000U;
    v1 = (s32) ((u32) v1 + 0x7850U);
    a0 = (s32) ((u32) a0 + 0x7860U);
    v0 = (*(volatile s32 *) (u32) (s3 + 4));
    a1 = (s32) ((u32) a2 << 4);
    v1 = (s32) ((u32) v1 + (u32) a2);
    a1 = (s32) ((u32) a1 - (u32) a2);
    v1 = (*(volatile u8 *) (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) s1 + (u32) a0);
    s2 = (*(volatile u8 *) (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_001D6D30(a0, a1);
    a0 = v0; v0 = func_001F08B0(a0);
    a3 = (*(volatile u8 *) (u32) (s3 + 596));
    a0 = (s32) 0x650000U;
    a0 = (s32) ((u32) a0 + 0x7850U);
    a2 = v0;
    v1 = (*(volatile s32 *) (u32) (s3 + 4));
    v0 = (s32) ((u32) a0 + (u32) a3);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_001D6E70(a0, a1, a2);
    (*(volatile u32 *) (u32) (s0 + 336)) = (u32) v0;
    v0 = 9;
    if (s1 != v0) goto L_0062EF40;
    a0 = (*(volatile s32 *) (u32) (s3 + 372));
    v0 = (s32) 0x6c0000U;
    a1 = v0 | 0x42; func_0063ACE0(a0, a1, a2, a3);
L_0062EF40:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 15;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0062EE94; }
    v0 = (*(volatile s32 *) (u32) (s3 + 396));
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s3 + 400)); goto L_0062EF6C; }
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_001EDAE0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 400));
L_0062EF6C:;
    if (a0 == 0) { a0 = 29510; goto L_0062EF80; }
    a1 = 0; func_001EF900(a0, a1);
    a0 = 29510;
L_0062EF80:;
    func_0063A580(a0, a1, a2, a3, a4, a5, a6, a7);
    return;
}
