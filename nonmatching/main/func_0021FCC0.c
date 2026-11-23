/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002206F0(s32);

s32 func_0021FCC0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9860U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a1 = (*(volatile s32 *) (u32) v1);
    at = a1 < 24;
    { s32 c_ = at == 0; v0 = 0; if (c_) goto L_0021FCF8; }
    a0 = a1; v0 = func_002206F0(a0);
    goto L_0021FDB0;
L_0021FCF8:;
    v1 = 25;
    if (a1 == v1) goto L_0021FDAC;
    v1 = (s32) ((u32) a0 + 0xfffffff7U);
    at = (u64) v1 < (u64) (s64) 24;
    if (at == 0) goto L_0021FDAC;
    a0 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x7a40U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x21fd30U) goto L_0021FD30; if (t_ == 0x21fd38U) goto L_0021FD38; if (t_ == 0x21fd40U) goto L_0021FD40; if (t_ == 0x21fd48U) goto L_0021FD48; if (t_ == 0x21fd50U) goto L_0021FD50; if (t_ == 0x21fd58U) goto L_0021FD58; if (t_ == 0x21fd60U) goto L_0021FD60; if (t_ == 0x21fd68U) goto L_0021FD68; if (t_ == 0x21fd70U) goto L_0021FD70; if (t_ == 0x21fd78U) goto L_0021FD78; if (t_ == 0x21fd80U) goto L_0021FD80; if (t_ == 0x21fd88U) goto L_0021FD88; if (t_ == 0x21fd90U) goto L_0021FD90; if (t_ == 0x21fd98U) goto L_0021FD98; if (t_ == 0x21fda0U) goto L_0021FDA0; if (t_ == 0x21fda8U) goto L_0021FDA8; if (t_ == 0x21fdacU) goto L_0021FDAC; }
L_0021FD30:;
    v0 = 2816; goto L_0021FDAC;
L_0021FD38:;
    v0 = 5632; goto L_0021FDAC;
L_0021FD40:;
    v0 = 496; goto L_0021FDAC;
L_0021FD48:;
    v0 = 17952; goto L_0021FDAC;
L_0021FD50:;
    v0 = 1184; goto L_0021FDAC;
L_0021FD58:;
    v0 = 296; goto L_0021FDAC;
L_0021FD60:;
    v0 = 296; goto L_0021FDAC;
L_0021FD68:;
    v0 = 1184; goto L_0021FDAC;
L_0021FD70:;
    v0 = 1184; goto L_0021FDAC;
L_0021FD78:;
    v0 = 296; goto L_0021FDAC;
L_0021FD80:;
    v0 = 884; goto L_0021FDAC;
L_0021FD88:;
    v0 = 832; goto L_0021FDAC;
L_0021FD90:;
    v0 = 104; goto L_0021FDAC;
L_0021FD98:;
    v0 = 104; goto L_0021FDAC;
L_0021FDA0:;
    v0 = 612; goto L_0021FDAC;
L_0021FDA8:;
    v0 = 576;
L_0021FDAC:;
L_0021FDB0:;
    return v0;
}
