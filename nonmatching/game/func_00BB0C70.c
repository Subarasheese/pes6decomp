/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB0C70(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 32;
    if (at == 0) goto L_00BB0DA0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffffd0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0ca0U) goto L_00BB0CA0; if (t_ == 0xbb0ca8U) goto L_00BB0CA8; if (t_ == 0xbb0cb0U) goto L_00BB0CB0; if (t_ == 0xbb0cb8U) goto L_00BB0CB8; if (t_ == 0xbb0cc0U) goto L_00BB0CC0; if (t_ == 0xbb0cc8U) goto L_00BB0CC8; if (t_ == 0xbb0cd0U) goto L_00BB0CD0; if (t_ == 0xbb0cd8U) goto L_00BB0CD8; if (t_ == 0xbb0ce0U) goto L_00BB0CE0; if (t_ == 0xbb0ce8U) goto L_00BB0CE8; if (t_ == 0xbb0cf0U) goto L_00BB0CF0; if (t_ == 0xbb0cf8U) goto L_00BB0CF8; if (t_ == 0xbb0d00U) goto L_00BB0D00; if (t_ == 0xbb0d08U) goto L_00BB0D08; if (t_ == 0xbb0d10U) goto L_00BB0D10; if (t_ == 0xbb0d18U) goto L_00BB0D18; if (t_ == 0xbb0d20U) goto L_00BB0D20; if (t_ == 0xbb0d28U) goto L_00BB0D28; if (t_ == 0xbb0d30U) goto L_00BB0D30; if (t_ == 0xbb0d38U) goto L_00BB0D38; if (t_ == 0xbb0d40U) goto L_00BB0D40; if (t_ == 0xbb0d48U) goto L_00BB0D48; if (t_ == 0xbb0d50U) goto L_00BB0D50; if (t_ == 0xbb0d58U) goto L_00BB0D58; if (t_ == 0xbb0d60U) goto L_00BB0D60; if (t_ == 0xbb0d68U) goto L_00BB0D68; if (t_ == 0xbb0d70U) goto L_00BB0D70; if (t_ == 0xbb0d78U) goto L_00BB0D78; if (t_ == 0xbb0d80U) goto L_00BB0D80; if (t_ == 0xbb0d88U) goto L_00BB0D88; if (t_ == 0xbb0d90U) goto L_00BB0D90; if (t_ == 0xbb0d98U) goto L_00BB0D98; }
L_00BB0CA0:;
    v0 = 368; goto L_00BB0DA4;
L_00BB0CA8:;
    v0 = 371; goto L_00BB0DA4;
L_00BB0CB0:;
    v0 = 372; goto L_00BB0DA4;
L_00BB0CB8:;
    v0 = 369; goto L_00BB0DA4;
L_00BB0CC0:;
    v0 = 370; goto L_00BB0DA4;
L_00BB0CC8:;
    v0 = 373; goto L_00BB0DA4;
L_00BB0CD0:;
    v0 = 374; goto L_00BB0DA4;
L_00BB0CD8:;
    v0 = 375; goto L_00BB0DA4;
L_00BB0CE0:;
    v0 = 376; goto L_00BB0DA4;
L_00BB0CE8:;
    v0 = 377; goto L_00BB0DA4;
L_00BB0CF0:;
    v0 = 358; goto L_00BB0DA4;
L_00BB0CF8:;
    v0 = 363; goto L_00BB0DA4;
L_00BB0D00:;
    v0 = 361; goto L_00BB0DA4;
L_00BB0D08:;
    v0 = 362; goto L_00BB0DA4;
L_00BB0D10:;
    v0 = 359; goto L_00BB0DA4;
L_00BB0D18:;
    v0 = 360; goto L_00BB0DA4;
L_00BB0D20:;
    v0 = 366; goto L_00BB0DA4;
L_00BB0D28:;
    v0 = 367; goto L_00BB0DA4;
L_00BB0D30:;
    v0 = 364; goto L_00BB0DA4;
L_00BB0D38:;
    v0 = 365; goto L_00BB0DA4;
L_00BB0D40:;
    v0 = 378; goto L_00BB0DA4;
L_00BB0D48:;
    v0 = 381; goto L_00BB0DA4;
L_00BB0D50:;
    v0 = 382; goto L_00BB0DA4;
L_00BB0D58:;
    v0 = 379; goto L_00BB0DA4;
L_00BB0D60:;
    v0 = 380; goto L_00BB0DA4;
L_00BB0D68:;
    v0 = 383; goto L_00BB0DA4;
L_00BB0D70:;
    v0 = 386; goto L_00BB0DA4;
L_00BB0D78:;
    v0 = 387; goto L_00BB0DA4;
L_00BB0D80:;
    v0 = 384; goto L_00BB0DA4;
L_00BB0D88:;
    v0 = 385; goto L_00BB0DA4;
L_00BB0D90:;
    v0 = 388; goto L_00BB0DA4;
L_00BB0D98:;
    v0 = 391; goto L_00BB0DA4;
L_00BB0DA0:;
    v0 = 0xffff;
L_00BB0DA4:;
    return;
}
