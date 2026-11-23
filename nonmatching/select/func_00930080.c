/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Keyboard_Acquire(s32, s32, s32, s32);
void Pes6Keyboard_Release(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00220370(s32, s32, s32, s32);
void func_002206E0(void);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_002E8C60(s32, s32, s32, s32);
void func_002E8CB0(s32, s32);
void func_002E92D0(s32);
s32 func_002E9310(void);

s32 func_00930080(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = (*(volatile s8 *) (u32) (gp + -18808));
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_009301D8;
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6280U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x9300b0U) goto L_009300B0; if (t_ == 0x9300f8U) goto L_009300F8; if (t_ == 0x930118U) goto L_00930118; if (t_ == 0x93013cU) goto L_0093013C; if (t_ == 0x930150U) goto L_00930150; if (t_ == 0x93015cU) goto L_0093015C; }
L_009300B0:;
    v0 = (s32) 0x590000U;
    v1 = 295;
    v0 = (*(volatile u16 *) (u32) (v0 + 7090));
    if (v0 != v1) { a0 = 30; goto L_009300D0; }
    func_00220370(a0, a1, a2, a3);
    a0 = 30;
L_009300D0:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 1; func_002E92D0(a0);
    Pes6Keyboard_Release(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s8 *) (u32) (gp + -18808));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18808)) = (u8) v0; goto L_009301D8;
L_009300F8:;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -15592));
    a1 = (*(volatile u8 *) (u32) (gp + -32364)); func_002E8CB0(a0, a1);
    v0 = (*(volatile s8 *) (u32) (gp + -18808));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18808)) = (u8) v0; goto L_009301D8;
L_00930118:;
    v0 = func_002E8C60(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v0 = 0; goto L_009301DC; }
    v0 = (*(volatile s8 *) (u32) (gp + -18808));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18808)) = (u8) v0; goto L_009301D8;
L_0093013C:;
    Pes6Keyboard_Acquire(a0, a1, a2, a3);
    v0 = (*(volatile s8 *) (u32) (gp + -18808));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18808)) = (u8) v0;
L_00930150:;
    v0 = (*(volatile s8 *) (u32) (gp + -18808));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18808)) = (u8) v0;
L_0093015C:;
    v0 = func_002E9310();
    v1 = 5;
    if (v0 == v1) goto L_009301BC;
    v1 = 1;
    if (v0 == v1) goto L_00930184;
    goto L_009301D8;
L_00930184:;
    v0 = (s32) 0x590000U;
    v1 = 295;
    v0 = (*(volatile u16 *) (u32) (v0 + 7090));
    if (v0 != v1) goto L_009301A0;
    func_002206E0();
L_009301A0:;
    v0 = (s32) 0x540000U;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) 0;
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -18808)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + -15607)) = (u8) v0; goto L_009301DC;
L_009301BC:;
    v1 = (s32) 0x540000U;
    v0 = 2;
    a0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (gp + -18808)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + -15607)) = (u8) v0;
    (*(volatile u32 *) (u32) (v1 + -15592)) = (u32) 0; goto L_009301DC;
L_009301D8:;
    v0 = 0;
L_009301DC:;
    return v0;
}
