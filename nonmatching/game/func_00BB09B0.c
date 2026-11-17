/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB09B0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 23;
    if (at == 0) goto L_00BB0A98;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffffed0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb09e0U) goto L_00BB09E0; if (t_ == 0xbb09e8U) goto L_00BB09E8; if (t_ == 0xbb09f0U) goto L_00BB09F0; if (t_ == 0xbb09f8U) goto L_00BB09F8; if (t_ == 0xbb0a00U) goto L_00BB0A00; if (t_ == 0xbb0a08U) goto L_00BB0A08; if (t_ == 0xbb0a10U) goto L_00BB0A10; if (t_ == 0xbb0a18U) goto L_00BB0A18; if (t_ == 0xbb0a20U) goto L_00BB0A20; if (t_ == 0xbb0a28U) goto L_00BB0A28; if (t_ == 0xbb0a30U) goto L_00BB0A30; if (t_ == 0xbb0a38U) goto L_00BB0A38; if (t_ == 0xbb0a40U) goto L_00BB0A40; if (t_ == 0xbb0a48U) goto L_00BB0A48; if (t_ == 0xbb0a50U) goto L_00BB0A50; if (t_ == 0xbb0a58U) goto L_00BB0A58; if (t_ == 0xbb0a60U) goto L_00BB0A60; if (t_ == 0xbb0a68U) goto L_00BB0A68; if (t_ == 0xbb0a70U) goto L_00BB0A70; if (t_ == 0xbb0a78U) goto L_00BB0A78; if (t_ == 0xbb0a80U) goto L_00BB0A80; if (t_ == 0xbb0a88U) goto L_00BB0A88; if (t_ == 0xbb0a90U) goto L_00BB0A90; }
L_00BB09E0:;
    v0 = 112; goto L_00BB0A9C;
L_00BB09E8:;
    v0 = 116; goto L_00BB0A9C;
L_00BB09F0:;
    v0 = 117; goto L_00BB0A9C;
L_00BB09F8:;
    v0 = 133; goto L_00BB0A9C;
L_00BB0A00:;
    v0 = 135; goto L_00BB0A9C;
L_00BB0A08:;
    v0 = 134; goto L_00BB0A9C;
L_00BB0A10:;
    v0 = 136; goto L_00BB0A9C;
L_00BB0A18:;
    v0 = 214; goto L_00BB0A9C;
L_00BB0A20:;
    v0 = 122; goto L_00BB0A9C;
L_00BB0A28:;
    v0 = 205; goto L_00BB0A9C;
L_00BB0A30:;
    v0 = 206; goto L_00BB0A9C;
L_00BB0A38:;
    v0 = 213; goto L_00BB0A9C;
L_00BB0A40:;
    v0 = 219; goto L_00BB0A9C;
L_00BB0A48:;
    v0 = 111; goto L_00BB0A9C;
L_00BB0A50:;
    v0 = 209; goto L_00BB0A9C;
L_00BB0A58:;
    v0 = 210; goto L_00BB0A9C;
L_00BB0A60:;
    v0 = 211; goto L_00BB0A9C;
L_00BB0A68:;
    v0 = 970; goto L_00BB0A9C;
L_00BB0A70:;
    v0 = 969; goto L_00BB0A9C;
L_00BB0A78:;
    v0 = 130; goto L_00BB0A9C;
L_00BB0A80:;
    v0 = 218; goto L_00BB0A9C;
L_00BB0A88:;
    v0 = 132; goto L_00BB0A9C;
L_00BB0A90:;
    v0 = 212; goto L_00BB0A9C;
L_00BB0A98:;
    v0 = 0xffff;
L_00BB0A9C:;
    return;
}
