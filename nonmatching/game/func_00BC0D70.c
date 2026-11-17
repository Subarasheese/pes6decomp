/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BC0D70(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa36U);
    at = (u64) v0 < (u64) (s64) 15;
    if (at == 0) goto L_00BC0E18;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x1f00U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc0da0U) goto L_00BC0DA0; if (t_ == 0xbc0da8U) goto L_00BC0DA8; if (t_ == 0xbc0db0U) goto L_00BC0DB0; if (t_ == 0xbc0db8U) goto L_00BC0DB8; if (t_ == 0xbc0dc0U) goto L_00BC0DC0; if (t_ == 0xbc0dc8U) goto L_00BC0DC8; if (t_ == 0xbc0dd0U) goto L_00BC0DD0; if (t_ == 0xbc0dd8U) goto L_00BC0DD8; if (t_ == 0xbc0de0U) goto L_00BC0DE0; if (t_ == 0xbc0de8U) goto L_00BC0DE8; if (t_ == 0xbc0df0U) goto L_00BC0DF0; if (t_ == 0xbc0df8U) goto L_00BC0DF8; if (t_ == 0xbc0e00U) goto L_00BC0E00; if (t_ == 0xbc0e08U) goto L_00BC0E08; if (t_ == 0xbc0e10U) goto L_00BC0E10; }
L_00BC0DA0:;
    v0 = 16; goto L_00BC0E1C;
L_00BC0DA8:;
    v0 = 34; goto L_00BC0E1C;
L_00BC0DB0:;
    v0 = 38; goto L_00BC0E1C;
L_00BC0DB8:;
    v0 = 42; goto L_00BC0E1C;
L_00BC0DC0:;
    v0 = 43; goto L_00BC0E1C;
L_00BC0DC8:;
    v0 = 45; goto L_00BC0E1C;
L_00BC0DD0:;
    v0 = 44; goto L_00BC0E1C;
L_00BC0DD8:;
    v0 = 39; goto L_00BC0E1C;
L_00BC0DE0:;
    v0 = 25; goto L_00BC0E1C;
L_00BC0DE8:;
    v0 = 27; goto L_00BC0E1C;
L_00BC0DF0:;
    v0 = 14; goto L_00BC0E1C;
L_00BC0DF8:;
    v0 = 15; goto L_00BC0E1C;
L_00BC0E00:;
    v0 = 13; goto L_00BC0E1C;
L_00BC0E08:;
    v0 = 10; goto L_00BC0E1C;
L_00BC0E10:;
    v0 = 26; goto L_00BC0E1C;
L_00BC0E18:;
    v0 = 0xffff;
L_00BC0E1C:;
    return;
}
