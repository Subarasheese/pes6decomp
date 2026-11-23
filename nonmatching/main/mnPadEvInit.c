/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001BA4A0(s64, s64, s64, s64);
void func_001BAD60(void);
s64 func_001BC540(void);
s64 func_001BC8D0(s64, s64, s64, s64);

s64 mnPadEvInit(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = (*(volatile s32 *) (u32) (a0 + 12));
    { s32 c_ = v0 == 0; s1 = a0; if (c_) goto L_001BC878; }
    v1 = (*(volatile s32 *) (u32) (s1 + 20));
    a1 = (*(volatile s32 *) (u32) (s1 + 16));
    a0 = (*(volatile s32 *) (u32) (s1 + 24));
    at = v1 < 4;
    { s32 c_ = at == 0; v0 = 0; if (c_) goto L_001BC870; }
    v0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) a0 + (u32) v0);
    s0 = (s64) ((u64) v0 << 48);
    s0 = s0 >> 48; v0 = func_001BC540();
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    v1 = (s32) ((u32) a0 + 0x1U);
    s2 = (s32) ((u32) a0 << 1);
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) v1; v0 = func_001BC540();
    v0 = (*(volatile s32 *) (u32) (v0 + 8));
    v1 = (s32) ((u32) v0 + (u32) s2);
    v0 = 1;
    (*(volatile u16 *) (u32) v1) = (u16) s0;
L_001BC870:;
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) 0; goto L_001BC880;
L_001BC878:;
    v0 = func_001BC8D0(a0, a1, a2, a3);
L_001BC880:;
    v1 = 1;
    if (v0 != v1) goto L_001BC8A4;
    v0 = func_001BC540();
    a0 = v0; func_001BA4A0(a0, a1, a2, a3);
    goto L_001BC8B0;
L_001BC8A4:;
    func_001BAD60();
L_001BC8B0:;
    v0 = 0;
    return v0;
}
