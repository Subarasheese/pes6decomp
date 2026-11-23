/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0028F190(s64, s64);
s64 func_0028F5B0(s64, s64, s64, s64);
s64 func_00292F30(s64, s64);
s64 func_002937A0(s64);
void func_002CA0F0(s64);
s64 func_008B9680(s64);
s64 func_008BE070(s64, s64, s64, s64);
s64 func_008C3B70(s64, s64, s64);

s64 func_008C4AD0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    fp = a1;
    s5 = a0;
    a0 = (s32) ((u32) sp + 0xa0U);
    s2 = 32;
    func_002CA0F0(a0);
    v1 = fp & 0xff;
    at = v1 < 11;
    if (at == 0) { v0 = (s32) ((u32) v1 + (u32) s5); goto L_008C4C10; }
    v0 = (*(volatile u8 *) (u32) (s5 + 4));
    s6 = 0;
    at = v0 < 12;
    { s32 c_ = at != 0; s4 = (s64) ((u64) 0 + (u64) (s64) 11); if (c_) goto L_008C4D58; }
    s7 = (s32) ((u32) s5 + (u32) v1);
    s1 = s4 & 0xff;
L_008C4B3C:;
    v0 = (s32) ((u32) s5 + (u32) s1);
    s3 = (*(volatile u8 *) (u32) (v0 + 1894));
    s0 = (s32) ((u32) s5 + (u32) s3);
    v0 = (*(volatile u8 *) (u32) (s0 + 403));
    if (v0 != 0) goto L_008C4BF0;
    v0 = (*(volatile u8 *) (u32) (s0 + 51));
    if (v0 == 0) goto L_008C4BF0;
    v0 = (*(volatile u8 *) (u32) (s0 + 83));
    if (v0 == 0) goto L_008C4BF0;
    a0 = 0; v0 = func_008B9680(a0);
    a1 = s3;
    a0 = s5;
    a2 = 0;
    a3 = v0; v0 = func_008BE070(a0, a1, a2, a3);
    if (v0 == 0) goto L_008C4BF0;
    a1 = (*(volatile u8 *) (u32) (s0 + 179));
    a0 = (*(volatile u8 *) (u32) (s0 + 147)); v0 = func_0028F190(a0, a1);
    s0 = v0 & 0xff;
    a0 = 0; v0 = func_008B9680(a0);
    v1 = (*(volatile u8 *) (u32) (s5 + 1854));
    a1 = v0;
    a3 = s0 & 0xff;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s7 + (u32) v0);
    a2 = (*(volatile u8 *) (u32) (v0 + 2026));
    a0 = (s32) ((u32) sp + 0xa0U); v0 = func_0028F5B0(a0, a1, a2, a3);
    at = s6 < v0;
    if (at == 0) goto L_008C4BF0;
    s6 = v0;
    s2 = s1;
L_008C4BF0:;
    v0 = (s32) ((u32) s4 + 0x1U);
    s4 = v0 & 0xff;
    v0 = (*(volatile u8 *) (u32) (s5 + 4));
    v0 = s4 < v0;
    if (v0 != 0) { s1 = s4 & 0xff; goto L_008C4B3C; }
    goto L_008C4D58;
L_008C4C10:;
    a0 = (*(volatile u8 *) (u32) (v0 + 1894));
    v1 = (s32) ((u32) a0 + (u32) s5);
    v0 = (*(volatile u8 *) (u32) (v1 + 403));
    if (v0 != 0) { v0 = 0; goto L_008C4D7C; }
    v0 = (*(volatile u8 *) (u32) (v1 + 51));
    if (v0 == 0) goto L_008C4C3C;
    v0 = (*(volatile u8 *) (u32) (v1 + 83));
    if (v0 != 0) { v0 = (s32) ((u32) a0 << 2); goto L_008C4C48; }
L_008C4C3C:;
    v0 = 0;
    goto L_008C4D7C;
L_008C4C48:;
    s6 = 2000;
    v0 = (s32) ((u32) v0 + (u32) a0);
    s3 = 0;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    s7 = (s32) ((u32) v0 << 2);
    s4 = s3 & 0xff;
L_008C4C64:;
    v0 = (s32) ((u32) s5 + (u32) s4);
    s1 = (*(volatile u8 *) (u32) (v0 + 1894));
    s0 = (s32) ((u32) s5 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) (s0 + 83));
    if (v0 == 0) goto L_008C4D40;
    v1 = (*(volatile u8 *) (u32) (s5 + 1854));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s5 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s4);
    a0 = (*(volatile u8 *) (u32) (v0 + 2026)); v0 = func_002937A0(a0);
    v1 = (*(volatile s32 *) (u32) (s5 + 756));
    a1 = v0;
    a0 = (s32) ((u32) v1 + (u32) s7); v0 = func_00292F30(a0, a1);
    v0 = v0 & 0xff;
    if (v0 == 0) goto L_008C4D40;
    a0 = 0; v0 = func_008B9680(a0);
    a1 = s1;
    a3 = v0;
    a0 = s5;
    a2 = 0; v0 = func_008BE070(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s0 + 179));
    a0 = (*(volatile u8 *) (u32) (s0 + 147)); v0 = func_0028F190(a0, a1);
    s0 = v0 & 0xff;
    a0 = 0; v0 = func_008B9680(a0);
    v1 = (*(volatile u8 *) (u32) (s5 + 1854));
    a1 = v0;
    a3 = s0 & 0xff;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s5 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s4);
    a2 = (*(volatile u8 *) (u32) (v0 + 2026));
    a0 = (s32) ((u32) sp + 0xa0U); v0 = func_0028F5B0(a0, a1, a2, a3);
    at = v0 < s6;
    if (at == 0) goto L_008C4D40;
    s6 = v0;
    s2 = s4;
L_008C4D40:;
    v0 = (s32) ((u32) s3 + 0x1U);
    s3 = v0 & 0xff;
    v0 = s3 < 11;
    if (v0 != 0) { s4 = s3 & 0xff; goto L_008C4C64; }
L_008C4D58:;
    v0 = 32;
    if (s2 == v0) { v0 = 0; goto L_008C4D7C; }
    a1 = s2 & 0xff;
    a0 = s5;
    a2 = fp; v0 = func_008C3B70(a0, a1, a2);
    goto L_008C4D7C;
L_008C4D7C:;
    return v0;
}
