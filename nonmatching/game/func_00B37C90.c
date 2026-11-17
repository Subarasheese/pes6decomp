/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BBB8C0(s32);
void func_00BBBF40(s32, s32, s32, s32, s32);
s32 func_00BF6270(void);

void func_00B37C90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    a0 = 3;
    s0 = -1; v0 = func_00BBB8C0(a0);
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -13615));
    v1 = (s32) ((u32) v1 + 0xffffff98U);
    at = (u64) v1 < (u64) (s64) 8;
    if (at == 0) goto L_00B37DB8;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffc010U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xb37cdcU) goto L_00B37CDC; if (t_ == 0xb37cf8U) goto L_00B37CF8; if (t_ == 0xb37d14U) goto L_00B37D14; if (t_ == 0xb37d30U) goto L_00B37D30; if (t_ == 0xb37d4cU) goto L_00B37D4C; if (t_ == 0xb37d68U) goto L_00B37D68; if (t_ == 0xb37d84U) goto L_00B37D84; if (t_ == 0xb37da0U) goto L_00B37DA0; }
L_00B37CDC:;
    v1 = 1;
    if (v0 == v1) { s0 = 9; goto L_00B37DB8; }
    if (v0 == 0) { s0 = 8; goto L_00B37DB8; }
    s0 = 10; goto L_00B37DB8;
L_00B37CF8:;
    v1 = 1;
    if (v0 == v1) { s0 = 12; goto L_00B37DB8; }
    if (v0 == 0) { s0 = 11; goto L_00B37DB8; }
    s0 = 13; goto L_00B37DB8;
L_00B37D14:;
    v1 = 1;
    if (v0 == v1) { s0 = 15; goto L_00B37DB8; }
    if (v0 == 0) { s0 = 14; goto L_00B37DB8; }
    s0 = 16; goto L_00B37DB8;
L_00B37D30:;
    v1 = 1;
    if (v0 == v1) { s0 = 18; goto L_00B37DB8; }
    if (v0 == 0) { s0 = 17; goto L_00B37DB8; }
    s0 = 19; goto L_00B37DB8;
L_00B37D4C:;
    v1 = 1;
    if (v0 == v1) { s0 = 18; goto L_00B37DB8; }
    if (v0 == 0) { s0 = 17; goto L_00B37DB8; }
    s0 = 19; goto L_00B37DB8;
L_00B37D68:;
    v1 = 1;
    if (v0 == v1) { s0 = 12; goto L_00B37DB8; }
    if (v0 == 0) { s0 = 11; goto L_00B37DB8; }
    s0 = 13; goto L_00B37DB8;
L_00B37D84:;
    v1 = 1;
    if (v0 == v1) { s0 = 9; goto L_00B37DB8; }
    if (v0 == 0) { s0 = 8; goto L_00B37DB8; }
    s0 = 10; goto L_00B37DB8;
L_00B37DA0:;
    v1 = 1;
    if (v0 == v1) { s0 = 15; goto L_00B37DB8; }
    if (v0 == 0) { s0 = 14; goto L_00B37DB8; }
    s0 = 16;
L_00B37DB8:;
    if (s0 >= 0) goto L_00B37DC8;
L_00B37DC0:;
    goto L_00B37DE4;
L_00B37DC8:;
    v0 = func_00BF6270();
    a1 = s0 & 0xff;
    a0 = v0 & 0xff; func_00BBBF40(a0, a1, a2, a3, a4);
    goto L_00B37DC0;
L_00B37DE4:;
    return;
}
