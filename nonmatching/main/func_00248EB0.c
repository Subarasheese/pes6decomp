/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetUnavailableFlag(void);
void SD_call(s64);
void func_0023EC10(s64, s64);
s64 func_0023F240(s64, s64, s64, s64);
s64 func_0024DFC0(void);
s64 func_0024E650(void);

void func_00248EB0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v1 = 0;
    s64 gp = 0x3ef370;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x540000U;
    v0 = (s32) ((u32) v0 + 0xffffcb40U);
    s7 = a0;
    s2 = a1;
    v1 = (s32) ((u32) s2 << 2);
    s1 = (s32) ((u32) v0 + (u32) v1);
    fp = (*(volatile s32 *) (u32) s1);
    s6 = a2; v0 = func_0024E650();
    a1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) s7 << 2);
    a1 = (s32) ((u32) a1 + 0xffffc230U);
    a0 = 128;
    s0 = (s32) ((u32) a1 + (u32) v1);
    s5 = v0;
    a1 = (*(volatile s32 *) (u32) s0);
    { s32 c_ = a1 == a0; { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; } if (c_) goto L_002490B4; }
    v1 = 64;
    if (a1 == v1) { v1 = (s32) ((u32) s2 << 1); goto L_00248F38; }
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_00249248;
L_00248F38:;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + (u32) s2);
    v0 = (s32) ((u32) v0 + 0xffffa200U);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) s6 + (u32) v1);
    s3 = (s32) ((u32) v0 + 0x1U);
    s4 = (s32) ((u32) v1 + 0x2U);
L_00248F60:;
    a0 = (*(volatile u16 *) (u32) s0);
L_00248F64:;
    a2 = 0;
    a1 = (*(volatile s32 *) (u32) s1);
    a3 = 4; v0 = func_0023F240(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s1) = (u32) v0; v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) s1); goto L_0024906C; }
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = 1;
    if (v1 != v0) goto L_00248F98;
    (*(volatile u32 *) (u32) s1) = (u32) 0;
L_00248F98:;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = 3;
    if (v1 != v0) goto L_00248FC0;
    v0 = (*(volatile s8 *) (u32) s4);
    if (v0 != 0) goto L_00248FC0;
    v0 = 2;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_00248FC0:;
    a0 = (*(volatile s8 *) (u32) s3);
    if (a0 <= 0) { v1 = (s32) ((u32) 0 - (u32) a0); goto L_00248FD0; }
    v1 = a0;
L_00248FD0:;
    v0 = 4;
    if (v1 == v0) goto L_00248FF8;
    if (a0 <= 0) { v1 = (s32) ((u32) 0 - (u32) a0); goto L_00248FE8; }
    v1 = a0;
L_00248FE8:;
    v0 = 11;
    if (v1 != v0) goto L_00249018;
L_00248FF8:;
    v1 = (*(volatile s32 *) (u32) s1);
    if (v1 == 0) goto L_00249088;
    v0 = 4;
    if (v1 != v0) { a0 = (*(volatile u16 *) (u32) s0); goto L_00248F64; }
    goto L_00249088;
L_00249018:;
    if (a0 <= 0) { v1 = (s32) ((u32) 0 - (u32) a0); goto L_00249024; }
    v1 = a0;
L_00249024:;
    v0 = 10;
    if (v1 == v0) goto L_00249058;
    if (a0 <= 0) { v0 = (s32) ((u32) 0 - (u32) a0); goto L_0024903C; }
    v0 = a0;
L_0024903C:;
    if (v0 == 0) goto L_00249058;
    if (a0 <= 0) { a0 = (s32) ((u32) 0 - (u32) a0); goto L_0024904C; }
L_0024904C:;
    v0 = 3;
    if (a0 != v0) goto L_00249088;
L_00249058:;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 != 0) goto L_00248F60;
    goto L_00249088;
L_0024906C:;
    v0 = 2;
    if (v1 == v0) goto L_00249088;
    v0 = 3;
    if (v1 != v0) goto L_00248F60;
L_00249088:;
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 4; func_0023EC10(a0, a1);
    v1 = (*(volatile s32 *) (u32) s1);
    if (fp == v1) goto L_00249244;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    goto L_00249244;
L_002490B4:;
    v1 = (s32) ((u32) s2 << 1);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + (u32) s2);
    v0 = (s32) ((u32) v0 + 0xffffa200U);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) s6 + (u32) v1);
    s3 = (s32) ((u32) v0 + 0x1U);
    s4 = (s32) ((u32) v1 + 0x2U);
L_002490E0:;
    a0 = (*(volatile u16 *) (u32) s0);
L_002490E4:;
    a2 = 0;
    a1 = (*(volatile s32 *) (u32) s1);
    a3 = 4; v0 = func_0023F240(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s1) = (u32) v0; v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) s1); goto L_00249204; }
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = 5;
    if (v1 != v0) goto L_00249118;
    (*(volatile u32 *) (u32) s1) = (u32) 0;
L_00249118:;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = 1;
    if (v1 != v0) goto L_00249130;
    v0 = 2;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_00249130:;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = 3;
    if (v1 != v0) goto L_00249158;
    v0 = (*(volatile s8 *) (u32) s4);
    if (v0 != 0) goto L_00249158;
    v0 = 4;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_00249158:;
    a0 = (*(volatile s8 *) (u32) s3);
    if (a0 <= 0) { v1 = (s32) ((u32) 0 - (u32) a0); goto L_00249168; }
    v1 = a0;
L_00249168:;
    v0 = 4;
    if (v1 == v0) goto L_00249190;
    if (a0 <= 0) { v1 = (s32) ((u32) 0 - (u32) a0); goto L_00249180; }
    v1 = a0;
L_00249180:;
    v0 = 11;
    if (v1 != v0) goto L_002491B0;
L_00249190:;
    v1 = (*(volatile s32 *) (u32) s1);
    if (v1 == 0) goto L_00249220;
    v0 = 4;
    if (v1 != v0) { a0 = (*(volatile u16 *) (u32) s0); goto L_002490E4; }
    goto L_00249220;
L_002491B0:;
    if (a0 <= 0) { v1 = (s32) ((u32) 0 - (u32) a0); goto L_002491BC; }
    v1 = a0;
L_002491BC:;
    v0 = 10;
    if (v1 == v0) goto L_002491F0;
    if (a0 <= 0) { v0 = (s32) ((u32) 0 - (u32) a0); goto L_002491D4; }
    v0 = a0;
L_002491D4:;
    if (v0 == 0) goto L_002491F0;
    if (a0 <= 0) { a0 = (s32) ((u32) 0 - (u32) a0); goto L_002491E4; }
L_002491E4:;
    v0 = 3;
    if (a0 != v0) goto L_00249220;
L_002491F0:;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 != 0) goto L_002490E0;
    goto L_00249220;
L_00249204:;
    v0 = 2;
    if (v1 == v0) goto L_00249220;
    v0 = 3;
    if (v1 != v0) goto L_002490E0;
L_00249220:;
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 4; func_0023EC10(a0, a1);
    v1 = (*(volatile s32 *) (u32) s1);
    if (fp == v1) goto L_00249244;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
L_00249244:;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_00249248:;
    a1 = (s32) 0x8e0000U;
    a1 = (s32) ((u32) a1 + 0xffffc270U);
    a0 = 2;
    v1 = (s32) ((u32) a1 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v1);
    if (a1 == a0) goto L_002492E8;
    v1 = 1;
    if (a1 == v1) { v0 = (*(volatile s32 *) (u32) s1); goto L_00249278; }
    goto L_00249348;
L_00249278:;
    if (v0 != 0) { v0 = (s32) ((u32) s2 << 1); goto L_002492AC; }
    v0 = func_0024DFC0();
    v1 = 1;
    if (v0 != v1) { (*(volatile u32 *) (u32) s1) = (u32) v1; goto L_002492A8; }
    v0 = (s32) 0x8c000000U;
    a0 = v0 | 0x8005; SD_call(a0);
    goto L_00249344;
L_002492A8:;
    v0 = (s32) ((u32) s2 << 1);
L_002492AC:;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    v0 = (s32) ((u32) v0 << 2);
    a1 = 4;
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s6 + (u32) v0);
    (*(volatile u8 *) (u32) v0) = (u8) v1; func_0023EC10(a0, a1);
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    goto L_00249344;
L_002492E8:;
    if (s7 != s5) goto L_00249344;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
    v1 = (s32) 0x540000U;
    v0 = (s32) ((u32) s5 << 1);
    a0 = (s32) ((u32) s5 << 2);
    v1 = (s32) ((u32) v1 + 0xffffcb40U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a2 = 6;
    v0 = (s32) ((u32) v0 + (u32) s5);
    (*(volatile u32 *) (u32) v1) = (u32) a2;
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    v1 = (s32) ((u32) v0 + (u32) s5);
    a1 = 4;
    v1 = (s32) ((u32) v1 << 2);
    v0 = 8;
    v1 = (s32) ((u32) s6 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) a2;
    (*(volatile u16 *) (u32) (gp + -22644)) = (u16) v0; func_0023EC10(a0, a1);
L_00249344:;
L_00249348:;
    return;
}
