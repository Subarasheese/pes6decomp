/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00226710(void);
s32 func_002307F0(void);
s32 func_002D5410(void);
void func_002D5630(s32, s32);
void func_009182D0(s32, s32, s32, s32);
void func_00919390(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_00917C30(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    s0 = a0; v0 = func_002307F0();
    v1 = v0 & 0xff;
    if (v1 != 0) { ; goto L_00917D38; }
    a0 = (s32) 0x930000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xfffff260U);
    a2 = 88;
    (*(volatile u32 *) (u32) (gp + -20020)) = (u32) 0; memset(a0, a1, a2);
    a1 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 + 0xfffff260U);
    a0 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v0) = (u32) v1; v0 = func_002D5410();
    a0 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 28)) = (u32) v0; v0 = func_00226710();
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    a0 = v0 & 0xff;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 32)) = (u32) a0; func_00919390(a0, a1, a2, a3);
    func_009182D0(a0, a1, a2, a3);
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (gp + -20020)); goto L_00917D00; }
    at = s0 < 31;
    if (at != 0) { s0 = 1; goto L_00917CFC; }
    s0 = (s32) ((u32) s0 + 0xffffffe2U); goto L_00917CFC;
L_00917CFC:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
L_00917D00:;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a1 = s0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x24U); func_002D5630(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 24)) = (u32) 0;
L_00917D38:;
    return;
}
