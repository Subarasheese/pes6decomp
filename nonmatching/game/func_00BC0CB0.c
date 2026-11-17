/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BC0CB0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa36U);
    at = (u64) v0 < (u64) (s64) 16;
    if (at == 0) goto L_00BC0D60;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x1ec0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc0ce0U) goto L_00BC0CE0; if (t_ == 0xbc0ce8U) goto L_00BC0CE8; if (t_ == 0xbc0cf0U) goto L_00BC0CF0; if (t_ == 0xbc0cf8U) goto L_00BC0CF8; if (t_ == 0xbc0d00U) goto L_00BC0D00; if (t_ == 0xbc0d08U) goto L_00BC0D08; if (t_ == 0xbc0d10U) goto L_00BC0D10; if (t_ == 0xbc0d18U) goto L_00BC0D18; if (t_ == 0xbc0d20U) goto L_00BC0D20; if (t_ == 0xbc0d28U) goto L_00BC0D28; if (t_ == 0xbc0d30U) goto L_00BC0D30; if (t_ == 0xbc0d38U) goto L_00BC0D38; if (t_ == 0xbc0d40U) goto L_00BC0D40; if (t_ == 0xbc0d48U) goto L_00BC0D48; if (t_ == 0xbc0d50U) goto L_00BC0D50; if (t_ == 0xbc0d58U) goto L_00BC0D58; }
L_00BC0CE0:;
    v0 = 76; goto L_00BC0D64;
L_00BC0CE8:;
    v0 = 35; goto L_00BC0D64;
L_00BC0CF0:;
    v0 = 36; goto L_00BC0D64;
L_00BC0CF8:;
    v0 = 37; goto L_00BC0D64;
L_00BC0D00:;
    v0 = 0; goto L_00BC0D64;
L_00BC0D08:;
    v0 = 38; goto L_00BC0D64;
L_00BC0D10:;
    v0 = 42; goto L_00BC0D64;
L_00BC0D18:;
    v0 = 43; goto L_00BC0D64;
L_00BC0D20:;
    v0 = 45; goto L_00BC0D64;
L_00BC0D28:;
    v0 = 44; goto L_00BC0D64;
L_00BC0D30:;
    v0 = 39; goto L_00BC0D64;
L_00BC0D38:;
    v0 = 23; goto L_00BC0D64;
L_00BC0D40:;
    v0 = 14; goto L_00BC0D64;
L_00BC0D48:;
    v0 = 15; goto L_00BC0D64;
L_00BC0D50:;
    v0 = 13; goto L_00BC0D64;
L_00BC0D58:;
    v0 = 10; goto L_00BC0D64;
L_00BC0D60:;
    v0 = 0xffff;
L_00BC0D64:;
    return;
}
