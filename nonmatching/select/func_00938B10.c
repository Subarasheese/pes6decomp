/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_0023EC10(s32, s32);
void func_002DBC20(s32, s32, s32, s32);
s32 func_009366A0(s32, s32, s32, s32, s32, s32, s32, s32, f32);

s32 func_00938B10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v0 = (*(volatile s32 *) (u32) (gp + -18616));
    s0 = a1;
    a1 = 2;
    { s32 c_ = v0 == a1; s1 = a0; if (c_) goto L_00938DEC; }
    a0 = 1;
    if (v0 == a0) { v1 = (*(volatile s32 *) (u32) (gp + -18608)); goto L_00938D80; }
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -18628)); goto L_00938B50; }
    v0 = 0; goto L_00938E30;
L_00938B50:;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -18608)); goto L_00938C18; }
    a0 = (*(volatile s32 *) (u32) (gp + -18608));
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc230U);
    v0 = 32;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -18632)); goto L_00938BD4; }
    v0 = 16;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -18632)); goto L_00938B90; }
    goto L_00938C14;
L_00938B90:;
    if (v0 == 0) goto L_00938C14;
    v1 = (s32) ((u32) v0 + 0xffffffffU);
    v0 = (s32) 0x84000000U;
    (*(volatile u32 *) (u32) (gp + -18632)) = (u32) v1;
    a0 = v0 | 0xf802; SD_call(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -18596));
    a1 = (*(volatile s32 *) (u32) (gp + -18632));
    a2 = 4; func_002DBC20(a0, a1, a2, a3);
    a0 = (s32) 0x540000U;
    a1 = 1;
    a0 = (s32) ((u32) a0 + 0xffffc310U); func_0023EC10(a0, a1);
    goto L_00938C14;
L_00938BD4:;
    at = v0 < 19;
    if (at == 0) goto L_00938C14;
    v1 = (s32) ((u32) v0 + 0x1U);
    v0 = (s32) 0x84000000U;
    (*(volatile u32 *) (u32) (gp + -18632)) = (u32) v1;
    a0 = v0 | 0xf802; SD_call(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -18596));
    a1 = (*(volatile s32 *) (u32) (gp + -18632));
    a2 = 4; func_002DBC20(a0, a1, a2, a3);
    a0 = (s32) 0x540000U;
    a1 = 1;
    a0 = (s32) ((u32) a0 + 0xffffc310U); func_0023EC10(a0, a1);
L_00938C14:;
    a0 = (*(volatile s32 *) (u32) (gp + -18608));
L_00938C18:;
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc270U);
    v0 = 2;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    if (a0 == v0) { v1 = (*(volatile s32 *) (u32) (gp + -18628)); goto L_00938D18; }
    v1 = 1;
    if (a0 == v1) { v0 = (*(volatile s32 *) (u32) (gp + -18628)); goto L_00938C4C; }
    goto L_00938E2C;
L_00938C4C:;
    if (v0 != v1) { a2 = (*(volatile s32 *) (u32) (gp + -18632)); goto L_00938C70; }
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = 1; v0 = func_009366A0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    goto L_00938E2C;
L_00938C70:;
    a0 = (s32) 0x960000U;
    v1 = (s32) 0x960000U;
    v0 = (s32) 0x960000U;
    a0 = (s32) ((u32) a0 + 0x6df4U);
    v1 = (s32) ((u32) v1 + 0x6dfcU);
    a1 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + 0x6df8U);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    if (v0 == 0) { v0 = (s32) 0x8c000000U; goto L_00938D08; }
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    if (s1 != 0) { a0 = 3; goto L_00938CF4; }
    a0 = (s32) 0x540000U;
    a1 = 4;
    a0 = (s32) ((u32) a0 + 0xffffc310U); func_0023EC10(a0, a1);
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -18616)) = (u32) v0; goto L_00938E2C;
L_00938CF4:;
    v0 = func_009366A0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    v0 = 2;
    (*(volatile u32 *) (u32) (gp + -18616)) = (u32) v0; goto L_00938E2C;
L_00938D08:;
    a0 = v0 | 0x8005; SD_call(a0);
    goto L_00938E2C;
L_00938D18:;
    v0 = 1;
    if (v1 != v0) goto L_00938D40;
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = 1; v0 = func_009366A0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    goto L_00938E2C;
L_00938D40:;
    if (s1 != 0) { v0 = (s32) 0x84000000U; goto L_00938D68; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
    v1 = 2;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -15607)) = (u8) v1;
    v0 = 1; goto L_00938E30;
L_00938D68:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 1;
    v1 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v1 + -15607)) = (u8) v0; goto L_00938E30;
L_00938D80:;
    v0 = (s32) 0x8e0000U;
    v0 = (s32) ((u32) v0 + 0xffffc270U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == a1) { v0 = (s32) 0x84000000U; goto L_00938DCC; }
    if (v0 == a0) { v0 = (s32) 0x84020000U; goto L_00938DAC; }
    goto L_00938E2C;
L_00938DAC:;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = (s32) 0x540000U;
    a1 = 8;
    a0 = (s32) ((u32) a0 + 0xffffc310U); func_0023EC10(a0, a1);
    (*(volatile u32 *) (u32) (gp + -18616)) = (u32) 0; goto L_00938E2C;
L_00938DCC:;
    a0 = v0 | 0x8401; SD_call(a0);
    a0 = (s32) 0x540000U;
    a1 = 8;
    a0 = (s32) ((u32) a0 + 0xffffc310U); func_0023EC10(a0, a1);
    (*(volatile u32 *) (u32) (gp + -18616)) = (u32) 0; goto L_00938E2C;
L_00938DEC:;
    a0 = 4; v0 = func_009366A0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    if (v0 == 0) { (*(volatile u32 *) (u32) (gp + -18616)) = (u32) 0; goto L_00938E2C; }
    v1 = 1;
    if (v0 == v1) { a1 = (*(volatile s32 *) (u32) (gp + -18632)); goto L_00938E10; }
    goto L_00938E2C;
L_00938E10:;
    v0 = v1;
    a0 = 2;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -18616)) = (u32) 0;
    (*(volatile u32 *) (u32) s0) = (u32) a1;
    (*(volatile u8 *) (u32) (v1 + -15607)) = (u8) a0; goto L_00938E30;
L_00938E2C:;
    v0 = 0;
L_00938E30:;
    return v0;
}
