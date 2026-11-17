/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00237530(s32);

s32 func_0021E940(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;

    a1 = a0 & 0xffff;
    { s32 c_ = a1 < 0; v0 = (s32) 0x3000000U; if (c_) goto L_0021E960; }
    at = a1 < 57;
    if (at != 0) { v0 = a0 & 0xffff; goto L_0021E9C4; }
L_0021E960:;
    v1 = a1 < 57;
    if (v1 != 0) { v1 = a1 < 204; goto L_0021E97C; }
    at = a1 < 64;
    if (at != 0) goto L_0021E9C0;
    v1 = a1 < 204;
L_0021E97C:;
    if (v1 != 0) { v1 = a1 < 254; goto L_0021E994; }
    at = a1 < 221;
    if (at != 0) goto L_0021E9C0;
    v1 = a1 < 254;
L_0021E994:;
    if (v1 != 0) { v1 = a1 < 272; goto L_0021E9AC; }
    at = a1 < 270;
    if (at != 0) goto L_0021E9C0;
    v1 = a1 < 272;
L_0021E9AC:;
    if (v1 != 0) { v1 = (s32) ((u32) a1 + 0xfffffedaU); goto L_0021E9F4; }
    at = a1 < 274;
    if (at == 0) goto L_0021E9F0;
L_0021E9C0:;
    v0 = a0 & 0xffff;
L_0021E9C4:;
    v1 = (s32) 0x540000U;
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8590U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) ((u32) v0 + 0xffff97c0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_0021EA2C;
L_0021E9F0:;
    v1 = (s32) ((u32) a1 + 0xfffffedaU);
L_0021E9F4:;
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) { ; goto L_0021EA30; }
    v0 = func_00237530(a0);
    a0 = (*(volatile u16 *) (u32) (v0 + 368));
    v0 = (s32) ((u32) a0 + 0xfffffedaU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_0021EA24;
    v0 = (s32) 0x3000000U; goto L_0021EA2C;
L_0021EA24:;
    v0 = func_0021E940(a0, a1, a2, a3);
L_0021EA2C:;
L_0021EA30:;
    return v0;
}
