/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_0023EC10(s32, s32);
s32 func_002DCA30(void);

s32 func_00247A00(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc230U);
    v0 = 128;
    s2 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile s32 *) (u32) v1);
    s1 = a1;
    { s32 c_ = v1 == v0; s0 = a2; if (c_) goto L_00247AE4; }
    v0 = 64;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_00247A4C; }
    goto L_00247B80;
L_00247A4C:;
    a0 = v0 | 0xf803; SD_call(a0);
    v0 = (s32) ((u32) s1 << 1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0);
    s1 = (s32) ((u32) v0 + 0x3U);
    s0 = (s32) ((u32) v0 + 0x4U);
L_00247A74:;
    v0 = (*(volatile s8 *) (u32) s1);
L_00247A78:;
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 8;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) s1) = (u8) v0; func_0023EC10(a0, a1);
    v0 = (*(volatile s8 *) (u32) s1);
    if (v0 >= 0) goto L_00247AA0;
    v0 = 2;
    (*(volatile u8 *) (u32) s1) = (u8) v0;
L_00247AA0:;
    v0 = func_002DCA30();
    if (v0 == 0) goto L_00247AC0;
    v0 = (*(volatile s8 *) (u32) s1);
    if (v0 == 0) { v0 = (*(volatile s8 *) (u32) s1); goto L_00247A78; }
L_00247AC0:;
    v1 = (*(volatile s8 *) (u32) s1);
    v0 = 1;
    if (v1 != v0) goto L_00247B80;
    v0 = (*(volatile s8 *) (u32) s0);
    if (v0 == 0) goto L_00247A74;
    goto L_00247B80;
L_00247AE4:;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf803; SD_call(a0);
    v0 = (s32) ((u32) s1 << 1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0);
    s1 = (s32) ((u32) v0 + 0x3U);
    s0 = (s32) ((u32) v0 + 0x4U);
L_00247B10:;
    v0 = (*(volatile s8 *) (u32) s1);
L_00247B14:;
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 8;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) s1) = (u8) v0; func_0023EC10(a0, a1);
    v0 = (*(volatile s8 *) (u32) s1);
    v0 = v0 < 3;
    if (v0 != 0) goto L_00247B40;
    (*(volatile u8 *) (u32) s1) = (u8) 0;
L_00247B40:;
    v0 = func_002DCA30();
    if (v0 == 0) goto L_00247B60;
    v0 = (*(volatile s8 *) (u32) s1);
    if (v0 == 0) { v0 = (*(volatile s8 *) (u32) s1); goto L_00247B14; }
L_00247B60:;
    v1 = (*(volatile s8 *) (u32) s1);
    v0 = 1;
    if (v1 != v0) goto L_00247B80;
    v0 = (*(volatile s8 *) (u32) s0);
    if (v0 == 0) goto L_00247B10;
L_00247B80:;
    v0 = (s32) 0x8e0000U;
    v0 = (s32) ((u32) v0 + 0xffffc270U);
    s0 = (s32) ((u32) v0 + (u32) s2);
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = 2;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_00247BC4; }
    v0 = 1;
    if (v1 == v0) { v0 = (s32) 0x84020000U; goto L_00247BB0; }
    v0 = 0; goto L_00247BD4;
L_00247BB0:;
    a0 = v0 | 0x8400; SD_call(a0);
    (*(volatile u32 *) (u32) s0) = (u32) 0;
    v0 = 2; goto L_00247BD4;
L_00247BC4:;
    a0 = v0 | 0x8401; SD_call(a0);
    (*(volatile u32 *) (u32) s0) = (u32) 0;
    v0 = 1;
L_00247BD4:;
    return v0;
}
