/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6MatchContext_GetHalf(void);
s32 func_0030ED20(s32, s32);
s32 func_00310CF0(s32);
s32 func_00339440(s32, s32, s32);
s32 func_00340590(f32, f32);
s32 func_003405E0(f32, f32);
s32 func_00340C80(f32);
s32 func_009B3070(s32, s32, s32, s32);

s32 func_003469F0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    v0 = (*(volatile u8 *) (u32) (a0 + 19));
    s0 = (*(volatile s16 *) (u32) (a1 + 20));
    v1 = (s32) ((u32) v0 << 2);
    a0 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (a1 + 19));
    v0 = (s32) ((u32) v0 + 0x1ee0U);
    a0 = (s32) ((u32) a0 + 0x1e80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.f = f1.f - f0.f;
    f2.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x44a00000U;
    f0.i = (s32) v0;
    fcc = f2.f < f0.f;
    if (!fcc) { a1 = (*(volatile u8 *) (u32) (s2 + 18)); goto L_00346A88; }
    f0.f = (*(volatile f32 *) (u32) (s2 + 224));
    fcc = f0.f == f1.f;
    if (!fcc) goto L_00346A84;
    v0 = 1; goto L_00346CB0;
L_00346A84:;
    a1 = (*(volatile u8 *) (u32) (s2 + 18));
L_00346A88:;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 154));
    v0 = v0 & 0x7f;
    at = v0 < 91;
    if (at != 0) { v0 = (*(volatile u8 *) (u32) (s2 + 16)); goto L_00346AE0; }
    v0 = 2; goto L_00346CB0;
L_00346AE0:;
    if (v0 != 0) { a1 = (*(volatile u8 *) (u32) s3); goto L_00346B1C; }
    f0.i = (s32) s0;
    f2.f = (f32) f0.i;
    f1.f = (*(volatile f32 *) (u32) (s2 + 224));
    f0.f = (*(volatile f32 *) (u32) (s2 + 232));
    f12.f = f1.f * f2.f;
    f13.f = f0.f * f2.f; v0 = func_00340590(f12.f, f13.f);
    if (v0 == 0) goto L_00346B18;
    v0 = 3; goto L_00346CB0;
L_00346B18:;
    a1 = (*(volatile u8 *) (u32) s3);
L_00346B1C:;
    a0 = (s32) ((u32) sp + 0x6cU); v0 = func_0030ED20(a0, a1);
    a1 = (*(volatile u8 *) (u32) s3);
    a0 = (s32) ((u32) sp + 0x68U); v0 = func_0030ED20(a0, a1);
    v1 = (*(volatile s32 *) (u32) (sp + 108));
    v0 = 2;
    if (v1 == v0) { v0 = 4; goto L_00346CB0; }
    v0 = 1;
    if (v1 != v0) goto L_00346B64;
    v0 = (*(volatile s32 *) (u32) (sp + 104));
    if (v0 == 0) goto L_00346B64;
    v0 = 4;
    goto L_00346CB0;
L_00346B64:;
    v0 = Pes6MatchContext_GetHalf();
    v1 = 1;
    if (v0 != v1) { v1 = (*(volatile u8 *) (u32) (s3 + 22)); goto L_00346BE0; }
    a0 = 0; v0 = func_00310CF0(a0);
    s4 = v0;
    a0 = 1; v0 = func_00310CF0(a0);
    v1 = (s32) ((u32) s4 + (u32) v0);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7120));
    at = v0 < v1;
    if (at == 0) goto L_00346BDC;
    a2 = (*(volatile u8 *) (u32) (s3 + 18));
    a0 = s1;
    a1 = 8; v0 = func_00339440(a0, a1, a2);
    s1 = v0;
    v0 = (s32) 0x41700000U;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    at = s1 < v0;
    if (at == 0) goto L_00346BDC;
    v0 = 9; goto L_00346CB0;
L_00346BDC:;
    v1 = (*(volatile u8 *) (u32) (s3 + 22));
L_00346BE0:;
    v0 = 13;
    if (v1 != v0) { v0 = 0; goto L_00346C58; }
    a1 = (*(volatile u16 *) (u32) (s3 + 40));
    a0 = (*(volatile u16 *) (u32) (s2 + 38)); v0 = func_009B3070(a0, a1, a2, a3);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_00346C54;
    a1 = (*(volatile u16 *) (u32) (s3 + 40));
    a0 = (*(volatile u16 *) (u32) (s2 + 40)); v0 = func_009B3070(a0, a1, a2, a3);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_00346C54;
    v0 = (*(volatile u8 *) (u32) s2);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s3);
    a1 = (*(volatile u16 *) (u32) (v0 + 296));
    a0 = (*(volatile u16 *) (u32) (s2 + 38)); v0 = func_009B3070(a0, a1, a2, a3);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_00346C54;
    v0 = 1; goto L_00346C58;
L_00346C54:;
    v0 = 0;
L_00346C58:;
    if (v0 == 0) goto L_00346C68;
    v0 = 5; goto L_00346CB0;
L_00346C68:;
    f0.i = (s32) s0;
    v1 = (s32) 0x590000U;
    f2.f = (f32) f0.i;
    v0 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 7768));
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f12.f = f1.f * f2.f;
    f13.f = f0.f * f2.f; v0 = func_003405E0(f12.f, f13.f);
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) (s2 + 22)); goto L_00346C9C; }
    v0 = 8; goto L_00346CB0;
L_00346C9C:;
    v0 = 2;
    if (v1 != v0) { v0 = 0; goto L_00346CB0; }
    v0 = 7; goto L_00346CB0;
L_00346CB0:;
    return v0;
}
