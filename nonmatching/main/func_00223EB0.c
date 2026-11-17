/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_IsUnavailable(void);
s64 func_002260F0(s64);

s64 func_00223EB0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    s5 = a2;
    s4 = a0;
    s0 = a1; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) { s1 = s0 & 0xffff; goto L_00223EF4; }
    v0 = 0; goto L_0022404C;
L_00223EF4:;
    if (s1 != 0) { s3 = 0; goto L_00223F04; }
    v0 = 0; goto L_0022404C;
L_00223F04:;
    a0 = s4; v0 = func_002260F0(a0);
    s0 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_00223F28;
    s2 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_00223F58;
L_00223F28:;
    if (s0 != 0) goto L_00223F38;
    s2 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_00223F58;
L_00223F38:;
    v1 = s3 & 0xff;
    v0 = v1 < 32;
    if (v0 != 0) goto L_00223F50;
    s2 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_00223F58;
L_00223F50:;
    v0 = (s32) ((u32) s0 + (u32) v1);
    s2 = (*(volatile u8 *) (u32) (v0 + 1201));
L_00223F58:;
    a0 = s4; v0 = func_002260F0(a0);
    s0 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_00223F80;
    a0 = 0; goto L_00223FC8;
L_00223F80:;
    if (s0 != 0) goto L_00223F90;
    a0 = 0; goto L_00223FC8;
L_00223F90:;
    v1 = s2 & 0xff;
    v0 = v1 < 32;
    if (v0 != 0) goto L_00223FA8;
    a0 = 0; goto L_00223FC8;
L_00223FA8:;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (s32) ((u32) v0 + 0x1e4U);
L_00223FC8:;
    if (a0 != 0) { v0 = (*(volatile u16 *) (u32) a0); goto L_00223FD8; }
    v0 = 0; goto L_0022404C;
L_00223FD8:;
    if (v0 != s1) { s3 = (s32) ((u32) s3 + 0x1U); goto L_0022403C; }
    v0 = s5 & 0xff;
    at = (u64) v0 < (u64) (s64) 59;
    if (at == 0) { v0 = 0; goto L_00224034; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x7bc0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22400cU) goto L_0022400C; if (t_ == 0x224018U) goto L_00224018; if (t_ == 0x224024U) goto L_00224024; if (t_ == 0x224030U) goto L_00224030; }
L_0022400C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 8));
    v0 = v0 & 0xf; goto L_00224034;
L_00224018:;
    v0 = (*(volatile u8 *) (u32) (a0 + 6));
    v0 = v0 & 0x1f; goto L_00224034;
L_00224024:;
    v0 = (*(volatile u8 *) (u32) (a0 + 10));
    v0 = v0 & 0xf; goto L_00224034;
L_00224030:;
    v0 = 0;
L_00224034:;
    goto L_00224050;
L_0022403C:;
    v0 = (u64) s3 < (u64) (s64) 32;
    if (v0 != 0) goto L_00223F04;
    v0 = 0;
L_0022404C:;
L_00224050:;
    return v0;
}
