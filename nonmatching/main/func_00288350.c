/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Ball_ClearTouchHistory(void);
s32 func_001A58E0(s32, s32);
s32 func_00270580(s32);
s32 func_0027D460(void);
s32 func_00287C00(s32, s32);
s32 func_002AE670(s32);

s32 func_00288350(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    s1 = 0;
    s0 = (s32) 0x590000U;
    s0 = (s32) ((u32) s0 + 0x1e00U);
L_0028836C:;
    a0 = s1; v0 = func_002AE670(a0);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 2268)) = (u8) v0;
    at = s1 < 33;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x1U); if (c_) goto L_0028836C; }
    a0 = 0; v0 = func_00270580(a0);
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7704));
    if (a0 == v1) { a0 = 1; goto L_002883B0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_002883B0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    a3 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a3 = (s32) ((u32) a3 + 0x1e67U);
    a0 = (*(volatile u8 *) (u32) (v0 + 18));
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -6732));
    a1 = 1;
    a2 = (s32) ((u32) a3 + (u32) a0);
    v0 = (s32) 0x590000U;
    a0 = a0 ^ 0x1;
    (*(volatile u8 *) (u32) a2) = (u8) 0;
    a0 = (s32) ((u32) a3 + (u32) a0);
    (*(volatile u8 *) (u32) a0) = (u8) a1;
    (*(volatile u8 *) (u32) (v1 + 44)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -6732));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile u8 *) (u32) (v0 + 44)); v0 = func_001A58E0(a0, a1);
    v1 = 224;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + -6714)) = (u8) v1;
    a0 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffe7f0U);
    (*(volatile u16 *) (u32) (v0 + -6712)) = (u16) 0;
    a1 = 0;
L_0028842C:;
    v1 = (s32) ((u32) a1 + 0x1U);
    v0 = (s32) ((u32) a1 + 0x2U);
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 576)) = (u8) v0;
    v1 = (s32) ((u32) a1 + 0x3U);
    (*(volatile u8 *) (u32) (a0 + 1152)) = (u8) v1;
    v0 = (s32) ((u32) a1 + 0x4U);
    (*(volatile u8 *) (u32) (a0 + 1728)) = (u8) v0;
    v1 = (s32) ((u32) a1 + 0x5U);
    v0 = (s32) ((u32) a1 + 0x6U);
    (*(volatile u8 *) (u32) (a0 + 2304)) = (u8) v1;
    a1 = (s32) ((u32) a1 + 0x7U);
    (*(volatile u8 *) (u32) (a0 + 2880)) = (u8) v0;
    (*(volatile u8 *) (u32) (a0 + 3456)) = (u8) a1;
    v0 = a1 < 15;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0xfc0U); if (c_) goto L_0028842C; }
    v0 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u8 *) (u32) a0) = (u8) v0; v0 = func_00287C00(a0, a1);
    v0 = Pes6Ball_ClearTouchHistory();
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = 255;
    (*(volatile u8 *) (u32) (v0 + 5252)) = (u8) v1; v0 = func_0027D460();
    a0 = (s32) 0x590000U;
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 13056));
    a6 = (s32) 0x590000U;
    a4 = (*(volatile u8 *) (u32) (a0 + 7629));
    a5 = 0;
    a6 = (s32) ((u32) a6 + 0x1e00U);
    a3 = (s32) ((u32) v1 + 0x2fcU);
    a2 = (s32) ((u32) v1 + 0x8U);
    a0 = 2;
L_002884BC:;
    if (a4 != 0) goto L_002884E0;
    a1 = (*(volatile s16 *) (u32) a2);
    v1 = (*(volatile s16 *) (u32) a3);
    v1 = (s32) ((u32) a1 + (u32) v1);
    if (v1 != 0) goto L_002884E0;
    (*(volatile u8 *) (u32) (a6 + 242)) = (u8) 0;
    (*(volatile u8 *) (u32) (a6 + 238)) = (u8) a0;
L_002884E0:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 2;
    { s32 c_ = v1 != 0; a6 = (s32) ((u32) a6 + 0x1U); if (c_) goto L_002884BC; }
    a1 = (s32) 0xcb0000U;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0x52a0U);
L_002884FC:;
    (*(volatile u8 *) (u32) (a1 + 31)) = (u8) 0;
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u8 *) (u32) (a1 + 32)) = (u8) 0;
    v1 = a0 < 2;
    (*(volatile u8 *) (u32) (a1 + 33)) = (u8) 0;
    (*(volatile u8 *) (u32) (a1 + 34)) = (u8) 0;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_002884FC; }
    a0 = 32767;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + 7992)) = (u32) a0;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + 7984)) = (u32) a0;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = 1;
    (*(volatile u8 *) (u32) (v1 + 12)) = (u8) a0;
    return v0;
}
