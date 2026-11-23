/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Sprite_SetPositionZ(s32, f32);
void func_001D7840(s32, s32);
void func_001DEF30(s32, s32);
void func_001DEF70(s32, f32);
void func_001ED840(s32, s32);
void func_001ED880(s32, f32);
s32 func_002F96F0(s32, s32);

void func_0091CA60(s32 a0, s32 a1, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v0 = (s32) ((u32) gp + 0xffffb260U);
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    v0 = (s32) 0xc7850000U;
    v0 = v0 | 0xc580;
    f12.i = (s32) v0;
    Pes6Sprite_SetPositionZ(a0, f12.f);
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v0 = (s32) ((u32) gp + 0xffffb260U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 1; func_001D7840(a0, a1);
    s1 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
L_0091CADC:;
    v0 = (s32) ((u32) gp + 0xffffb260U);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091CB08;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091CB08:;
    v0 = (s32) 0xc7850000U;
    v0 = v0 | 0xc580;
    f12.i = (s32) v0;
    a0 = s0; func_001DEF70(a0, f12.f);
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v0 = (s32) ((u32) gp + 0xffffb260U);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091CB50;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091CB50:;
    a0 = s0;
    a1 = 1; func_001DEF30(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 53;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19876)); goto L_0091CADC; }
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v0 = (s32) ((u32) gp + 0xffffb260U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { v0 = (s32) 0xc7850000U; goto L_0091CBA0; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    v0 = (s32) 0xc7850000U;
L_0091CBA0:;
    v0 = v0 | 0xc580;
    f12.i = (s32) v0;
    a0 = s0; func_001ED880(a0, f12.f);
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v0 = (s32) ((u32) gp + 0xffffb260U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0091CBE4; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0091CBE4:;
    a1 = 1; func_001ED840(a0, a1);
    return;
}
