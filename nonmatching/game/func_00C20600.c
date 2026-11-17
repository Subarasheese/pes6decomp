/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B30B0(s32, s32);
void func_00AA3980(s32, s32, s32, f32, f32);
void func_00AA4A30(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AA5D60(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AA74B0(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AA7B70(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AAE520(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AF8870(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AFAF60(s32, s32, s32, s32, s32, f32, f32, f32, f32);

void func_00C20600(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    v0 = 1;
    s4 = a0;
    s3 = a1;
    s2 = a2;
    s1 = a3;
    v1 = (*(volatile u8 *) (u32) (a0 + 36));
    { s32 c_ = v1 != v0; s0 = a4; if (c_) goto L_00C20664; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7100));
    at = v0 < 2;
    if (at == 0) goto L_00C20664;
    v0 = (*(volatile u16 *) (u32) (s4 + 58));
    if (v0 != 0) goto L_00C20664;
    v0 = 2;
    (*(volatile u16 *) (u32) (s4 + 58)) = (u16) v0;
L_00C20664:;
    v1 = (*(volatile u8 *) (u32) (s4 + 22));
    v0 = 163;
    if (v1 != v0) goto L_00C207B8;
    v1 = (*(volatile u16 *) (u32) (s4 + 58));
    v0 = 4;
    if (v1 != v0) goto L_00C207B8;
    v0 = 2;
    (*(volatile u16 *) (u32) (s4 + 58)) = (u16) v0; goto L_00C207B8;
L_00C20690:;
    a0 = s4;
    a1 = s3;
    a2 = s2;
    a3 = s1;
    a4 = s0; func_00AA7B70(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00C207B0;
L_00C206B0:;
    a0 = s4;
    a1 = s1;
    a2 = 1;
    a3 = 0; func_00AAE520(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00C207B0;
L_00C206CC:;
    a0 = s4;
    a1 = s3;
    a2 = s2;
    a3 = s1;
    a4 = s0; func_00AFAF60(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00C207B0;
L_00C206EC:;
    a0 = s4;
    a1 = s3;
    a2 = s2;
    a3 = s1;
    a4 = s0; func_00AF8870(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00C207B0;
L_00C2070C:;
    a0 = s4;
    a1 = s3;
    a2 = s2;
    a3 = s1;
    a4 = s0; func_00AA74B0(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00C207B0;
L_00C2072C:;
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    a0 = s2; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 17;
    if (at == 0) goto L_00C207E4;
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    a0 = s3; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 17;
    if (at == 0) goto L_00C207E4;
    a0 = s4;
    a1 = s3;
    a2 = 701; func_00AA4A30(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00C207B0;
L_00C2077C:;
    v1 = (*(volatile u8 *) (u32) (s4 + 22));
    v0 = 157;
    if (v1 != v0) { a0 = s4; goto L_00C207A4; }
    a0 = s4;
    a1 = s3;
    a2 = s2; func_00AA3980(a0, a1, a2, f12.f, f13.f);
    goto L_00C207B0;
L_00C207A4:;
    a1 = s3;
    a2 = s2; func_00AA5D60(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
L_00C207B0:;
    goto L_00C20804;
L_00C207B8:;
    v0 = (*(volatile u16 *) (u32) (s4 + 58));
    at = (u64) v0 < (u64) (s64) 9;
    if (at == 0) goto L_00C206EC;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x3700U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xc20690U) goto L_00C20690; if (t_ == 0xc206b0U) goto L_00C206B0; if (t_ == 0xc206ccU) goto L_00C206CC; if (t_ == 0xc206ecU) goto L_00C206EC; if (t_ == 0xc2070cU) goto L_00C2070C; if (t_ == 0xc2072cU) goto L_00C2072C; if (t_ == 0xc2077cU) goto L_00C2077C; }
L_00C207E4:;
    a0 = s4;
    a1 = s3;
    a2 = s2;
    a3 = s1;
    a4 = s0; func_00AA7B70(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00C207B0;
L_00C20804:;
    return;
}
