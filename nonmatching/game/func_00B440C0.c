/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BBB8C0(s32);
s32 func_00BF6270(void);

s32 func_00B440C0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;

    s2 = a0;
    s1 = a1;
    s0 = 3; v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00B44104; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00B44104:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = s2 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v0 << 6);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    v0 = 111;
    { s32 c_ = v1 == v0; a0 = (s32) ((u32) a0 + (u32) a1); if (c_) goto L_00B44240; }
    v0 = 110;
    if (v1 == v0) goto L_00B44240;
    v0 = 109;
    if (v1 == v0) goto L_00B44240;
    v0 = 108;
    if (v1 == v0) goto L_00B44240;
    v0 = 107;
    if (v1 == v0) goto L_00B44240;
    v0 = 106;
    if (v1 == v0) goto L_00B44240;
    v0 = 105;
    if (v1 == v0) goto L_00B44240;
    v0 = 104;
    if (v1 == v0) goto L_00B44240;
    v0 = 88;
    if (v1 == v0) goto L_00B44240;
    v0 = 76;
    if (v1 == v0) { s0 = 2; goto L_00B44240; }
    v0 = 77;
    if (v1 == v0) { s0 = 0; goto L_00B44240; }
    v0 = (*(volatile u8 *) (u32) (a0 + 18));
    if (v0 != 0) goto L_00B441B8;
    v0 = (s32) 0x520000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -184)); goto L_00B441C0;
L_00B441B8:;
    v0 = (s32) 0x520000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -183));
L_00B441C0:;
    v1 = v0 & 0xff;
    v0 = 3;
    if (v1 != v0) goto L_00B44240;
    v0 = s1 & 0xff;
    at = (u64) v0 < (u64) (s64) 7;
    if (at == 0) goto L_00B441FC;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffc800U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb441fcU) goto L_00B441FC; if (t_ == 0xb44204U) goto L_00B44204; if (t_ == 0xb4420cU) goto L_00B4420C; if (t_ == 0xb44214U) goto L_00B44214; if (t_ == 0xb4421cU) goto L_00B4421C; if (t_ == 0xb44224U) goto L_00B44224; }
L_00B441FC:;
    s1 = 0; goto L_00B44228;
L_00B44204:;
    s1 = 20; goto L_00B44228;
L_00B4420C:;
    s1 = 20; goto L_00B44228;
L_00B44214:;
    s1 = 40; goto L_00B44228;
L_00B4421C:;
    s1 = 40; goto L_00B44228;
L_00B44224:;
    s1 = 50;
L_00B44228:;
    a0 = 100; v0 = func_00BBB8C0(a0);
    at = v0 < s1;
    if (at == 0) goto L_00B44240;
    s0 = 1;
L_00B44240:;
    v0 = s0;
    return v0;
}
