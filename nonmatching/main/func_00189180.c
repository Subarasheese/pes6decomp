/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);

s32 func_00189180(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v0 = (s32) 0x520000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xc0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (*(volatile s32 *) (u32) v0);
    v1 = (*(volatile s32 *) (u32) s0);
    { s32 c_ = v1 == 0; s1 = a1; if (c_) goto L_001891DC; }
    if (s1 == 0) goto L_001891E4;
    v0 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0xb0U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = v0 & s1;
    if (v0 != 0) goto L_001891E4;
    v0 = 0; goto L_001892A4;
L_001891DC:;
    v0 = 0; goto L_001892A4;
L_001891E4:;
    a0 = v1 & 0xffff; v0 = Pes6Random_Below(a0);
    a2 = v0 & 0xffff;
    { s32 c_ = s1 == 0; a3 = a2; if (c_) goto L_00189298; }
    v0 = ~(s1 | 0);
    v1 = v0 & 0xffff;
L_00189200:;
    v0 = (s32) ((u32) a3 << 6);
L_00189204:;
    a0 = (s32) ((u32) s0 + (u32) v0);
    v0 = (s32) ((u32) a0 + 0x4U);
    a0 = (*(volatile u16 *) (u32) (a0 + 64));
    a0 = a0 & s1;
    a0 = (u64) 0 < (u64) a0;
    a0 = a0 ^ 0x1;
    if (a0 != 0) goto L_00189244;
    a1 = (*(volatile u16 *) (u32) (v0 + 62));
    a0 = a1 & s1;
    if (a0 != 0) goto L_00189244;
    v1 = s1 & 0xffff;
    v1 = a1 | v1;
    (*(volatile u16 *) (u32) (v0 + 62)) = (u16) v1; goto L_001892A4;
L_00189244:;
    v0 = (*(volatile s32 *) (u32) s0);
    a3 = (s32) ((u32) a3 + 0x1U);
    if (a3 != v0) goto L_00189258;
    a3 = 0;
L_00189258:;
    if (a3 != a2) goto L_00189200;
    at = 0 < v0;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_00189200; }
    a0 = s0;
L_00189270:;
    v0 = (*(volatile u16 *) (u32) (a0 + 66));
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = v0 & v1;
    (*(volatile u16 *) (u32) (a0 + 66)) = (u16) v0;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = a1 < v0;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x40U); if (c_) goto L_00189270; }
    v0 = (s32) ((u32) a3 << 6); goto L_00189204;
L_00189298:;
    v0 = (s32) ((u32) a2 << 6);
    v0 = (s32) ((u32) s0 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0x4U);
L_001892A4:;
    return v0;
}
