/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6MatchClock_GetRemaining(void);
s32 func_0030EA70(s32, s32, s32, s32);
void func_00310760(s32, s32, s32);
void func_003107A0(s32, s32, s32);
void func_00310800(s32, s32);
s32 func_00326890(s32, s32, s32, s32);
s32 func_0032E8D0(s32);

s32 func_003549C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v1 = 5;
    s5 = a0;
    s4 = a1;
    a1 = (s32) 0x3b0000U;
    s3 = a2;
    a1 = (s32) ((u32) a1 + 0x7a90U);
    a0 = (s32) ((u32) sp + 0x78U);
L_003549FC:;
    v0 = (*(volatile s16 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) a0) = (u16) v0;
    a1 = (s32) ((u32) a1 + 0x2U);
    a0 = (s32) ((u32) a0 + 0x2U);
    if (v1 > 0) goto L_003549FC;
    v0 = func_0030EA70(a0, a1, a2, a3);
    at = v0 < 85;
    if (at == 0) { v0 = 0; goto L_00354BD8; }
    v0 = Pes6MatchClock_GetRemaining();
    if (v0 != 0) { s1 = s4 & 0xff; goto L_00354A48; }
    v0 = 0;
    goto L_00354BD8;
L_00354A48:;
    v0 = 255;
    if (s1 != v0) { a0 = (s32) ((u32) sp + 0x88U); goto L_00354A6C; }
    a0 = 80; v0 = func_0032E8D0(a0);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    (*(volatile u32 *) (u32) s5) = (u32) v0; goto L_00354BD4;
L_00354A6C:;
    a1 = s1; func_00310800(a0, a1);
    v0 = (*(volatile s32 *) (u32) (sp + 136));
    { s32 c_ = v0 <= 0; s2 = 0; if (c_) goto L_00354BC0; }
    a0 = s1;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) a0 << 4);
    v0 = (s32) ((u32) v0 + 0x2980U);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 8);
    s0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) sp + 0x8fU);
L_00354AA8:;
    a1 = s2;
    a2 = s1; func_003107A0(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (sp + 143));
    a0 = s3;
    a1 = s4;
    a3 = (s32) 0x800000U; v0 = func_00326890(a0, a1, a2, a3);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (sp + 143)); goto L_00354AE4; }
    v0 = 1;
    (*(volatile u32 *) (u32) s5) = (u32) v0; goto L_00354BD8;
L_00354AE4:;
    a1 = 0;
    a0 = (s32) ((u32) sp + 0x78U);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) s0 + (u32) v0);
    v1 = (*(volatile u16 *) (u32) (v0 + 70));
L_00354B08:;
    v0 = (*(volatile u16 *) (u32) a0);
    if (v0 != v1) { a1 = (s32) ((u32) a1 + 0x1U); goto L_00354B20; }
    v0 = 1;
    (*(volatile u32 *) (u32) s5) = (u32) v0; goto L_00354BD8;
L_00354B20:;
    v0 = a1 < 5;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x2U); if (c_) goto L_00354B08; }
    a0 = (s32) ((u32) sp + 0x8fU);
    a1 = s2;
    a2 = s1; func_00310760(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (sp + 143));
    a0 = s3;
    a1 = s4;
    a3 = (s32) 0x800000U; v0 = func_00326890(a0, a1, a2, a3);
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) (sp + 143)); goto L_00354B64; }
    v0 = 1;
    (*(volatile u32 *) (u32) s5) = (u32) v0; goto L_00354BD8;
L_00354B64:;
    a0 = 0;
    a1 = (s32) ((u32) sp + 0x78U);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) s0 + (u32) v0);
    v1 = (*(volatile u16 *) (u32) (v0 + 70));
L_00354B88:;
    v0 = (*(volatile u16 *) (u32) a1);
    if (v0 != v1) { a0 = (s32) ((u32) a0 + 0x1U); goto L_00354BA0; }
    v0 = 1;
    (*(volatile u32 *) (u32) s5) = (u32) v0; goto L_00354BD8;
L_00354BA0:;
    v0 = a0 < 5;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_00354B88; }
    v0 = (*(volatile s32 *) (u32) (sp + 136));
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < v0;
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x8fU); goto L_00354AA8; }
L_00354BC0:;
    a0 = 80; v0 = func_0032E8D0(a0);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_00354BD4:;
    v0 = 1;
L_00354BD8:;
    return v0;
}
