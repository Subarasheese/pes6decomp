/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B3350(s32, s32, s32);
s32 func_00B29C50(void);
s32 func_00B29CB0(void);
s32 func_00BBB780(s32);
s32 func_00BBB8C0(s32);

void func_00BABAD0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    v1 = 255;
    s1 = a0;
    a0 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (a0 == v1) goto L_00BABB0C;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00BABB10;
L_00BABB0C:;
    a0 = 1;
L_00BABB10:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = (s32) 0x46520000U;
    a0 = (s32) ((u32) a0 << 6);
    v0 = v0 | 0x6400;
    s0 = (s32) ((u32) v1 + (u32) a0);
    f0.i = (s32) v0;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s16 *) (u32) (s0 + 20));
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a2 = 0; v0 = func_009B3350(a0, a1, a2);
    a0 = 80; v0 = func_00BBB780(a0);
    if (v0 == 0) goto L_00BABB78;
    v0 = (s32) 0x80000U;
    (*(volatile u32 *) (u32) (s1 + 176)) = (u32) v0; goto L_00BABB80;
L_00BABB78:;
    v0 = (s32) 0x40000U;
    (*(volatile u32 *) (u32) (s1 + 176)) = (u32) v0;
L_00BABB80:;
    v0 = func_00B29CB0();
    if (v0 != 0) goto L_00BABBD4;
    v1 = (s32) 0x590000U;
    a0 = 5;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (v1 == a0) goto L_00BABBE0;
L_00BABBA4:;
    a0 = (*(volatile s32 *) (u32) (s0 + 144));
    v1 = 4;
    if (a0 == v1) goto L_00BABBF8;
    v1 = 3;
    if (a0 == v1) goto L_00BABBF8;
    v1 = 2;
    if (a0 == v1) goto L_00BABBF8;
    goto L_00BABC18;
L_00BABBD4:;
    v1 = (s32) 0x80000U;
    (*(volatile u32 *) (u32) (s1 + 176)) = (u32) v1; goto L_00BABC14;
L_00BABBE0:;
    v0 = func_00B29C50();
    if (v0 != 0) goto L_00BABBA4;
    goto L_00BABC14;
L_00BABBF8:;
    a0 = 100; v0 = func_00BBB8C0(a0);
    at = v0 < 80;
    if (at == 0) goto L_00BABC14;
    v1 = (s32) 0x80000U;
    (*(volatile u32 *) (u32) (s1 + 176)) = (u32) v1;
L_00BABC14:;
L_00BABC18:;
    return;
}
