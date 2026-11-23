/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0090F210(void);
s64 func_009177C0(s64);

s64 func_0090A8A0(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0, s0 = 0;

    a0 = a0 & 0xff;
    v0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a1 = (s32) ((u32) a0 << 6);
    v0 = (s32) 0x930000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -3844));
    s0 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + 0xfffff0ffU);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = 28;
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) goto L_0090AA28;
    v0 = 26;
    if (v1 == v0) goto L_0090AA28;
    v0 = 25;
    if (v1 == v0) { v0 = 0; goto L_0090AA58; }
    v0 = 23;
    if (v1 == v0) goto L_0090AA54;
    v0 = 18;
    if (v1 == v0) { v0 = 1; goto L_0090AA58; }
    v0 = 17;
    if (v1 == v0) goto L_0090AA1C;
    v0 = 16;
    if (v1 == v0) goto L_0090AA1C;
    v0 = 15;
    if (v1 == v0) goto L_0090AA1C;
    v0 = 13;
    if (v1 == v0) goto L_0090AA00;
    v0 = 11;
    if (v1 == v0) { s0 = (*(volatile u8 *) (u32) s0); goto L_0090A9E0; }
    v0 = 10;
    if (v1 == v0) goto L_0090A9DC;
    v0 = 29;
    if (v1 == v0) goto L_0090A99C;
    v0 = 6;
    if (v1 == v0) goto L_0090A99C;
    v0 = 30;
    if (v1 == v0) goto L_0090A99C;
    v0 = 1;
    if (v1 == v0) goto L_0090A99C;
    goto L_0090AA54;
L_0090A99C:;
    if (s0 == 0) goto L_0090AA54;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    if (v0 == 0) goto L_0090AA54;
    v1 = (*(volatile s32 *) (u32) v0);
    if (v1 == 0) goto L_0090AA54;
    v0 = (*(volatile u8 *) (u32) (v1 + 2));
    if (v0 == 0) goto L_0090AA54;
    v0 = (*(volatile u8 *) (u32) (v1 + 3));
    if (v0 != 0) goto L_0090AA54;
    v0 = 1; goto L_0090AA58;
L_0090A9DC:;
    s0 = (*(volatile u8 *) (u32) s0);
L_0090A9E0:;
    v0 = func_0090F210();
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    if (s0 != v0) goto L_0090AA54;
    v0 = 1; goto L_0090AA58;
L_0090AA00:;
    v0 = (s32) 0x930000U;
    a0 = (*(volatile s8 *) (u32) (v0 + -3916)); v0 = func_009177C0(a0);
    if (s0 != v0) goto L_0090AA54;
    v0 = 1; goto L_0090AA58;
L_0090AA1C:;
    v0 = 1;
    goto L_0090AA58;
L_0090AA28:;
    if (s0 == 0) goto L_0090AA54;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    if (v0 == 0) goto L_0090AA54;
    v0 = (*(volatile u16 *) (u32) (v0 + 48));
    v0 = v0 < 1434;
    if (v0 != 0) goto L_0090AA54;
    v0 = 1; goto L_0090AA58;
L_0090AA54:;
    v0 = 0;
L_0090AA58:;
    return v0;
}
