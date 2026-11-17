/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C88B50(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;

    a2 = (*(volatile s32 *) (u32) a0);
    at = (u64) a2 < (u64) (s64) 6;
    { s32 c_ = at == 0; v0 = 1; if (c_) goto L_00C88BE8; }
    a1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 + 0x4f10U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xc88b7cU) goto L_00C88B7C; if (t_ == 0xc88b80U) goto L_00C88B80; if (t_ == 0xc88b9cU) goto L_00C88B9C; if (t_ == 0xc88ba4U) goto L_00C88BA4; if (t_ == 0xc88bc8U) goto L_00C88BC8; if (t_ == 0xc88be4U) goto L_00C88BE4; }
L_00C88B7C:;
    a2 = (s32) ((u32) a2 + 0x1U);
L_00C88B80:;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (s32) ((u32) v1 + 0x1U);
    at = v1 < 9;
    { s32 c_ = at != 0; (*(volatile u32 *) (u32) (a0 + 4)) = (u32) v1; if (c_) goto L_00C88BE8; }
    a2 = (s32) ((u32) a2 + 0x1U); goto L_00C88BE8;
L_00C88B9C:;
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x1U);
L_00C88BA4:;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (s32) ((u32) v1 + 0x1U);
    at = v1 < 129;
    { s32 c_ = at != 0; (*(volatile u32 *) (u32) (a0 + 4)) = (u32) v1; if (c_) goto L_00C88BE8; }
    v1 = 8;
    a2 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) v1; goto L_00C88BE8;
L_00C88BC8:;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    { s32 c_ = v1 > 0; (*(volatile u32 *) (u32) (a0 + 4)) = (u32) v1; if (c_) goto L_00C88BE8; }
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x1U); goto L_00C88BE8;
L_00C88BE4:;
    v0 = 0;
L_00C88BE8:;
    (*(volatile u32 *) (u32) a0) = (u32) a2; return;
}
