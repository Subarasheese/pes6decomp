/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001299A0(s32, s32);
s32 func_001299B0(s32, s32, s32, s32);
void func_00145BC0(s32, s32, s32);
void func_00146C70(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00148AE0(s32, s32);
void func_001494F0(s32);
void memset(s32, s32, s32);

void func_00148800(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s4 = a0;
    v0 = (s32) ((u32) s4 << 4);
    s3 = a1;
    a0 = (s32) 0x510000U;
    v0 = (s32) ((u32) v0 + (u32) s4);
    a0 = (s32) ((u32) a0 + 0xffffad90U);
    a1 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) s3 << 5);
    v0 = (s32) ((u32) s3 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) ((u32) v0 + (u32) s3);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x370000U;
    v0 = (s32) ((u32) v0 + 0x68acU);
    s2 = a2;
    s0 = (s32) ((u32) v0 + (u32) v1);
    a4 = s2 & 0xff;
    v0 = (*(volatile s32 *) (u32) s0);
    at = (u64) v0 < (u64) a4;
    { s32 c_ = at != 0; s1 = (s32) ((u32) a0 + 0x18U); if (c_) goto L_0014895C; }
    v1 = (*(volatile u8 *) (u32) (s1 + 28));
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (s1 + 12));
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) s0) = (u32) v0; if (c_) goto L_00148894; }
    func_001299A0(a0, a1);
L_00148894:;
    a0 = s1;
    a1 = 0;
    a2 = 32; memset(a0, a1, a2);
    if (s2 != 0) { (*(volatile u8 *) (u32) (s1 + 28)) = (u8) s2; goto L_00148980; }
L_001488AC:;
    a0 = s4;
    a1 = s3; func_00148AE0(a0, a1);
    v0 = 1;
    if (s3 == v0) { a0 = (*(volatile u8 *) (u32) s0); goto L_001488E4; }
    if (s3 == 0) { a0 = (*(volatile u8 *) (u32) s0); goto L_001488D4; }
    goto L_001488EC;
L_001488D4:;
    func_001494F0(a0);
    goto L_001488EC;
L_001488E4:;
    func_00145BC0(a0, a1, a2);
L_001488EC:;
    a0 = (s32) 0x3c0000U;
    a1 = (s32) 0x3c0000U;
    a2 = s4;
    a3 = s3;
    a0 = (s32) ((u32) a0 + 0x6f00U);
    a1 = (s32) ((u32) a1 + 0x6b10U); func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
    a2 = (*(volatile s32 *) (u32) s0);
    a0 = (s32) 0x3c0000U;
    a1 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x6f20U);
    a1 = (s32) ((u32) a1 + 0x6b10U); func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
    a2 = (*(volatile u8 *) (u32) (s1 + 28));
    a0 = (s32) 0x3c0000U;
    a1 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x6f40U);
    a1 = (s32) ((u32) a1 + 0x6b10U); func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
    a2 = (*(volatile s32 *) (u32) (s1 + 20));
    a0 = (s32) 0x3c0000U;
    a3 = (*(volatile s32 *) (u32) (s1 + 24));
    a1 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x6f60U);
    a1 = (s32) ((u32) a1 + 0x6b10U); func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 1; goto L_00148AB8;
L_0014895C:;
    a0 = (s32) 0x3c0000U;
    a1 = (s32) 0x3c0000U;
    a2 = s4;
    a3 = s3;
    a0 = (s32) ((u32) a0 + 0x6f80U);
    a1 = (s32) ((u32) a1 + 0x6b10U); func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 0; goto L_00148AB8;
L_00148980:;
    a0 = (*(volatile u8 *) (u32) (s1 + 28));
    a1 = 112; v0 = func_001299B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00148A54;
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s1 + 12));
    (*(volatile u32 *) (u32) s1) = (u32) v1;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v1;
    (*(volatile u32 *) (u32) (v1 + 28)) = (u32) 0;
    (*(volatile u8 *) (u32) (v1 + 104)) = (u8) 0;
    v0 = (*(volatile u8 *) (u32) (s1 + 28));
    (*(volatile u8 *) (u32) (v1 + 105)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s1 + 28));
    at = v1 < 2;
    { s32 c_ = at != 0; a2 = 1; if (c_) goto L_00148A40; }
    a1 = 112;
L_001489C8:;
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
    a0 = (s32) ((u32) v0 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    { s32 c_ = v1 == 0; v0 = (*(volatile s32 *) (u32) (a0 + 12)); if (c_) goto L_00148A98; }
L_001489E0:;
    if (v1 == 0) goto L_00148AA8;
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) v0;
L_001489F0:;
    if (v0 == 0) goto L_00148A00;
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) v1;
L_00148A00:;
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) 0;
L_00148A08:;
    v0 = (*(volatile s32 *) (u32) (s1 + 16));
    if (v0 == 0) goto L_00148AB0;
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    (*(volatile u32 *) (u32) v0) = (u32) a0;
L_00148A20:;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) a0;
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) 0;
    v1 = (*(volatile u8 *) (u32) (s1 + 28));
    v0 = a2 < v1;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x70U); if (c_) goto L_001489C8; }
L_00148A40:;
    v0 = v1 & 0xff;
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = (s32) ((u32) v1 - (u32) v0);
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_001488AC;
L_00148A54:;
    a0 = (s32) 0x3c0000U;
    a1 = (s32) 0x3c0000U;
    a3 = (s32) 0x3c0000U;
    a4 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x6c30U);
    a1 = (s32) ((u32) a1 + 0x6a90U);
    a2 = 213;
    a3 = (s32) ((u32) a3 + 0x6e18U);
    a4 = (s32) ((u32) a4 + 0x6e30U); func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
L_00148A7C:;
    goto L_00148A7C;
L_00148A98:;
    if (v0 == 0) goto L_00148A08;
    goto L_001489E0;
L_00148AA8:;
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) v0; goto L_001489F0;
L_00148AB0:;
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) 0; goto L_00148A20;
L_00148AB8:;
    return;
}
