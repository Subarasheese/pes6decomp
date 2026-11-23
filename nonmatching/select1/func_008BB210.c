/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetUnavailableFlag(void);
void SD_call(s64);
void func_0023E0E0(s64, s64, s64, s64, s64, s64, s64, s64);
void func_0023EC10(s64, s64);
s64 func_008B9070(s64);
void func_008BA6E0(s64, s64, s64, s64, f32);
s64 func_008BA830(void);
void func_008BAA70(void);

void func_008BB210(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 hi = 0, lo = 0;

    v0 = (*(volatile s8 *) (u32) (gp + -20296));
    s0 = (s32) 0x540000U;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_008BB4D8; }
    a0 = (*(volatile s8 *) (u32) (gp + -22668));
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc230U);
    v0 = 32;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008BB2E4; }
    v0 = 16;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008BB264; }
    a0 = (*(volatile s8 *) (u32) (gp + -22668)); goto L_008BB3C4;
L_008BB264:;
    a0 = v0 | 0xf802; SD_call(a0);
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s8 *) (u32) (v1 + -13918));
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v1 = -1;
    (*(volatile u8 *) (u32) (v0 + -13918)) = (u8) a0;
    v0 = (s64) ((u64) a0 << 56);
    v0 = v0 >> 56;
    if (v0 != v1) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BB2D4; }
    v0 = (s32) 0x540000U;
    a0 = 255;
    v0 = (*(volatile u8 *) (u32) (v0 + -13920));
    if (v0 != a0) { v1 = 7; goto L_008BB2C8; }
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v1 + -13919)) = (u8) a0;
    v1 = 1;
    (*(volatile u8 *) (u32) (v0 + -13920)) = (u8) a0;
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) v1;
    (*(volatile u8 *) (u32) (gp + -22672)) = (u8) v1; goto L_008BB2D0;
L_008BB2C8:;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13918)) = (u8) v1;
L_008BB2D0:;
    a0 = (s32) ((u32) s0 + 0x10U);
L_008BB2D4:;
    a1 = 1; func_0023EC10(a0, a1);
    goto L_008BB3C0;
L_008BB2E4:;
    a0 = v0 | 0xf802; SD_call(a0);
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -13918));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -13918)) = (u8) v1; v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_008BB35C;
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -13918));
    at = v0 < 8;
    if (at != 0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BB3B8; }
    v0 = (s32) 0x540000U;
    v1 = 255;
    v0 = (*(volatile u8 *) (u32) (v0 + -13920));
    if (v0 != v1) goto L_008BB350;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + -13919)) = (u8) v1;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (gp + -22672)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + -13920)) = (u8) v1; goto L_008BB3B4;
L_008BB350:;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13918)) = (u8) 0; goto L_008BB3B4;
L_008BB35C:;
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -13918));
    at = v0 < 8;
    if (at != 0) goto L_008BB3B4;
    v0 = (s32) 0x540000U;
    v1 = 255;
    v0 = (*(volatile u8 *) (u32) (v0 + -13920));
    if (v0 != v1) goto L_008BB3AC;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -20292)) = (u32) 0;
    (*(volatile u8 *) (u32) (v0 + -13919)) = (u8) v1;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13920)) = (u8) v1;
    v0 = 3;
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) v0;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -14016)) = (u8) 0; goto L_008BB3B4;
L_008BB3AC:;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13918)) = (u8) 0;
L_008BB3B4:;
    a0 = (s32) ((u32) s0 + 0x10U);
L_008BB3B8:;
    a1 = 1; func_0023EC10(a0, a1);
L_008BB3C0:;
    a0 = (*(volatile s8 *) (u32) (gp + -22668));
L_008BB3C4:;
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc270U);
    v0 = 8;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != v0) { a0 = (*(volatile s8 *) (u32) (gp + -22668)); goto L_008BB4DC; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf803; SD_call(a0);
    v1 = 255;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13919)) = (u8) v1;
    a1 = 3;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13920)) = (u8) v1;
    v0 = (s32) 0x540000U;
    v1 = (s32) 0x540000U;
    a2 = (*(volatile s8 *) (u32) (v0 + -13917));
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = (s32) 0x510000U;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) a1); hi = (s32) ((s32) a2 % (s32) a1); lo = q_; }
    a0 = (*(volatile s32 *) (u32) (v0 + 4048));
    v0 = 15;
    a1 = hi;
    (*(volatile u8 *) (u32) (v1 + -13917)) = (u8) a1;
    v1 = (s64) ((u64) a1 << 56);
    { s32 c_ = a0 == v0; v1 = v1 >> 56; if (c_) goto L_008BB458; }
    v1 = (s64) ((u64) v1 << 56);
    v0 = 2;
    v1 = v1 >> 56;
    if (v1 != v0) goto L_008BB458;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13917)) = (u8) 0;
L_008BB458:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_008BB4B0;
    v0 = (s32) 0x540000U;
    v1 = 2;
    v0 = (*(volatile s8 *) (u32) (v0 + -13917));
    if (v0 != v1) { v1 = (*(volatile s8 *) (u32) (gp + -22676)); goto L_008BB490; }
    v1 = 3;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) v1;
    (*(volatile u8 *) (u32) (v0 + -14016)) = (u8) 0; goto L_008BB4A4;
L_008BB490:;
    v0 = 3;
    if (v1 != v0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BB4A8; }
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -22672)) = (u8) 0;
L_008BB4A4:;
    a0 = (s32) ((u32) s0 + 0x10U);
L_008BB4A8:;
    a1 = 1; func_0023EC10(a0, a1);
L_008BB4B0:;
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -13917));
    a0 = (s32) ((u32) v0 + 0x6U); func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 8; func_0023EC10(a0, a1);
L_008BB4D8:;
    a0 = (*(volatile s8 *) (u32) (gp + -22668));
L_008BB4DC:;
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc270U);
    v0 = 2;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008BB60C; }
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile s8 *) (u32) (gp + -20296)); goto L_008BB510; }
    a0 = 2; goto L_008BB670;
L_008BB510:;
    if (v0 != 0) { v0 = (s32) 0x84000000U; goto L_008BB5F0; }
    v0 = (s32) 0x540000U;
    v1 = 255;
    v0 = (*(volatile u8 *) (u32) (v0 + -13920));
    if (v0 != v1) goto L_008BB550;
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    a1 = (*(volatile s8 *) (u32) (v1 + -13918));
    v1 = (s32) 0x84020000U;
    (*(volatile u8 *) (u32) (v0 + -13920)) = (u8) a1;
    a0 = v1 | 0x8400; SD_call(a0);
    a0 = (s32) ((u32) s0 + 0x10U); goto L_008BB5D4;
L_008BB550:;
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -13918));
    (*(volatile u8 *) (u32) (v0 + -13919)) = (u8) v1; v0 = func_008BA830();
    v1 = 1;
    if (v0 != v1) { v0 = (s32) 0x8c000000U; goto L_008BB5A4; }
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    func_008BAA70();
    a0 = (*(volatile s8 *) (u32) (gp + -22668)); v0 = func_008B9070(a0);
    a0 = (*(volatile s8 *) (u32) (gp + -22668));
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffefe0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) v1) = (u8) v0; goto L_008BB5D0;
L_008BB5A4:;
    a0 = v0 | 0x8005; SD_call(a0);
    v1 = 255;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13919)) = (u8) v1;
    a0 = 1;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13920)) = (u8) v1; func_008BA6E0(a0, a1, a2, a3, f12.f);
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -20296)) = (u8) v0;
L_008BB5D0:;
    a0 = (s32) ((u32) s0 + 0x10U);
L_008BB5D4:;
    a1 = 8; func_0023EC10(a0, a1);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 16; func_0023EC10(a0, a1);
    goto L_008BB66C;
L_008BB5F0:;
    a0 = v0 | 0x8401; SD_call(a0);
    a0 = 3;
    (*(volatile u8 *) (u32) (gp + -20296)) = (u8) 0; func_008BA6E0(a0, a1, a2, a3, f12.f);
    goto L_008BB66C;
L_008BB60C:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = (*(volatile s8 *) (u32) (gp + -20296));
    if (v0 != 0) { a0 = 3; goto L_008BB664; }
    v0 = (s32) 0x540000U;
    v1 = 255;
    v0 = (*(volatile u8 *) (u32) (v0 + -13920));
    if (v0 == v1) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BB650; }
    v0 = (s32) 0x540000U;
    a0 = (s32) ((u32) s0 + 0x10U);
    (*(volatile u8 *) (u32) (v0 + -13920)) = (u8) v1;
    a1 = 8; func_0023EC10(a0, a1);
    goto L_008BB66C;
L_008BB650:;
    a1 = 1; func_0023EC10(a0, a1);
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -22672)) = (u8) 0; goto L_008BB66C;
L_008BB664:;
    (*(volatile u8 *) (u32) (gp + -20296)) = (u8) 0; func_008BA6E0(a0, a1, a2, a3, f12.f);
L_008BB66C:;
    a0 = 2;
L_008BB670:;
    func_008BA6E0(a0, a1, a2, a3, f12.f);
    return;
}
