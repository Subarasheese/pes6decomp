/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021E4B0(s32, s32, s32);
void strncpy(s32, s32, s32);

void func_008BF270(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;

    v1 = 179;
    s1 = a0;
    s0 = a1;
    a1 = (s32) ((u32) s1 + 0x766U);
    a0 = (s32) ((u32) s0 + 0x34U);
L_008BF294:;
    v0 = (*(volatile s16 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) a0) = (u16) v0;
    a1 = (s32) ((u32) a1 + 0x2U);
    a0 = (s32) ((u32) a0 + 0x2U);
    if (v1 > 0) goto L_008BF294;
    v0 = 2;
    if (a2 == v0) { v0 = (s32) ((u32) a2 << 2); goto L_008BF2D4; }
    v0 = 1;
    if (a2 == v0) goto L_008BF2D0;
    a0 = (*(volatile u16 *) (u32) s1); goto L_008BF37C;
L_008BF2D0:;
    v0 = (s32) ((u32) a2 << 2);
L_008BF2D4:;
    v0 = (s32) ((u32) v0 + (u32) a2);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a2 = (s32) ((u32) v0 + 0xa3U);
    v0 = (*(volatile u8 *) (u32) (v0 + 163));
    if (v0 == 0) goto L_008BF378;
    a1 = (s32) ((u32) s0 + 0xa3U);
    a0 = 41;
L_008BF300:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    a2 = (s32) ((u32) a2 + 0x2U);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_008BF300; }
    a2 = (s32) ((u32) s0 + 0xa3U);
    a1 = (s32) ((u32) s0 + 0xf5U);
    a0 = 41;
L_008BF32C:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    a2 = (s32) ((u32) a2 + 0x2U);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_008BF32C; }
    a2 = (s32) ((u32) s0 + 0xa3U);
    a1 = (s32) ((u32) s0 + 0x147U);
    a0 = 41;
L_008BF358:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    a2 = (s32) ((u32) a2 + 0x2U);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_008BF358; }
L_008BF378:;
    a0 = (*(volatile u16 *) (u32) s1);
L_008BF37C:;
    a1 = 0;
    a3 = (*(volatile u16 *) (u32) (s1 + 2));
    a2 = 0; v0 = func_0021E4B0(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x2U);
    a1 = v0;
    a2 = 48; strncpy(a0, a1, a2);
    (*(volatile u8 *) (u32) (s0 + 50)) = (u8) 0;
    v1 = 295;
    a0 = (*(volatile u16 *) (u32) (s1 + 2));
    if (a0 == v1) { v1 = 286; goto L_008BF3C8; }
    v1 = 294;
    if (a0 == v1) goto L_008BF3C4;
    v1 = (*(volatile u16 *) (u32) s1); goto L_008BF3D0;
L_008BF3C4:;
    v1 = 286;
L_008BF3C8:;
    (*(volatile u16 *) (u32) s0) = (u16) v1; goto L_008BF3D4;
L_008BF3D0:;
    (*(volatile u16 *) (u32) s0) = (u16) v1;
L_008BF3D4:;
    return;
}
