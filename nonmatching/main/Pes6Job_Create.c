/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 memset(s32, s32, s32);

s32 Pes6Job_Create(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a2;
    a2 = 7;
    s0 = (s32) 0x5f0000U;
    { s32 c_ = a0 != a2; s0 = (s32) ((u32) s0 + 0x1cc0U); if (c_) goto L_00338B20; }
    v0 = (s32) ((u32) s0 + 0x94U);
    if (v0 == 0) goto L_00338B20;
    v1 = (*(volatile s32 *) (u32) (v0 + 12));
L_00338B08:;
    if (v1 != a2) { v0 = (*(volatile s32 *) (u32) (v0 + 20)); goto L_00338B18; }
    goto L_00338C70;
L_00338B18:;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (v0 + 12)); goto L_00338B08; }
L_00338B20:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    if (v0 == 0) goto L_00338B44;
    v0 = (s32) 0x80000000U;
    v0 = a0 & v0;
    if (v0 == 0) goto L_00338B44;
    v0 = 0; goto L_00338C6C;
L_00338B44:;
    v0 = (s32) 0x5f0000U;
    a2 = (s32) 0x5f0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 7376));
    a2 = (s32) ((u32) a2 + 0x1cc0U);
    { s32 c_ = v1 <= 0; a3 = 0; if (c_) goto L_00338B80; }
L_00338B5C:;
    v0 = (*(volatile s32 *) (u32) (a2 + 24));
    if (v0 != a0) { a3 = (s32) ((u32) a3 + 0x1U); goto L_00338B70; }
    v0 = 1; goto L_00338B84;
L_00338B70:;
    v0 = a3 < v1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_00338B5C; }
L_00338B80:;
    v0 = 0;
L_00338B84:;
    if (v0 == 0) goto L_00338B94;
    v0 = 0; goto L_00338C6C;
L_00338B94:;
    v0 = (s32) 0x5f0000U;
    a2 = (*(volatile s32 *) (u32) (v0 + 7692));
    v1 = (*(volatile s32 *) (u32) (a2 + 20));
    if (v1 != 0) { v0 = (*(volatile s32 *) (u32) (v1 + 20)); goto L_00338BB0; }
    v1 = 0; goto L_00338BBC;
L_00338BB0:;
    s1 = v1;
    v1 = 1;
    (*(volatile u32 *) (u32) (a2 + 20)) = (u32) v0;
L_00338BBC:;
    if (v1 != 0) { v1 = (*(volatile s32 *) (u32) (s0 + 8)); goto L_00338BCC; }
    v0 = 0; goto L_00338C6C;
L_00338BCC:;
    v0 = 1;
    a2 = 16;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v1;
    (*(volatile u32 *) (u32) s1) = (u32) a1;
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) s2;
    a1 = 0;
    (*(volatile u32 *) (u32) (s1 + 40)) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 36)) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 32)) = (u32) 0;
    (*(volatile u8 *) (u32) (s1 + 24)) = (u8) 0;
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) a0;
    (*(volatile u8 *) (u32) (s1 + 25)) = (u8) 0;
    a0 = (s32) ((u32) s1 + 0x2cU);
    (*(volatile u8 *) (u32) (s1 + 26)) = (u8) 0;
    (*(volatile u8 *) (u32) (s1 + 27)) = (u8) 0;
    (*(volatile u32 *) (u32) (s1 + 28)) = (u32) v0; v0 = memset(a0, a1, a2);
    a0 = (s32) ((u32) s1 + 0x3cU);
    a1 = 0;
    a2 = 32; v0 = memset(a0, a1, a2);
    v1 = (s32) ((u32) s0 + 0x94U);
    if (v1 == 0) goto L_00338C68;
    v0 = (*(volatile s32 *) (u32) (v1 + 8));
L_00338C34:;
    at = s2 < v0;
    if (at == 0) { v1 = (*(volatile s32 *) (u32) (v1 + 20)); goto L_00338C5C; }
    (*(volatile u32 *) (u32) (s1 + 20)) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (v1 + 16));
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (v1 + 16));
    (*(volatile u32 *) (u32) (v0 + 20)) = (u32) s1;
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) s1; goto L_00338C68;
L_00338C5C:;
    if (v1 != 0) { v0 = (*(volatile s32 *) (u32) (v1 + 8)); goto L_00338C34; }
L_00338C68:;
    v0 = s1;
L_00338C6C:;
L_00338C70:;
    return v0;
}
