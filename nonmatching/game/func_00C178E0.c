/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C178E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;

    a4 = (s32) 0x590000U;
    a6 = 0;
    a4 = (s32) ((u32) a4 + 0xffffe7f0U);
    a3 = (s32) 0xcd0000U;
    a0 = 255;
    a3 = (s32) ((u32) a3 + 0xffffae40U);
L_00C178F8:;
    a2 = a6 & 0xff;
    a5 = 0;
    v1 = (s32) ((u32) a2 << 5);
    a1 = (s32) ((u32) a3 + (u32) v1);
L_00C17908:;
    at = a2 < 2;
    if (at == 0) goto L_00C17930;
    v1 = a5 & 0xff;
    at = v1 < 32;
    if (at == 0) goto L_00C17930;
    v1 = (s32) ((u32) a1 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_00C17930:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 32;
    if (v1 != 0) goto L_00C17908;
    a6 = (s32) ((u32) a6 + 0x1U);
    v1 = a6 < 2;
    if (v1 != 0) goto L_00C178F8;
    a1 = (s32) 0xcd0000U;
    a3 = 0;
    a1 = (s32) ((u32) a1 + 0xffffae40U);
L_00C1795C:;
    a2 = 0;
L_00C17960:;
    v1 = (*(volatile u8 *) (u32) (a4 + 18));
    at = v1 < 2;
    { s32 c_ = at == 0; a0 = (*(volatile u8 *) (u32) (a4 + 17)); if (c_) goto L_00C17990; }
    a0 = a0 & 0xff;
    at = a0 < 32;
    if (at == 0) goto L_00C17990;
    v1 = (s32) ((u32) v1 << 5);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) v1) = (u8) a2;
L_00C17990:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 11;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x240U); if (c_) goto L_00C17960; }
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < 2;
    if (v1 != 0) goto L_00C1795C;
    return;
}
