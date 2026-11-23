/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
s32 func_0021E4B0(s32, s32, s32);
s32 func_0021FBC0(s32);
s32 func_002374D0(s32);
void func_003624F0(s32, s32);
void strncpy(s32, s32, s32);

void func_008BC230(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;

    s1 = a0;
    s0 = a1; v0 = func_002374D0(a0);
    if (v0 == 0) { v1 = s1 & 0xffff; goto L_008BC26C; }
    a0 = s0;
    a1 = 274; func_003624F0(a0, a1);
    goto L_008BC320;
L_008BC26C:;
    v0 = 295;
    if (v1 == v0) { a0 = s1; goto L_008BC290; }
    v0 = 294;
    if (v1 == v0) goto L_008BC28C;
    a0 = s1; goto L_008BC2A0;
L_008BC28C:;
    a0 = s1;
L_008BC290:;
    v0 = Pes6Team_ResolveSpecialId(a0);
    s1 = v0 & 0xffff;
    a0 = s1;
L_008BC2A0:;
    v0 = func_0021FBC0(a0);
    s2 = v0;
    if (s2 == 0) { a0 = s0; goto L_008BC314; }
    v0 = (*(volatile u16 *) (u32) s2);
    a0 = s1;
    a3 = s1;
    a1 = 0;
    a2 = 0;
    (*(volatile u16 *) (u32) s0) = (u16) v0; v0 = func_0021E4B0(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x2U);
    a1 = v0;
    a2 = 48; strncpy(a0, a1, a2);
    a2 = (s32) ((u32) s2 + 0x6U);
    (*(volatile u8 *) (u32) (s0 + 50)) = (u8) 0;
    a1 = (s32) ((u32) s0 + 0x34U);
    a0 = 179;
L_008BC2F0:;
    v1 = (*(volatile s16 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    (*(volatile u16 *) (u32) a1) = (u16) v1;
    a2 = (s32) ((u32) a2 + 0x2U);
    a1 = (s32) ((u32) a1 + 0x2U);
    if (a0 > 0) goto L_008BC2F0;
    goto L_008BC31C;
L_008BC314:;
    a1 = s1; func_003624F0(a0, a1);
L_008BC31C:;
L_008BC320:;
    return;
}
