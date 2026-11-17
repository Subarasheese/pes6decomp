/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_GetHeaderBlock(void);
s32 func_002259E0(s32, s32, s32, s32);
s32 func_0023E090(void);
s32 func_0024CF50(s32);
s32 func_0024D1B0(s32);
s32 func_0024E770(void);
s32 func_002631B0(void);
s32 func_002DCA30(void);

s32 func_002472F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    v0 = func_002DCA30();
    if (v0 != 0) { a0 = s1; goto L_0024731C; }
    a0 = s1; v0 = func_0024D1B0(a0);
    a0 = s1;
L_0024731C:;
    v0 = func_0024CF50(a0);
    v0 = func_0023E090();
    if (v0 != 0) goto L_00247348;
    v0 = func_002631B0();
    v1 = 1;
    if (v0 != v1) goto L_00247418;
L_00247348:;
    v0 = Pes6SaveData_GetHeaderBlock();
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 7177));
    v1 = 1;
    { s32 c_ = a0 != v1; s0 = v0; if (c_) goto L_002473D4; }
    v1 = 2;
    if (a0 != v1) goto L_002473D4;
    v0 = func_002259E0(a0, a1, a2, a3);
    a0 = v0 & 0xff;
    v1 = 1;
    if (a0 != v1) goto L_00247418;
    if (s0 == 0) goto L_00247418;
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) 0;
    a2 = 0;
    a1 = 0;
L_0024739C:;
    v1 = (*(volatile s8 *) (u32) (s1 + 1));
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_002473A8; }
L_002473A8:;
    a0 = (s32) ((u32) v1 << (a1 & 31));
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = (*(volatile s32 *) (u32) (s0 + 20));
    s1 = (s32) ((u32) s1 + 0x34U);
    a1 = (s32) ((u32) a1 + 0x4U);
    a0 = v1 | a0;
    v1 = a2 < 8;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (s0 + 20)) = (u32) a0; if (c_) goto L_0024739C; }
    goto L_00247418;
L_002473D4:;
    if (s0 == 0) goto L_00247418;
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) 0;
    a1 = 0;
    a2 = 0;
L_002473E8:;
    v1 = (*(volatile s8 *) (u32) (s1 + 1));
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_002473F4; }
L_002473F4:;
    a0 = (s32) ((u32) v1 << (a2 & 31));
    a1 = (s32) ((u32) a1 + 0x1U);
    v1 = (*(volatile s32 *) (u32) (s0 + 20));
    s1 = (s32) ((u32) s1 + 0x34U);
    a2 = (s32) ((u32) a2 + 0x4U);
    a0 = v1 | a0;
    v1 = a1 < 8;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (s0 + 20)) = (u32) a0; if (c_) goto L_002473E8; }
L_00247418:;
    v1 = (s32) 0x510000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 4048));
    v1 = 4;
    if (a0 == v1) goto L_00247438;
    v1 = 8;
    if (a0 != v1) { ; goto L_00247444; }
L_00247438:;
    v0 = func_0024E770();
L_00247444:;
    return v0;
}
