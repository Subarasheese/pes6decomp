/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00997EF0(s32);
s32 func_009E1C90(s32);
s32 func_00AB38D0(s32);
s32 func_00BF6280(void);

s32 func_00A11500(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    v0 = 251;
    v1 = (*(volatile u8 *) (u32) (a0 + 22));
    { s32 c_ = v1 == v0; s0 = a0; if (c_) goto L_00A11578; }
    v0 = (*(volatile u8 *) (u32) (s0 + 16));
    if (v0 == 0) goto L_00A11580;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v1 == v0) goto L_00A11580;
    v0 = func_00997EF0(a0);
    if (v0 != 0) goto L_00A11580;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e50U);
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 == v0) goto L_00A11580;
    v0 = 1; goto L_00A11768;
L_00A11578:;
    v0 = 0; goto L_00A11768;
L_00A11580:;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v1 + 1148));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00A1159C; }
L_00A1159C:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46560000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00A11694;
    f0.f = (*(volatile f32 *) (u32) (v1 + 2940));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00A115DC; }
L_00A115DC:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x460a0000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00A11694;
    a0 = 1; v0 = func_009E1C90(a0);
    v1 = v0 & 0xff;
    v0 = 12;
    if (v1 == v0) goto L_00A1169C;
L_00A1161C:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v1 == v0) goto L_00A116B4;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = 11;
    v1 = (*(volatile u16 *) (u32) (v1 + 132));
    if (v1 != v0) goto L_00A116B4;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9950));
    { s32 c_ = v0 < 0; f1.f = (*(volatile f32 *) (u32) (v1 + 9944)); if (c_) goto L_00A11664; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_00A11680;
L_00A11664:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00A11680:;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00A116B4;
    v0 = 1; goto L_00A11768;
L_00A11694:;
    v0 = 1; goto L_00A11768;
L_00A1169C:;
    v0 = func_00BF6280();
    if (v0 == 0) { v0 = 1; goto L_00A11768; }
    goto L_00A1161C;
L_00A116B4:;
    a0 = s0; v0 = func_00AB38D0(a0);
    v1 = 65;
    if (v0 == v1) { v0 = 0; goto L_00A11768; }
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s0);
    a0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v1 == a0) { v0 = 0; goto L_00A11768; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7956));
    if (v0 != 0) goto L_00A1175C;
    if (a0 == 0) goto L_00A116FC;
    if (v1 != a0) goto L_00A1175C;
L_00A116FC:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (v1 == v0) goto L_00A11764;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9950));
    { s32 c_ = v0 < 0; f1.f = (*(volatile f32 *) (u32) (v1 + 9944)); if (c_) goto L_00A1172C; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_00A11748;
L_00A1172C:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00A11748:;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00A11764;
    v0 = 1; goto L_00A11768;
L_00A1175C:;
    v0 = 1; goto L_00A11768;
L_00A11764:;
    v0 = 0;
L_00A11768:;
    return v0;
}
