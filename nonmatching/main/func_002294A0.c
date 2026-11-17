/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_IsUnavailable(void);
s32 func_00229600(s32);
s32 func_0022F190(void);
s32 memcpy(s32, s32, s32);
s32 memset(s32, s32, s32);

s32 func_002294A0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s0 = a0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) { a0 = s0; goto L_002294D0; }
    v0 = 0; goto L_002295E8;
L_002294D0:;
    v0 = func_00229600(a0);
    s0 = v0 & 0xff;
    v0 = 255;
    if (s0 != v0) { v1 = (s32) ((u32) s0 << 5); goto L_002294F0; }
    v0 = 0; goto L_002295E8;
L_002294F0:;
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 - (u32) s0);
    v0 = (s32) ((u32) v0 + 0xffff9560U);
    v1 = (s32) ((u32) v1 << 2);
    a1 = 0;
    a2 = 124;
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = memset(a0, a1, a2);
    v0 = func_0022F190();
    s1 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_00229534;
    s2 = 0; goto L_00229564;
L_00229534:;
    if (s1 != 0) { v0 = s0 < 37; goto L_00229544; }
    s2 = 0; goto L_00229564;
L_00229544:;
    if (v0 != 0) { v0 = (s32) ((u32) s0 << 7); goto L_00229554; }
    s2 = 0; goto L_00229564;
L_00229554:;
    at = (s32) 0x80000U;
    v0 = (s32) ((u32) s1 + (u32) v0);
    at = at | 0xa310;
    s2 = (s32) ((u32) v0 + (u32) at);
L_00229564:;
    v1 = (s32) ((u32) s0 << 5);
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 - (u32) s0);
    v0 = (s32) ((u32) v0 + 0xffff9560U);
    s0 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) s2 + 0x4cU);
    s1 = (s32) ((u32) v0 + (u32) s0);
    a2 = 32;
    a0 = s1; v0 = memcpy(a0, a1, a2);
    a0 = (s32) ((u32) s1 + 0x20U);
    a1 = (s32) ((u32) s2 + 0x6cU);
    a2 = 16; v0 = memcpy(a0, a1, a2);
    v0 = (s32) 0x540000U;
    a2 = (*(volatile s32 *) (u32) s2);
    v0 = (s32) ((u32) v0 + 0xffff9590U);
    v1 = 255;
    a0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (s32) ((u32) s2 + 0x4U);
    v0 = (s32) 0x540000U;
    (*(volatile u16 *) (u32) a0) = (u16) a2;
    v0 = (s32) ((u32) v0 + 0xffff9592U);
    a0 = (s32) ((u32) s1 + 0x34U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a2 = 72;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v0 = (s32) 0x540000U;
    v0 = (s32) ((u32) v0 + 0xffff9593U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u8 *) (u32) v0) = (u8) 0; v0 = memcpy(a0, a1, a2);
    v0 = s1;
L_002295E8:;
    return v0;
}
