/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D5C40(s32, s32, s32, s32);
void func_001DA4B0(s32, s32, s32, s32);
void func_001DD560(s32, s32, s32, s32);
void func_001E7140(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001F0210(s32, s32, s32, s32);
void func_001F7B70(s32, s32, s32, s32);
s32 func_0021DF90(s32);
s32 func_0021E000(s32);

void func_001B92F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a1;
    { s32 c_ = s2 <= 0; s1 = 0; if (c_) goto L_001B93B8; }
    s0 = a0;
L_001B9314:;
    v1 = (*(volatile s32 *) (u32) s0);
    at = (u64) v1 < (u64) (s64) 6;
    { s32 c_ = at == 0; a0 = (*(volatile s32 *) (u32) (s0 + 4)); if (c_) goto L_001B93A8; }
    a1 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0x1560U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x1b9340U) goto L_001B9340; if (t_ == 0x1b9350U) goto L_001B9350; if (t_ == 0x1b9368U) goto L_001B9368; if (t_ == 0x1b9378U) goto L_001B9378; if (t_ == 0x1b9390U) goto L_001B9390; if (t_ == 0x1b93a0U) goto L_001B93A0; }
L_001B9340:;
    func_001DD560(a0, a1, a2, a3);
    goto L_001B93A8;
L_001B9350:;
    v0 = func_0021E000(a0);
    a0 = v0; func_001E7140(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_001B93A8;
L_001B9368:;
    func_001DA4B0(a0, a1, a2, a3);
    goto L_001B93A8;
L_001B9378:;
    v0 = func_0021DF90(a0);
    a0 = v0; func_001F0210(a0, a1, a2, a3);
    goto L_001B93A8;
L_001B9390:;
    func_001D5C40(a0, a1, a2, a3);
    goto L_001B93A8;
L_001B93A0:;
    func_001F7B70(a0, a1, a2, a3);
L_001B93A8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < s2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0xcU); if (c_) goto L_001B9314; }
L_001B93B8:;
    return;
}
