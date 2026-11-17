/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002DCA30(void);
void func_00853220(s32, s32, s32, s32);
void func_00915000(s32, s32, s32, s32);
s32 func_009916F0(s32);
s32 func_00991840(void);
void func_009B2300(s32, s32, s32, s32, f32, f32);
s32 func_00B29C50(void);
s32 func_00C00390(s32, s32, s32, s32);
void func_00C00440(s32, s32, s32, s32, f32, f32);

void func_009B1DC0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    a0 = 55;
    func_00915000(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9084));
    if (v0 != 0) goto L_009B1F60;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    (*(volatile u8 *) (u32) (v1 + 7604)) = (u8) 0;
    v1 = 5;
    if (v0 != v1) goto L_009B1E1C;
    v0 = func_00B29C50();
    if (v0 == 0) goto L_009B1E1C;
    v1 = 1;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 14996)) = (u32) v1;
L_009B1E1C:;
    v1 = 255;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 9400)) = (u8) v1;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7952)) = (u8) 0; v0 = func_00991840();
    a0 = v0 & 0xff;
    v0 = 255;
    { s32 c_ = a0 == v0; s0 = a0; if (c_) goto L_009B1E58; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a1 = hi; goto L_009B1E5C;
L_009B1E58:;
    a1 = 1;
L_009B1E5C:;
    v0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5c4U);
    a1 = (s32) ((u32) a1 << 6);
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s16 *) (u32) v1);
    f0.i = (s32) 0;
    f1.f = (*(volatile f32 *) (u32) (v0 + 16));
    f2.i = (s32) v1;
    f2.f = (f32) f2.i;
    f1.f = f1.f * f2.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_009B1F70;
    v1 = 1;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7952)) = (u8) v1;
L_009B1EAC:;
    v0 = 255;
    if (s0 == v0) { v1 = 1; goto L_009B1EC4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    v1 = hi;
L_009B1EC4:;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) v0 << 6);
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) a0 + (u32) a1);
    v0 = (*(volatile u8 *) (u32) (v0 + 7629));
    a0 = (*(volatile u8 *) (u32) a1);
    v0 = v0 < 2;
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (v1 + 9985)) = (u8) a0; if (c_) goto L_009B1FA4; }
    v0 = (s32) 0x590000U;
    v1 = 1;
    v0 = (*(volatile u8 *) (u32) (v0 + 7103));
    if (v0 != v1) goto L_009B1FA4;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 9072)) = (u8) v1;
L_009B1F14:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7952));
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) (a1 + 18)); goto L_009B1F2C; }
    v0 = (*(volatile u8 *) (u32) (a1 + 18));
    v1 = v0 ^ 0x1;
L_009B1F2C:;
    v0 = (s32) 0x590000U;
    a0 = 2;
    (*(volatile u8 *) (u32) (v0 + 9392)) = (u8) v1; v0 = func_00C00390(a0, a1, a2, a3);
    a1 = v0;
    a0 = 2; func_00C00440(a0, a1, a2, a3, f12.f, f13.f);
    v0 = func_002DCA30();
    if (v0 != 0) goto L_009B1FB0;
L_009B1F58:;
    goto L_009B1FD8;
L_009B1F60:;
    func_009B2300(a0, a1, a2, a3, f12.f, f13.f);
    goto L_009B1FD4;
L_009B1F70:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7952)) = (u8) 0; v0 = func_009916F0(a0);
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 9400)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (v1 + 7756));
    if (v0 == 0) goto L_009B1EAC;
    v1 = 17;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7801)) = (u8) v1; goto L_009B1EAC;
L_009B1FA4:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 9072)) = (u8) 0; goto L_009B1F14;
L_009B1FB0:;
    a1 = (s32) 0x9b0000U;
    a2 = (s32) 0x850000U;
    a0 = -9;
    a1 = (s32) ((u32) a1 + 0xc20U);
    a2 = (s32) ((u32) a2 + 0x5180U);
    a3 = 5; func_00853220(a0, a1, a2, a3);
    goto L_009B1F58;
L_009B1FD4:;
L_009B1FD8:;
    return;
}
