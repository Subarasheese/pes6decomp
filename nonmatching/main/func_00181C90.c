/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00141360(s32);
s32 func_00142020(s32, s32, s32);

s32 func_00181C90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, t8 = 0, t9 = 0;

    a6 = 27;
    a7 = 0;
    a5 = 1;
    t9 = (s32) 0x520000U;
    t8 = (s32) 0x520000U;
    s1 = (s32) 0x520000U;
    s0 = (s32) 0x520000U;
    t7 = (s32) 0x520000U;
    t6 = (s32) 0x520000U;
    t5 = (s32) 0x520000U;
    t4 = (s32) 0x520000U;
L_00181CD8:;
    a1 = (*(volatile s32 *) (u32) (t9 + -200));
    v1 = (s32) ((u32) a7 << 1);
    v1 = (s32) ((u32) v1 + (u32) a7);
    a6 = (s32) ((u32) a6 + 0xfffffff8U);
    a2 = (s32) ((u32) v1 << 5);
    a0 = (s32) ((u32) a7 + 0x1U);
    v1 = (s32) ((u32) a0 << 1);
    s2 = (s32) ((u32) a7 + 0x4U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    at = a6 < 9;
    a4 = (s32) ((u32) v1 << 5);
    a0 = (s32) ((u32) a7 + 0x2U);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) ((u32) a0 << 1);
    (*(volatile u8 *) (u32) (a1 + 81)) = (u8) a5;
    v1 = (s32) ((u32) v1 + (u32) a0);
    a3 = (*(volatile s32 *) (u32) (t8 + -200));
    a2 = (s32) ((u32) v1 << 5);
    a0 = (s32) ((u32) a7 + 0x3U);
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) ((u32) v1 << 5);
    a0 = (s32) ((u32) a7 + 0x5U);
    v1 = (s32) ((u32) s2 << 1);
    a4 = (s32) ((u32) a3 + (u32) a4);
    s2 = (s32) ((u32) v1 + (u32) s2);
    (*(volatile u8 *) (u32) (a4 + 81)) = (u8) a5;
    v1 = (s32) ((u32) a0 << 1);
    s3 = (*(volatile s32 *) (u32) (s1 + -200));
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) ((u32) s2 << 5);
    v1 = (s32) ((u32) v1 << 5);
    s2 = (s32) ((u32) a7 + 0x6U);
    a4 = (s32) ((u32) a7 + 0x7U);
    a3 = (s32) ((u32) s2 << 1);
    a7 = (s32) ((u32) a7 + 0x8U);
    a3 = (s32) ((u32) a3 + (u32) s2);
    s2 = (s32) ((u32) a3 << 5);
    a2 = (s32) ((u32) s3 + (u32) a2);
    a3 = (s32) ((u32) a4 << 1);
    (*(volatile u8 *) (u32) (a2 + 81)) = (u8) a5;
    a3 = (s32) ((u32) a3 + (u32) a4);
    a2 = (*(volatile s32 *) (u32) (s0 + -200));
    a3 = (s32) ((u32) a3 << 5);
    a1 = (s32) ((u32) a2 + (u32) a1);
    (*(volatile u8 *) (u32) (a1 + 81)) = (u8) a5;
    a1 = (*(volatile s32 *) (u32) (t7 + -200));
    a0 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u8 *) (u32) (a0 + 81)) = (u8) a5;
    a0 = (*(volatile s32 *) (u32) (t6 + -200));
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) (v1 + 81)) = (u8) a5;
    v1 = (*(volatile s32 *) (u32) (t5 + -200));
    v1 = (s32) ((u32) v1 + (u32) s2);
    (*(volatile u8 *) (u32) (v1 + 81)) = (u8) a5;
    v1 = (*(volatile s32 *) (u32) (t4 + -200));
    v1 = (s32) ((u32) v1 + (u32) a3);
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) (v1 + 81)) = (u8) a5; if (c_) goto L_00181CD8; }
    v1 = (s32) 0x520000U;
    a3 = (s32) ((u32) a7 + 0x1U);
    a6 = (*(volatile s32 *) (u32) (v1 + -200));
    a1 = (s32) ((u32) a3 << 1);
    a0 = (s32) ((u32) a7 << 1);
    a2 = (s32) ((u32) a7 + 0x2U);
    a3 = (s32) ((u32) a1 + (u32) a3);
    s1 = 0;
    a1 = (s32) ((u32) a2 << 1);
    s0 = 0;
    a1 = (s32) ((u32) a1 + (u32) a2);
    a2 = (s32) ((u32) a3 << 5);
    a1 = (s32) ((u32) a1 << 5);
    v1 = (s32) ((u32) a0 + (u32) a7);
    a4 = (s32) ((u32) v1 << 5);
    a0 = (s32) 0x520000U;
    a3 = (s32) ((u32) a4 + (u32) a6);
    v1 = (s32) 0x520000U;
    (*(volatile u8 *) (u32) (a3 + 81)) = (u8) a5;
    a0 = (*(volatile s32 *) (u32) (a0 + -200));
    a0 = (s32) ((u32) a2 + (u32) a0);
    (*(volatile u8 *) (u32) (a0 + 81)) = (u8) a5;
    v1 = (*(volatile s32 *) (u32) (v1 + -200));
    v1 = (s32) ((u32) a1 + (u32) v1);
    (*(volatile u8 *) (u32) (v1 + 81)) = (u8) a5;
L_00181E28:;
    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -200));
    s3 = (s32) ((u32) v1 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) s3);
    if (a0 == 0) goto L_00181E78;
    v0 = func_00141360(a0);
    s2 = v0;
    at = 0 < s2;
    { s32 c_ = at == 0; s4 = 0; if (c_) goto L_00181E78; }
L_00181E58:;
    a0 = (*(volatile s32 *) (u32) (s3 + 4));
    a1 = s4;
    a2 = 1; v0 = func_00142020(a0, a1, a2);
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < s2;
    if (v1 != 0) goto L_00181E58;
L_00181E78:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 27;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x60U); if (c_) goto L_00181E28; }
    return v0;
}
