/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_0023EC10(s32, s32);
s32 func_002DCA30(void);

void func_00248A30(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    s0 = s3 & 0xff; v0 = func_002DCA30();
    if (v0 == 0) { a0 = s0 & 0xff; goto L_00248A84; }
    if (s3 != 0) { v1 = 1; goto L_00248A74; }
    s0 = 0;
    v1 = 1;
L_00248A74:;
    if (s3 != v1) goto L_00248A80;
    s0 = v1 & 0xff;
L_00248A80:;
    a0 = s0 & 0xff;
L_00248A84:;
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    s0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) s0 + (u32) s1);
    a0 = (*(volatile s8 *) (u32) (v1 + 1));
    if (a0 <= 0) { a0 = (s32) ((u32) 0 - (u32) a0); goto L_00248AA8; }
L_00248AA8:;
    v1 = 2;
    if (a0 == v1) goto L_00248AC8;
    v1 = 1;
    if (a0 == v1) goto L_00248AC8;
    goto L_00248B24;
L_00248AC8:;
    v1 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) s3 << 2);
    v1 = (s32) ((u32) v1 + 0xffffc230U);
    a0 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) a0);
    v1 = 128;
    if (a0 == v1) { v0 = (s32) 0x84000000U; goto L_00248B00; }
    v1 = 64;
    if (a0 == v1) goto L_00248AFC;
    goto L_00248B24;
L_00248AFC:;
    v0 = (s32) 0x84000000U;
L_00248B00:;
    a0 = v0 | 0xf803; SD_call(a0);
    v1 = (s32) ((u32) s0 + (u32) s1);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    v0 = (*(volatile s8 *) (u32) (v1 + 50));
    a1 = 2;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (v1 + 50)) = (u8) v0; func_0023EC10(a0, a1);
L_00248B24:;
    v1 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) s3 << 2);
    v1 = (s32) ((u32) v1 + 0xffffc270U);
    a0 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) a0);
    v1 = 2;
    if (a0 == v1) { v1 = (s32) ((u32) s2 << 1); goto L_00248B90; }
    v1 = 1;
    if (a0 == v1) { v1 = (s32) ((u32) s2 << 1); goto L_00248B58; }
    goto L_00248BC4;
L_00248B58:;
    v0 = (s32) 0x84020000U;
    v1 = (s32) ((u32) v1 + (u32) s2);
    a0 = v0 | 0x8400;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s1 + (u32) v0);
    (*(volatile u8 *) (u32) v0) = (u8) 0; SD_call(a0);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_00248BC0;
L_00248B90:;
    v0 = (s32) 0x84000000U;
    v1 = (s32) ((u32) v1 + (u32) s2);
    a0 = v0 | 0x8401;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s1 + (u32) v0);
    (*(volatile u8 *) (u32) v0) = (u8) 0; SD_call(a0);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 4; func_0023EC10(a0, a1);
L_00248BC0:;
L_00248BC4:;
    return;
}
