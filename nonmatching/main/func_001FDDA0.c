/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetBlock304(void);
s32 func_001FFDB0(s32, s32, s32, s32);
s32 func_00204D90(s32, s32, s32, s32, s32);
s32 func_002727B0(void);

s32 func_001FDDA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    a2 = a1;
    a6 = 0;
    a4 = (*(volatile s32 *) (u32) (v0 + 10064));
    a5 = 0;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x2800U);
    a3 = a5 & 0xff;
L_001FDDCC:;
    v0 = (s32) ((u32) a3 << 2);
    v0 = (s32) ((u32) v0 + (u32) a3);
    a1 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v1 + (u32) a1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a4 != v0) { v0 = (s32) ((u32) a5 + 0x1U); goto L_001FDE40; }
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x2810U);
    v1 = (s32) ((u32) v0 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = 255;
    { s32 c_ = v1 != v0; a6 = a3; if (c_) goto L_001FDE50; }
    s0 = 8;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 10064)) = (u32) s0; v0 = Pes6OptionData_GetBlock304();
    (*(volatile u8 *) (u32) (v0 + 7)) = (u8) s0; v0 = func_002727B0();
    a0 = v0 & 0xff;
    v1 = 1;
    if (a0 == v1) { ; goto L_001FDEF0; }
    v0 = func_00204D90(a0, a1, a2, a3, a4);
    goto L_001FDEEC;
    v0 = (s32) ((u32) a5 + 0x1U);
L_001FDE40:;
    a5 = v0 & 0xff;
    v0 = a5 < 8;
    if (v0 != 0) { a3 = a5 & 0xff; goto L_001FDDCC; }
L_001FDE50:;
    v0 = a5 & 0xff;
    s0 = 8;
    if (v0 != s0) { a3 = a6 & 0xff; goto L_001FDE8C; }
    v0 = a6 & 0xff;
    if (v0 != 0) goto L_001FDE88;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 10064)) = (u32) s0; v0 = Pes6OptionData_GetBlock304();
    (*(volatile u8 *) (u32) (v0 + 7)) = (u8) s0; v0 = func_00204D90(a0, a1, a2, a3, a4);
    goto L_001FDEEC;
L_001FDE88:;
    a3 = a6 & 0xff;
L_001FDE8C:;
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a3 << 2);
    v1 = (s32) ((u32) v1 + 0x2810U);
    a1 = (s32) ((u32) a1 + (u32) a3);
    v0 = 255;
    a1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { v1 = 1; goto L_001FDECC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
    v0 = (s32) ((u32) v1 << 3); goto L_001FDED0;
    v1 = 1;
L_001FDECC:;
    v0 = (s32) ((u32) v1 << 3);
L_001FDED0:;
    a1 = a0;
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_001FFDB0(a0, a1, a2, a3);
L_001FDEEC:;
L_001FDEF0:;
    return v0;
}
