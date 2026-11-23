/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetUnavailableFlag(void);
void SD_call(s64);
void func_0023E0E0(s64, s64, s64, s64, s64, s64, s64, s64);
void func_0023EC10(s64, s64);
void func_008B9F70(s64);

s64 func_008BB9C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc230U);
    v0 = 32;
    a0 = (*(volatile s8 *) (u32) (gp + -22668));
    s0 = (s32) 0x540000U;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { s32 c_ = v1 == v0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_008BBA7C; }
    v0 = 16;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008BBA08; }
    a0 = (*(volatile s8 *) (u32) (gp + -22668)); goto L_008BBAD4;
L_008BBA08:;
    a0 = v0 | 0xf802; SD_call(a0);
    v1 = (*(volatile s8 *) (u32) (gp + -22672));
    v0 = -1;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) (gp + -22672)) = (u8) v1;
    v1 = (s64) ((u64) v1 << 56);
    v1 = v1 >> 56;
    if (v1 != v0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BBA6C; }
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { v1 = 3; goto L_008BBA58; }
    v0 = 2;
    v1 = 7;
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) v0;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13918)) = (u8) v1; goto L_008BBA68;
L_008BBA58:;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -14016)) = (u8) v1;
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) v1;
    (*(volatile u32 *) (u32) (gp + -20292)) = (u32) v1;
L_008BBA68:;
    a0 = (s32) ((u32) s0 + 0x10U);
L_008BBA6C:;
    a1 = 1; func_0023EC10(a0, a1);
    goto L_008BBAD0;
L_008BBA7C:;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v1 = (*(volatile s8 *) (u32) (gp + -22672));
    v0 = 1;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22672)) = (u8) v1;
    v1 = (s64) ((u64) v1 << 56);
    v1 = v1 >> 56;
    if (v1 != v0) { v0 = 2; goto L_008BBAB0; }
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) v0; goto L_008BBAC4;
L_008BBAB0:;
    if (v1 != v0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BBAC8; }
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) v0;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13918)) = (u8) 0;
L_008BBAC4:;
    a0 = (s32) ((u32) s0 + 0x10U);
L_008BBAC8:;
    a1 = 1; func_0023EC10(a0, a1);
L_008BBAD0:;
    a0 = (*(volatile s8 *) (u32) (gp + -22668));
L_008BBAD4:;
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc270U);
    v0 = 8;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != v0) { a0 = (*(volatile s8 *) (u32) (gp + -22668)); goto L_008BBBEC; }
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
    { s32 c_ = a0 == v0; v1 = v1 >> 56; if (c_) goto L_008BBB68; }
    v1 = (s64) ((u64) v1 << 56);
    v0 = 2;
    v1 = v1 >> 56;
    if (v1 != v0) goto L_008BBB68;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13917)) = (u8) 0;
L_008BBB68:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_008BBBC0;
    v0 = (s32) 0x540000U;
    v1 = 2;
    v0 = (*(volatile s8 *) (u32) (v0 + -13917));
    if (v0 != v1) { v1 = (*(volatile s8 *) (u32) (gp + -22676)); goto L_008BBBA0; }
    v1 = 3;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) v1;
    (*(volatile u8 *) (u32) (v0 + -14016)) = (u8) 0; goto L_008BBBB4;
L_008BBBA0:;
    v0 = 3;
    if (v1 != v0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BBBB8; }
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -22672)) = (u8) 0;
L_008BBBB4:;
    a0 = (s32) ((u32) s0 + 0x10U);
L_008BBBB8:;
    a1 = 1; func_0023EC10(a0, a1);
L_008BBBC0:;
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -13917));
    a0 = (s32) ((u32) v0 + 0x6U); func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 8; func_0023EC10(a0, a1);
    a0 = (*(volatile s8 *) (u32) (gp + -22668));
L_008BBBEC:;
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc270U);
    v0 = 2;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008BBC64; }
    v0 = 1;
    if (v1 == v0) { v0 = (s32) 0x84020000U; goto L_008BBC20; }
    v0 = 0; goto L_008BBC94;
L_008BBC20:;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = (*(volatile s8 *) (u32) (gp + -22672));
    if (v0 != 0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BBC40; }
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -22704)) = (u8) v0; goto L_008BBC94;
L_008BBC40:;
    a1 = 8; func_0023EC10(a0, a1);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 2; func_0023EC10(a0, a1);
    a0 = (*(volatile s8 *) (u32) (gp + -22668)); func_008B9F70(a0);
    goto L_008BBC90;
L_008BBC64:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = (*(volatile s8 *) (u32) (gp + -22672));
    if (v0 != 0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BBC84; }
    (*(volatile u8 *) (u32) (gp + -22704)) = (u8) 0;
    v0 = 1; goto L_008BBC94;
L_008BBC84:;
    a1 = 1; func_0023EC10(a0, a1);
    (*(volatile u8 *) (u32) (gp + -22672)) = (u8) 0;
L_008BBC90:;
    v0 = 0;
L_008BBC94:;
    return v0;
}
