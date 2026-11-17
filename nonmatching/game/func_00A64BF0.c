/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00BBB8C0(s64);

s64 func_00A64BF0(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0;
    s64 hi = 0, lo = 0;

    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    a2 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (*(volatile u8 *) (u32) a0);
    a2 = (s32) ((u32) a2 << 1);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v0 == v1) goto L_00A64CE4;
    v0 = 255;
    if (v1 == v0) { a2 = 1; goto L_00A64C34; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a2 = hi;
L_00A64C34:;
    v1 = (s32) ((u32) a2 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
L_00A64C4C:;
    if (a0 == v0) { v0 = a1; goto L_00A64D28; }
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v1 = a1 & 0xffff;
    v0 = (*(volatile u16 *) (u32) (v0 + 48));
    if (v0 != v1) goto L_00A64CD8;
    v0 = 138;
    if (v1 == v0) { a0 = 2; goto L_00A64CC4; }
    v0 = 121;
    if (v1 == v0) { a0 = 2; goto L_00A64CAC; }
    v0 = 139;
    if (v1 == v0) { a0 = 2; goto L_00A64C94; }
    v0 = a1; goto L_00A64CDC;
L_00A64C94:;
    v0 = func_00BBB8C0(a0);
    if (v0 == 0) { a1 = (s64) ((u64) 0 + (u64) (s64) 121); goto L_00A64CD8; }
    a1 = (s64) ((u64) 0 + (u64) (s64) 138); goto L_00A64CD8;
L_00A64CAC:;
    v0 = func_00BBB8C0(a0);
    if (v0 == 0) { a1 = (s64) ((u64) 0 + (u64) (s64) 139); goto L_00A64CD8; }
    a1 = (s64) ((u64) 0 + (u64) (s64) 138); goto L_00A64CD8;
L_00A64CC4:;
    v0 = func_00BBB8C0(a0);
    if (v0 == 0) { a1 = (s64) ((u64) 0 + (u64) (s64) 139); goto L_00A64CD8; }
    a1 = (s64) ((u64) 0 + (u64) (s64) 121);
L_00A64CD8:;
    v0 = a1;
L_00A64CDC:;
    goto L_00A64D2C;
L_00A64CE4:;
    v1 = (s32) 0x590000U;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1e50U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a2 = 1; goto L_00A64D0C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a2 = hi;
L_00A64D0C:;
    v1 = (s32) ((u32) a2 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_00A64C4C;
L_00A64D28:;
L_00A64D2C:;
    return v0;
}
