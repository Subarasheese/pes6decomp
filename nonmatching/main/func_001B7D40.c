/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B70A0(s32, s32, s32, s32, f32);
void func_001D7840(s32, s32);
void func_001DEF30(s32, s32);
s32 func_001F08B0(s32);
void func_002E19B0(s32, s32);
void memcpy(s32, s32, s32);
s32 strcmp(s32, s32);

void func_001B7D40(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    s1 = a0;
    a0 = a1; v0 = func_001F08B0(a0);
    at = (u64) s1 < (u64) (s64) 15;
    { s32 c_ = at == 0; s0 = v0; if (c_) goto L_001B7D90; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (s32) ((u32) v1 + 0x1450U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x1b7d88U) goto L_001B7D88; if (t_ == 0x1b7d90U) goto L_001B7D90; }
L_001B7D88:;
    v1 = 1; goto L_001B7D94;
L_001B7D90:;
    v1 = 0;
L_001B7D94:;
    v0 = 1;
    if (v1 != v0) goto L_001B7E38;
    v0 = (s32) 0x6c0000U;
    a0 = v0 | 0x23; v0 = func_001F08B0(a0);
    a0 = s0;
    a1 = v0; v0 = strcmp(a0, a1);
    if (v0 == 0) { v1 = 0; goto L_001B7E04; }
    v0 = (s32) 0x6c0000U;
    a0 = v0 | 0x29; v0 = func_001F08B0(a0);
    a0 = s0;
    a1 = v0; v0 = strcmp(a0, a1);
    if (v0 == 0) goto L_001B7E00;
    v0 = (s32) 0x6c0000U;
    a0 = v0 | 0x28; v0 = func_001F08B0(a0);
    a0 = s0;
    a1 = v0; v0 = strcmp(a0, a1);
    if (v0 != 0) { v1 = 1; goto L_001B7E04; }
L_001B7E00:;
    v1 = 0;
L_001B7E04:;
    v0 = 1;
    if (v1 != v0) goto L_001B7E38;
    if (s0 == 0) goto L_001B7E38;
    v0 = (s32) 0x520000U;
    v1 = (s32) ((u32) s1 << 7);
    v0 = (s32) ((u32) v0 + 0x2980U);
    a1 = s0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = 128;
    a0 = (s32) ((u32) v0 + 0x70U); memcpy(a0, a1, a2);
L_001B7E38:;
    s1 = (s32) 0x520000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0x2980U);
    s0 = s1;
L_001B7E48:;
    a0 = (*(volatile s32 *) (u32) (s1 + 16));
    if (a0 == 0) goto L_001B7E60;
    a1 = 0; func_001DEF30(a0, a1);
L_001B7E60:;
    a0 = (*(volatile s32 *) (u32) (s1 + 3280));
    if (a0 == 0) goto L_001B7E78;
    a1 = 0; func_001DEF30(a0, a1);
L_001B7E78:;
    a0 = (s32) ((u32) s0 + 0x1930U);
    a1 = 0; func_002E19B0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 24;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x24U); if (c_) goto L_001B7E48; }
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 10624));
    a1 = 0; func_001D7840(a0, a1);
    func_001B70A0(a0, a1, a2, a3, f12.f);
    return;
}
