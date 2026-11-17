/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002727C0(s32, s32, s32, s32);
s32 func_0027B5C0(s32);
void func_0027C230(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00BF6280(void);

void func_00B37C10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = func_00BF6280();
    if (v0 != 0) goto L_00B37C7C;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -13615));
    v0 = (s32) ((u32) v0 + 0xffffff98U);
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) goto L_00B37C64;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffbff0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb37c5cU) goto L_00B37C5C; if (t_ == 0xb37c64U) goto L_00B37C64; }
L_00B37C5C:;
    a0 = 92; goto L_00B37C68;
L_00B37C64:;
    a0 = 93;
L_00B37C68:;
    v0 = func_0027B5C0(a0);
    a0 = v0;
    a1 = 5; func_0027C230(a0, a1, a2, a3, a4, a5, a6, a7);
L_00B37C7C:;
    a0 = 18; func_002727C0(a0, a1, a2, a3);
    return;
}
