/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_009B3220(s64, s64, s64);
s64 func_00A07B40(void);
s64 func_00BBB780(s64);
s64 func_00BBB8C0(s64);
s64 func_00BC03A0(s64, s64, s64, s64);
s64 func_00BC13A0(s64, s64, s64, s64);

void func_009D5C80(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = (s32) 0xcc0000U;
    v1 = 96;
    s2 = a0;
    (*(volatile u8 *) (u32) (a0 + 102)) = (u8) 0;
    a1 = (*(volatile s32 *) (u32) (a0 + 28));
    (*(volatile u32 *) (u32) (a0 + 32)) = (u32) a1;
    a2 = (*(volatile u8 *) (u32) (a0 + 80));
    a1 = (*(volatile s32 *) (u32) (a0 + 4));
    (*(volatile u8 *) (u32) (a1 + 45)) = (u8) a2;
    (*(volatile u32 *) (u32) (a0 + 228)) = (u32) 0;
    v0 = (*(volatile u8 *) (u32) (v0 + -16895));
    a0 = v0 & 0xe0;
    if (a0 == v1) goto L_009D5D60;
    v0 = 192;
    if (a0 == v0) goto L_009D5D60;
    v0 = (*(volatile s32 *) (u32) (s2 + 28));
    s0 = (s64) ((u64) 0 + (u64) (s64) 628);
    v0 = (s32) ((u32) v0 + 0x200U);
    (*(volatile u32 *) (u32) (s2 + 28)) = (u32) v0;
L_009D5CE8:;
    v1 = s0 & 0xffff;
    v0 = 628;
    if (v1 == v0) { a1 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_009D5D00; }
    v0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_009D5D40;
L_009D5D00:;
    a0 = 1;
    v0 = (*(volatile u16 *) (u32) (s2 + 40));
    v1 = -1;
    a1 = (*(volatile u8 *) (u32) (a1 + 45));
    if (a1 != 0) a0 = v1;
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 12);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u16 *) (u32) (s2 + 44)) = (u16) v0;
    a0 = (*(volatile u16 *) (u32) (s2 + 44));
    a1 = (*(volatile u16 *) (u32) (s2 + 38));
    a2 = 8192; v0 = func_009B3220(a0, a1, a2);
    (*(volatile u16 *) (u32) (s2 + 38)) = (u16) v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
L_009D5D40:;
    a0 = (*(volatile u8 *) (u32) (v0 + 44)); v0 = func_00BC03A0(a0, a1, a2, a3);
    v1 = 68;
    if (v0 == v1) { a0 = (*(volatile u16 *) (u32) (s2 + 44)); goto L_009D5E98; }
L_009D5D54:;
    v1 = s0 & 0xffff;
    (*(volatile u32 *) (u32) (s2 + 164)) = (u32) v1; goto L_009D5EAC;
L_009D5D60:;
    a0 = 3;
    s1 = 0; v0 = func_00BBB8C0(a0);
    if (v0 != 0) goto L_009D5E48;
    a2 = (*(volatile u8 *) (u32) (s2 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 20;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 107));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    a2 = (*(volatile u8 *) (u32) (s2 + 18));
    s0 = v0;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 112));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) ((u32) s0 + (u32) v0);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_009D5E2C; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_009D5E2C:;
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48; v0 = func_00BBB780(a0);
    if (v0 == 0) goto L_009D5E48;
    s1 = 1; goto L_009D5E5C;
L_009D5E48:;
    v0 = func_00A07B40();
    if (v0 == 0) goto L_009D5E5C;
    s1 = 2;
L_009D5E5C:;
    if (s1 == 0) { a0 = 67; goto L_009D5E80; }
    a0 = 68; v0 = func_00BC13A0(a0, a1, a2, a3);
    s0 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) (s2 + 28));
    v0 = (s32) ((u32) v0 + 0x200U);
    (*(volatile u32 *) (u32) (s2 + 28)) = (u32) v0; goto L_009D5CE8;
L_009D5E80:;
    v0 = func_00BC13A0(a0, a1, a2, a3);
    s0 = v0 & 0xffff;
    v0 = 910;
    (*(volatile u16 *) (u32) (s2 + 56)) = (u16) v0; goto L_009D5CE8;
L_009D5E98:;
    a1 = (*(volatile u16 *) (u32) (s2 + 38));
    a2 = 8192; v0 = func_009B3220(a0, a1, a2);
    (*(volatile u16 *) (u32) (s2 + 38)) = (u16) v0; goto L_009D5D54;
L_009D5EAC:;
    return;
}
