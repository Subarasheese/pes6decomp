/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB0BB0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 16;
    if (at == 0) goto L_00BB0C60;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffff90U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0be0U) goto L_00BB0BE0; if (t_ == 0xbb0be8U) goto L_00BB0BE8; if (t_ == 0xbb0bf0U) goto L_00BB0BF0; if (t_ == 0xbb0bf8U) goto L_00BB0BF8; if (t_ == 0xbb0c00U) goto L_00BB0C00; if (t_ == 0xbb0c08U) goto L_00BB0C08; if (t_ == 0xbb0c10U) goto L_00BB0C10; if (t_ == 0xbb0c18U) goto L_00BB0C18; if (t_ == 0xbb0c20U) goto L_00BB0C20; if (t_ == 0xbb0c28U) goto L_00BB0C28; if (t_ == 0xbb0c30U) goto L_00BB0C30; if (t_ == 0xbb0c38U) goto L_00BB0C38; if (t_ == 0xbb0c40U) goto L_00BB0C40; if (t_ == 0xbb0c48U) goto L_00BB0C48; if (t_ == 0xbb0c50U) goto L_00BB0C50; if (t_ == 0xbb0c58U) goto L_00BB0C58; }
L_00BB0BE0:;
    v0 = 68; goto L_00BB0C64;
L_00BB0BE8:;
    v0 = 108; goto L_00BB0C64;
L_00BB0BF0:;
    v0 = 131; goto L_00BB0C64;
L_00BB0BF8:;
    v0 = 130; goto L_00BB0C64;
L_00BB0C00:;
    v0 = 71; goto L_00BB0C64;
L_00BB0C08:;
    v0 = 69; goto L_00BB0C64;
L_00BB0C10:;
    v0 = 109; goto L_00BB0C64;
L_00BB0C18:;
    v0 = 70; goto L_00BB0C64;
L_00BB0C20:;
    v0 = 129; goto L_00BB0C64;
L_00BB0C28:;
    v0 = 238; goto L_00BB0C64;
L_00BB0C30:;
    v0 = 239; goto L_00BB0C64;
L_00BB0C38:;
    v0 = 128; goto L_00BB0C64;
L_00BB0C40:;
    v0 = 110; goto L_00BB0C64;
L_00BB0C48:;
    v0 = 207; goto L_00BB0C64;
L_00BB0C50:;
    v0 = 208; goto L_00BB0C64;
L_00BB0C58:;
    v0 = 212; goto L_00BB0C64;
L_00BB0C60:;
    v0 = 0xffff;
L_00BB0C64:;
    return;
}
