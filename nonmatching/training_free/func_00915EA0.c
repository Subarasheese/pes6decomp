/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009041F0(s64, s64, s64, s64);
s64 func_009045F0(s64, s64, s64, s64);
s64 func_009051D0(s64, s64);
void func_0090BA30(s64);
s64 func_00910CE0(void);
s64 func_00910D80(s64, s64, s64, s64);
s64 func_00915200(s64, s64, s64, s64);
s64 func_00916B10(s64, s64, s64, s64, f32, f32);
s64 func_00916F00(s64, s64, s64, s64);
s64 func_009170F0(s64, s64, s64, s64);
s64 func_00917390(s64, s64, s64, s64);
s64 func_00917F90(s64, s64, s64, s64);
s64 func_0091A380(s64, s64, s64, s64);
void func_00920260(s64, s64, s64, s64);
void func_00983260(s64, s64, s64, s64);
void func_009832C0(s64, s64, s64, s64);
s64 func_0098F290(s64, s64, s64, s64);
s64 func_009B3070(s64, s64, s64, s64);
s64 func_00A07B40(s64, s64, s64, s64);
void func_00C22F70(s64, s64, s64, s64);
void func_00C231E0(s64, s64, s64, s64);
void func_00C233D0(s64, s64, s64, s64);
void func_00C23600(s64, s64, s64, s64);
s64 func_00C23A50(s64, s64, s64, s64);

s64 func_00915EA0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = 55;
    v1 = (*(volatile u8 *) (u32) (a0 + 477));
    { s32 c_ = v1 == v0; s0 = a0; if (c_) goto L_00916274; }
    v0 = 41;
    if (v1 == v0) goto L_00916274;
    v0 = 37;
    if (v1 == v0) goto L_00916274;
    v0 = 14;
    if (v1 == v0) goto L_00916274;
    v0 = 12;
    if (v1 == v0) goto L_00916274;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7956));
    if (v0 == 0) goto L_0091627C;
    v0 = 0;
L_00915F00:;
    v0 = v0 & 0xff;
    if (v0 == 0) { v0 = 0; goto L_00916610; }
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 == v0) { v0 = 0; goto L_00916610; }
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    v0 = 7;
    if (v1 != v0) { v0 = 0; goto L_00916610; }
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21182));
    if (a0 == v0) { a0 = s0; goto L_009162B8; }
    v0 = (*(volatile u8 *) (u32) (s0 + 469));
    if (v0 == 0) { a0 = s0; goto L_00915F98; }
    a0 = s0; v0 = func_00910D80(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00915F90;
    v0 = (*(volatile u8 *) (u32) (s0 + 477));
    a1 = 39;
    if (v0 == a1) goto L_00915F90;
    a0 = s0; func_009832C0(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s0 + 469));
    (*(volatile u32 *) (u32) (s0 + 488)) = (u32) v0;
L_00915F90:;
    v0 = 1; goto L_00916610;
L_00915F98:;
    func_00920260(a0, a1, a2, a3);
    v1 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) s0);
    v1 = (*(volatile u8 *) (u32) (v1 + 21249));
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 477)); goto L_009162D0; }
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21250));
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 477)); goto L_009162F4; }
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21251));
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 477)); goto L_00916318; }
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21181));
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 477)); goto L_0091633C; }
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21156));
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 477)); goto L_00916360; }
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21163));
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 477)); goto L_00916384; }
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21162));
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 477)); goto L_009163A8; }
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21164));
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 477)); goto L_009163CC; }
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21172));
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 477)); goto L_009163F0; }
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x5309U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 477)); goto L_00916414; }
    a0 = (s32) 0xcb0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x52a0U);
L_0091605C:;
    v1 = a1 & 0xff;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 52));
    if (v1 != v0) { v1 = (s32) ((u32) a1 + 0x1U); goto L_00916088; }
    v0 = (*(volatile u8 *) (u32) (s0 + 477));
    a1 = 17;
    if (v0 != a1) { a0 = s0; goto L_00916438; }
L_00916080:;
    v0 = 1; goto L_00916610;
L_00916088:;
    a1 = v1 & 0xff;
    v1 = a1 < 4;
    if (v1 != 0) goto L_0091605C;
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21173));
    if (v0 == v1) { a0 = s0; goto L_00916448; }
    v1 = (*(volatile u8 *) (u32) (s0 + 477));
    v0 = 27;
    if (v1 != v0) { a0 = s0; goto L_00916458; }
L_009160B8:;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x52b0U);
    a0 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 == v0) { a0 = s0; goto L_0091647C; }
    v1 = (*(volatile u8 *) (u32) (s0 + 477));
    v0 = 8;
    if (v1 != v0) goto L_00916268;
    a0 = s0; v0 = func_00917F90(a0, a1, a2, a3);
    if (v0 != 0) { a0 = s0; goto L_009164A4; }
    a0 = s0; v0 = func_009170F0(a0, a1, a2, a3);
    if (v0 != 0) { a0 = s0; goto L_009164B4; }
    a0 = s0; v0 = func_00917390(a0, a1, a2, a3);
    if (v0 != 0) { a0 = s0; goto L_009164C4; }
    a0 = s0; v0 = func_00916F00(a0, a1, a2, a3);
    if (v0 != 0) { a0 = s0; goto L_009164D4; }
    a0 = s0; v0 = func_00916B10(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 != 0) { a0 = s0; goto L_009164E4; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 != 0) { a0 = (*(volatile u8 *) (u32) (s0 + 19)); goto L_009164F4; }
    v0 = 0;
L_0091614C:;
    if (v0 != 0) { a0 = s0; goto L_009165BC; }
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    a1 = 28; v0 = func_009051D0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_009165CC; }
L_00916168:;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
L_0091616C:;
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) goto L_00916214;
    a0 = s0; v0 = func_0098F290(a0, a1, a2, a3);
    if (v0 == 0) goto L_00916214;
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_009161C0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_009161C0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_0098F290(a0, a1, a2, a3);
    if (v0 == 0) goto L_00916214;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 92));
    a0 = (*(volatile u16 *) (u32) (s0 + 42)); v0 = func_009B3070(a0, a1, a2, a3);
    v0 = v0 & 0xffff;
    at = v0 < 11265;
    if (at != 0) goto L_00916214;
    a0 = s0; func_00C22F70(a0, a1, a2, a3);
    v0 = 0; goto L_0091626C;
L_00916214:;
    v0 = (*(volatile u8 *) (u32) (s0 + 16));
    v0 = v0 < 36;
    if (v0 != 0) goto L_00916268;
    a0 = s0; v0 = func_00915200(a0, a1, a2, a3);
    if (v0 != 0) goto L_009165EC;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0xcb0000U;
    f3.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f2.f = (*(volatile f32 *) (u32) (s0 + 224));
    f1.f = (*(volatile f32 *) (u32) (v1 + 16));
    v0 = (s32) 0x45000000U;
    f0.i = (s32) v0;
    f2.f = f2.f * f3.f;
    f1.f = f1.f * f3.f;
    f0.f = f1.f - f0.f;
    fcc = f2.f < f0.f;
    if (fcc) goto L_009165EC;
L_00916268:;
    v0 = 0;
L_0091626C:;
    goto L_00916614;
L_00916274:;
    v0 = 0; goto L_00916610;
L_0091627C:;
    v0 = func_00A07B40(a0, a1, a2, a3);
    if (v0 != 0) goto L_00916294;
    v0 = 0; goto L_00915F00;
L_00916294:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21192));
    v0 = (*(volatile u8 *) (u32) (v0 + 9964));
    at = v1 < v0;
    if (at == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00915F00; }
    v0 = 0; goto L_00915F00;
L_009162B8:;
    a1 = 45; func_00983260(a0, a1, a2, a3);
    a0 = s0; func_0090BA30(a0);
    v0 = 1; goto L_00916610;
L_009162D0:;
    a1 = 9;
    if (v0 != a1) { a0 = s0; goto L_009162E4; }
L_009162DC:;
    v0 = 1; goto L_00916610;
L_009162E4:;
    func_009832C0(a0, a1, a2, a3);
    goto L_009162DC;
L_009162F4:;
    a1 = 10;
    if (v0 != a1) { a0 = s0; goto L_00916308; }
L_00916300:;
    v0 = 1; goto L_00916610;
L_00916308:;
    func_009832C0(a0, a1, a2, a3);
    goto L_00916300;
L_00916318:;
    a1 = 11;
    if (v0 != a1) { a0 = s0; goto L_0091632C; }
L_00916324:;
    v0 = 1; goto L_00916610;
L_0091632C:;
    func_009832C0(a0, a1, a2, a3);
    goto L_00916324;
L_0091633C:;
    a1 = 19;
    if (v0 != a1) { a0 = s0; goto L_00916350; }
L_00916348:;
    v0 = 1; goto L_00916610;
L_00916350:;
    func_009832C0(a0, a1, a2, a3);
    goto L_00916348;
L_00916360:;
    a1 = 20;
    if (v0 != a1) { a0 = s0; goto L_00916374; }
L_0091636C:;
    v0 = 1; goto L_00916610;
L_00916374:;
    func_009832C0(a0, a1, a2, a3);
    goto L_0091636C;
L_00916384:;
    a1 = 28;
    if (v0 != a1) { a0 = s0; goto L_00916398; }
L_00916390:;
    v0 = 1; goto L_00916610;
L_00916398:;
    func_009832C0(a0, a1, a2, a3);
    goto L_00916390;
L_009163A8:;
    a1 = 22;
    if (v0 != a1) { a0 = s0; goto L_009163BC; }
L_009163B4:;
    v0 = 1; goto L_00916610;
L_009163BC:;
    func_009832C0(a0, a1, a2, a3);
    goto L_009163B4;
L_009163CC:;
    a1 = 23;
    if (v0 != a1) { a0 = s0; goto L_009163E0; }
L_009163D8:;
    v0 = 1; goto L_00916610;
L_009163E0:;
    func_009832C0(a0, a1, a2, a3);
    goto L_009163D8;
L_009163F0:;
    a1 = 13;
    if (v0 != a1) { a0 = s0; goto L_00916404; }
L_009163FC:;
    v0 = 1; goto L_00916610;
L_00916404:;
    func_009832C0(a0, a1, a2, a3);
    goto L_009163FC;
L_00916414:;
    a1 = 15;
    if (v0 != a1) { a0 = s0; goto L_00916428; }
L_00916420:;
    v0 = 1; goto L_00916610;
L_00916428:;
    func_009832C0(a0, a1, a2, a3);
    goto L_00916420;
L_00916438:;
    func_009832C0(a0, a1, a2, a3);
    goto L_00916080;
L_00916448:;
    a1 = 31; func_00983260(a0, a1, a2, a3);
    v0 = 1; goto L_00916610;
L_00916458:;
    v0 = func_00910CE0();
    if (v0 == 0) goto L_009160B8;
    a0 = s0;
    a1 = 27; func_00983260(a0, a1, a2, a3);
    v0 = 1; goto L_00916610;
L_0091647C:;
    a1 = 16; func_00983260(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x52b2U);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 480)) = (u32) v1; goto L_00916610;
L_009164A4:;
    a1 = 34; func_00983260(a0, a1, a2, a3);
    v0 = 1; goto L_00916610;
L_009164B4:;
    func_00C233D0(a0, a1, a2, a3);
    v0 = 1; goto L_00916610;
L_009164C4:;
    a1 = 32; func_00983260(a0, a1, a2, a3);
    v0 = 1; goto L_00916610;
L_009164D4:;
    a1 = 26; func_00983260(a0, a1, a2, a3);
    v0 = 1; goto L_00916610;
L_009164E4:;
    a1 = 24; func_00983260(a0, a1, a2, a3);
    v0 = 1; goto L_00916610;
L_009164F4:;
    a1 = 29; v0 = func_009051D0(a0, a1);
    v0 = v0 < 2;
    if (v0 != 0) { a0 = s0; goto L_00916510; }
    v0 = 0; goto L_0091614C;
L_00916510:;
    v0 = func_009041F0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 == 0) { v0 = 0; goto L_0091614C; }
    v1 = (*(volatile u8 *) (u32) (s0 + 16));
    v0 = 9;
    if (v1 == v0) goto L_00916578;
    v0 = 8;
    if (v1 == v0) goto L_00916578;
    v0 = 6;
    if (v1 == v0) goto L_00916578;
    v0 = 7;
    if (v1 == v0) goto L_00916578;
    v0 = 2;
    if (v1 == v0) goto L_00916578;
    v0 = 1;
    if (v1 == v0) goto L_00916578;
    v0 = 0; goto L_0091614C;
L_00916578:;
    v0 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (s0 + 224));
    f1.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f0.i = (s32) 0;
    f1.f = f2.f * f1.f;
    fcc = f1.f <= f0.f;
    if (fcc) { a0 = s0; goto L_009165A4; }
    v0 = 0; goto L_0091614C;
L_009165A4:;
    v0 = func_009045F0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 0; goto L_0091614C; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0091614C;
L_009165BC:;
    a1 = 29; func_00983260(a0, a1, a2, a3);
    v0 = 1; goto L_00916610;
L_009165CC:;
    v0 = func_0091A380(a0, a1, a2, a3);
    if (v0 == 0) goto L_00916168;
    a0 = s0; func_00C231E0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s0 + 19)); goto L_0091616C;
L_009165EC:;
    a0 = s0;
    a1 = 4; v0 = func_00C23A50(a0, a1, a2, a3);
    if (v0 != 0) goto L_00916268;
    a0 = s0; func_00C23600(a0, a1, a2, a3);
    goto L_00916268;
L_00916610:;
L_00916614:;
    return v0;
}
