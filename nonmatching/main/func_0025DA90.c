/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001ED1C0(s32, s32);

void func_0025DA90(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -11992));
    v0 = 0 < v0;
    { s32 c_ = v0 != 0; s1 = 0; if (c_) goto L_0025DB0C; }
L_0025DABC:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -11990));
    at = 0 < v0;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_0025DB48; }
    s1 = 0;
L_0025DAD4:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -11984));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001ED1C0(a0, a1);
    v0 = (s32) 0x590000U;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = (*(volatile s16 *) (u32) (v0 + -11990));
    v0 = s0 < v0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0025DAD4; }
    goto L_0025DB48;
L_0025DB0C:;
    s0 = 0;
L_0025DB10:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -11988));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001ED1C0(a0, a1);
    v0 = (s32) 0x590000U;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = (*(volatile s16 *) (u32) (v0 + -11992));
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0025DB10; }
    goto L_0025DABC;
L_0025DB48:;
    s1 = (s32) 0x590000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0xffffcfe0U);
L_0025DB54:;
    a0 = (*(volatile s32 *) (u32) (s1 + 348));
    a1 = 0; func_001ED1C0(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 2;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0025DB54; }
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -11976));
    if (v1 == 0) goto L_0025DC88;
    v0 = (s32) 0x3b0000U;
    s2 = 0;
    v0 = (s32) ((u32) v0 + 0xffffafd0U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x590000U;
    s1 = (*(volatile u8 *) (u32) v1);
    v0 = (*(volatile s16 *) (u32) (v0 + -11992));
    at = 0 < v0;
    { s32 c_ = at == 0; s0 = (s32) ((u32) s1 + 0xffffffffU); if (c_) goto L_0025DBD8; }
    s3 = 0;
L_0025DBAC:;
    if ((s32) s1 != 0) { s64 q_ = (s32) ((s32) s2 / (s32) s1); hi = (s32) ((s32) s2 % (s32) s1); lo = q_; }
    v0 = hi;
    if (s0 == v0) goto L_0025DC48;
L_0025DBC0:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -11992));
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < v0;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_0025DBAC; }
L_0025DBD8:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -11990));
    at = 0 < v0;
    { s32 c_ = at == 0; s2 = 0; if (c_) goto L_0025DC18; }
    s3 = 0;
L_0025DBF0:;
    if ((s32) s1 != 0) { s64 q_ = (s32) ((s32) s2 / (s32) s1); hi = (s32) ((s32) s2 % (s32) s1); lo = q_; }
    v0 = hi;
    if (s0 == v0) goto L_0025DC68;
L_0025DC00:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -11990));
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < v0;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_0025DBF0; }
L_0025DC18:;
    s1 = (s32) 0x590000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0xffffcfe0U);
L_0025DC24:;
    a0 = (*(volatile s32 *) (u32) (s1 + 348));
    a1 = 1; func_001ED1C0(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 2;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0025DC24; }
    goto L_0025DC88;
L_0025DC48:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -11988));
    v0 = (s32) ((u32) v0 + (u32) s3);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001ED1C0(a0, a1);
    goto L_0025DBC0;
L_0025DC68:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -11984));
    v0 = (s32) ((u32) v0 + (u32) s3);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001ED1C0(a0, a1);
    goto L_0025DC00;
L_0025DC88:;
    return;
}
