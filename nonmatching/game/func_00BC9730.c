/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00BC9730(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0;

    if (a0 == 0) goto L_00BC9868;
    v0 = (*(volatile s32 *) (u32) a0);
    a2 = 1;
    if (v0 != a2) goto L_00BC9868;
    v1 = (*(volatile u8 *) (u32) (a0 + 6));
    v0 = 0;
    a1 = 0;
    a5 = 0;
    a4 = 0;
    at = v1 < 0;
    { s32 c_ = at != 0; a3 = 0; if (c_) goto L_00BC9870; }
    at = v1 < 6;
    if (at == 0) goto L_00BC9870;
    a3 = a2; goto L_00BC9870;
    a3 = v1 & 0xff;
L_00BC9780:;
    a2 = (s32) 0xcc0000U;
    a2 = (s32) ((u32) a2 + 0xffffd390U);
    a3 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (*(volatile s32 *) (u32) a2);
    if (a2 == 0) goto L_00BC97A0;
    a4 = 1;
L_00BC97A0:;
    if (a4 == 0) goto L_00BC97E0;
    a4 = (*(volatile s32 *) (u32) (a0 + 8));
    a3 = v1 & 0xff;
    a2 = (s32) ((u32) a3 << 1);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (s32) ((u32) a2 << 2);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (s32) ((u32) a2 << 2);
    a0 = (s32) 0xcc0000U;
    a0 = (s32) ((u32) a0 + 0xffffd3dcU);
    a0 = (s32) ((u32) a0 + (u32) a2);
    a0 = (*(volatile s32 *) (u32) a0);
    if (a4 != a0) goto L_00BC97E0;
    a5 = 1;
L_00BC97E0:;
    if (a5 == 0) goto L_00BC9820;
    a4 = v1 & 0xff;
    a2 = (s32) 0xcc0000U;
    a3 = (s32) ((u32) a4 << 1);
    a2 = (s32) ((u32) a2 + 0xffffd3b7U);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a0 = 6;
    a3 = (s32) ((u32) a3 << 2);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (*(volatile u8 *) (u32) a2);
    if (a2 != a0) goto L_00BC9820;
    a1 = 1;
L_00BC9820:;
    if (a1 == 0) goto L_00BC9880;
    a2 = v1 & 0xff;
    a0 = (s32) 0xcc0000U;
    a1 = (s32) ((u32) a2 << 1);
    a0 = (s32) ((u32) a0 + 0xffffd3baU);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = 89;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) a0);
    if (a0 != v1) goto L_00BC9880;
    v0 = 1;
    goto L_00BC9880;
L_00BC9868:;
    v0 = 0; goto L_00BC9880;
L_00BC9870:;
    if (a3 == 0) goto L_00BC97A0;
    a3 = v1 & 0xff; goto L_00BC9780;
L_00BC9880:;
    return v0;
}
