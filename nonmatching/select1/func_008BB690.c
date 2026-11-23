/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetUnavailableFlag(void);
void SD_call(s64);
void func_0023E0E0(s64, s64, s64, s64, s64, s64, s64, s64);
void func_0023EC10(s64, s64);
void func_008B94E0(s64);

void func_008BB690(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    a0 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) a0 + 0xffffc230U);
    v1 = 128;
    a1 = (*(volatile s8 *) (u32) (gp + -22668));
    s0 = (s32) 0x540000U;
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = a0 == v1; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_008BB774; }
    v1 = 64;
    if (a0 == v1) { v0 = (s32) 0x84000000U; goto L_008BB778; }
    v1 = 32;
    if (a0 == v1) { v0 = (s32) 0x84000000U; goto L_008BB72C; }
    v1 = 16;
    if (a0 == v1) { v0 = (s32) 0x84000000U; goto L_008BB6F0; }
    a1 = (*(volatile s8 *) (u32) (gp + -22668)); goto L_008BB820;
L_008BB6F0:;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = (*(volatile s8 *) (u32) (gp + -22672));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) (gp + -22672)) = (u8) v0;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    if (v0 != 0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BB71C; }
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) 0;
    a0 = (s32) ((u32) s0 + 0x10U);
L_008BB71C:;
    a1 = 1; func_0023EC10(a0, a1);
    goto L_008BB81C;
L_008BB72C:;
    a0 = v0 | 0xf802; SD_call(a0);
    v1 = (*(volatile s8 *) (u32) (gp + -22672));
    v0 = 2;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22672)) = (u8) v1;
    v1 = (s64) ((u64) v1 << 56);
    v1 = v1 >> 56;
    if (v1 != v0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BB764; }
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) v0;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13918)) = (u8) 0;
    a0 = (s32) ((u32) s0 + 0x10U);
L_008BB764:;
    a1 = 1; func_0023EC10(a0, a1);
    goto L_008BB81C;
L_008BB774:;
    v0 = (s32) 0x84000000U;
L_008BB778:;
    a0 = v0 | 0xf803; SD_call(a0);
    a0 = (*(volatile s8 *) (u32) (gp + -22668));
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffefe0U);
    v0 = 2;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s8 *) (u32) v1);
    if (v1 == v0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BB7EC; }
    v0 = 1;
    if (v1 == v0) goto L_008BB7E8;
    if (v1 == 0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BB7BC; }
    a0 = (s32) ((u32) s0 + 0x10U); goto L_008BB814;
L_008BB7BC:;
    a1 = 16; func_0023EC10(a0, a1);
    v1 = (*(volatile s8 *) (u32) (gp + -22668));
    v0 = (s32) 0x8e0000U;
    v0 = (s32) ((u32) v0 + 0xffffefe0U);
    a0 = 1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) v0) = (u8) a0; func_008B94E0(a0);
    goto L_008BB810;
L_008BB7E8:;
    a0 = (s32) ((u32) s0 + 0x10U);
L_008BB7EC:;
    a1 = 16; func_0023EC10(a0, a1);
    v1 = (*(volatile s8 *) (u32) (gp + -22668));
    v0 = (s32) 0x8e0000U;
    v0 = (s32) ((u32) v0 + 0xffffefe0U);
    a0 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) v0) = (u8) 0; func_008B94E0(a0);
L_008BB810:;
    a0 = (s32) ((u32) s0 + 0x10U);
L_008BB814:;
    a1 = 1; func_0023EC10(a0, a1);
L_008BB81C:;
    a1 = (*(volatile s8 *) (u32) (gp + -22668));
L_008BB820:;
    a0 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) a0 + 0xffffc270U);
    v1 = 8;
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 != v1) { a1 = (*(volatile s8 *) (u32) (gp + -22668)); goto L_008BB938; }
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
    { s32 c_ = a0 == v0; v1 = v1 >> 56; if (c_) goto L_008BB8B4; }
    v1 = (s64) ((u64) v1 << 56);
    v0 = 2;
    v1 = v1 >> 56;
    if (v1 != v0) goto L_008BB8B4;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13917)) = (u8) 0;
L_008BB8B4:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_008BB90C;
    v0 = (s32) 0x540000U;
    v1 = 2;
    v0 = (*(volatile s8 *) (u32) (v0 + -13917));
    if (v0 != v1) { v1 = (*(volatile s8 *) (u32) (gp + -22676)); goto L_008BB8EC; }
    v1 = 3;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) v1;
    (*(volatile u8 *) (u32) (v0 + -14016)) = (u8) 0; goto L_008BB900;
L_008BB8EC:;
    v0 = 3;
    if (v1 != v0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_008BB904; }
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -22672)) = (u8) 0;
L_008BB900:;
    a0 = (s32) ((u32) s0 + 0x10U);
L_008BB904:;
    a1 = 1; func_0023EC10(a0, a1);
L_008BB90C:;
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -13917));
    a0 = (s32) ((u32) v0 + 0x6U); func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 8; func_0023EC10(a0, a1);
    a1 = (*(volatile s8 *) (u32) (gp + -22668));
L_008BB938:;
    a0 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) a0 + 0xffffc270U);
    v1 = 2;
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 == v1) { v0 = (s32) 0x84000000U; goto L_008BB98C; }
    v1 = 1;
    if (a0 == v1) { v0 = (s32) 0x84020000U; goto L_008BB96C; }
    goto L_008BB9AC;
L_008BB96C:;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 1; func_0023EC10(a0, a1);
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -22672)) = (u8) 0; goto L_008BB9A8;
L_008BB98C:;
    a0 = v0 | 0x8401; SD_call(a0);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 1; func_0023EC10(a0, a1);
    (*(volatile u8 *) (u32) (gp + -22676)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -22672)) = (u8) 0;
L_008BB9A8:;
L_008BB9AC:;
    return;
}
