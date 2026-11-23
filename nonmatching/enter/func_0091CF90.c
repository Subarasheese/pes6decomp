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
s64 func_002D53F0(void);
s64 func_002D5410(void);
void func_002D5630(s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);
void func_0091DC10(s64, s64, s64, s64);
void func_0091E190(s64, s64, s64, s64);
void memset(s64, s64, s64);

void func_0091CF90(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;

    s0 = a0; v0 = func_002D53F0();
    if (v0 == 0) { ; goto L_0091D290; }
    a0 = (s32) 0x930000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xfffff3a0U);
    a2 = 392;
    (*(volatile u32 *) (u32) (gp + -19876)) = (u32) 0; memset(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (gp + -19876));
    a0 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb260U);
    a0 = (s32) ((u32) a0 + 0xfffff3a0U);
    a1 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 - (u32) a2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) v1; v0 = func_002D5410();
    a0 = (*(volatile s32 *) (u32) (gp + -19876));
    v1 = (s32) ((u32) gp + 0xffffb260U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 276)) = (u32) v0; func_0091DC10(a0, a1, a2, a3);
    func_0091E190(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v0 = (s32) ((u32) gp + 0xffffb260U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 288));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_0091D148;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s1 = v0;
    { s32 c_ = s1 <= 0; s2 = 0; if (c_) goto L_0091D0A0; }
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
L_0091D064:;
    v0 = (s32) ((u32) gp + 0xffffb260U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 1; func_001D7D60(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s1;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19876)); goto L_0091D064; }
L_0091D0A0:;
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v0 = (s32) ((u32) gp + 0xffffb260U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 288));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { s2 = 1; goto L_0091D0F4; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s1; goto L_0091D0E8; }
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s1;
L_0091D0E8:;
    a1 = 1; func_001EDAE0(a0, a1);
    s2 = 1;
L_0091D0F4:;
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
L_0091D0F8:;
    v0 = (s32) ((u32) gp + 0xffffb260U);
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091D128;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091D128:;
    a0 = s1;
    a1 = 1; func_001DF4F0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 53;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19876)); goto L_0091D0F8; }
L_0091D148:;
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v0 = (s32) ((u32) gp + 0xffffb260U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 288));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_0091D250;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s1 = v0;
    { s32 c_ = s1 <= 0; s2 = 0; if (c_) goto L_0091D1C0; }
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
L_0091D184:;
    v0 = (s32) ((u32) gp + 0xffffb260U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 255; func_001D76B0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s1;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19876)); goto L_0091D184; }
L_0091D1C0:;
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v0 = (s32) ((u32) gp + 0xffffb260U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s1; goto L_0091D1F4; }
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s1;
L_0091D1F4:;
    a1 = 255; func_001ED8F0(a0, a1);
    s2 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
L_0091D204:;
    v0 = (s32) ((u32) gp + 0xffffb260U);
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091D230;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091D230:;
    a0 = s1;
    a1 = 255; func_001DF420(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 53;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19876)); goto L_0091D204; }
L_0091D250:;
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (gp + -19876)); goto L_0091D270; }
    at = s0 < 31;
    if (at != 0) { s0 = 1; goto L_0091D26C; }
    s0 = (s32) ((u32) s0 + 0xffffffe2U); goto L_0091D26C;
L_0091D26C:;
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
L_0091D270:;
    v0 = (s32) ((u32) gp + 0xffffb260U);
    a1 = s0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x118U); func_002D5630(a0, a1);
L_0091D290:;
    return;
}
