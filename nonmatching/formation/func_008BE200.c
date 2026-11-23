/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_008B4920(void);
s64 func_008B9660(void);

s64 func_008BE200(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    v0 = func_008B9660();
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 1;
    if (v1 == v0) goto L_008BE234;
    goto L_008BE2D0;
L_008BE234:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s8 *) (u32) (v0 + 7606));
    a1 = 0;
    v1 = (s32) ((u32) v1 + 0x2800U);
    s0 = s1 & 0xff;
L_008BE24C:;
    v0 = (*(volatile u8 *) (u32) v1);
    if (a0 != v0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_008BE270; }
    v0 = (*(volatile u8 *) (u32) (v1 + 1));
    if (s0 != v0) goto L_008BE26C;
    v0 = 1; goto L_008BE2D0;
L_008BE26C:;
    a1 = (s32) ((u32) a1 + 0x1U);
L_008BE270:;
    v0 = a1 < 8;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x28U); if (c_) goto L_008BE24C; }
    v0 = (s32) 0x590000U;
    v1 = s1 & 0xff;
    v0 = (s32) ((u32) v0 + 0x295bU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != a0) goto L_008BE2A0;
    v0 = 1; goto L_008BE2D0;
L_008BE2A0:;
    v0 = func_008B4920();
    if (v0 == 0) { v0 = 0; goto L_008BE2D0; }
    v0 = (s32) 0x8b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 5198));
    v0 = v0 & 0x1;
    if (s0 != v0) goto L_008BE2CC;
    v0 = 1; goto L_008BE2D0;
L_008BE2CC:;
    v0 = 0;
L_008BE2D0:;
    return v0;
}
