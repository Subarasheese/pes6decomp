/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetUnavailableFlag(void);
void SD_call(s64);
s64 func_001B9DF0(void);
void func_0023EC10(s64, s64);
void func_00247880(s64, s64);
s64 func_00247A00(s64, s64, s64, s64);
void func_00247BF0(s64, s64, s64);
void func_00248A30(s64, s64, s64, s64);
void func_00248BE0(s64, s64, s64, s64);
void func_00248EB0(s64, s64, s64);
void func_0024BA00(s64);
void func_0024E1C0(s64, s64);
s64 func_0024E650(void);
s64 func_002DCA30(void);
s64 func_00815100(s64, s64, s64, s64);
s64 func_008153B0(s64, s64, s64, s64);
s64 func_008156F0(s64, s64, s64, s64);

void func_00249380(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 gp = 0x3ef370;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    v0 = func_0024E650();
    s0 = v0;
    v0 = s3 < 8;
    if (v0 != 0) { a0 = s4; goto L_002493C8; }
    s3 = 0;
    a0 = s4;
L_002493C8:;
    a1 = s2; func_0024E1C0(a0, a1);
    if (s4 != s0) goto L_002493DC;
    s3 = (*(volatile s16 *) (u32) (gp + -22644));
L_002493DC:;
    v1 = (s32) 0x3e0000U;
    s1 = (s32) ((u32) s4 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8be0U);
    a0 = (s32) ((u32) v1 + (u32) s1);
    v1 = (*(volatile s32 *) (u32) (gp + -22608));
    a0 = (*(volatile s32 *) (u32) a0);
    v1 = v1 & a0;
    if (v1 == 0) { ; goto L_002496E0; }
    at = s3 < 8;
    if (at == 0) { a1 = s2; goto L_002495F8; }
    v1 = (s32) ((u32) s3 << 1);
    v0 = 4;
    v1 = (s32) ((u32) v1 + (u32) s3);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s3);
    s0 = (s32) ((u32) v1 << 2);
    s5 = (s32) ((u32) s2 + (u32) s0);
    v1 = (*(volatile s8 *) (u32) s5);
    if (v1 == v0) goto L_00249568;
    v0 = 3;
    if (v1 == v0) { a1 = s3; goto L_00249554; }
    v0 = 2;
    if (v1 == v0) { a1 = s3; goto L_00249540; }
    v0 = 1;
    if (v1 == v0) { a0 = s4 & 0xff; goto L_0024947C; }
    if (v1 == 0) { a1 = s3; goto L_00249468; }
    goto L_002495F4;
L_00249468:;
    a0 = s4;
    a2 = s2; func_00248EB0(a0, a1, a2);
    goto L_002495F4;
L_0024947C:;
    a1 = s3 & 0xff;
    a2 = s2; func_00247BF0(a0, a1, a2);
    v1 = (s32) 0x8e0000U;
    v0 = 2;
    v1 = (s32) ((u32) v1 + 0xffffc270U);
    v1 = (s32) ((u32) v1 + (u32) s1);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) goto L_002494FC;
    v0 = 1;
    if (v1 == v0) goto L_002494B8;
    goto L_002495F4;
L_002494B8:;
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) s3 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcb40U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    v0 = (s32) ((u32) v0 + 0xffffa200U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u8 *) (u32) v0) = (u8) 0;
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_002495F4;
L_002494FC:;
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) s3 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcb40U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    v0 = (s32) ((u32) v0 + 0xffffa200U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u8 *) (u32) v0) = (u8) 0;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_002495F4;
L_00249540:;
    a0 = s4;
    a2 = s2; func_00248BE0(a0, a1, a2, a3);
    goto L_002495F4;
L_00249554:;
    a0 = s4;
    a2 = s2; func_00248A30(a0, a1, a2, a3);
    goto L_002495F4;
L_00249568:;
    v1 = (s32) 0x540000U;
    v0 = 1;
    v1 = (s32) ((u32) v1 + 0xffffc9c8U);
    a0 = (s32) ((u32) v1 + (u32) s4);
    v1 = (*(volatile s8 *) (u32) a0);
    if (v1 == v0) { a1 = s3; goto L_0024959C; }
    if (v1 == 0) { v0 = (s32) ((u32) v1 + 0x1U); goto L_00249594; }
    goto L_002495F4;
L_00249594:;
    (*(volatile u8 *) (u32) a0) = (u8) v0; goto L_002495F4;
L_0024959C:;
    a0 = s4;
    a2 = s2; v0 = func_00247A00(a0, a1, a2, a3);
    v1 = (s64) ((u64) v0 << 56);
    v1 = v1 >> 56;
    v0 = 1;
    if (v1 == v0) goto L_002495D0;
    v0 = 2;
    if (v1 == v0) goto L_002495D0;
    goto L_002495F4;
L_002495D0:;
    v0 = func_002DCA30();
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 1;
    (*(volatile u8 *) (u32) s5) = (u8) 0; func_0023EC10(a0, a1);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 8; func_0023EC10(a0, a1);
L_002495F4:;
    a1 = s2;
L_002495F8:;
    a0 = s4; func_00247880(a0, a1);
    a0 = (*(volatile s8 *) (u32) (gp + -22648));
    v1 = 1;
    if (a0 == v1) goto L_0024969C;
    if (a0 == 0) goto L_00249620;
    goto L_002496DC;
L_00249620:;
    v0 = func_001B9DF0();
    if (v0 != 0) goto L_002496DC;
    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = 1;
    if (v0 != v1) goto L_0024966C;
    v0 = func_008153B0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_0024966C;
    a0 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + 0xffff8c00U); v0 = func_00815100(a0, a1, a2, a3);
    if (v0 == 0) goto L_002496DC;
L_0024966C:;
    a0 = (s32) 0x8e0000U;
    v1 = (s32) 0x10000U;
    a0 = (s32) ((u32) a0 + 0xffffc270U);
    a0 = (s32) ((u32) a0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 != v1) goto L_002496DC;
    v1 = (*(volatile s8 *) (u32) (gp + -22648));
    (*(volatile u32 *) (u32) (gp + -22632)) = (u32) s4;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22648)) = (u8) v1; goto L_002496DC;
L_0024969C:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = 1;
    if (v0 != v1) goto L_002496C0;
    v0 = func_008156F0(a0, a1, a2, a3);
    if (v0 == 0) goto L_002496DC;
L_002496C0:;
    v0 = func_001B9DF0();
    if (v0 != 0) { (*(volatile u8 *) (u32) (gp + -22648)) = (u8) 0; goto L_002496DC; }
    a0 = (*(volatile u16 *) (u32) (gp + -22632)); func_0024BA00(a0);
    (*(volatile u8 *) (u32) (gp + -22648)) = (u8) 0;
L_002496DC:;
L_002496E0:;
    return;
}
