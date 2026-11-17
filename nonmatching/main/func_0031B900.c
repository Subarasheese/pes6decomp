/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Ball_GetPositionX(s32);
void Pes6Job_CopyPayloadOut(s32, s32, s32);
s32 Pes6Job_Create(s32, s32, s32);
s32 Pes6MatchPlayer_GetSquadIndex(s32);
f32 func_0030EBB0(s32, s32, f32);
void func_00329F80(s32, s32);
void func_0032E2B0(s32, s32, s32, s32, f32, f32);
s32 func_003335A0(void);
s32 func_00333600(s32);
s32 func_00341480(s32, s32);
void memmove(s32, s32, s32);

s32 func_0031B900(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xcb0000U;
    s2 = (*(volatile s32 *) (u32) (a0 + 60));
    v0 = (*(volatile s32 *) (u32) (v0 + 24380));
    s1 = (*(volatile s32 *) (u32) (a0 + 72));
    v1 = (*(volatile s32 *) (u32) s2);
    { s32 c_ = v1 != v0; s3 = a0; if (c_) goto L_0031B940; }
    v0 = 0; goto L_0031BB48;
L_0031B940:;
    v0 = (s32) 0xcb0000U;
    s0 = (*(volatile s32 *) (u32) (v0 + 24356));
    if (s0 == 0) { v0 = 0; goto L_0031BB48; }
    v0 = 16;
    if (s0 != v0) goto L_0031B968;
    v0 = 0;
    goto L_0031BB48;
L_0031B968:;
    v0 = (s32) 0xcb0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 24360)); v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    s4 = v0;
    v0 = 255;
    if (s4 == v0) goto L_0031BA34;
    v0 = (s32) ((u32) s4 << 2);
    a0 = (s32) ((u32) sp + 0x6cU);
    v1 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v1 + 796));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 796)) = (u32) v0; Pes6Ball_GetPositionX(a0);
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcb0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + 24424));
    a0 = (*(volatile u8 *) (u32) (v1 + 24360)); v0 = func_00341480(a0, a1);
    if (v0 == 0) goto L_0031B9F4;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (sp + 108));
    a0 = (*(volatile u8 *) (u32) (v0 + 24360));
    a1 = 1; f0.f = func_0030EBB0(a0, a1, f12.f);
    v0 = (s32) ((u32) s4 << 4);
    v1 = (s32) ((u32) v0 + (u32) s2);
    (*(volatile f32 *) (u32) (sp + 108)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (v1 + 24));
    fcc = f0.f <= f1.f;
    { s32 c_ = fcc; v0 = (s32) ((u32) v1 + 0x18U); if (c_) goto L_0031BA34; }
    (*(volatile f32 *) (u32) v0) = f0.f; goto L_0031BA34;
L_0031B9F4:;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (sp + 108));
    a0 = (*(volatile u8 *) (u32) (v0 + 24360));
    a1 = -1; f0.f = func_0030EBB0(a0, a1, f12.f);
    v0 = s4 ^ 0x1;
    a2 = 12;
    s4 = (s32) ((u32) v0 << 4);
    v0 = (s32) ((u32) s2 + (u32) s4);
    (*(volatile f32 *) (u32) (sp + 108)) = f0.f;
    a0 = (s32) ((u32) v0 + 0x1cU);
    a1 = (s32) ((u32) v0 + 0x18U); memmove(a0, a1, a2);
    f0.f = (*(volatile f32 *) (u32) (sp + 108));
    v0 = (s32) ((u32) s4 + (u32) s2);
    (*(volatile f32 *) (u32) (v0 + 24)) = f0.f;
L_0031BA34:;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 24420));
    if (s0 != v0) { a0 = 11; goto L_0031BA5C; }
    v0 = 4;
    if (s0 != v0) goto L_0031BA58;
    v0 = 0; goto L_0031BB48;
L_0031BA58:;
    a0 = 11;
L_0031BA5C:;
    v0 = func_00333600(a0);
    if (v0 == 0) goto L_0031BA74;
    v0 = 0; goto L_0031BB48;
L_0031BA74:;
    v0 = func_003335A0();
    if (v0 != 0) { at = (u64) s0 < (u64) (s64) 16; goto L_0031BADC; }
    a0 = (s32) ((u32) s2 + 0xb4U);
    a1 = (s32) ((u32) s2 + 0x74U);
    a2 = 576; memmove(a0, a1, a2);
    a2 = (s32) 0xcb0000U;
    a1 = (s32) ((u32) s2 + 0x74U);
    a2 = (s32) ((u32) a2 + 0x5f24U);
    a0 = 8;
L_0031BAA4:;
    v1 = (*(volatile s32 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    a2 = (s32) ((u32) a2 + 0x8U);
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_0031BAA4; }
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) s0;
    v0 = 1;
    v1 = (*(volatile s32 *) (u32) (s2 + 140));
    (*(volatile u32 *) (u32) s2) = (u32) v1;
    (*(volatile u8 *) (u32) (s2 + 8)) = (u8) v0;
    at = (u64) s0 < (u64) (s64) 16;
L_0031BADC:;
    if (at == 0) goto L_0031BB1C;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0x1520U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x31bb00U) goto L_0031BB00; if (t_ == 0x31bb10U) goto L_0031BB10; if (t_ == 0x31bb1cU) goto L_0031BB1C; }
L_0031BB00:;
    a0 = s3; func_0032E2B0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_0031BB1C;
L_0031BB10:;
    a0 = s2;
    a1 = s1; func_00329F80(a0, a1);
L_0031BB1C:;
    a1 = (s32) 0x320000U;
    a3 = (s32) 0x3e0000U;
    a0 = 24;
    a1 = (s32) ((u32) a1 + 0xffffb8d0U);
    a2 = 32;
    a3 = (s32) ((u32) a3 + 0x1510U); v0 = Pes6Job_Create(a0, a1, a2);
    a0 = v0;
    a1 = s3; Pes6Job_CopyPayloadOut(a0, a1, a2);
    v0 = 1;
L_0031BB48:;
    return v0;
}
