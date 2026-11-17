/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BC0BF0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa36U);
    at = (u64) v0 < (u64) (s64) 16;
    if (at == 0) goto L_00BC0CA0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x1e80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc0c20U) goto L_00BC0C20; if (t_ == 0xbc0c28U) goto L_00BC0C28; if (t_ == 0xbc0c30U) goto L_00BC0C30; if (t_ == 0xbc0c38U) goto L_00BC0C38; if (t_ == 0xbc0c40U) goto L_00BC0C40; if (t_ == 0xbc0c48U) goto L_00BC0C48; if (t_ == 0xbc0c50U) goto L_00BC0C50; if (t_ == 0xbc0c58U) goto L_00BC0C58; if (t_ == 0xbc0c60U) goto L_00BC0C60; if (t_ == 0xbc0c68U) goto L_00BC0C68; if (t_ == 0xbc0c70U) goto L_00BC0C70; if (t_ == 0xbc0c78U) goto L_00BC0C78; if (t_ == 0xbc0c80U) goto L_00BC0C80; if (t_ == 0xbc0c88U) goto L_00BC0C88; if (t_ == 0xbc0c90U) goto L_00BC0C90; if (t_ == 0xbc0c98U) goto L_00BC0C98; }
L_00BC0C20:;
    v0 = 17; goto L_00BC0CA4;
L_00BC0C28:;
    v0 = 35; goto L_00BC0CA4;
L_00BC0C30:;
    v0 = 36; goto L_00BC0CA4;
L_00BC0C38:;
    v0 = 37; goto L_00BC0CA4;
L_00BC0C40:;
    v0 = 0; goto L_00BC0CA4;
L_00BC0C48:;
    v0 = 38; goto L_00BC0CA4;
L_00BC0C50:;
    v0 = 42; goto L_00BC0CA4;
L_00BC0C58:;
    v0 = 43; goto L_00BC0CA4;
L_00BC0C60:;
    v0 = 45; goto L_00BC0CA4;
L_00BC0C68:;
    v0 = 44; goto L_00BC0CA4;
L_00BC0C70:;
    v0 = 39; goto L_00BC0CA4;
L_00BC0C78:;
    v0 = 18; goto L_00BC0CA4;
L_00BC0C80:;
    v0 = 14; goto L_00BC0CA4;
L_00BC0C88:;
    v0 = 15; goto L_00BC0CA4;
L_00BC0C90:;
    v0 = 13; goto L_00BC0CA4;
L_00BC0C98:;
    v0 = 10; goto L_00BC0CA4;
L_00BC0CA0:;
    v0 = 0xffff;
L_00BC0CA4:;
    return;
}
