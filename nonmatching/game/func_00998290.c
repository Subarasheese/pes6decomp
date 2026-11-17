/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00998290(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0;
    s32 hi = 0, lo = 0;

    a1 = (*(volatile u8 *) (u32) a0);
    a2 = (s32) 0x590000U;
    v0 = 0;
    a2 = (s32) ((u32) a2 + 0x2800U);
L_009982A0:;
    v1 = (*(volatile u8 *) (u32) (a2 + 16));
    if (a1 != v1) { v0 = (s32) ((u32) v0 + 0x1U); goto L_009982E0; }
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0x2803U);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) goto L_009982D8;
    v0 = 255;
L_009982D8:;
    goto L_009983AC;
L_009982E0:;
    v1 = v0 < 8;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x28U); if (c_) goto L_009982A0; }
    v0 = (s32) 0x590000U;
    a7 = (s32) 0x590000U;
    a3 = (*(volatile u8 *) (u32) (v0 + 7756));
    a1 = (s32) 0x590000U;
    a4 = 0;
    t6 = 255;
    t5 = 23;
    a7 = (s32) ((u32) a7 + 0xffffe5b0U);
    a1 = (s32) ((u32) a1 + 0x2800U);
    t7 = 1;
    v0 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (v0 + 7705));
L_0099831C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 18));
    v0 = (s32) ((u32) a1 + (u32) v0);
    v1 = (s32) ((u32) v0 + 0x140U);
    v0 = (*(volatile u8 *) (u32) (v0 + 320));
    a5 = (s32) ((u32) v0 << 2);
    a5 = (s32) ((u32) a5 + (u32) v0);
    a5 = (s32) ((u32) a5 << 3);
    t8 = (s32) ((u32) a1 + (u32) a5);
    a5 = (*(volatile u8 *) (u32) (t8 + 3));
    if (a5 != t7) goto L_009983AC;
    a5 = (*(volatile u8 *) (u32) (t8 + 16));
    if (a5 == t6) { t4 = t7; goto L_0099835C; }
    if ((s32) t5 != 0) { s64 q_ = (s32) ((s32) a5 / (s32) t5); hi = (s32) ((s32) a5 % (s32) t5); lo = q_; }
    t4 = hi;
L_0099835C:;
    a5 = (*(volatile u8 *) (u32) (t8 + 4));
    a6 = (s32) ((u32) t4 << 3);
    a6 = (s32) ((u32) a6 + (u32) t4);
    a6 = (s32) ((u32) a6 << 6);
    { s32 c_ = a5 != 0; a6 = (s32) ((u32) a7 + (u32) a6); if (c_) goto L_00998394; }
    a5 = (*(volatile u8 *) (u32) a6);
    if (a3 == a5) goto L_00998394;
    if (a2 != a5) goto L_00998394;
    a5 = (*(volatile u8 *) (u32) (a6 + 16));
    if (a5 == 0) goto L_009983AC;
L_00998394:;
    a5 = (*(volatile u8 *) (u32) (t8 + 2));
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < 8;
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) v1) = (u8) a5; if (c_) goto L_0099831C; }
    v0 = 255;
L_009983AC:;
    return v0;
}
