/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00A1B4A0(s32, s32, s32, s32);
s32 func_00BDB8B0(s32, s32, s32, s32);

s32 func_00910D80(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 1; goto L_00910F60; }
    v1 = (*(volatile u8 *) (u32) (s0 + 18));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e67U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (s0 + 19)); goto L_00910DF8; }
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 != v0) goto L_00910EE4;
    v0 = (*(volatile s32 *) (u32) (s0 + 272));
    at = (s32) 0x100000U;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00910EE4;
    v0 = 1; goto L_00910F60;
L_00910DF8:;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    a0 = (*(volatile u8 *) (u32) s0);
    a2 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) a2);
    a1 = (*(volatile u8 *) (u32) v0);
    if (a0 == a1) { v1 = (*(volatile u8 *) (u32) (s0 + 22)); goto L_00910EEC; }
L_00910E18:;
    if (a0 == a1) goto L_00910F00;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e50U);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 == v0) goto L_00910F00;
    v0 = (*(volatile u8 *) (u32) (s0 + 472));
L_00910E3C:;
    at = v0 < 2;
    if (at == 0) goto L_00910EBC;
    v1 = (*(volatile u8 *) (u32) (s0 + 477));
    v0 = 53;
    if (v1 == v0) goto L_00910EB4;
    v0 = 52;
    if (v1 == v0) goto L_00910EB4;
    v0 = 51;
    if (v1 == v0) goto L_00910EB4;
    v0 = 50;
    if (v1 == v0) goto L_00910EB4;
    v0 = 44;
    if (v1 == v0) goto L_00910EB4;
    v0 = 43;
    if (v1 == v0) goto L_00910EB4;
    v0 = 15;
    if (v1 == v0) goto L_00910EB4;
    v0 = 16;
    if (v1 == v0) goto L_00910EB4;
    v1 = (*(volatile u8 *) (u32) (s0 + 22)); goto L_00910EC0;
L_00910EB4:;
    v0 = 1; goto L_00910F60;
L_00910EBC:;
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
L_00910EC0:;
    v0 = 253;
    if (v1 == v0) goto L_00910EE4;
    a0 = s0; v0 = func_00A1B4A0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00910EE4;
    v0 = 1; goto L_00910F60;
L_00910EE4:;
    v0 = 0; goto L_00910F60;
L_00910EEC:;
    v0 = 7;
    if (v1 == v0) goto L_00910E18;
    v0 = 1; goto L_00910F60;
L_00910F00:;
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    v0 = 67;
    if (v1 == v0) goto L_00910F5C;
    v0 = 15;
    if (v1 == v0) goto L_00910F5C;
    v0 = 26;
    if (v1 == v0) goto L_00910F5C;
    v0 = 27;
    if (v1 == v0) goto L_00910F54;
    v0 = 23;
    if (v1 == v0) goto L_00910F54;
    v0 = 22;
    if (v1 == v0) goto L_00910F54;
    v0 = (*(volatile u8 *) (u32) (s0 + 472)); goto L_00910E3C;
L_00910F54:;
    v0 = 1; goto L_00910F60;
L_00910F5C:;
    v0 = 1;
L_00910F60:;
    return v0;
}
