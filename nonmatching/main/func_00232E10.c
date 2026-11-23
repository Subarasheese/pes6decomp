/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_IsUnavailable(void);
s64 func_00226710(void);
void func_00232690(s64, s64, s64);
void func_00232800(s64, s64, s64);
void func_00232930(s64, s64, s64);
void func_00232A60(s64, s64, s64);
void func_00232B90(s64, s64, s64);
void func_00232CD0(s64, s64, s64);

void func_00232E10(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;

    s5 = a2;
    s4 = a1 & 0xff;
    s3 = a0 & 0xff;
    v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) { a1 = s3 & 0xff; goto L_00232E60; }
    v0 = 0; goto L_00233010;
L_00232E60:;
    v1 = s4 & 0xff;
    a0 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + (u32) s5);
    v0 = (s32) ((u32) v0 + (u32) s5);
    a1 = (*(volatile u16 *) (u32) v1);
    a0 = (*(volatile u16 *) (u32) (v1 + 2));
    s2 = (*(volatile u8 *) (u32) (v1 + 7));
    s6 = (*(volatile u8 *) (u32) (v0 + 7));
    s0 = (s64) ((u64) a1 << 48);
    a0 = (s32) ((u32) a1 - (u32) a0);
    s0 = s0 >> 48;
    v1 = (*(volatile u16 *) (u32) v0);
    s1 = (s64) ((u64) a0 << 48);
    s1 = s1 >> 48;
    v0 = (*(volatile u16 *) (u32) (v0 + 2));
    fp = (s64) ((u64) v1 << 48);
    fp = fp >> 48;
    v0 = (s32) ((u32) v1 - (u32) v0);
    s7 = (s64) ((u64) v0 << 48);
    s7 = s7 >> 48; v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 20;
    if (v1 == v0) { a0 = s3; goto L_00232F80; }
    v0 = 26;
    if (v1 == v0) { a0 = s3; goto L_00232F6C; }
    v0 = 24;
    if (v1 == v0) { a0 = s3; goto L_00232F58; }
    v0 = 22;
    if (v1 == v0) { a0 = s3; goto L_00232F44; }
    v0 = 15;
    if (v1 == v0) { a0 = s3; goto L_00232F30; }
    v0 = 18;
    if (v1 == v0) { a0 = s3; goto L_00232F1C; }
    v1 = s6 & 0xff; goto L_00232F94;
L_00232F1C:;
    a1 = s4;
    a2 = s5; func_00232CD0(a0, a1, a2);
    goto L_00233014;
L_00232F30:;
    a1 = s4;
    a2 = s5; func_00232B90(a0, a1, a2);
    goto L_00233010;
L_00232F44:;
    a1 = s4;
    a2 = s5; func_00232A60(a0, a1, a2);
    goto L_00233010;
L_00232F58:;
    a1 = s4;
    a2 = s5; func_00232930(a0, a1, a2);
    goto L_00233010;
L_00232F6C:;
    a1 = s4;
    a2 = s5; func_00232800(a0, a1, a2);
    goto L_00233010;
L_00232F80:;
    a1 = s4;
    a2 = s5; func_00232690(a0, a1, a2);
    goto L_00233010;
L_00232F94:;
    v0 = s2 & 0xff;
    at = v1 < v0;
    if (at == 0) { at = v0 < v1; goto L_00232FAC; }
    v0 = 1; goto L_00233010;
L_00232FAC:;
    if (at == 0) { v1 = (s64) ((u64) s7 << 48); goto L_00232FBC; }
    v0 = -1; goto L_00233010;
L_00232FBC:;
    v0 = (s64) ((u64) s1 << 48);
    v1 = v1 >> 48;
    v0 = v0 >> 48;
    at = v1 < v0;
    if (at == 0) { at = v0 < v1; goto L_00232FDC; }
    v0 = 1; goto L_00233010;
L_00232FDC:;
    if (at == 0) { v1 = (s64) ((u64) fp << 48); goto L_00232FEC; }
    v0 = -1; goto L_00233010;
L_00232FEC:;
    v0 = (s64) ((u64) s0 << 48);
    v1 = v1 >> 48;
    v0 = v0 >> 48;
    at = v1 < v0;
    if (at == 0) { v0 = v0 < v1; goto L_0023300C; }
    v0 = 1; goto L_00233010;
L_0023300C:;
    v0 = (s32) ((u32) 0 - (u32) v0);
L_00233010:;
L_00233014:;
    return;
}
