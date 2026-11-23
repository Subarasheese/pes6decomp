/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s32, s32);
void func_001D7D60(s32, s32);
void func_001DF420(s32, s32);
void func_001DF4F0(s32, s32);
s32 func_002D5410(void);
void func_002D5630(s32, s32);
s32 func_002F9630(s32);
s32 func_002F96F0(s32, s32);
void func_00925470(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_00924BA0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    a1 = 0;
    a2 = 48;
    s0 = a0;
    (*(volatile u32 *) (u32) (gp + -19844)) = (u32) 0;
    a0 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xfffff6f0U); memset(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (gp + -19844));
    a0 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    a0 = (s32) ((u32) a0 + 0xfffff6f0U);
    a1 = (s32) ((u32) a2 << 1);
    v1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) a1 << 4);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) v1; v0 = func_002D5410();
    a0 = (*(volatile s32 *) (u32) (gp + -19844));
    v1 = (s32) ((u32) gp + 0xffffb280U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 28)) = (u32) v0; func_00925470(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -19844));
    v1 = (s32) ((u32) gp + 0xffffb280U);
    a0 = 1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 44)) = (u32) a0;
    v0 = (*(volatile s32 *) (u32) (gp + -19844));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 40));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_00924D00;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s1 = v0;
    { s32 c_ = s1 <= 0; s2 = 0; if (c_) goto L_00924CA8; }
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
L_00924C70:;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 1; func_001D7D60(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s1;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_00924C70; }
L_00924CA8:;
    s2 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
L_00924CB0:;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00924CE0;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_00924CE0:;
    a0 = s1;
    a1 = 1; func_001DF4F0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 6;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_00924CB0; }
L_00924D00:;
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 40));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_00924DD0;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s1 = v0;
    { s32 c_ = s1 <= 0; s2 = 0; if (c_) goto L_00924D78; }
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
L_00924D3C:;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 255; func_001D76B0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s1;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_00924D3C; }
L_00924D78:;
    s2 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
L_00924D80:;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00924DB0;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_00924DB0:;
    a0 = s1;
    a1 = 255; func_001DF420(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 6;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_00924D80; }
L_00924DD0:;
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_00924DF0; }
    at = s0 < 31;
    if (at != 0) { s0 = 1; goto L_00924DEC; }
    s0 = (s32) ((u32) s0 + 0xffffffe2U); goto L_00924DEC;
L_00924DEC:;
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
L_00924DF0:;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    a1 = s0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x20U); func_002D5630(a0, a1);
    return;
}
