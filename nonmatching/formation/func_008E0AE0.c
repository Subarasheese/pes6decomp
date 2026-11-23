/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_008D90A0(s32, s32, s32, s32);
s32 func_008D9300(s32, s32, s32, s32);
void func_008E03A0(s32, s32, s32, f32, f32);
s32 func_008E1B90(s32, s32);
void func_008E1C30(s32, s32, s32);

s32 func_008E0AE0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    s3 = a0;
    s2 = a1;
    { s32 c_ = s3 != 0; s1 = a2; if (c_) goto L_008E0B14; }
    v0 = 0; goto L_008E0DA8;
L_008E0B14:;
    s0 = (*(volatile u8 *) (u32) (s3 + 2));
    a0 = s2; v0 = func_008D90A0(a0, a1, a2, a3);
    v1 = v0 & 0x60;
    v0 = 32;
    if (v1 == v0) { v1 = (*(volatile u8 *) (u32) (s3 + 1)); goto L_008E0B5C; }
    v0 = 64;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008E0B48; }
    goto L_008E0CE0;
    v0 = (s32) 0x84000000U;
L_008E0B48:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 1; goto L_008E0DA8;
    v1 = (*(volatile u8 *) (u32) (s3 + 1));
L_008E0B5C:;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffc400U);
    s4 = s0 & 0xff;
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) s4 + (u32) v0);
    a1 = (*(volatile u8 *) (u32) v0);
    a0 = (s32) ((u32) s3 + 0x18U); v0 = func_008E1B90(a0, a1);
    if (v0 != 0) { v0 = (s32) 0x84020000U; goto L_008E0BA0; }
    v0 = (s32) 0x8c000000U;
    a0 = v0 | 0x8005; SD_call(a0);
    v0 = 5; goto L_008E0DA8;
    v0 = (s32) 0x84020000U;
L_008E0BA0:;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = (*(volatile u8 *) (u32) (s3 + 1));
    v1 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 + 0xffffc400U);
    v0 = 9;
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) s4 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) v1);
    if (a0 == v0) { v0 = 1; goto L_008E0C9C; }
    v0 = 8;
    if (a0 == v0) { v0 = 1; goto L_008E0C8C; }
    v0 = 11;
    if (a0 == v0) { v0 = (*(volatile u8 *) (u32) (s3 + 20)); goto L_008E0C78; }
    v0 = 10;
    if (a0 == v0) { v0 = (*(volatile u8 *) (u32) (s3 + 19)); goto L_008E0C64; }
    v0 = 3;
    if (a0 == v0) { v0 = (*(volatile u8 *) (u32) (s3 + 12)); goto L_008E0C50; }
    v0 = 2;
    if (a0 == v0) { v0 = (*(volatile u8 *) (u32) (s3 + 11)); goto L_008E0C3C; }
    v1 = 15;
    if (a0 == v1) { v0 = 6; goto L_008E0DA8; }
    v1 = 14;
    if (a0 == v1) goto L_008E0DA8;
    v1 = (s32) ((u32) a0 + (u32) s3); goto L_008E0CAC;
    v0 = 6;
    goto L_008E0DA8;
    v0 = (*(volatile u8 *) (u32) (s3 + 11));
L_008E0C3C:;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (s3 + 11)) = (u8) v0;
    (*(volatile u8 *) (u32) (s3 + 12)) = (u8) 0; goto L_008E0CB8;
    v0 = (*(volatile u8 *) (u32) (s3 + 12));
L_008E0C50:;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (s3 + 12)) = (u8) v0;
    (*(volatile u8 *) (u32) (s3 + 11)) = (u8) 0; goto L_008E0CB8;
    v0 = (*(volatile u8 *) (u32) (s3 + 19));
L_008E0C64:;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (s3 + 19)) = (u8) v0;
    (*(volatile u8 *) (u32) (s3 + 20)) = (u8) 0; goto L_008E0CB8;
    v0 = (*(volatile u8 *) (u32) (s3 + 20));
L_008E0C78:;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (s3 + 20)) = (u8) v0;
    (*(volatile u8 *) (u32) (s3 + 19)) = (u8) 0; goto L_008E0CB8;
    v0 = 1;
L_008E0C8C:;
    (*(volatile u8 *) (u32) (s3 + 17)) = (u8) v0;
    (*(volatile u8 *) (u32) (s3 + 18)) = (u8) 0; goto L_008E0CB8;
    v0 = 1;
L_008E0C9C:;
    (*(volatile u8 *) (u32) (s3 + 18)) = (u8) v0;
    (*(volatile u8 *) (u32) (s3 + 17)) = (u8) 0; goto L_008E0CB8;
    v1 = (s32) ((u32) a0 + (u32) s3);
L_008E0CAC:;
    v0 = (*(volatile u8 *) (u32) (v1 + 9));
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (v1 + 9)) = (u8) v0;
L_008E0CB8:;
    s4 = 0;
    v0 = (s32) ((u32) s3 + (u32) s4);
L_008E0CC0:;
    a1 = s4 & 0xff;
    a2 = (*(volatile u8 *) (u32) (v0 + 9));
    a0 = (s32) ((u32) s3 + 0x18U); func_008E1C30(a0, a1, a2);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 14;
    if (v0 != 0) { v0 = (s32) ((u32) s3 + (u32) s4); goto L_008E0CC0; }
L_008E0CE0:;
    a0 = s2; v0 = func_008D9300(a0, a1, a2, a3);
    v1 = 8;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s3 + 1)); goto L_008E0D54; }
    v1 = 4;
    if (v0 == v1) goto L_008E0D50;
    v1 = 2;
    if (v0 == v1) { v0 = (s32) ((u32) s0 + 0x1U); goto L_008E0D48; }
    v1 = 1;
    if (v0 == v1) { v1 = (*(volatile u8 *) (u32) (s3 + 1)); goto L_008E0D24; }
    v0 = 0; goto L_008E0D80;
    v1 = (*(volatile u8 *) (u32) (s3 + 1));
L_008E0D24:;
    v0 = (s32) ((u32) gp + 0xffff85ccU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) s0 + (u32) v0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    s0 = v0 & 0xff; goto L_008E0D88;
    v0 = (s32) ((u32) s0 + 0x1U);
L_008E0D48:;
    s0 = v0 & 0xff; goto L_008E0D88;
L_008E0D50:;
    v0 = (*(volatile u8 *) (u32) (s3 + 1));
L_008E0D54:;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s3 + 1)); goto L_008E0D70; }
    v0 = s0 & 0xff;
    at = v0 < 8;
    if (at == 0) { v0 = (s32) 0x84000000U; goto L_008E0D8C; }
    v0 = (*(volatile u8 *) (u32) (s3 + 1));
L_008E0D70:;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (s3 + 1)) = (u8) v0; goto L_008E0D88;
    v0 = 0;
L_008E0D80:;
    goto L_008E0DA8;
L_008E0D88:;
    v0 = (s32) 0x84000000U;
L_008E0D8C:;
    a0 = v0 | 0xf802; SD_call(a0);
    a0 = s3;
    a1 = s0;
    a2 = s1; func_008E03A0(a0, a1, a2, f12.f, f13.f);
    v0 = 3;
L_008E0DA8:;
    return v0;
}
