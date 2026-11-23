/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00223960(s32);
s32 func_00223AE0(void);

s32 func_0021E070(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0 & 0xffff;
    v0 = s1 < 64;
    { s32 c_ = v0 != 0; s0 = 0; if (c_) goto L_0021E09C; }
    at = s1 < 204;
    if (at != 0) { v0 = s1 < 64; goto L_0021E0B0; }
L_0021E09C:;
    v0 = (s32) ((u32) s1 + 0xfffffedaU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = s0; goto L_0021E120; }
    v0 = s1 < 64;
L_0021E0B0:;
    if (v0 != 0) { v0 = (s32) ((u32) s1 + 0xfffffedaU); goto L_0021E0F0; }
    at = s1 < 204;
    if (at == 0) goto L_0021E0EC;
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s1 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0021E108;
L_0021E0EC:;
    v0 = (s32) ((u32) s1 + 0xfffffedaU);
L_0021E0F0:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = 0; goto L_0021E108; }
    v0 = func_00223960(a0);
    v0 = (*(volatile s32 *) (u32) v0);
L_0021E108:;
    v1 = (*(volatile u8 *) (u32) (v0 + 68));
    v0 = 1;
    if (v1 != v0) goto L_0021E11C;
    s0 = v0;
L_0021E11C:;
    v0 = s0;
L_0021E120:;
    return v0;
}
