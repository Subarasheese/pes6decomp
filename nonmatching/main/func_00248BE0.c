/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
void func_0023EC10(s64, s64);
s64 func_0024DFA0(void);
s64 func_002DCA30(void);

void func_00248BE0(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 gp = 0x3ef370;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    s0 = s4 & 0xff; v0 = func_002DCA30();
    if (v0 == 0) { v1 = s0 & 0xff; goto L_00248C3C; }
    if (s4 != 0) { v0 = 1; goto L_00248C2C; }
    s0 = 0;
    v0 = 1;
L_00248C2C:;
    if (s4 != v0) goto L_00248C38;
    s0 = v0 & 0xff;
L_00248C38:;
    v1 = s0 & 0xff;
L_00248C3C:;
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s0 + (u32) s2);
    v1 = (*(volatile s8 *) (u32) (v0 + 1));
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00248C60; }
L_00248C60:;
    v0 = 2;
    if (v1 == v0) goto L_00248C80;
    v0 = 1;
    if (v1 == v0) goto L_00248C80;
    goto L_00248DB8;
L_00248C80:;
    v0 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) s4 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc230U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = 128;
    if (v1 == v0) { v1 = (s32) ((u32) s0 + (u32) s2); goto L_00248D84; }
    v0 = 64;
    if (v1 == v0) { s5 = 0; goto L_00248CB4; }
    goto L_00248DB8;
L_00248CB4:;
    v0 = func_0024DFA0();
    a0 = 1;
    if (v0 != a0) { v0 = (s32) ((u32) s0 + (u32) s2); goto L_00248D1C; }
    v0 = (s32) 0x510000U;
    v1 = 15;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { v0 = (s32) ((u32) s0 + (u32) s2); goto L_00248D00; }
    v1 = (s32) ((u32) s0 + (u32) s2);
    v0 = 2;
    s1 = (s32) ((u32) v1 + 0x2U);
    v1 = (*(volatile s8 *) (u32) (v1 + 2));
    if (v1 == v0) { v1 = (s64) ((u64) s5 << 56); goto L_00248D38; }
    s5 = (s64) ((u64) a0 << 56);
    s5 = s5 >> 56; goto L_00248D34;
L_00248D00:;
    s1 = (s32) ((u32) v0 + 0x2U);
    v0 = (*(volatile s8 *) (u32) (v0 + 2));
    if (v0 == a0) goto L_00248D34;
    s5 = (s64) ((u64) a0 << 56);
    s5 = s5 >> 56; goto L_00248D34;
L_00248D1C:;
    s1 = (s32) ((u32) v0 + 0x2U);
    v0 = (*(volatile s8 *) (u32) (v0 + 2));
    if (v0 == 0) goto L_00248D34;
    s5 = (s64) ((u64) a0 << 56);
    s5 = s5 >> 56;
L_00248D34:;
    v1 = (s64) ((u64) s5 << 56);
L_00248D38:;
    v0 = 1;
    v1 = v1 >> 56;
    if (v1 != v0) { v0 = (*(volatile s8 *) (u32) s1); goto L_00248D70; }
    v1 = (*(volatile s8 *) (u32) s1);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf803;
    v0 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) s1) = (u8) v0; SD_call(a0);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 2; func_0023EC10(a0, a1);
    v0 = (*(volatile s8 *) (u32) s1);
L_00248D70:;
    if (v0 != 0) goto L_00248DB8;
    v0 = (s32) ((u32) s0 + (u32) s2);
    (*(volatile u8 *) (u32) (v0 + 50)) = (u8) 0; goto L_00248DB8;
L_00248D84:;
    v0 = 10;
    a0 = (s32) ((u32) v1 + 0x2U);
    v1 = (*(volatile s8 *) (u32) (v1 + 2));
    if (v1 == v0) goto L_00248DB8;
    v1 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) 0x84000000U;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    a0 = v0 | 0xf803; SD_call(a0);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 2; func_0023EC10(a0, a1);
L_00248DB8:;
    v0 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) s4 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc270U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = 2;
    if (v1 == v0) { v1 = (s32) ((u32) s3 << 1); goto L_00248E24; }
    v0 = 1;
    if (v1 == v0) { v1 = (s32) ((u32) s3 << 1); goto L_00248DEC; }
    goto L_00248E54;
L_00248DEC:;
    v0 = (s32) 0x84020000U;
    v1 = (s32) ((u32) v1 + (u32) s3);
    a0 = v0 | 0x8400;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s2 + (u32) v0);
    (*(volatile u8 *) (u32) v0) = (u8) 0; SD_call(a0);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_00248E54;
L_00248E24:;
    v0 = (s32) 0x84000000U;
    v1 = (s32) ((u32) v1 + (u32) s3);
    a0 = v0 | 0x8401;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s2 + (u32) v0);
    (*(volatile u8 *) (u32) v0) = (u8) 0; SD_call(a0);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 4; func_0023EC10(a0, a1);
L_00248E54:;
    v0 = func_0024DFA0();
    v1 = 1;
    if (v0 != v1) { ; goto L_00248E90; }
    v1 = (s32) ((u32) s0 + (u32) s2);
    s0 = (s32) ((u32) v1 + 0x2U);
    v1 = (*(volatile s8 *) (u32) (v1 + 2));
    if (v1 != 0) goto L_00248E8C;
    a0 = 0; SD_call(a0);
    v1 = 2;
    (*(volatile u8 *) (u32) s0) = (u8) v1;
L_00248E8C:;
L_00248E90:;
    return;
}
