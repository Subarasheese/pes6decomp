/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009909D0(s32, s32);

s32 func_00C07130(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    { s32 c_ = v0 != 0; s0 = a0; if (c_) goto L_00C0716C; }
L_00C0714C:;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    if (v0 == 0) goto L_00C07180;
    v0 = (*(volatile u8 *) (u32) (s0 + 22));
    if (v0 == 0) goto L_00C07180;
L_00C07164:;
    v0 = 3; goto L_00C072CC;
L_00C0716C:;
    v0 = 2048;
    (*(volatile u32 *) (u32) (s0 + 492)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 492));
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) v0; goto L_00C0714C;
L_00C07180:;
    a0 = s0;
    a1 = (s32) 0x190000U; v0 = func_009909D0(a0, a1);
    if (v0 != 0) goto L_00C0721C;
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x56bcU);
    v0 = 255;
    a1 = a0 ^ 0x1;
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_00C071D4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00C071D4:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe6c0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = (s32) 0x190000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) goto L_00C0721C;
    a1 = (*(volatile u8 *) (u32) s0);
    a2 = (s32) 0xcb0000U;
    a3 = 0;
    a2 = (s32) ((u32) a2 + 0x52a0U);
    v1 = 8;
    a0 = 4; goto L_00C07224;
L_00C0721C:;
    v0 = 1; goto L_00C072CC;
L_00C07224:;
    v0 = (*(volatile u8 *) (u32) (a2 + 1092));
    if (v0 != a1) goto L_00C07250;
    v0 = (*(volatile s32 *) (u32) (a2 + 1084));
    if (v0 != a0) goto L_00C07250;
    v0 = (*(volatile s32 *) (u32) (a2 + 1120));
    if (v0 != v1) goto L_00C07250;
    v0 = 1; goto L_00C07264;
L_00C07250:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < 10;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x40U); if (c_) goto L_00C07224; }
    v0 = 0;
L_00C07264:;
    if (v0 != 0) goto L_00C072C8;
    a2 = (s32) 0xcb0000U;
    a3 = 0;
    a2 = (s32) ((u32) a2 + 0x52a0U);
    v1 = 11;
    a0 = 4;
L_00C07280:;
    v0 = (*(volatile u8 *) (u32) (a2 + 1092));
    if (v0 != a1) goto L_00C072AC;
    v0 = (*(volatile s32 *) (u32) (a2 + 1084));
    if (v0 != a0) goto L_00C072AC;
    v0 = (*(volatile s32 *) (u32) (a2 + 1120));
    if (v0 != v1) goto L_00C072AC;
    v0 = 1; goto L_00C072C0;
L_00C072AC:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < 10;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x40U); if (c_) goto L_00C07280; }
    v0 = 0;
L_00C072C0:;
    if (v0 == 0) goto L_00C07164;
L_00C072C8:;
    v0 = 1;
L_00C072CC:;
    return v0;
}
