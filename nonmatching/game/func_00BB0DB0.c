/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB0DB0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 16;
    if (at == 0) goto L_00BB0E60;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x50U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0de0U) goto L_00BB0DE0; if (t_ == 0xbb0de8U) goto L_00BB0DE8; if (t_ == 0xbb0df0U) goto L_00BB0DF0; if (t_ == 0xbb0df8U) goto L_00BB0DF8; if (t_ == 0xbb0e00U) goto L_00BB0E00; if (t_ == 0xbb0e08U) goto L_00BB0E08; if (t_ == 0xbb0e10U) goto L_00BB0E10; if (t_ == 0xbb0e18U) goto L_00BB0E18; if (t_ == 0xbb0e20U) goto L_00BB0E20; if (t_ == 0xbb0e28U) goto L_00BB0E28; if (t_ == 0xbb0e30U) goto L_00BB0E30; if (t_ == 0xbb0e38U) goto L_00BB0E38; if (t_ == 0xbb0e40U) goto L_00BB0E40; if (t_ == 0xbb0e48U) goto L_00BB0E48; if (t_ == 0xbb0e50U) goto L_00BB0E50; if (t_ == 0xbb0e58U) goto L_00BB0E58; }
L_00BB0DE0:;
    v0 = 246; goto L_00BB0E64;
L_00BB0DE8:;
    v0 = 244; goto L_00BB0E64;
L_00BB0DF0:;
    v0 = 75; goto L_00BB0E64;
L_00BB0DF8:;
    v0 = 322; goto L_00BB0E64;
L_00BB0E00:;
    v0 = 323; goto L_00BB0E64;
L_00BB0E08:;
    v0 = 324; goto L_00BB0E64;
L_00BB0E10:;
    v0 = 325; goto L_00BB0E64;
L_00BB0E18:;
    v0 = 326; goto L_00BB0E64;
L_00BB0E20:;
    v0 = 332; goto L_00BB0E64;
L_00BB0E28:;
    v0 = 333; goto L_00BB0E64;
L_00BB0E30:;
    v0 = 334; goto L_00BB0E64;
L_00BB0E38:;
    v0 = 335; goto L_00BB0E64;
L_00BB0E40:;
    v0 = 336; goto L_00BB0E64;
L_00BB0E48:;
    v0 = 318; goto L_00BB0E64;
L_00BB0E50:;
    v0 = 319; goto L_00BB0E64;
L_00BB0E58:;
    v0 = 320; goto L_00BB0E64;
L_00BB0E60:;
    v0 = 0xffff;
L_00BB0E64:;
    return;
}
