/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00226710(void);
s32 func_002305D0(void);
s32 func_002307F0(void);
s32 func_002D5410(void);
void func_002D5630(s32, s32);
void func_008FF280(s32, s32, s32, s32);
void func_008FF440(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_008FE8B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s0 = a0; v0 = func_002305D0();
    s1 = v0 & 0xff; v0 = func_002307F0();
    a0 = v0 & 0xff;
    v1 = 1;
    if (a0 == v1) goto L_008FE8F0;
    a0 = s1 & 0xff;
    v1 = 2;
    if (a0 != v1) { ; goto L_008FE9D4; }
L_008FE8F0:;
    a0 = (s32) 0x930000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffef00U);
    a2 = 56;
    (*(volatile u32 *) (u32) (gp + -20056)) = (u32) 0; memset(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (gp + -20056));
    a0 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb1acU);
    a0 = (s32) ((u32) a0 + 0xffffef00U);
    a1 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 - (u32) a2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) v1; v0 = func_002D5410();
    a0 = (*(volatile s32 *) (u32) (gp + -20056));
    v1 = (s32) ((u32) gp + 0xffffb1acU);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 20)) = (u32) v0; v0 = func_00226710();
    v1 = (*(volatile s32 *) (u32) (gp + -20056));
    a0 = v0 & 0xff;
    v0 = (s32) ((u32) gp + 0xffffb1acU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 24)) = (u32) a0; func_008FF280(a0, a1, a2, a3);
    func_008FF440(a0, a1, a2, a3);
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (gp + -20056)); goto L_008FE99C; }
    at = s0 < 31;
    if (at != 0) { s0 = 1; goto L_008FE998; }
    s0 = (s32) ((u32) s0 + 0xffffffe2U); goto L_008FE998;
L_008FE998:;
    v1 = (*(volatile s32 *) (u32) (gp + -20056));
L_008FE99C:;
    v0 = (s32) ((u32) gp + 0xffffb1acU);
    a1 = s0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x20U); func_002D5630(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -20056));
    v1 = (s32) ((u32) gp + 0xffffb1acU);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) 0;
L_008FE9D4:;
    return;
}
