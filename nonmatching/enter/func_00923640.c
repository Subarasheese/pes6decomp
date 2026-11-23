/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s64, s64);
void func_001D7D60(s64, s64);
void func_001DF420(s64, s64);
void func_001DF4F0(s64, s64);
void func_001ED8F0(s64, s64);
void func_001EDAE0(s64, s64);
s64 func_002D5410(void);
void func_002D5630(s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);
void func_009241B0(s64, s64, s64, s64);
void memset(s64, s64, s64);

void func_00923640(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;

    a1 = 0;
    a2 = 64;
    s0 = a0;
    (*(volatile u32 *) (u32) (gp + -19852)) = (u32) 0;
    a0 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xfffff6b0U); memset(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
    a0 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xfffff6b0U);
    v0 = (s32) ((u32) gp + 0xffffb278U);
    a1 = (s32) ((u32) v1 << 6);
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) a0; v0 = func_002D5410();
    a0 = (*(volatile s32 *) (u32) (gp + -19852));
    v1 = (s32) ((u32) gp + 0xffffb278U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 32)) = (u32) v0; func_009241B0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
    v0 = (s32) ((u32) gp + 0xffffb278U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 44));
    v0 = v0 & 0x1;
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19852)); goto L_009237B8; }
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s1 = v0;
    { s32 c_ = s1 <= 0; s2 = 0; if (c_) goto L_00923728; }
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
L_009236F0:;
    v0 = (s32) ((u32) gp + 0xffffb278U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 1; func_001D7D60(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s1;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19852)); goto L_009236F0; }
L_00923728:;
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
    v0 = (s32) ((u32) gp + 0xffffb278U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 44));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19852)); goto L_0092377C; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s1; goto L_00923770; }
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s1;
L_00923770:;
    a1 = 1; func_001EDAE0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
L_0092377C:;
    v0 = (s32) ((u32) gp + 0xffffb278U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s1; goto L_009237AC; }
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s1;
L_009237AC:;
    a1 = 1; func_001DF4F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
L_009237B8:;
    v0 = (s32) ((u32) gp + 0xffffb278U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 44));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_009238A0;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s1 = v0;
    { s32 c_ = s1 <= 0; s2 = 0; if (c_) goto L_00923828; }
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
L_009237F0:;
    v0 = (s32) ((u32) gp + 0xffffb278U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 255; func_001D76B0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s1;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19852)); goto L_009237F0; }
L_00923828:;
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
    v0 = (s32) ((u32) gp + 0xffffb278U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s1; goto L_0092385C; }
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s1;
L_0092385C:;
    a1 = 255; func_001ED8F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
    v0 = (s32) ((u32) gp + 0xffffb278U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s1; goto L_00923898; }
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s1;
L_00923898:;
    a1 = 255; func_001DF420(a0, a1);
L_009238A0:;
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (gp + -19852)); goto L_009238C0; }
    at = s0 < 31;
    if (at != 0) { s0 = 1; goto L_009238BC; }
    s0 = (s32) ((u32) s0 + 0xffffffe2U); goto L_009238BC;
L_009238BC:;
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
L_009238C0:;
    v0 = (s32) ((u32) gp + 0xffffb278U);
    a1 = s0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x24U); func_002D5630(a0, a1);
    return;
}
