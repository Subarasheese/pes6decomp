/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BC0E30(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa36U);
    at = (u64) v0 < (u64) (s64) 16;
    if (at == 0) goto L_00BC0EE0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x1f40U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc0e60U) goto L_00BC0E60; if (t_ == 0xbc0e68U) goto L_00BC0E68; if (t_ == 0xbc0e70U) goto L_00BC0E70; if (t_ == 0xbc0e78U) goto L_00BC0E78; if (t_ == 0xbc0e80U) goto L_00BC0E80; if (t_ == 0xbc0e88U) goto L_00BC0E88; if (t_ == 0xbc0e90U) goto L_00BC0E90; if (t_ == 0xbc0e98U) goto L_00BC0E98; if (t_ == 0xbc0ea0U) goto L_00BC0EA0; if (t_ == 0xbc0ea8U) goto L_00BC0EA8; if (t_ == 0xbc0eb0U) goto L_00BC0EB0; if (t_ == 0xbc0eb8U) goto L_00BC0EB8; if (t_ == 0xbc0ec0U) goto L_00BC0EC0; if (t_ == 0xbc0ec8U) goto L_00BC0EC8; if (t_ == 0xbc0ed0U) goto L_00BC0ED0; if (t_ == 0xbc0ed8U) goto L_00BC0ED8; }
L_00BC0E60:;
    v0 = 17; goto L_00BC0EE4;
L_00BC0E68:;
    v0 = 35; goto L_00BC0EE4;
L_00BC0E70:;
    v0 = 36; goto L_00BC0EE4;
L_00BC0E78:;
    v0 = 37; goto L_00BC0EE4;
L_00BC0E80:;
    v0 = 0; goto L_00BC0EE4;
L_00BC0E88:;
    v0 = 38; goto L_00BC0EE4;
L_00BC0E90:;
    v0 = 42; goto L_00BC0EE4;
L_00BC0E98:;
    v0 = 43; goto L_00BC0EE4;
L_00BC0EA0:;
    v0 = 45; goto L_00BC0EE4;
L_00BC0EA8:;
    v0 = 44; goto L_00BC0EE4;
L_00BC0EB0:;
    v0 = 39; goto L_00BC0EE4;
L_00BC0EB8:;
    v0 = 8; goto L_00BC0EE4;
L_00BC0EC0:;
    v0 = 14; goto L_00BC0EE4;
L_00BC0EC8:;
    v0 = 15; goto L_00BC0EE4;
L_00BC0ED0:;
    v0 = 13; goto L_00BC0EE4;
L_00BC0ED8:;
    v0 = 10; goto L_00BC0EE4;
L_00BC0EE0:;
    v0 = 0xffff;
L_00BC0EE4:;
    return;
}
