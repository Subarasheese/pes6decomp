/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void printf(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00101190(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;

    a1 = 0;
    if (a0 != 0) goto L_00101424;
    v0 = (s32) 0x10000000U;
    v0 = v0 | 0x9000;
    v1 = (*(volatile s32 *) (u32) v0);
    v1 = v1 & 0x100;
    { s32 c_ = v1 == 0; v1 = (s32) 0x10000000U; if (c_) goto L_001011E4; }
    a0 = (s32) 0x1000000U;
    v1 = v1 | 0x9000;
    v0 = a1;
L_001011C8:;
    v0 = (u64) a0 < (u64) v0;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x1U); if (c_) goto L_001012EC; }
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = v0 & 0x100;
    { s32 c_ = v0 != 0; v0 = a1; if (c_) goto L_001011C8; }
L_001011E4:;
    v0 = (s32) 0x10000000U;
    v0 = v0 | 0xa000;
    v1 = (*(volatile s32 *) (u32) v0);
    v1 = v1 & 0x100;
    { s32 c_ = v1 == 0; v1 = (s32) 0x10000000U; if (c_) goto L_00101224; }
    a0 = (s32) 0x1000000U;
    v1 = v1 | 0xa000;
    v0 = a1;
L_00101208:;
    v0 = (u64) a0 < (u64) v0;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x1U); if (c_) goto L_001012F8; }
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = v0 & 0x100;
    { s32 c_ = v0 != 0; v0 = a1; if (c_) goto L_00101208; }
L_00101224:;
    v0 = (s32) 0x10000000U;
    a0 = (s32) 0x1f000000U;
    v0 = v0 | 0x3c00;
    a0 = a0 | 0x3;
    v1 = (*(volatile s32 *) (u32) v0);
    v1 = v1 & a0;
    { s32 c_ = v1 == 0; v1 = (s32) 0x1f000000U; if (c_) goto L_00101274; }
    a0 = (s32) 0x10000000U;
    a2 = (s32) 0x1000000U;
    a0 = a0 | 0x3c00;
    v1 = v1 | 0x3;
    v0 = a1;
L_00101258:;
    v0 = (u64) a2 < (u64) v0;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x1U); if (c_) goto L_00101304; }
    v0 = (*(volatile s32 *) (u32) a0);
    v0 = v0 & v1;
    { s32 c_ = v0 != 0; v0 = a1; if (c_) goto L_00101258; }
L_00101274:;
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi29" : "=r"(t_)); a2 = t_; }
    v0 = a2 & 0x100;
    { s32 c_ = v0 == 0; v1 = (s32) 0x1000000U; if (c_) goto L_001012A4; }
    v0 = a1;
L_00101288:;
    v0 = (u64) v1 < (u64) v0;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x1U); if (c_) goto L_00101310; }
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi29" : "=r"(t_)); a2 = t_; }
    v0 = a2 & 0x100;
    { s32 c_ = v0 != 0; v0 = a1; if (c_) goto L_00101288; }
L_001012A4:;
    v0 = (s32) 0x10000000U;
    v0 = v0 | 0x3020;
    v1 = (*(volatile s32 *) (u32) v0);
    v1 = v1 & 0xc00;
    { s32 c_ = v1 == 0; v1 = (s32) 0x10000000U; if (c_) goto L_001012E4; }
    a0 = (s32) 0x1000000U;
    v1 = v1 | 0x3020;
    v0 = a1;
L_001012C8:;
    v0 = (u64) a0 < (u64) v0;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x1U); if (c_) goto L_0010131C; }
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = v0 & 0xc00;
    { s32 c_ = v0 != 0; v0 = a1; if (c_) goto L_001012C8; }
L_001012E4:;
    v0 = 0; goto L_00101498;
L_001012EC:;
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x34f8U); goto L_00101324;
L_001012F8:;
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x35d8U); goto L_00101324;
L_00101304:;
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x3608U); goto L_00101324;
L_00101310:;
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x3638U); goto L_00101324;
L_0010131C:;
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x3660U);
L_00101324:;
    printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x10000000U;
    a0 = (s32) 0x3c0000U;
    v0 = v0 | 0x9000;
    a0 = (s32) ((u32) a0 + 0x3528U);
    a1 = (*(volatile s32 *) (u32) v0); printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x10000000U;
    a0 = (s32) 0x3c0000U;
    v0 = v0 | 0x9030;
    a0 = (s32) ((u32) a0 + 0x3538U);
    a1 = (*(volatile s32 *) (u32) v0); printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x10000000U;
    a0 = (s32) 0x3c0000U;
    v0 = v0 | 0x9010;
    a0 = (s32) ((u32) a0 + 0x3548U);
    a1 = (*(volatile s32 *) (u32) v0); printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x10000000U;
    a0 = (s32) 0x3c0000U;
    v0 = v0 | 0x9020;
    a0 = (s32) ((u32) a0 + 0x3558U);
    a1 = (*(volatile s32 *) (u32) v0); printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x10000000U;
    a0 = (s32) 0x3c0000U;
    v0 = v0 | 0xa000;
    a0 = (s32) ((u32) a0 + 0x3568U);
    a1 = (*(volatile s32 *) (u32) v0); printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x10000000U;
    a0 = (s32) 0x3c0000U;
    v0 = v0 | 0xa030;
    a0 = (s32) ((u32) a0 + 0x3578U);
    a1 = (*(volatile s32 *) (u32) v0); printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x10000000U;
    a0 = (s32) 0x3c0000U;
    v0 = v0 | 0xa010;
    a0 = (s32) ((u32) a0 + 0x3588U);
    a1 = (*(volatile s32 *) (u32) v0); printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x10000000U;
    a0 = (s32) 0x3c0000U;
    v0 = v0 | 0xa020;
    a0 = (s32) ((u32) a0 + 0x3598U);
    a1 = (*(volatile s32 *) (u32) v0); printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x10000000U;
    a0 = (s32) 0x3c0000U;
    v0 = v0 | 0x3c00;
    a0 = (s32) ((u32) a0 + 0x35a8U);
    a1 = (*(volatile s32 *) (u32) v0); printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x10000000U;
    a0 = (s32) 0x3c0000U;
    v0 = v0 | 0x3020;
    a0 = (s32) ((u32) a0 + 0x35c0U);
    a1 = (*(volatile s32 *) (u32) v0); printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = -1; goto L_00101498;
L_00101424:;
    v1 = (s32) 0x10000000U;
    a1 = (s32) 0x10000000U;
    v1 = v1 | 0x9000;
    a1 = a1 | 0xa000;
    v0 = (*(volatile s32 *) (u32) v1);
    a0 = (s32) 0x10000000U;
    a2 = (*(volatile s32 *) (u32) a1);
    a0 = a0 | 0x3c00;
    v0 = v0 & 0x100;
    a1 = (*(volatile s32 *) (u32) a0);
    v0 = (u64) 0 < (u64) v0;
    a2 = a2 & 0x100;
    a0 = v0 | 0x2;
    v1 = (s32) 0x1f000000U;
    if (a2 != 0) v0 = a0;
    v1 = v1 | 0x3;
    a1 = a1 & v1;
    a0 = v0 | 0x4;
    if (a1 != 0) v0 = a0;
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi29" : "=r"(t_)); a2 = t_; }
    v1 = (s32) 0x10000000U;
    a2 = a2 & 0x100;
    v1 = v1 | 0x3020;
    a1 = v0 | 0x8;
    a0 = (*(volatile s32 *) (u32) v1);
    if (a2 != 0) v0 = a1;
    v1 = v0 | 0x10;
    a0 = a0 & 0xc00;
    if (a0 != 0) v0 = v1;
L_00101498:;
    return v0;
}
