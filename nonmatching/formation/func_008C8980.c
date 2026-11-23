/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008C84E0(s32, s32, s32, s32);
s32 D_008C8980(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_008C8980(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    a2 = 3;
    v0 = (*(volatile s32 *) (u32) a0);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + 0x4U);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    v0 = (s32) ((u32) v1 >> 16);
    v1 = v1 & 0xffff;
    { s32 c_ = v1 == a2; s0 = a0; if (c_) goto L_008C8AAC; }
    a1 = 2;
    if (v1 == a1) { (*(volatile u8 *) (u32) (s0 + 7)) = (u8) v0; goto L_008C8A08; }
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) s0); goto L_008C89E4; }
    if (v1 == 0) { v1 = (*(volatile s32 *) (u32) s0); goto L_008C89D8; }
    v0 = 0; goto L_008C8B60;
L_008C89D8:;
    v1 = (s32) ((u32) v1 + 0xfffffffcU);
    (*(volatile u32 *) (u32) s0) = (u32) v1; goto L_008C8B60;
L_008C89E4:;
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = (*(volatile s8 *) (u32) (s0 + 7)); func_008C84E0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = 1;
    v1 = (s32) ((u32) v1 + 0x4U);
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    (*(volatile u8 *) (u32) (s0 + 15)) = (u8) v0; goto L_008C8B5C;
L_008C8A08:;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + 0x4U);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    v0 = (s32) ((u32) v1 >> 16);
    v1 = v1 & 0xffff;
    if (v1 == a2) { v0 = (*(volatile s32 *) (u32) s0); goto L_008C8A8C; }
    if (v1 == a1) { (*(volatile u8 *) (u32) (s0 + 7)) = (u8) v0; goto L_008C8A7C; }
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) s0); goto L_008C8A58; }
    if (v1 == 0) { v1 = (*(volatile s32 *) (u32) s0); goto L_008C8A4C; }
    v0 = 0; goto L_008C8AA4;
L_008C8A4C:;
    v1 = (s32) ((u32) v1 + 0xfffffffcU);
    (*(volatile u32 *) (u32) s0) = (u32) v1; goto L_008C8AA4;
L_008C8A58:;
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = (*(volatile s8 *) (u32) (s0 + 7)); func_008C84E0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = 1;
    v1 = (s32) ((u32) v1 + 0x4U);
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    (*(volatile u8 *) (u32) (s0 + 15)) = (u8) v0; goto L_008C8AA0;
L_008C8A7C:;
    v0 = D_008C8980(a0, a1, a2, a3);
    goto L_008C8AA4;
L_008C8A8C:;
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) s0) = (u32) v0; v0 = D_008C8980(a0, a1, a2, a3);
    goto L_008C8AA4;
L_008C8AA0:;
    v0 = 0;
L_008C8AA4:;
    goto L_008C8B64;
L_008C8AAC:;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    v0 = (s32) ((u32) v1 + 0x4U);
    v1 = (*(volatile s32 *) (u32) v1);
    a1 = (s32) ((u32) v1 >> 16);
    v1 = v1 & 0xffff;
    { s32 c_ = v1 == a2; (*(volatile u32 *) (u32) s0) = (u32) v0; if (c_) goto L_008C8B38; }
    v0 = 2;
    if (v1 == v0) { (*(volatile u8 *) (u32) (s0 + 7)) = (u8) a1; goto L_008C8B28; }
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) s0); goto L_008C8B04; }
    if (v1 == 0) { v1 = (*(volatile s32 *) (u32) s0); goto L_008C8AF8; }
    v0 = 0; goto L_008C8B54;
L_008C8AF8:;
    v1 = (s32) ((u32) v1 + 0xfffffffcU);
    (*(volatile u32 *) (u32) s0) = (u32) v1; goto L_008C8B54;
L_008C8B04:;
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = (*(volatile s8 *) (u32) (s0 + 7)); func_008C84E0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = 1;
    v1 = (s32) ((u32) v1 + 0x4U);
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    (*(volatile u8 *) (u32) (s0 + 15)) = (u8) v0; goto L_008C8B50;
L_008C8B28:;
    v0 = D_008C8980(a0, a1, a2, a3);
    goto L_008C8B54;
L_008C8B38:;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) s0) = (u32) v0; v0 = D_008C8980(a0, a1, a2, a3);
    goto L_008C8B54;
L_008C8B50:;
    v0 = 0;
L_008C8B54:;
    goto L_008C8B60;
L_008C8B5C:;
    v0 = 0;
L_008C8B60:;
L_008C8B64:;
    return v0;
}
