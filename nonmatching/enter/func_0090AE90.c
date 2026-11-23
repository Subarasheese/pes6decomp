/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001210B0(s32);
void func_0013E2A0(s32);
void func_0013E2D0(s32);
void func_00182AD0(void);
void func_001864B0(s32);
s32 func_00237BD0(void);
void func_00272800(s32, s32, s32, s32);
s32 func_0029AC20(void);
void func_009099F0(void);
s32 func_0090D3C0(s32, s32, s32, s32);
s32 func_0090D3F0(s32, s32, s32, s32);
void func_0090D470(s32, s32, s32, s32);
void func_009178F0(void);
void func_00917960(void);
void func_009179D0(void);
void func_00917A30(s32, s32, s32, s32);

s32 func_0090AE90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    v0 = func_0090D3F0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 == 0) { v0 = 0; goto L_0090B008; }
    v0 = func_0090D3C0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_0090AECC;
    v0 = 0;
    goto L_0090B008;
L_0090AECC:;
    v0 = (s32) 0x930000U;
    v1 = -1;
    (*(volatile u16 *) (u32) (v0 + -3848)) = (u16) 0;
    a0 = 1;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -3859)) = (u8) v1;
    v0 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v0 + -3856)) = (u32) 0; func_001210B0(a0);
    a0 = 2; func_0013E2A0(a0);
    a0 = 2; func_0013E2D0(a0);
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -3888));
    v1 = v1 | 0x2000;
    (*(volatile u32 *) (u32) (v0 + -3888)) = (u32) v1; v0 = func_00237BD0();
    if (v0 != 0) goto L_0090AF38;
    v0 = func_0029AC20();
    if (v0 != 0) goto L_0090AF38;
    a0 = 24; func_00272800(a0, a1, a2, a3);
L_0090AF38:;
    func_009099F0();
    func_00917A30(a0, a1, a2, a3);
    func_009179D0();
    a0 = 0;
    a1 = 0; func_00917960();
    func_009178F0();
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_0090AF7C; }
    (*(volatile u8 *) (u32) v0) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
L_0090AF7C:;
    v1 = (*(volatile s32 *) (u32) (v0 + 8));
    if (v1 == 0) { v0 = (s32) 0x20000U; goto L_0090AF94; }
    v0 = 1;
    (*(volatile u8 *) (u32) v1) = (u8) v0;
    v0 = (s32) 0x20000U;
L_0090AF94:;
    a0 = v0 | 0x1c9e; func_001864B0(a0);
    func_00182AD0();
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u16 *) (u32) (v0 + -3676));
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffff9060U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a0 = 0; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    func_0090D470(a0, a1, a2, a3);
    v0 = (s32) 0x930000U;
    v1 = -1;
    v0 = (*(volatile s8 *) (u32) (v0 + -3860));
    if (v0 != v1) goto L_0090AFEC;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -3860)) = (u8) 0;
L_0090AFEC:;
    v1 = (s32) 0x910000U;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + 0xffffad70U);
    (*(volatile u32 *) (u32) (v0 + -3936)) = (u32) v1;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -3932)) = (u8) 0;
    v0 = 0;
L_0090B008:;
    return v0;
}
