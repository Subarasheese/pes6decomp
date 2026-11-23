/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0021F310(s32);
s32 func_00223960(s32);
s32 func_00223AE0(void);
void memcpy(s32, s32, s32);
void memset(s32, s32, s32);

void func_0021E390(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s2 = a0;
    s0 = 1;
    { s32 c_ = a1 == s0; s1 = a2; if (c_) goto L_0021E3BC; }
    s0 = 0;
L_0021E3BC:;
    s3 = s2 & 0xffff;
    v1 = s3 < 64;
    if (v1 != 0) { v1 = (s32) ((u32) s3 + 0xfffffedaU); goto L_0021E404; }
    at = s3 < 204;
    if (at == 0) goto L_0021E400;
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s3 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    s3 = (s32) ((u32) v0 + (u32) v1); goto L_0021E41C;
L_0021E400:;
    v1 = (s32) ((u32) s3 + 0xfffffedaU);
L_0021E404:;
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) { s3 = 0; goto L_0021E41C; }
    a0 = s2; v0 = func_00223960(a0);
    s3 = (*(volatile s32 *) (u32) v0);
L_0021E41C:;
    if (s3 == 0) { ; goto L_0021E490; }
    v0 = 1;
    if (s0 == v0) { a0 = (s32) ((u32) s3 + 0x31U); goto L_0021E464; }
    if (s0 == 0) { a0 = s3; goto L_0021E440; }
    a0 = s2; goto L_0021E484;
L_0021E440:;
    a1 = 0;
    a2 = 49; memset(a0, a1, a2);
    a0 = s3;
    a1 = s1;
    a2 = 49; memcpy(a0, a1, a2);
    goto L_0021E480;
L_0021E464:;
    a1 = 0;
    a2 = 4; memset(a0, a1, a2);
    a0 = (s32) ((u32) s3 + 0x31U);
    a1 = s1;
    a2 = 4; memcpy(a0, a1, a2);
L_0021E480:;
    a0 = s2;
L_0021E484:;
    func_0021F310(a0);
L_0021E490:;
    return;
}
