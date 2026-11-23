/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_001F08B0(s32);
s32 func_008D90A0(s32, s32, s32, s32);
s32 func_008D9300(s32, s32, s32, s32);
void func_008EADF0(s32, s32, s32, s32);
void func_008EB260(s32, s32, s32, s32);
void func_008EB290(s32, s32, s32, s32);
void func_008EB2D0(s32, s32, s32, s32);

s32 func_008E9BC0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a1;
    s1 = a0;
    if (s1 != 0) goto L_008E9BE8;
    v0 = 0; goto L_008E9D8C;
L_008E9BE8:;
    s0 = (*(volatile u8 *) (u32) s1);
    a0 = s2; v0 = func_008D90A0(a0, a1, a2, a3);
    v1 = v0 & 0x60;
    v0 = 32;
    if (v1 == v0) { v0 = (s32) 0x84020000U; goto L_008E9C28; }
    v0 = 64;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008E9C18; }
    a0 = s2; goto L_008E9C38;
L_008E9C18:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 1; goto L_008E9D8C;
L_008E9C28:;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 2; goto L_008E9D8C;
L_008E9C38:;
    v0 = func_008D9300(a0, a1, a2, a3);
    v1 = 4;
    if (v0 == v1) { v1 = (*(volatile u8 *) (u32) s1); goto L_008E9CD8; }
    v1 = 8;
    if (v0 == v1) { v1 = (*(volatile u8 *) (u32) s1); goto L_008E9C78; }
    v1 = 2;
    if (v0 == v1) { v0 = (s32) ((u32) s0 + 0x1U); goto L_008E9D40; }
    v1 = 1;
    if (v0 == v1) { v0 = (s32) ((u32) s0 + 0x1U); goto L_008E9D40; }
    v0 = 0; goto L_008E9D38;
L_008E9C78:;
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s1 + 3)); goto L_008E9CB0; }
    if (v1 == 0) { v0 = (*(volatile u8 *) (u32) (s1 + 2)); goto L_008E9C94; }
    v0 = (s32) 0x84000000U; goto L_008E9CC8;
L_008E9C94:;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (s1 + 2)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s1 + 2));
    a0 = (s32) ((u32) s1 + 0x4U); func_008EB2D0(a0, a1, a2, a3);
    goto L_008E9CC4;
L_008E9CB0:;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (s1 + 3)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s1 + 3));
    a0 = (s32) ((u32) s1 + 0x4U); func_008EB290(a0, a1, a2, a3);
L_008E9CC4:;
    v0 = (s32) 0x84000000U;
L_008E9CC8:;
    a0 = v0 | 0xf803; SD_call(a0);
    v0 = 3; goto L_008E9D8C;
L_008E9CD8:;
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s1 + 3)); goto L_008E9D10; }
    if (v1 == 0) { v0 = (*(volatile u8 *) (u32) (s1 + 2)); goto L_008E9CF4; }
    v0 = (s32) 0x84000000U; goto L_008E9D28;
L_008E9CF4:;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (s1 + 2)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s1 + 2));
    a0 = (s32) ((u32) s1 + 0x4U); func_008EB2D0(a0, a1, a2, a3);
    goto L_008E9D24;
L_008E9D10:;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (s1 + 3)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s1 + 3));
    a0 = (s32) ((u32) s1 + 0x4U); func_008EB290(a0, a1, a2, a3);
L_008E9D24:;
    v0 = (s32) 0x84000000U;
L_008E9D28:;
    a0 = v0 | 0xf803; SD_call(a0);
    v0 = 3; goto L_008E9D8C;
L_008E9D38:;
    goto L_008E9D90;
L_008E9D40:;
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) s1 + 0x4U);
    a1 = v0 & 0x1;
    (*(volatile u8 *) (u32) s1) = (u8) a1; func_008EADF0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) s1);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffe0f8U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s1 + 0x4U);
    a1 = v0; func_008EB260(a0, a1, a2, a3);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = 3;
L_008E9D8C:;
L_008E9D90:;
    return v0;
}
