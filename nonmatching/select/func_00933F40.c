/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_stop(s32);
s32 func_001CDAA0(void);
void func_0023FCA0(s32);
void func_00245140(s32, s32);
void func_0024DC00(s32, s32);
void func_002E9470(void);
void func_0030C2E0(s32);
void func_008B3000(s32, s32, s32, s32);
void func_00932D90(s32, s32, s32, s32, s32, s32, s32, s32, f32);
s32 func_00933530(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_009338F0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00933CD0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00933E30(s32, s32, s32, s32);

void func_00933F40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    s1 = a0;
    v0 = (*(volatile s32 *) (u32) (gp + -18772));
    s0 = (s32) 0x540000U;
    at = (u64) v0 < (u64) (s64) 9;
    { s32 c_ = at == 0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_009341F8; }
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6430U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x933f84U) goto L_00933F84; if (t_ == 0x933fa4U) goto L_00933FA4; if (t_ == 0x933fb0U) goto L_00933FB0; if (t_ == 0x933ffcU) goto L_00933FFC; if (t_ == 0x934038U) goto L_00934038; if (t_ == 0x934130U) goto L_00934130; if (t_ == 0x93419cU) goto L_0093419C; if (t_ == 0x9341c0U) goto L_009341C0; if (t_ == 0x9341f0U) goto L_009341F0; }
L_00933F84:;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v1 + 7090)) = (u16) 0;
    (*(volatile u16 *) (u32) (v0 + 7088)) = (u16) 0; func_00933E30(a0, a1, a2, a3);
    v0 = 2;
    (*(volatile u32 *) (u32) (gp + -18772)) = (u32) v0; goto L_009341F8;
L_00933FA4:;
    v0 = 2;
    (*(volatile u32 *) (u32) (gp + -18772)) = (u32) v0; goto L_009341F8;
L_00933FB0:;
    func_002E9470();
    s0 = 0;
    a0 = s0;
L_00933FC0:;
    a1 = 0; func_0024DC00(a0, a1);
    a0 = s0;
    a1 = 0; func_00245140(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 8;
    if (v0 != 0) { a0 = s0; goto L_00933FC0; }
    a0 = 0; func_0030C2E0(a0);
    v0 = (*(volatile s32 *) (u32) (gp + -18772));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18772)) = (u32) v0; goto L_009341F8;
L_00933FFC:;
    v0 = func_00933CD0(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) { v0 = 0; goto L_009341FC; }
    a0 = 344;
    a1 = 20427; func_008B3000(a0, a1, a2, a3);
    a0 = 344;
    a1 = 20190; func_008B3000(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18772));
    (*(volatile u32 *) (u32) (gp + -18776)) = (u32) 0;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18772)) = (u32) v0; goto L_009341F8;
L_00934038:;
    v0 = func_009338F0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 2;
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) (gp + -22756)); goto L_00934054; }
    goto L_00934090;
L_00934054:;
    v0 = 5;
    { s32 c_ = v1 == v0; (*(volatile u32 *) (u32) (gp + -18776)) = (u32) 0; if (c_) goto L_0093407C; }
    v0 = 9;
    if (v1 == v0) { v0 = 8; goto L_00934074; }
    v1 = 1; goto L_00934084;
L_00934074:;
    (*(volatile u32 *) (u32) (gp + -18772)) = (u32) v0; goto L_00934090;
L_0093407C:;
    (*(volatile u32 *) (u32) (gp + -18772)) = (u32) v0; goto L_00934090;
L_00934084:;
    v0 = 6;
    (*(volatile u16 *) (u32) (s0 + 6)) = (u16) v1;
    (*(volatile u32 *) (u32) (gp + -18772)) = (u32) v0;
L_00934090:;
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -15610));
    if (v0 != 0) { (*(volatile u32 *) (u32) (gp + -18776)) = (u32) 0; goto L_009341F8; }
    v0 = (s32) 0x8e0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -15824));
    if (v0 != 0) { (*(volatile u32 *) (u32) (gp + -18776)) = (u32) 0; goto L_009340D4; }
    v0 = (s32) 0x8e0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -15760));
    if (v0 != 0) goto L_009340D0;
    v0 = (*(volatile s32 *) (u32) (gp + -18776));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18776)) = (u32) v0; goto L_009340D4;
L_009340D0:;
    (*(volatile u32 *) (u32) (gp + -18776)) = (u32) 0;
L_009340D4:;
    v0 = func_001CDAA0();
    v1 = (s32) 0x3c0000U;
    a0 = (*(volatile s32 *) (u32) (gp + -18776));
    v1 = (s32) ((u32) v1 + 0x54c0U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 1);
    v0 = a0 < v0;
    if (v0 != 0) goto L_009341F8;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x9a080000U;
    (*(volatile u8 *) (u32) (v0 + 7177)) = (u8) 0;
    a0 = v1 | 0x400; SD_stop(a0);
    v0 = 7;
    (*(volatile u32 *) (u32) (gp + -18772)) = (u32) v0; goto L_009341F8;
L_00934130:;
    v1 = (*(volatile s32 *) (u32) (gp + -22756));
    v0 = 5;
    if (v1 == v0) { v1 = 12; goto L_00934178; }
    v0 = 9;
    if (v1 == v0) goto L_00934154;
    goto L_009341F8;
L_00934154:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7177)) = (u8) 0; v0 = func_00933530(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_009341F8;
    a0 = 6; func_0023FCA0(a0);
    goto L_009341F8;
L_00934178:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7177)) = (u8) v1; v0 = func_00933530(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_009341F8;
    a0 = 4; func_0023FCA0(a0);
    goto L_009341F8;
L_0093419C:;
    v0 = func_00933530(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_009341F8;
    (*(volatile u32 *) (u32) (gp + -18772)) = (u32) 0;
    v0 = 1;
    (*(volatile u16 *) (u32) s1) = (u16) v0;
    v0 = 2; goto L_009341FC;
L_009341C0:;
    v0 = func_00933530(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_009341F8;
    v1 = 255;
    v0 = (s32) 0x590000U;
    a0 = 5;
    (*(volatile u8 *) (u32) (v0 + 7177)) = (u8) v1;
    (*(volatile u32 *) (u32) (gp + -18776)) = (u32) 0; func_0023FCA0(a0);
    goto L_009341F8;
L_009341F0:;
    a0 = (s32) ((u32) gp + 0xffffb6acU); func_00932D90(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
L_009341F8:;
    v0 = 0;
L_009341FC:;
    return;
}
