/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s32, s32);
void func_001DF420(s32, s32);
void func_001ED8F0(s32, s32);
s32 func_002D5410(void);
void func_002D5630(s32, s32);
s32 func_002F9630(s32);
s32 func_002F96F0(s32, s32);
void func_00922830(s32, s32, s32, s32);
void func_00922CD0(s32);
void memset(s32, s32, s32);

void func_00922020(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    a1 = 0;
    a2 = 44;
    s0 = a0;
    (*(volatile u32 *) (u32) (gp + -19860)) = (u32) 0;
    a0 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xfffff680U); memset(a0, a1, a2);
    a1 = (*(volatile s32 *) (u32) (gp + -19860));
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb270U);
    v1 = (s32) ((u32) v1 + 0xfffff680U);
    a0 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v0) = (u32) v1; v0 = func_002D5410();
    a0 = (*(volatile s32 *) (u32) (gp + -19860));
    v1 = (s32) ((u32) gp + 0xffffb270U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 20)) = (u32) v0; func_00922830(a0, a1, a2, a3);
    a0 = 1; func_00922CD0(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -19860));
    v0 = (s32) ((u32) gp + 0xffffb270U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 32));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_009221B0;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s1 = v0;
    { s32 c_ = s1 <= 0; s2 = 0; if (c_) goto L_00922120; }
    v1 = (*(volatile s32 *) (u32) (gp + -19860));
L_009220E4:;
    v0 = (s32) ((u32) gp + 0xffffb270U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 255; func_001D76B0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s1;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19860)); goto L_009220E4; }
L_00922120:;
    v1 = (*(volatile s32 *) (u32) (gp + -19860));
    v0 = (s32) ((u32) gp + 0xffffb270U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s1; goto L_00922154; }
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s1;
L_00922154:;
    a1 = 255; func_001ED8F0(a0, a1);
    s2 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -19860));
L_00922164:;
    v0 = (s32) ((u32) gp + 0xffffb270U);
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00922190;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_00922190:;
    a0 = s1;
    a1 = 255; func_001DF420(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 4;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19860)); goto L_00922164; }
L_009221B0:;
    if (s0 <= 0) { a0 = (*(volatile s32 *) (u32) (gp + -19860)); goto L_009221D0; }
    at = s0 < 31;
    if (at != 0) { s0 = 1; goto L_009221CC; }
    s0 = (s32) ((u32) s0 + 0xffffffe2U); goto L_009221CC;
L_009221CC:;
    a0 = (*(volatile s32 *) (u32) (gp + -19860));
L_009221D0:;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff680U);
    a1 = s0;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0x18U); func_002D5630(a0, a1);
    return;
}
