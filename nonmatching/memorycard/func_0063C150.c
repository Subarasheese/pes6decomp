/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0063E160(s32, s32);
s32 func_0063E1E0(s32);

s32 func_0063C150(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x40000000U;
    v0 = a0 & v0;
    if (v0 == 0) goto L_0063C28C;
    v0 = a2 & 0xff;
    at = v0 < 36;
    if (at == 0) { s0 = a1 & 0xff; goto L_0063C1E8; }
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -4240));
    v1 = (*(volatile u8 *) (u32) (v0 + 12));
    v0 = v1 < 13;
    if (v0 != 0) goto L_0063C198;
    v0 = -1; goto L_0063C1E0;
L_0063C198:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffff8b40U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C1C0; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C1C0:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C1DC; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C1DC:;
    v0 = (s32) ((u32) v0 + 0x4U);
L_0063C1E0:;
    goto L_0063C380;
L_0063C1E8:;
    v0 = s0 < 36;
    if (v0 != 0) { a0 = s0; goto L_0063C1FC; }
    v0 = -1; goto L_0063C37C;
L_0063C1FC:;
    v0 = func_0063E1E0(a0);
    v0 = v0 & 0xff;
    v0 = v0 & 0x80;
    if (v0 == 0) { a0 = s0; goto L_0063C21C; }
    v0 = -1; goto L_0063C37C;
L_0063C21C:;
    a1 = 0; v0 = func_0063E160(a0, a1);
    v1 = (*(volatile u8 *) (u32) (v0 + 12));
    v0 = v1 < 13;
    if (v0 != 0) goto L_0063C23C;
    v0 = -1; goto L_0063C284;
L_0063C23C:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffff8b40U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C264; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C264:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C280; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C280:;
    v0 = (s32) ((u32) v0 + 0x4U);
L_0063C284:;
    goto L_0063C37C;
L_0063C28C:;
    v0 = (s32) 0x20000000U;
    v0 = a0 & v0;
    if (v0 == 0) { v0 = -1; goto L_0063C37C; }
    v1 = a0 & 0xffff;
    v0 = 2048;
    if (v1 == v0) { v1 = 11; goto L_0063C320; }
    v0 = 4096;
    if (v1 == v0) { v1 = 12; goto L_0063C320; }
    v0 = 1024;
    if (v1 == v0) { v1 = 10; goto L_0063C320; }
    v0 = 512;
    if (v1 == v0) { v1 = 9; goto L_0063C320; }
    v0 = 256;
    if (v1 == v0) { v1 = 8; goto L_0063C320; }
    v0 = 128;
    if (v1 == v0) { v1 = 7; goto L_0063C320; }
    v0 = 64;
    if (v1 == v0) { v1 = 2; goto L_0063C320; }
    v0 = 32;
    if (v1 == v0) { v1 = 1; goto L_0063C320; }
    v0 = 8;
    if (v1 == v0) { v1 = 5; goto L_0063C320; }
    v0 = 2;
    if (v1 == v0) { v1 = 4; goto L_0063C320; }
    v0 = 1;
    v1 = 3;
L_0063C320:;
    v0 = v1 < 13;
    if (v0 != 0) goto L_0063C334;
    v0 = -1; goto L_0063C37C;
L_0063C334:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffff8b40U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C35C; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C35C:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C378; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C378:;
    v0 = (s32) ((u32) v0 + 0x4U);
L_0063C37C:;
L_0063C380:;
    return v0;
}
