/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s64 func_00905590(s64);
s64 func_0090B8B0(s64, s64);
s64 func_00910D80(s64, s64, s64, s64);
s64 func_00914890(s64, s64, s64, s64);
s64 func_0098EC40(s64, s64, s64, s64);
s64 func_00BDB8B0(s64, s64, s64, s64);

void func_0090D290(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[28];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    s2 = s4 & 0xff;
    { s32 c_ = s2 == 0; (*(volatile u32 *) (u32) (sp + 220)) = (u32) a1; if (c_) goto L_0090D370; }
    v0 = 255;
    if (s2 == v0) { a0 = 1; goto L_0090D2E4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s2 / (s32) v0); hi = (s32) ((s32) s2 % (s32) v0); lo = q_; }
    a0 = hi;
L_0090D2E4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = 1;
    s1 = (s32) ((u32) v0 + (u32) v1); v0 = func_0098EC40(a0, a1, a2, a3);
    v1 = (*(volatile s16 *) (u32) (s1 + 20));
    s0 = v0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (s1 + 224));
    f2.i = (s32) v1;
    f1.f = (*(volatile f32 *) (u32) (v0 + 16));
    f3.f = (f32) f2.i;
    f2.f = f1.f * f3.f;
    f1.f = f0.f * f3.f;
    fcc = f1.f <= f2.f;
    if (!fcc) goto L_0090D378;
    v0 = (s32) 0xc5000000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0090D368;
    v0 = (s32) 0x45400000U;
    f0.i = (s32) v0;
    f0.f = f2.f - f0.f;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_0090D378;
L_0090D368:;
    v0 = 0; goto L_0090D6C0;
L_0090D370:;
    v0 = 0; goto L_0090D6C0;
L_0090D378:;
    a0 = s1;
    s3 = 0; v0 = func_00910D80(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_0090D3AC;
    v0 = (*(volatile u8 *) (u32) (s1 + 468));
    if (v0 == 0) goto L_0090D3AC;
    v0 = (*(volatile u8 *) (u32) (s1 + 473));
    if (v0 != 0) goto L_0090D3AC;
    s3 = 1;
L_0090D3AC:;
    if (s3 == 0) goto L_0090D368;
    v0 = s4 & 0xff;
    s5 = 0;
    v0 = (s32) ((u32) v0 << 2);
    s6 = 0;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    fp = 0;
    v0 = (s32) 0x7fff0000U;
    s7 = 7;
    v0 = v0 | 0xffff;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0;
L_0090D3DC:;
    v1 = 1;
    if (s6 != v1) goto L_0090D408;
    v0 = (*(volatile u8 *) (u32) (s0 + 36));
    if (v0 != v1) goto L_0090D408;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7100));
    at = v0 < 3;
    if (at != 0) goto L_0090D658;
L_0090D408:;
    at = 0 < s7;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_0090D644; }
L_0090D414:;
    v0 = (*(volatile s32 *) (u32) (sp + 220));
    v0 = (s32) ((u32) v0 + (u32) s3);
    a1 = (*(volatile u8 *) (u32) v0);
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_00914890(a0, a1, a2, a3);
    s4 = v0 & 0xff;
    if (s4 == 0) goto L_0090D634;
    v0 = 255;
    if (s4 == v0) { a0 = 1; goto L_0090D44C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s4 / (s32) v0); hi = (s32) ((s32) s4 % (s32) v0); lo = q_; }
    a0 = hi;
L_0090D44C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1);
    a0 = s0; v0 = func_00910D80(a0, a1, a2, a3);
    if (v0 != 0) goto L_0090D634;
    a0 = s0;
    a1 = 1; v0 = func_0090B8B0(a0, a1);
    v0 = v0 & 0xff;
    at = v0 < 2;
    if (at == 0) goto L_0090D634;
    v1 = (*(volatile u8 *) (u32) (s0 + 477));
    v0 = 43;
    if (v1 == v0) goto L_0090D634;
    f2.f = (*(volatile f32 *) (u32) (s0 + 232));
    f1.i = f2.i & 0x7FFFFFFF;
    v0 = (s32) 0x45120000U;
    v0 = v0 | 0x8000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0090D500;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e00U);
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 144));
    f0.f = f0.f - f1.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45400000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_0090D634;
L_0090D500:;
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    f0.f = f2.f - f0.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_0090D634;
    v0 = (*(volatile u8 *) (u32) (s0 + 469));
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0; if (c_) goto L_0090D588; }
    v1 = v0 & 0xff;
    if (s2 == v1) goto L_0090D588;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0090D558; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0090D558:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 3;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 468));
    if (v1 != v0) goto L_0090D588;
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0;
L_0090D588:;
    a0 = s0; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_0090D634;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e00U);
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 79));
    if (a0 == v0) goto L_0090D634;
    a0 = s0; v0 = func_00905590(a0);
    if (v0 != 0) goto L_0090D634;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_0090D5EC; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_0090D604;
L_0090D5EC:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_0090D604:;
    f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v1 = (s32) ((u32) fp + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (sp + 176));
    at = v1 < v0;
    if (at == 0) goto L_0090D634;
    s5 = s4;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v1;
L_0090D634:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s7;
    if (v0 != 0) goto L_0090D414;
L_0090D644:;
    s6 = (s32) ((u32) s6 + 0x1U);
    fp = (s32) ((u32) fp + 0xa00U);
    v0 = s6 < 2;
    { s32 c_ = v0 != 0; s7 = (s32) ((u32) s7 + 0x8U); if (c_) goto L_0090D3DC; }
L_0090D658:;
    if (s5 == 0) goto L_0090D368;
    v0 = 255;
    if (s5 == v0) { a0 = 1; goto L_0090D678; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s5 / (s32) v0); hi = (s32) ((s32) s5 % (s32) v0); lo = q_; }
    a0 = hi;
L_0090D678:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (sp + 192));
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) s1); goto L_0090D6B0; }
    v1 = (*(volatile u8 *) (u32) s1);
    v0 = 4;
    (*(volatile u8 *) (u32) (a0 + 469)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 470)) = (u8) v0; goto L_0090D6BC;
L_0090D6B0:;
    v0 = 1;
    (*(volatile u8 *) (u32) (a0 + 469)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 470)) = (u8) v0;
L_0090D6BC:;
    v0 = s5 & 0xff;
L_0090D6C0:;
    return;
}
