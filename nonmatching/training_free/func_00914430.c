/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00914430(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0x41800000U;
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (v1 + 24));
    f0.f = f0.f / f1.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_0091445C; }
L_0091445C:;
    v1 = (s32) ((u32) v0 + 0x800U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 == 0) { a3 = (*(volatile u8 *) (u32) (a0 + 19)); goto L_009147C4; }
    v0 = v0 & 0xff;
    a3 = (s32) ((u32) a1 + 0x200U);
    a4 = (s32) ((u32) v0 << 2);
    a4 = (s32) ((u32) a4 + (u32) a0);
    a4 = (*(volatile s32 *) (u32) (a4 + 344));
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    at = (u64) a4 < (u64) a3;
    if (at == 0) goto L_00914510;
    a3 = 255;
    if (v0 == a3) { a5 = 1; goto L_009144A8; }
    a3 = 23;
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a3); hi = (s32) ((s32) v0 % (s32) a3); lo = q_; }
    a5 = hi;
L_009144A8:;
    a3 = (s32) ((u32) a5 << 3);
    a4 = (s32) 0x590000U;
    a5 = (s32) ((u32) a3 + (u32) a5);
    a4 = (s32) ((u32) a4 + 0xffffe620U);
    a5 = (s32) ((u32) a5 << 6);
    a3 = (s32) 0xcb0000U;
    a4 = (s32) ((u32) a4 + (u32) a5);
    f1.f = (*(volatile f32 *) (u32) a4);
    f0.f = (*(volatile f32 *) (u32) (a3 + 21280));
    f0.f = f0.f - f1.f;
    f0.i = (s32) f0.f;
    a4 = f0.i;
    if (a4 <= 0) { a4 = (s32) ((u32) 0 - (u32) a4); goto L_009144E4; }
L_009144E4:;
    { s32 c_ = a1 >= 0; a3 = (s32) a1 >> 2; if (c_) goto L_009144F4; }
    a3 = (s32) ((u32) a1 + 0x3U);
    a3 = (s32) a3 >> 2;
L_009144F4:;
    a3 = (s32) ((u32) a1 + (u32) a3);
    a3 = (s32) ((u32) a3 + 0x200U);
    at = a4 < a3;
    if (at == 0) goto L_00914510;
    v0 = v0 & 0xff; goto L_00914514;
L_00914510:;
    v0 = 0;
L_00914514:;
    v0 = v0 & 0xff;
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != 0) goto L_009145E8;
    a3 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (s32) ((u32) a3 << 2);
    v0 = (s32) ((u32) v0 + (u32) a3);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a5 = (*(volatile u8 *) (u32) (v0 + 436));
    v0 = (s32) ((u32) a5 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a3 = (*(volatile s32 *) (u32) (v0 + 344));
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (u64) a3 < (u64) v0;
    if (at == 0) goto L_009145DC;
    v0 = 255;
    if (a5 == v0) { a4 = 1; goto L_00914578; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a5 / (s32) v0); hi = (s32) ((s32) a5 % (s32) v0); lo = q_; }
    a4 = hi;
L_00914578:;
    v0 = (s32) ((u32) a4 << 3);
    a3 = (s32) 0x590000U;
    a4 = (s32) ((u32) v0 + (u32) a4);
    a3 = (s32) ((u32) a3 + 0xffffe620U);
    a4 = (s32) ((u32) a4 << 6);
    v0 = (s32) 0xcb0000U;
    a3 = (s32) ((u32) a3 + (u32) a4);
    f1.f = (*(volatile f32 *) (u32) a3);
    f0.f = (*(volatile f32 *) (u32) (v0 + 21280));
    f0.f = f0.f - f1.f;
    f0.i = (s32) f0.f;
    a3 = f0.i;
    if (a3 <= 0) { a3 = (s32) ((u32) 0 - (u32) a3); goto L_009145B4; }
L_009145B4:;
    { s32 c_ = a1 >= 0; v0 = (s32) a1 >> 2; if (c_) goto L_009145C4; }
    v0 = (s32) ((u32) a1 + 0x3U);
    v0 = (s32) v0 >> 2;
L_009145C4:;
    v0 = (s32) ((u32) a1 + (u32) v0);
    at = a3 < v0;
    if (at == 0) goto L_009145DC;
    v0 = a5 & 0xff; goto L_009145E0;
L_009145DC:;
    v0 = 0;
L_009145E0:;
    v0 = v0 & 0xff;
    (*(volatile u32 *) (u32) a2) = (u32) v0;
L_009145E8:;
    a6 = (*(volatile s32 *) (u32) a2);
    if (a6 == 0) goto L_009147BC;
    v0 = 255;
    if (a6 == v0) { a4 = 1; goto L_0091460C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) v0); hi = (s32) ((s32) a6 % (s32) v0); lo = q_; }
    a4 = hi;
L_0091460C:;
    v0 = (s32) ((u32) a4 << 3);
    a3 = (s32) 0x590000U;
    a4 = (s32) ((u32) v0 + (u32) a4);
    a3 = (s32) ((u32) a3 + 0xffffe5b0U);
    a5 = (s32) ((u32) a4 << 6);
    v0 = (s32) 0x590000U;
    a4 = (*(volatile u8 *) (u32) (v0 + 7756));
    { s32 c_ = a6 != a4; a5 = (s32) ((u32) a3 + (u32) a5); if (c_) goto L_00914640; }
    at = a1 < v1;
    if (at == 0) goto L_00914640;
    a1 = v1;
L_00914640:;
    f2.f = (*(volatile f32 *) (u32) (a5 + 232));
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f1.f = f0.f - f2.f;
    f0.i = (s32) f1.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00914660; }
L_00914660:;
    at = v0 < a1;
    if (at == 0) goto L_0091469C;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00914684; }
    v0 = -1;
L_00914684:;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    f0.i = (s32) a3;
    v0 = (s32) 0xcb0000U;
    f0.f = (f32) f0.i;
    f0.f = f2.f + f0.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f;
L_0091469C:;
    if (a4 == 0) goto L_00914750;
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 == a4) goto L_00914750;
    v0 = (*(volatile s32 *) (u32) (a0 + 272));
    at = (s32) 0x790000U;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00914750;
    v0 = 255;
    if (a4 == v0) { a4 = 1; goto L_009146DC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a4 / (s32) v0); hi = (s32) ((s32) a4 % (s32) v0); lo = q_; }
    a4 = hi;
L_009146DC:;
    a3 = (s32) ((u32) a4 << 3);
    v0 = (s32) 0x590000U;
    a3 = (s32) ((u32) a3 + (u32) a4);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a3 = (s32) ((u32) a3 << 6);
    a5 = (s32) ((u32) v0 + (u32) a3);
    f2.f = (*(volatile f32 *) (u32) (a5 + 232));
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f1.f = f0.f - f2.f;
    f0.i = (s32) f1.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00914714; }
L_00914714:;
    at = v0 < v1;
    if (at == 0) goto L_00914750;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00914738; }
    v0 = -1;
L_00914738:;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    f0.i = (s32) v1;
    v0 = (s32) 0xcb0000U;
    f0.f = (f32) f0.i;
    f0.f = f2.f + f0.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f;
L_00914750:;
    v0 = (s32) 0xcb0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 21280));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_009147B4;
    f2.f = (*(volatile f32 *) (u32) (a5 + 232));
    f1.f = (*(volatile f32 *) (u32) (a0 + 232));
    f0.i = (s32) 0;
    f1.f = f1.f - f2.f;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_0091479C; }
    v0 = -1;
L_0091479C:;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    f0.i = (s32) v1;
    v0 = (s32) 0xcb0000U;
    f0.f = (f32) f0.i;
    f0.f = f2.f - f0.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f;
L_009147B4:;
    (*(volatile u16 *) (u32) (a0 + 462)) = (u16) 0;
    (*(volatile u16 *) (u32) (a0 + 464)) = (u16) 0;
L_009147BC:;
    v0 = (*(volatile u8 *) (u32) a2); goto L_00914884;
L_009147C4:;
    v0 = (s32) ((u32) a3 << 2);
    v0 = (s32) ((u32) v0 + (u32) a3);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a5 = (*(volatile u8 *) (u32) (v0 + 436));
    v0 = (s32) ((u32) a5 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a3 = (*(volatile s32 *) (u32) (v0 + 344));
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (u64) a3 < (u64) v0;
    if (at == 0) goto L_00914874;
    v0 = 255;
    if (a5 == v0) { a4 = 1; goto L_00914810; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a5 / (s32) v0); hi = (s32) ((s32) a5 % (s32) v0); lo = q_; }
    a4 = hi;
L_00914810:;
    v0 = (s32) ((u32) a4 << 3);
    a3 = (s32) 0x590000U;
    a4 = (s32) ((u32) v0 + (u32) a4);
    a3 = (s32) ((u32) a3 + 0xffffe620U);
    a4 = (s32) ((u32) a4 << 6);
    v0 = (s32) 0xcb0000U;
    a3 = (s32) ((u32) a3 + (u32) a4);
    f1.f = (*(volatile f32 *) (u32) a3);
    f0.f = (*(volatile f32 *) (u32) (v0 + 21280));
    f0.f = f0.f - f1.f;
    f0.i = (s32) f0.f;
    a3 = f0.i;
    if (a3 <= 0) { a3 = (s32) ((u32) 0 - (u32) a3); goto L_0091484C; }
L_0091484C:;
    { s32 c_ = a1 >= 0; v0 = (s32) a1 >> 2; if (c_) goto L_0091485C; }
    v0 = (s32) ((u32) a1 + 0x3U);
    v0 = (s32) v0 >> 2;
L_0091485C:;
    v0 = (s32) ((u32) a1 + (u32) v0);
    at = a3 < v0;
    if (at == 0) goto L_00914874;
    v0 = a5 & 0xff; goto L_00914878;
L_00914874:;
    v0 = 0;
L_00914878:;
    v0 = v0 & 0xff;
    (*(volatile u32 *) (u32) a2) = (u32) v0; goto L_009145E8;
L_00914884:;
    return v0;
}
