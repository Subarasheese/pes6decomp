/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002DCA30(void);
void func_00C8D120(s32, s32, s32, s32);
void func_00C8E460(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);

void func_00C8D000(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 11;
    (*(volatile u8 *) (u32) (gp + -19156)) = (u8) v0; v0 = func_002DCA30();
    if (v0 == 0) { v0 = 11; goto L_00C8D030; }
    v0 = 7;
    (*(volatile u8 *) (u32) (gp + -19160)) = (u8) v0; goto L_00C8D034;
L_00C8D030:;
    (*(volatile u8 *) (u32) (gp + -19160)) = (u8) v0;
L_00C8D034:;
    v0 = (s32) 0xcd0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -10099));
    if (v0 != 0) goto L_00C8D0D8;
    a2 = (*(volatile u8 *) (u32) (gp + -19156));
    a1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    a5 = 0;
    a1 = (s32) ((u32) a1 + 0x2980U);
    a0 = (s32) ((u32) a0 + 0x1a90U);
L_00C8D05C:;
    a3 = 0;
    a4 = 0;
L_00C8D068:;
    v0 = (s32) ((u32) a0 + (u32) a4);
    v1 = (*(volatile u8 *) (u32) (v0 + 7));
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) a1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 212));
    if (v0 == 0) goto L_00C8D098;
    a3 = (s32) ((u32) a3 + 0x1U);
L_00C8D098:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < 11;
    if (v0 != 0) goto L_00C8D068;
    v0 = a2 & 0xff;
    at = a3 < v0;
    if (at == 0) goto L_00C8D0C0;
    a2 = a3 & 0xff;
L_00C8D0C0:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v0 = a5 < 2;
    a1 = (s32) ((u32) a1 + 0x6900U);
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x8bU); if (c_) goto L_00C8D05C; }
    (*(volatile u8 *) (u32) (gp + -19156)) = (u8) a2;
L_00C8D0D8:;
    s1 = (s32) 0xcd0000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0xffffd570U);
L_00C8D0E4:;
    a0 = s1;
    a1 = s0; func_00C8D120(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x18cU); if (c_) goto L_00C8D0E4; }
    func_00C8E460(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    return;
}
