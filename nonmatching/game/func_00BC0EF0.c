/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BC0EF0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa36U);
    at = (u64) v0 < (u64) (s64) 17;
    if (at == 0) goto L_00BC0FA8;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x1f80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc0f20U) goto L_00BC0F20; if (t_ == 0xbc0f28U) goto L_00BC0F28; if (t_ == 0xbc0f30U) goto L_00BC0F30; if (t_ == 0xbc0f38U) goto L_00BC0F38; if (t_ == 0xbc0f40U) goto L_00BC0F40; if (t_ == 0xbc0f48U) goto L_00BC0F48; if (t_ == 0xbc0f50U) goto L_00BC0F50; if (t_ == 0xbc0f58U) goto L_00BC0F58; if (t_ == 0xbc0f60U) goto L_00BC0F60; if (t_ == 0xbc0f68U) goto L_00BC0F68; if (t_ == 0xbc0f70U) goto L_00BC0F70; if (t_ == 0xbc0f78U) goto L_00BC0F78; if (t_ == 0xbc0f80U) goto L_00BC0F80; if (t_ == 0xbc0f88U) goto L_00BC0F88; if (t_ == 0xbc0f90U) goto L_00BC0F90; if (t_ == 0xbc0f98U) goto L_00BC0F98; if (t_ == 0xbc0fa0U) goto L_00BC0FA0; }
L_00BC0F20:;
    v0 = 17; goto L_00BC0FAC;
L_00BC0F28:;
    v0 = 35; goto L_00BC0FAC;
L_00BC0F30:;
    v0 = 36; goto L_00BC0FAC;
L_00BC0F38:;
    v0 = 37; goto L_00BC0FAC;
L_00BC0F40:;
    v0 = 0; goto L_00BC0FAC;
L_00BC0F48:;
    v0 = 38; goto L_00BC0FAC;
L_00BC0F50:;
    v0 = 42; goto L_00BC0FAC;
L_00BC0F58:;
    v0 = 43; goto L_00BC0FAC;
L_00BC0F60:;
    v0 = 45; goto L_00BC0FAC;
L_00BC0F68:;
    v0 = 44; goto L_00BC0FAC;
L_00BC0F70:;
    v0 = 39; goto L_00BC0FAC;
L_00BC0F78:;
    v0 = 19; goto L_00BC0FAC;
L_00BC0F80:;
    v0 = 20; goto L_00BC0FAC;
L_00BC0F88:;
    v0 = 14; goto L_00BC0FAC;
L_00BC0F90:;
    v0 = 15; goto L_00BC0FAC;
L_00BC0F98:;
    v0 = 13; goto L_00BC0FAC;
L_00BC0FA0:;
    v0 = 10; goto L_00BC0FAC;
L_00BC0FA8:;
    v0 = 0xffff;
L_00BC0FAC:;
    return;
}
