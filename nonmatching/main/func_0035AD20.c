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

void func_0035AD20(s32 a0, s32 a1, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
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
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 1; func_001D7840(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { v0 = (s32) 0xc7850000U; goto L_0035ADC4; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    v0 = (s32) 0xc7850000U;
L_0035ADC4:;
    v0 = v0 | 0xc580;
    f12.i = (s32) v0;
    a0 = s0; func_001DEF70(a0, f12.f);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0035AE08; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0035AE08:;
    a1 = 1; func_001DEF30(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { v0 = (s32) 0xc7850000U; goto L_0035AE44; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    v0 = (s32) 0xc7850000U;
L_0035AE44:;
    v0 = v0 | 0xc580;
    f12.i = (s32) v0;
    a0 = s0; func_001ED880(a0, f12.f);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0035AE88; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0035AE88:;
    a1 = 1; func_001ED840(a0, a1);
    return;
}
