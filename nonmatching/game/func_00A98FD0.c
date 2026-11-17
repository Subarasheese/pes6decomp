/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_00A09950(s64);
s64 func_00BBB780(s64);
s64 func_00BBB8C0(s64);

s64 func_00A98FD0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7705));
    { s32 c_ = v1 == v0; s0 = a0; if (c_) goto L_00A99134; }
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 40;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 128));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v0 = (s32) ((u32) v0 + 0xffffffe2U);
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48; v0 = func_00BBB780(a0);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00A99134;
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) goto L_00A990B8;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    v1 = v1 ^ 0x1;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    at = 0 < v0;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_00A990A8; }
    at = v0 < 23;
    if (at == 0) goto L_00A990A8;
    a0 = 1;
L_00A990A8:;
    if (a0 != 0) goto L_00A990B8;
    v0 = (s32) 0x57e40000U; goto L_00A99114;
L_00A990B8:;
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_00A990EC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00A990EC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
L_00A99114:;
    at = (s32) 0x10000U;
    at = v0 < at;
    if (at == 0) goto L_00A99134;
    a0 = 2048; v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 + 0x800U); goto L_00A991E8;
L_00A99134:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 == 0) goto L_00A9915C;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = v0 & 0xff;
    if (v1 == v0) goto L_00A9915C;
    v0 = 0; goto L_00A991E8;
L_00A9915C:;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = 10;
    v1 = (*(volatile u16 *) (u32) (v1 + 132));
    if (v1 == v0) goto L_00A991B4;
    v0 = 15;
    if (v1 == v0) goto L_00A991B4;
    v0 = 11;
    if (v1 == v0) goto L_00A991B4;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = 802;
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) { v0 = 0; goto L_00A991E8; }
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    v0 = 2;
    if (v1 != v0) { a0 = s0; goto L_00A991BC; }
    v0 = 0; goto L_00A991E8;
L_00A991B4:;
    v0 = 0; goto L_00A991E8;
L_00A991BC:;
    v0 = func_00A09950(a0);
    if (v0 != 0) goto L_00A991E4;
    v0 = (*(volatile s32 *) (u32) (s0 + 176));
    v0 = v0 & 0x800;
    if (v0 == 0) goto L_00A991E4;
    v0 = 3072; goto L_00A991E8;
L_00A991E4:;
    v0 = 0;
L_00A991E8:;
    return v0;
}
