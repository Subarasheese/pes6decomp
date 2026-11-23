/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00226710(void);
s32 func_0022D460(s32, s32);
s32 func_009177C0(s32);

s32 func_0090F240(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 4048));
    v0 = 9;
    if (v1 == v0) goto L_0090F274;
    v0 = 12;
    if (v1 == v0) goto L_0090F274;
    v0 = -1; goto L_0090F400;
L_0090F274:;
    v0 = (s32) 0x590000U;
    a1 = 2;
    v0 = (*(volatile u8 *) (u32) (v0 + 7981));
    if (v0 == a1) goto L_0090F290;
    v0 = -1; goto L_0090F400;
L_0090F290:;
    v0 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 + 0xfffff0b8U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) v0);
    at = (u64) v0 < (u64) (s64) 7;
    if (at == 0) goto L_0090F374;
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffdbc0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x90f2ccU) goto L_0090F2CC; if (t_ == 0x90f2f8U) goto L_0090F2F8; if (t_ == 0x90f350U) goto L_0090F350; if (t_ == 0x90f358U) goto L_0090F358; if (t_ == 0x90f360U) goto L_0090F360; if (t_ == 0x90f368U) goto L_0090F368; if (t_ == 0x90f370U) goto L_0090F370; }
L_0090F2CC:;
    v1 = (s32) 0x930000U;
    v0 = 11;
    v1 = (s32) ((u32) v1 + 0xfffff0b4U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s8 *) (u32) v1);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    if (v0 == 0) { s0 = 4; goto L_0090F374; }
    s0 = 5; goto L_0090F374;
L_0090F2F8:;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff0b4U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (*(volatile s8 *) (u32) v0); v0 = func_009177C0(a0);
    v1 = (*(volatile u8 *) (u32) (v0 + 18));
    { s32 c_ = v1 >= 0; a0 = v1 & 0x1; if (c_) goto L_0090F324; }
    if (a0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -31680)); goto L_0090F328; }
    a0 = (s32) ((u32) a0 + 0xfffffffeU);
L_0090F324:;
    v1 = (*(volatile s32 *) (u32) (gp + -31680));
L_0090F328:;
    a1 = (*(volatile u16 *) (u32) (v0 + 14));
    v0 = (s32) ((u32) a0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) (v0 + 44)); v0 = func_0022D460(a0, a1);
    v1 = v0 & 0xffff;
    v0 = 1;
    if (v1 != v0) { s0 = 5; goto L_0090F374; }
    s0 = 0; goto L_0090F374;
L_0090F350:;
    s0 = 5; goto L_0090F374;
L_0090F358:;
    s0 = 1; goto L_0090F374;
L_0090F360:;
    s0 = 3; goto L_0090F374;
L_0090F368:;
    s0 = a1; goto L_0090F374;
L_0090F370:;
    s0 = 5;
L_0090F374:;
    v0 = (s32) 0x590000U;
    v1 = 14;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) { v0 = s0; goto L_0090F400; }
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 56;
    if (v1 == v0) goto L_0090F3F0;
    v0 = 53;
    if (v1 == v0) goto L_0090F3F0;
    v0 = 51;
    if (v1 == v0) goto L_0090F3F0;
    v0 = 49;
    if (v1 == v0) goto L_0090F3F0;
    v0 = 48;
    if (v1 == v0) goto L_0090F3F0;
    v0 = 43;
    if (v1 == v0) goto L_0090F3F0;
    v0 = 42;
    if (v1 == v0) goto L_0090F3F0;
    goto L_0090F3FC;
L_0090F3F0:;
    if (s0 != 0) goto L_0090F3FC;
    s0 = 5;
L_0090F3FC:;
    v0 = s0;
L_0090F400:;
    return v0;
}
