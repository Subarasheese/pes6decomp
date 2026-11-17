/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BC0B30(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa36U);
    at = (u64) v0 < (u64) (s64) 16;
    if (at == 0) goto L_00BC0BE0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x1e40U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc0b60U) goto L_00BC0B60; if (t_ == 0xbc0b68U) goto L_00BC0B68; if (t_ == 0xbc0b70U) goto L_00BC0B70; if (t_ == 0xbc0b78U) goto L_00BC0B78; if (t_ == 0xbc0b80U) goto L_00BC0B80; if (t_ == 0xbc0b88U) goto L_00BC0B88; if (t_ == 0xbc0b90U) goto L_00BC0B90; if (t_ == 0xbc0b98U) goto L_00BC0B98; if (t_ == 0xbc0ba0U) goto L_00BC0BA0; if (t_ == 0xbc0ba8U) goto L_00BC0BA8; if (t_ == 0xbc0bb0U) goto L_00BC0BB0; if (t_ == 0xbc0bb8U) goto L_00BC0BB8; if (t_ == 0xbc0bc0U) goto L_00BC0BC0; if (t_ == 0xbc0bc8U) goto L_00BC0BC8; if (t_ == 0xbc0bd0U) goto L_00BC0BD0; if (t_ == 0xbc0bd8U) goto L_00BC0BD8; }
L_00BC0B60:;
    v0 = 17; goto L_00BC0BE4;
L_00BC0B68:;
    v0 = 35; goto L_00BC0BE4;
L_00BC0B70:;
    v0 = 36; goto L_00BC0BE4;
L_00BC0B78:;
    v0 = 37; goto L_00BC0BE4;
L_00BC0B80:;
    v0 = 0; goto L_00BC0BE4;
L_00BC0B88:;
    v0 = 38; goto L_00BC0BE4;
L_00BC0B90:;
    v0 = 42; goto L_00BC0BE4;
L_00BC0B98:;
    v0 = 43; goto L_00BC0BE4;
L_00BC0BA0:;
    v0 = 45; goto L_00BC0BE4;
L_00BC0BA8:;
    v0 = 44; goto L_00BC0BE4;
L_00BC0BB0:;
    v0 = 39; goto L_00BC0BE4;
L_00BC0BB8:;
    v0 = 6; goto L_00BC0BE4;
L_00BC0BC0:;
    v0 = 14; goto L_00BC0BE4;
L_00BC0BC8:;
    v0 = 15; goto L_00BC0BE4;
L_00BC0BD0:;
    v0 = 13; goto L_00BC0BE4;
L_00BC0BD8:;
    v0 = 10; goto L_00BC0BE4;
L_00BC0BE0:;
    v0 = 0xffff;
L_00BC0BE4:;
    return;
}
