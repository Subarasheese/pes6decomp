/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00825710(s32, s32, s32, s32);
s32 func_008FACB0(void);
s32 func_00C72190(s32, s32, s32, s32);
s32 func_00C722C0(s32, s32, s32, s32);
s32 func_00C72310(s32, s32, s32, s32);

s32 func_008FF9E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = (s32) 0x3b0000U;
    a1 = (*(volatile s32 *) (u32) (v1 + -5680));
    a1 = (*(volatile s32 *) (u32) (a1 + 28));
    v1 = 2;
    if (a1 == v1) { v1 = a0 < 4; goto L_008FFA24; }
    v1 = 1;
    if (a1 == v1) { v1 = 6; goto L_008FFA14; }
    at = (u64) a0 < (u64) (s64) 12; goto L_008FFA34;
L_008FFA14:;
    if (a0 == v1) { a0 = 11; goto L_008FFA30; }
    goto L_008FFA30;
L_008FFA24:;
    if (v1 != 0) goto L_008FFA30;
    a0 = (s32) ((u32) a0 + 0x5U);
L_008FFA30:;
    at = (u64) a0 < (u64) (s64) 12;
L_008FFA34:;
    if (at == 0) { ; goto L_008FFAE4; }
    v1 = (s32) ((u32) a0 << 2);
    a0 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xffffe1b0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x8ffa58U) goto L_008FFA58; if (t_ == 0x8ffa68U) goto L_008FFA68; if (t_ == 0x8ffa78U) goto L_008FFA78; if (t_ == 0x8ffa88U) goto L_008FFA88; if (t_ == 0x8ffa9cU) goto L_008FFA9C; if (t_ == 0x8ffab0U) goto L_008FFAB0; if (t_ == 0x8ffac4U) goto L_008FFAC4; if (t_ == 0x8ffad4U) goto L_008FFAD4; }
L_008FFA58:;
    v0 = func_00C72310(a0, a1, a2, a3);
    goto L_008FFAE0;
L_008FFA68:;
    v0 = func_00C72190(a0, a1, a2, a3);
    goto L_008FFAE0;
L_008FFA78:;
    v0 = func_00C722C0(a0, a1, a2, a3);
    goto L_008FFAE0;
L_008FFA88:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u16 *) (u32) (v0 + 7662));
    v0 = v0 & 0x8;
    v0 = (s32) v0 >> 3; goto L_008FFAE0;
L_008FFA9C:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u16 *) (u32) (v0 + 7662));
    v0 = v0 & 0x10;
    v0 = (s32) v0 >> 4; goto L_008FFAE0;
L_008FFAB0:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u16 *) (u32) (v0 + 7662));
    v0 = v0 & 0x20;
    v0 = (s32) v0 >> 5; goto L_008FFAE0;
L_008FFAC4:;
    v0 = func_008FACB0();
    v0 = (*(volatile s32 *) (u32) v0); goto L_008FFAE0;
L_008FFAD4:;
    v0 = func_00825710(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
L_008FFAE0:;
L_008FFAE4:;
    return v0;
}
