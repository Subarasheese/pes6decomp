/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0013E2A0(s32);
void func_0013E2D0(s32);
void func_00186330(s32, s32, s32, s32, f32);
void func_001863D0(void);
void func_001864B0(s32);
void func_001A33B0(s32);
void func_0090AA70(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0090D430(s32, s32, s32, s32);
void func_0090D4E0(s32, s32, s32, s32);
void func_009178F0(void);
void func_00917960(void);
void func_009179C0(s32, s32, s32, s32);

s32 Pes6Enter_FinishShot(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -3888));
    v0 = v0 & 0x1000;
    if (v0 != 0) { v1 = -1; goto L_0090AC0C; }
    v0 = func_0090D430(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_0090AC08;
    v0 = 0; goto L_0090AD64;
L_0090AC08:;
    v1 = -1;
L_0090AC0C:;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -3859)) = (u8) v1;
    a0 = 2; func_0013E2A0(a0);
    a0 = 1; func_0013E2D0(a0);
    v0 = (s32) 0x930000U;
    v1 = -8193;
    a1 = (*(volatile s32 *) (u32) (v0 + -3888));
    a0 = 8192;
    v0 = (s32) 0x930000U;
    v1 = a1 & v1;
    (*(volatile u32 *) (u32) (v0 + -3888)) = (u32) v1; func_0090D4E0(a0, a1, a2, a3);
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -3494)) = (u8) 0;
    v0 = (s32) 0x930000U;
    (*(volatile u16 *) (u32) (v1 + -3500)) = (u16) 0;
    (*(volatile u8 *) (u32) (v0 + -3493)) = (u8) 0; func_009179C0(a0, a1, a2, a3);
    v0 = (s32) 0x930000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -3676));
    a1 = 0; func_00917960();
    func_009178F0();
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u16 *) (u32) (v0 + -3676));
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffff9060U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a0 = 2; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v0 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -3868));
    if (a0 == 0) goto L_0090ACFC;
    v1 = (s32) 0x20000U;
    v0 = (s32) 0x930000U;
    v1 = v1 | 0x1c9e;
    v1 = a0 & v1;
    (*(volatile u32 *) (u32) (v0 + -3868)) = (u32) v1;
    v0 = v1 & 0x8;
    if (v0 == 0) goto L_0090ACD4;
    func_001863D0();
L_0090ACD4:;
    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -3868));
    v0 = v0 & 0x400;
    if (v0 == 0) goto L_0090ACF0;
    a0 = 0; func_001A33B0(a0);
L_0090ACF0:;
    v0 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -3868)); func_001864B0(a0);
L_0090ACFC:;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -3868)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + -3864)) = (u32) 0; func_00186330(a0, a1, a2, a3, f12.f);
    func_0090AA70(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x930000U;
    a3 = (s32) 0x930000U;
    a4 = (*(volatile u8 *) (u32) (v0 + -3844));
    a3 = (s32) ((u32) a3 + 0xfffff0ffU);
    v1 = (s32) 0x930000U;
    a0 = (s32) 0x930000U;
    a2 = (*(volatile s32 *) (u32) (v1 + -3876));
    a1 = (s32) 0x930000U;
    a3 = (s32) ((u32) a3 + (u32) a4);
    v0 = 1;
    a3 = (*(volatile u8 *) (u32) a3);
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (a0 + -3936)) = (u32) 0;
    a0 = (s32) ((u32) a3 + 0xffffffffU);
    (*(volatile u8 *) (u32) (v1 + -3932)) = (u8) 0;
    v1 = (s32) ((u32) v0 << (a0 & 31));
    v1 = ~(v1 | 0);
    v1 = a2 & v1;
    (*(volatile u32 *) (u32) (a1 + -3876)) = (u32) v1;
L_0090AD64:;
    return v0;
}
