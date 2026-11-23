/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B8D50(s64, s64, s64, s64, s64, s64, s64, s64);
void func_001D5C40(s64, s64, s64, s64);
void func_001DA4B0(s64, s64, s64, s64);
void func_001DD560(s64, s64, s64, s64);
void func_001E7140(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_0021E000(s64);
s64 func_002E8BD0(void);
void func_00624770(s64, s64, s64, s64);
void func_0063CF80(s64, s64, s64, s64);
void func_00645900(s64, s64, s64, s64);

void func_00627A70(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 gp = 0x3ef370;

    v0 = func_002E8BD0();
    v1 = (s32) 0x650000U;
    s2 = (s32) 0x650000U;
    s5 = (s32) 0x660000U;
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x7120U);
    s4 = 0;
    s2 = (s32) ((u32) s2 + 0x70a0U);
    s5 = (s32) ((u32) s5 + 0xffffc1c0U);
    s6 = (s32) ((u32) v1 + (u32) a0);
L_00627ABC:;
    v1 = (*(volatile s32 *) (u32) s6);
    a1 = 1;
    a0 = (s32) ((u32) a1 << (s4 & 31));
    v1 = (s64) ((u64) v1 << 37);
    v1 = (s64) ((u64) v1 >> 37);
    v1 = a0 & v1;
    if (v1 == 0) goto L_00627C50;
    v1 = (*(volatile s32 *) (u32) s2);
    at = (u64) v1 < (u64) (s64) 6;
    if (at == 0) goto L_00627C50;
    a0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffa940U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x627b08U) goto L_00627B08; if (t_ == 0x627b28U) goto L_00627B28; if (t_ == 0x627b50U) goto L_00627B50; if (t_ == 0x627b88U) goto L_00627B88; if (t_ == 0x627ba8U) goto L_00627BA8; if (t_ == 0x627bf0U) goto L_00627BF0; }
L_00627B08:;
    v1 = (*(volatile u8 *) (u32) s5);
    if (v1 != a1) goto L_00627C50;
    func_00645900(a0, a1, a2, a3);
    goto L_00627C50;
L_00627B28:;
    v1 = (*(volatile u8 *) (u32) s5);
    if (v1 != a1) goto L_00627C50;
    a0 = (*(volatile s32 *) (u32) (s2 + 4)); v0 = func_0021E000(a0);
    a0 = v0; func_001E7140(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00627C50;
L_00627B50:;
    v1 = (*(volatile u8 *) (u32) s5);
    if (v1 != a1) goto L_00627C50;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (s32) 0x10000U;
    v0 = v0 | 0x3f;
    if (v1 != v0) goto L_00627B78;
    func_001B8D50(a0, a1, a2, a3, a4, a5, a6, a7);
L_00627B78:;
    a0 = (*(volatile s32 *) (u32) (s2 + 4)); func_001D5C40(a0, a1, a2, a3);
    goto L_00627C50;
L_00627B88:;
    v1 = (*(volatile u8 *) (u32) s5);
    if (v1 != a1) goto L_00627C50;
    a0 = (*(volatile s32 *) (u32) (s2 + 4)); func_001DA4B0(a0, a1, a2, a3);
    goto L_00627C50;
L_00627BA8:;
    v1 = (*(volatile u8 *) (u32) s5);
    if (v1 != a1) goto L_00627C50;
    s3 = 0;
    s1 = (s32) ((u32) gp + 0xffffad90U);
    s0 = (s32) ((u32) gp + 0xffff8330U);
L_00627BC0:;
    v1 = (*(volatile u8 *) (u32) s1);
    if (v1 != 0) goto L_00627BD8;
    a0 = (*(volatile u8 *) (u32) s0); func_001DD560(a0, a1, a2, a3);
L_00627BD8:;
    s3 = (s32) ((u32) s3 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x1U);
    { s32 c_ = s3 == 0; s0 = (s32) ((u32) s0 + 0x1U); if (c_) goto L_00627BC0; }
    goto L_00627C50;
L_00627BF0:;
    v1 = 11;
    if (s4 == v1) goto L_00627C48;
    v1 = 9;
    if (s4 == v1) goto L_00627C38;
    v1 = 8;
    if (s4 == v1) goto L_00627C38;
    v1 = 7;
    if (s4 == v1) goto L_00627C38;
    v1 = 6;
    if (s4 == v1) goto L_00627C38;
    goto L_00627C50;
L_00627C38:;
    func_00624770(a0, a1, a2, a3);
    goto L_00627C50;
L_00627C48:;
    func_0063CF80(a0, a1, a2, a3);
L_00627C50:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 16;
    s2 = (s32) ((u32) s2 + 0x8U);
    { s32 c_ = v1 != 0; s5 = (s32) ((u32) s5 + 0x1U); if (c_) goto L_00627ABC; }
    return;
}
