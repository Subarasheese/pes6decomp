/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00223960(s64);
s64 func_002EE7A0(s64, s64, s64, s64);
void func_002EEC80(void);
void memcpy(s64, s64, s64);

s64 func_002EE6A0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    v0 = (s32) ((u32) s1 + 0xfffffe46U);
    at = (u64) v0 < (u64) (s64) 2;
    { s32 c_ = at == 0; s0 = a3; if (c_) goto L_002EE75C; }
    v0 = 442;
    if (s1 != v0) { v0 = 443; goto L_002EE6EC; }
    a0 = (s64) ((u64) 0 + (u64) (s64) 294); goto L_002EE6F8;
L_002EE6EC:;
    if (s1 != v0) { s4 = 0; goto L_002EE714; }
    a0 = (s64) ((u64) 0 + (u64) (s64) 295);
L_002EE6F8:;
    v0 = func_00223960(a0);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) v0); goto L_002EE710; }
    s4 = 0; goto L_002EE714;
L_002EE710:;
    s4 = (s32) ((u32) v0 + 0xbfcU);
L_002EE714:;
    if (s4 != 0) { v0 = 1; goto L_002EE724; }
    s0 = 0; goto L_002EE754;
L_002EE724:;
    a1 = s3;
    (*(volatile u8 *) (u32) s4) = (u8) v0;
    a0 = (s32) ((u32) s4 + 0x40U);
    (*(volatile u8 *) (u32) (s4 + 1)) = (u8) s0;
    a2 = 1024;
    (*(volatile u32 *) (u32) (s4 + 4)) = (u32) s1; memcpy(a0, a1, a2);
    a0 = (s32) ((u32) s4 + 0x440U);
    a1 = s2;
    a2 = 4096; memcpy(a0, a1, a2);
    s0 = 1;
L_002EE754:;
    goto L_002EE768;
L_002EE75C:;
    v0 = func_002EE7A0(a0, a1, a2, a3);
    s0 = v0;
L_002EE768:;
    func_002EEC80();
    v0 = s0;
    return v0;
}
