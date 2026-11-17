/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00274200(s32, s32, s32, s32);
s32 func_00991470(s32, s32, s32, s32);
s32 func_00BDBB60(s32, s32, s32, s32);

s32 func_00274370(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { 0 };
    s32 fcc = 0;

    a1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x2980U);
    a2 = (*(volatile u8 *) (u32) (a0 + 18));
    s0 = a0;
    v1 = (*(volatile u8 *) (u32) (a0 + 17));
    v0 = (s32) ((u32) a2 << 4);
    a0 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) v0 - (u32) a0);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a0 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a1 + (u32) v1);
    a0 = 1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s2 = (s32) ((u32) v0 + 0xf8U); v0 = func_00991470(a0, a1, a2, a3);
    s1 = v0;
    a0 = 0; v0 = func_00991470(a0, a1, a2, a3);
    a0 = s0;
    a1 = 1;
    s0 = v0;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 10168));
    if (v0 == 0) a1 = 0; v0 = func_00274200(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (s2 + 5));
    v1 = s1 < 10;
    (*(volatile u8 *) (u32) (s2 + 4)) = (u8) a0;
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (s2 + 6)) = (u8) 0; if (c_) goto L_00274420; }
    at = s0 < 10;
    if (at == 0) goto L_00274490;
L_00274420:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) 0;
    f12.f = (*(volatile f32 *) (u32) (v0 + 16));
    fcc = f12.f < f0.f;
    if (!fcc) { s3 = 1; goto L_0027443C; }
    s3 = -1;
L_0027443C:;
    f13.f = (*(volatile f32 *) (u32) (v0 + 24)); v0 = func_00BDBB60(a0, a1, a2, a3);
    v1 = s3 ^ v0;
    at = s1 < s0;
    { s32 c_ = at == 0; v1 = (u64) v1 < (u64) (s64) 1; if (c_) goto L_00274474; }
    if (v1 == 0) { v1 = s1 < 3; goto L_00274460; }
    v1 = s1 < 6;
L_00274460:;
    if (v1 == 0) goto L_00274490;
    v1 = 1;
    (*(volatile u8 *) (u32) (s2 + 6)) = (u8) v1; goto L_00274490;
L_00274474:;
    if (v1 == 0) { v1 = s0 < 3; goto L_00274480; }
    v1 = s0 < 6;
L_00274480:;
    if (v1 == 0) goto L_00274490;
    v1 = 2;
    (*(volatile u8 *) (u32) (s2 + 6)) = (u8) v1;
L_00274490:;
    v1 = 1;
    (*(volatile u8 *) (u32) (s2 + 7)) = (u8) v1;
    return v0;
}
