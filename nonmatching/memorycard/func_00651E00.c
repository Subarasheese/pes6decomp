/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00651E00(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    if (a0 == 0) { v0 = 14; goto L_00651E14; }
    v0 = (*(volatile u8 *) (u32) (a0 + 12)); goto L_00651E14;
    v0 = 14;
L_00651E14:;
    at = (u64) v0 < (u64) (s64) 15;
    if (at == 0) { v0 = 19; goto L_00651F90; }
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffbc30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x651e3cU) goto L_00651E3C; if (t_ == 0x651e44U) goto L_00651E44; if (t_ == 0x651e4cU) goto L_00651E4C; if (t_ == 0x651e54U) goto L_00651E54; if (t_ == 0x651f40U) goto L_00651F40; if (t_ == 0x651f48U) goto L_00651F48; if (t_ == 0x651f50U) goto L_00651F50; if (t_ == 0x651f58U) goto L_00651F58; if (t_ == 0x651f60U) goto L_00651F60; if (t_ == 0x651f68U) goto L_00651F68; if (t_ == 0x651f70U) goto L_00651F70; if (t_ == 0x651f78U) goto L_00651F78; if (t_ == 0x651f80U) goto L_00651F80; if (t_ == 0x651f8cU) goto L_00651F8C; }
L_00651E3C:;
    v0 = 17; goto L_00651F90;
L_00651E44:;
    v0 = 13; goto L_00651F90;
L_00651E4C:;
    v0 = 14; goto L_00651F90;
L_00651E54:;
    a0 = (*(volatile u8 *) (u32) (a0 + 52));
    v0 = 58;
    if (a0 == v0) { v0 = 20; goto L_00651F90; }
    v1 = 4;
    if (a0 == v1) { v0 = 5; goto L_00651F90; }
    v0 = 3;
    if (a0 == v0) { v0 = v1; goto L_00651F90; }
    v1 = 2;
    if (a0 == v1) goto L_00651F90;
    v0 = 10;
    if (a0 == v0) { v0 = 2; goto L_00651F90; }
    v0 = 1;
    if (a0 == v0) goto L_00651F04;
    v0 = 8;
    if (a0 == v0) { v0 = 1; goto L_00651F90; }
    v0 = 7;
    if (a0 == v0) goto L_00651EF8;
    v0 = 6;
    if (a0 == v0) goto L_00651EF8;
    v0 = 5;
    if (a0 == v0) goto L_00651EF8;
    v0 = 9;
    if (a0 == v0) { v0 = 0; goto L_00651F90; }
    if (a0 == 0) goto L_00651EEC;
    v0 = 19; goto L_00651F38;
L_00651EEC:;
    v0 = 0;
    goto L_00651F90;
L_00651EF8:;
    v0 = 1;
    goto L_00651F90;
L_00651F04:;
    v0 = 2;
    goto L_00651F90;
    v0 = v1;
    goto L_00651F90;
    v0 = 5;
    goto L_00651F90;
    v0 = 20;
    goto L_00651F90;
    v0 = 19;
L_00651F38:;
    goto L_00651F90;
L_00651F40:;
    v0 = 6; goto L_00651F90;
L_00651F48:;
    v0 = 7; goto L_00651F90;
L_00651F50:;
    v0 = 9; goto L_00651F90;
L_00651F58:;
    v0 = 10; goto L_00651F90;
L_00651F60:;
    v0 = 11; goto L_00651F90;
L_00651F68:;
    v0 = 12; goto L_00651F90;
L_00651F70:;
    v0 = 16; goto L_00651F90;
L_00651F78:;
    v0 = 15; goto L_00651F90;
L_00651F80:;
    v0 = 19;
    goto L_00651F90;
L_00651F8C:;
    v0 = 18;
L_00651F90:;
    return v0;
}
