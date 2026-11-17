/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB0AB0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 24;
    if (at == 0) goto L_00BB0BA0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffff30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0ae0U) goto L_00BB0AE0; if (t_ == 0xbb0ae8U) goto L_00BB0AE8; if (t_ == 0xbb0af0U) goto L_00BB0AF0; if (t_ == 0xbb0af8U) goto L_00BB0AF8; if (t_ == 0xbb0b00U) goto L_00BB0B00; if (t_ == 0xbb0b08U) goto L_00BB0B08; if (t_ == 0xbb0b10U) goto L_00BB0B10; if (t_ == 0xbb0b18U) goto L_00BB0B18; if (t_ == 0xbb0b20U) goto L_00BB0B20; if (t_ == 0xbb0b28U) goto L_00BB0B28; if (t_ == 0xbb0b30U) goto L_00BB0B30; if (t_ == 0xbb0b38U) goto L_00BB0B38; if (t_ == 0xbb0b40U) goto L_00BB0B40; if (t_ == 0xbb0b48U) goto L_00BB0B48; if (t_ == 0xbb0b50U) goto L_00BB0B50; if (t_ == 0xbb0b58U) goto L_00BB0B58; if (t_ == 0xbb0b60U) goto L_00BB0B60; if (t_ == 0xbb0b68U) goto L_00BB0B68; if (t_ == 0xbb0b70U) goto L_00BB0B70; if (t_ == 0xbb0b78U) goto L_00BB0B78; if (t_ == 0xbb0b80U) goto L_00BB0B80; if (t_ == 0xbb0b88U) goto L_00BB0B88; if (t_ == 0xbb0b90U) goto L_00BB0B90; if (t_ == 0xbb0b98U) goto L_00BB0B98; }
L_00BB0AE0:;
    v0 = 112; goto L_00BB0BA4;
L_00BB0AE8:;
    v0 = 116; goto L_00BB0BA4;
L_00BB0AF0:;
    v0 = 117; goto L_00BB0BA4;
L_00BB0AF8:;
    v0 = 115; goto L_00BB0BA4;
L_00BB0B00:;
    v0 = 133; goto L_00BB0BA4;
L_00BB0B08:;
    v0 = 135; goto L_00BB0BA4;
L_00BB0B10:;
    v0 = 134; goto L_00BB0BA4;
L_00BB0B18:;
    v0 = 136; goto L_00BB0BA4;
L_00BB0B20:;
    v0 = 123; goto L_00BB0BA4;
L_00BB0B28:;
    v0 = 124; goto L_00BB0BA4;
L_00BB0B30:;
    v0 = 205; goto L_00BB0BA4;
L_00BB0B38:;
    v0 = 206; goto L_00BB0BA4;
L_00BB0B40:;
    v0 = 213; goto L_00BB0BA4;
L_00BB0B48:;
    v0 = 219; goto L_00BB0BA4;
L_00BB0B50:;
    v0 = 218; goto L_00BB0BA4;
L_00BB0B58:;
    v0 = 215; goto L_00BB0BA4;
L_00BB0B60:;
    v0 = 216; goto L_00BB0BA4;
L_00BB0B68:;
    v0 = 217; goto L_00BB0BA4;
L_00BB0B70:;
    v0 = 465; goto L_00BB0BA4;
L_00BB0B78:;
    v0 = 970; goto L_00BB0BA4;
L_00BB0B80:;
    v0 = 969; goto L_00BB0BA4;
L_00BB0B88:;
    v0 = 130; goto L_00BB0BA4;
L_00BB0B90:;
    v0 = 132; goto L_00BB0BA4;
L_00BB0B98:;
    v0 = 212; goto L_00BB0BA4;
L_00BB0BA0:;
    v0 = 0xffff;
L_00BB0BA4:;
    return;
}
