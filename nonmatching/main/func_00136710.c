/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 sceSdRemote(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00136710(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x10000000U;
    s1 = a0;
    s0 = (*(volatile u16 *) (u32) v0);
    v1 = (*(volatile s32 *) (u32) (a0 + 72));
    a4 = (*(volatile s32 *) (u32) (a0 + 68));
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_00136748; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_00136748:;
    a5 = (s32) ((u32) v0 << 10);
    a0 = 1;
    v0 = (*(volatile s32 *) (u32) (s1 + 80));
    a1 = 0x80e0;
    a2 = 0;
    a3 = 19;
    a6 = (s32) ((u32) a4 + (u32) v0); v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 < 0) { s0 = s0 & 0xffff; goto L_001367E4; }
L_00136770:;
    a0 = 1;
L_00136774:;
    a1 = 0x8010;
    a2 = 3968;
    a3 = 32767; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 1;
    a1 = 0x8010;
    a2 = 4224;
    a3 = 32767; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    s2 = (*(volatile s32 *) (u32) (gp + -32600));
    s0 = 0;
L_001367A0:;
    a2 = s0 | 0x980;
    a0 = 1;
    a1 = 0x8010;
    a3 = s2; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    a2 = s0 | 0xa80;
    a0 = 1;
    a1 = 0x8010;
    a3 = s2; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 2;
    if (v1 != 0) goto L_001367A0;
    v1 = 2;
    (*(volatile u32 *) (u32) s1) = (u32) v1; goto L_00136848;
L_001367E4:;
    v0 = (s32) 0x10000000U;
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 - (u32) s0);
    v0 = v0 & 0xffff;
    at = v0 < 1051;
    if (at == 0) goto L_00136770;
    v1 = (*(volatile s32 *) (u32) (s1 + 72));
    a4 = (*(volatile s32 *) (u32) (s1 + 68));
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_00136818; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_00136818:;
    a5 = (s32) ((u32) v0 << 10);
    a0 = 1;
    v0 = (*(volatile s32 *) (u32) (s1 + 80));
    a1 = 0x80e0;
    a2 = 0;
    a3 = 19;
    a6 = (s32) ((u32) a4 + (u32) v0); v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 < 0) goto L_001367E4;
    a0 = 1; goto L_00136774;
L_00136848:;
    return;
}
