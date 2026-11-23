/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B6A30(s32, s32, s32, s32);
s32 func_001BE5B0(s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023EC10(s32, s32);
s32 func_0023F330(void);
void func_00244AB0(void);
s32 func_002DCA30(void);
void func_002DED00(s32, s32, s32, s32);
s32 func_0030C2D0(void);
s32 func_008156F0(s32, s32, s32, s32);
void func_00942E60(s32, s32, s32, s32);
void func_009435B0(s32, s32, s32, s32);

s32 func_00942AB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    a1 = 2;
    v0 = (*(volatile s32 *) (u32) (gp + -18312));
    s0 = (s32) 0x540000U;
    { s32 c_ = v0 == a1; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_00942E08; }
    a0 = 1;
    if (v0 == a0) { v1 = (*(volatile s32 *) (u32) (gp + -22756)); goto L_00942C94; }
    if (v0 == 0) goto L_00942AEC;
    v0 = 0; goto L_00942E4C;
L_00942AEC:;
    v0 = func_002DCA30();
    if (v0 == 0) goto L_00942B2C;
    func_00244AB0();
    a0 = (s32) 0x540000U;
    a1 = 4;
    a0 = (s32) ((u32) a0 + 0xffffc310U); func_0023EC10(a0, a1);
    a0 = (s32) 0x540000U;
    a1 = 8;
    a0 = (s32) ((u32) a0 + 0xffffc310U); func_0023EC10(a0, a1);
    func_00942E60(a0, a1, a2, a3);
L_00942B2C:;
    v0 = (s32) 0x590000U;
    a0 = 5;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v1 != a0) goto L_00942B50;
    a0 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (a0 + 7088));
    (*(volatile u16 *) (u32) (v0 + 7090)) = (u16) a0;
L_00942B50:;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s8 *) (u32) (s0 + 9));
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) 0;
    v0 = 2;
    if (a0 != v0) { v0 = 1; goto L_00942C8C; }
    v0 = (s32) 0x590000U;
    a1 = 286;
    v0 = (*(volatile u16 *) (u32) (v0 + 7088));
    if (v0 != a1) goto L_00942BD8;
    a0 = 5;
    if (v1 != a0) goto L_00942B98;
    a1 = 39;
    a0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (a0 + -15592)) = (u32) a1; goto L_00942BD8;
L_00942B98:;
    a0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (a0 + 7090));
    if (a0 != a1) { at = a0 < 64; goto L_00942BB8; }
    a1 = 34;
    a0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (a0 + -15592)) = (u32) a1; goto L_00942BD8;
L_00942BB8:;
    if (at == 0) { a1 = 36; goto L_00942BD0; }
    a1 = 35;
    a0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (a0 + -15592)) = (u32) a1; goto L_00942BD8;
L_00942BD0:;
    a0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (a0 + -15592)) = (u32) a1;
L_00942BD8:;
    a0 = (s32) 0x540000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -15592));
    if (a0 != 0) { v1 = 286; goto L_00942C54; }
    a0 = (s32) 0x590000U;
    a1 = 286;
    a0 = (*(volatile u16 *) (u32) (a0 + 7090));
    if (a0 != a1) goto L_00942C50;
    a0 = 5;
    if (v1 != a0) goto L_00942C18;
    a0 = 39;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v1 + -15592)) = (u32) a0; goto L_00942C50;
L_00942C18:;
    if (v0 != a1) { at = v0 < 64; goto L_00942C30; }
    a0 = 34;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v1 + -15592)) = (u32) a0; goto L_00942C50;
L_00942C30:;
    if (at == 0) { a0 = 37; goto L_00942C48; }
    a0 = 38;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v1 + -15592)) = (u32) a0; goto L_00942C50;
L_00942C48:;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v1 + -15592)) = (u32) a0;
L_00942C50:;
    v1 = 286;
L_00942C54:;
    if (v0 != v1) goto L_00942C68;
    v1 = 294;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v0 + 7088)) = (u16) v1;
L_00942C68:;
    v0 = (s32) 0x590000U;
    v1 = 286;
    v0 = (*(volatile u16 *) (u32) (v0 + 7090));
    if (v0 != v1) goto L_00942C88;
    v1 = 295;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v0 + 7090)) = (u16) v1;
L_00942C88:;
    v0 = 1;
L_00942C8C:;
    (*(volatile u32 *) (u32) (gp + -18312)) = (u32) v0; goto L_00942E48;
L_00942C94:;
    v0 = 4;
    if (v1 != v0) goto L_00942D0C;
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -15592));
    if (v0 != 0) { a0 = 30; goto L_00942CE4; }
    v0 = (*(volatile s8 *) (u32) (s0 + 9));
    if (v0 != a1) goto L_00942CE0;
    v0 = (*(volatile s32 *) (u32) (gp + -18788));
    if (v0 == a0) goto L_00942CE0;
    a0 = 0; v0 = func_001BE5B0(a0);
    if (v0 != 0) goto L_00942DF0;
    v0 = 0; goto L_00942E4C;
L_00942CE0:;
    a0 = 30;
L_00942CE4:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = func_0023F330();
    a0 = v0; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_00942DF0;
    v0 = 0; goto L_00942E4C;
L_00942D0C:;
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -15592));
    if (v0 == 0) { v0 = (*(volatile s8 *) (u32) (s0 + 9)); goto L_00942D3C; }
    v0 = func_0023F330();
    a0 = v0; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_00942DF0;
    goto L_00942E48;
L_00942D3C:;
    if (v0 != a1) goto L_00942D70;
    v0 = func_002DCA30();
    if (v0 == 0) { (*(volatile u32 *) (u32) (gp + -18312)) = (u32) 0; goto L_00942D68; }
    v1 = (*(volatile s32 *) (u32) (gp + -18312));
    v0 = 0;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18312)) = (u32) v1; goto L_00942E4C;
L_00942D68:;
    v0 = 1; goto L_00942E4C;
L_00942D70:;
    if (v1 != 0) goto L_00942DA4;
    v0 = (*(volatile s32 *) (u32) (gp + -18788));
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_00942DA4;
    a0 = 20437; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_00942DF0;
    v0 = 0; goto L_00942E4C;
L_00942DA4:;
    v0 = func_0030C2D0();
    v1 = 1;
    if (v0 != v1) goto L_00942DD0;
    a0 = 20437; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_00942DF0;
    v0 = 0; goto L_00942E4C;
L_00942DD0:;
    v0 = func_0023F330();
    a0 = v0; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_00942DF0;
    v0 = 0; goto L_00942E4C;
L_00942DF0:;
    func_009435B0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18312));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18312)) = (u32) v0; goto L_00942E48;
L_00942E08:;
    v0 = func_002DCA30();
    if (v0 == 0) { (*(volatile u32 *) (u32) (gp + -18312)) = (u32) 0; goto L_00942E40; }
    v0 = func_008156F0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_00942E48;
    a0 = (*(volatile s32 *) (u32) (gp + -22804)); func_002DED00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18312)) = (u32) 0;
    v0 = 1; goto L_00942E4C;
L_00942E40:;
    v0 = 1; goto L_00942E4C;
L_00942E48:;
    v0 = 0;
L_00942E4C:;
    return v0;
}
