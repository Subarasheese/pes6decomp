/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BC0A60(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa36U);
    at = (u64) v0 < (u64) (s64) 17;
    if (at == 0) goto L_00BC0B18;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x1df0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc0a90U) goto L_00BC0A90; if (t_ == 0xbc0a98U) goto L_00BC0A98; if (t_ == 0xbc0aa0U) goto L_00BC0AA0; if (t_ == 0xbc0aa8U) goto L_00BC0AA8; if (t_ == 0xbc0ab0U) goto L_00BC0AB0; if (t_ == 0xbc0ab8U) goto L_00BC0AB8; if (t_ == 0xbc0ac0U) goto L_00BC0AC0; if (t_ == 0xbc0ac8U) goto L_00BC0AC8; if (t_ == 0xbc0ad0U) goto L_00BC0AD0; if (t_ == 0xbc0ad8U) goto L_00BC0AD8; if (t_ == 0xbc0ae0U) goto L_00BC0AE0; if (t_ == 0xbc0ae8U) goto L_00BC0AE8; if (t_ == 0xbc0af0U) goto L_00BC0AF0; if (t_ == 0xbc0af8U) goto L_00BC0AF8; if (t_ == 0xbc0b00U) goto L_00BC0B00; if (t_ == 0xbc0b08U) goto L_00BC0B08; if (t_ == 0xbc0b10U) goto L_00BC0B10; }
L_00BC0A90:;
    v0 = 16; goto L_00BC0B1C;
L_00BC0A98:;
    v0 = 34; goto L_00BC0B1C;
L_00BC0AA0:;
    v0 = 36; goto L_00BC0B1C;
L_00BC0AA8:;
    v0 = 37; goto L_00BC0B1C;
L_00BC0AB0:;
    v0 = 0; goto L_00BC0B1C;
L_00BC0AB8:;
    v0 = 21; goto L_00BC0B1C;
L_00BC0AC0:;
    v0 = 7; goto L_00BC0B1C;
L_00BC0AC8:;
    v0 = 38; goto L_00BC0B1C;
L_00BC0AD0:;
    v0 = 42; goto L_00BC0B1C;
L_00BC0AD8:;
    v0 = 43; goto L_00BC0B1C;
L_00BC0AE0:;
    v0 = 45; goto L_00BC0B1C;
L_00BC0AE8:;
    v0 = 44; goto L_00BC0B1C;
L_00BC0AF0:;
    v0 = 39; goto L_00BC0B1C;
L_00BC0AF8:;
    v0 = 14; goto L_00BC0B1C;
L_00BC0B00:;
    v0 = 15; goto L_00BC0B1C;
L_00BC0B08:;
    v0 = 13; goto L_00BC0B1C;
L_00BC0B10:;
    v0 = 10; goto L_00BC0B1C;
L_00BC0B18:;
    v0 = 0xffff;
L_00BC0B1C:;
    return;
}
