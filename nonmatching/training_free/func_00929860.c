/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002CA7A0(s32, s32, s32, s32);
void func_00926200(s32, s32, s32, s32);
void func_00926680(s32, s32, s32, s32);
void func_00926910(s32, s32);
void func_00929A80(s32, s32, s32, s32);
void func_0092C4C0(s32, s32, s32, s32, f32, f32);
void func_009832C0(s32, s32, s32, s32);

void func_00929860(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    func_00926680(a0, a1, a2, a3);
    a0 = 0;
    a1 = 1; func_00926910(a0, a1);
    s1 = (s32) 0x590000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0xffffe7f0U);
L_0092988C:;
    a0 = s1; v0 = func_002CA7A0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00929A48;
    a0 = s1;
    a1 = 1; func_009832C0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_00929978;
    f3.f = (*(volatile f32 *) (u32) (s1 + 224));
    f2.f = (*(volatile f32 *) (u32) (s1 + 232));
    f1.i = f3.i & 0x7FFFFFFF;
    v0 = (s32) 0x46620000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00929918;
    f0.i = (s32) 0;
    fcc = f3.f < f0.f;
    if (!fcc) { v0 = 1; goto L_009298F8; }
    v0 = -1;
L_009298F8:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46620000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f3.f = f0.f * f1.f;
L_00929918:;
    f1.i = f2.i & 0x7FFFFFFF;
    v0 = (s32) 0x46180000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00929970;
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00929950; }
    v0 = -1;
L_00929950:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46180000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f2.f = f0.f * f1.f;
L_00929970:;
    (*(volatile f32 *) (u32) (s1 + 108)) = f3.f;
    (*(volatile f32 *) (u32) (s1 + 112)) = f2.f;
L_00929978:;
    a0 = s1; func_00929A80(a0, a1, a2, a3);
    v0 = (s32) 0xcb0000U;
    v1 = (s32) 0xcb0000U;
    f3.f = (*(volatile f32 *) (u32) (v0 + 21276));
    f2.f = (*(volatile f32 *) (u32) (v1 + 21280));
    f1.i = f3.i & 0x7FFFFFFF;
    v0 = (s32) 0x46620000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_009299E8;
    f0.i = (s32) 0;
    fcc = f3.f < f0.f;
    if (!fcc) { v0 = 1; goto L_009299C8; }
    v0 = -1;
L_009299C8:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46620000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f3.f = f0.f * f1.f;
L_009299E8:;
    f1.i = f2.i & 0x7FFFFFFF;
    v0 = (s32) 0x46180000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00929A40;
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00929A20; }
    v0 = -1;
L_00929A20:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46180000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f2.f = f0.f * f1.f;
L_00929A40:;
    (*(volatile f32 *) (u32) (s1 + 108)) = f3.f;
    (*(volatile f32 *) (u32) (s1 + 112)) = f2.f;
L_00929A48:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 22;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_0092988C; }
    func_0092C4C0(a0, a1, a2, a3, f12.f, f13.f);
    func_00926200(a0, a1, a2, a3);
    return;
}
