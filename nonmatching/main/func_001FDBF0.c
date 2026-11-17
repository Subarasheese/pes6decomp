/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetBlock304(void);
s32 func_00204D90(s32, s32, s32, s32, s32);
s32 func_002727B0(void);

s32 func_001FDBF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };

    a5 = 0;
    v0 = 1;
    a4 = 0;
    a1 = 0;
    s0 = a0;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x2800U);
L_001FDC1C:;
    v1 = (*(volatile u8 *) (u32) a0);
    at = v1 < 8;
    if (at == 0) goto L_001FDC30;
    a5 = (s32) ((u32) a5 + 0x1U);
L_001FDC30:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v1 = a1 < 8;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x28U); if (c_) goto L_001FDC1C; }
    a3 = (s32) 0x590000U;
    a2 = 0;
    a3 = (s32) ((u32) a3 + 0x2800U);
    a0 = 8;
    a1 = 255;
L_001FDC54:;
    v1 = (*(volatile u8 *) (u32) (a3 + 16));
    if (v1 == a1) { a2 = (s32) ((u32) a2 + 0x1U); goto L_001FDC90; }
    v1 = (*(volatile u8 *) (u32) a3);
    if (v1 == a0) goto L_001FDC8C;
    a0 = (s32) ((u32) a2 << 2);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0x2810U);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a4 = (*(volatile u8 *) (u32) v1); goto L_001FDCA0;
L_001FDC8C:;
    a2 = (s32) ((u32) a2 + 0x1U);
L_001FDC90:;
    v1 = a2 < 8;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x28U); if (c_) goto L_001FDC54; }
L_001FDCA0:;
    v1 = 1;
    if (a5 != v1) { s1 = 2; goto L_001FDCB8; }
    if (a4 != 0) { ; goto L_001FDD34; }
    s1 = 2;
L_001FDCB8:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10051)) = (u8) s1; v0 = Pes6OptionData_GetBlock304();
    (*(volatile u8 *) (u32) (v0 + 5)) = (u8) s1; v0 = func_00204D90(a0, a1, a2, a3, a4);
    v0 = func_002727B0();
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 != v0) { v0 = 0; goto L_001FDD30; }
    v0 = (s32) 0x590000U;
    a2 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 10016));
    a1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile f32 *) (u32) s0) = f0.f;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (a2 + 10020));
    (*(volatile f32 *) (u32) (s0 + 4)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 10024));
    (*(volatile f32 *) (u32) (s0 + 8)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 10000));
    (*(volatile f32 *) (u32) (s0 + 16)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 10004));
    (*(volatile f32 *) (u32) (s0 + 20)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 10008));
    (*(volatile f32 *) (u32) (s0 + 24)) = f0.f;
    v0 = 0;
L_001FDD30:;
L_001FDD34:;
    return v0;
}
