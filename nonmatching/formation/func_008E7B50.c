/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DF460(s32, s32);
s32 func_008C5050(s32);

void func_008E7B50(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    s4 = a0;
    s3 = a1;
    s2 = (*(volatile u8 *) (u32) a0);
    at = s2 < 10;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_008E7C68; }
    v1 = (s32) ((u32) s2 << 2);
    s0 = (s32) ((u32) s4 + (u32) v1);
L_008E7B90:;
    v1 = (*(volatile s32 *) (u32) (s0 + 100));
    if (v1 == 0) goto L_008E7C50;
    v1 = (s32) ((u32) s3 + (u32) s1);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == 0) goto L_008E7C00;
    v1 = (*(volatile u8 *) (u32) s4);
    a0 = s1 & 0xff;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = v1 & 0xff;
    at = v1 < 10;
    if (at == 0) goto L_008E7C50;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) s4 + (u32) v1);
    s5 = (s32) ((u32) v1 + 0x64U);
    v1 = (*(volatile s32 *) (u32) (v1 + 100));
    if (v1 == 0) goto L_008E7C50;
    a0 = 1; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
    goto L_008E7C50;
L_008E7C00:;
    v1 = (*(volatile u8 *) (u32) s4);
    a0 = s1 & 0xff;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = v1 & 0xff;
    at = v1 < 10;
    if (at == 0) goto L_008E7C50;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) s4 + (u32) v1);
    s5 = (s32) ((u32) v1 + 0x64U);
    v1 = (*(volatile s32 *) (u32) (v1 + 100));
    if (v1 == 0) goto L_008E7C50;
    a0 = 2; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
L_008E7C50:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 10;
    s0 = (s32) ((u32) s0 + 0x4U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_008E7B90; }
L_008E7C68:;
    return;
}
