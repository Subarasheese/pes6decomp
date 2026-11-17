/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_00A1B4A0(s64);
s64 func_00BBB780(s64);
s64 func_00BBB8C0(s64);

s64 func_00A0DDD0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0; v0 = func_00A1B4A0(a0);
    if (v0 != 0) { v0 = 0; goto L_00A0DF30; }
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    v0 = 4;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) (s0 + 164)); goto L_00A0DE18; }
    v0 = 10;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) (s0 + 152)); goto L_00A0DE18; }
    v0 = 9;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) (s0 + 164)); goto L_00A0DE18; }
    v1 = (*(volatile s32 *) (u32) (s0 + 28));
L_00A0DE18:;
    v0 = (*(volatile u8 *) (u32) (s0 + 37));
    if (v0 == 0) { at = v1 < 6913; goto L_00A0DE38; }
    at = v1 < 6401;
    if (at != 0) { a2 = (*(volatile u8 *) (u32) (s0 + 18)); goto L_00A0DEC8; }
    v0 = 1; goto L_00A0DF30;
L_00A0DE38:;
    if (at != 0) goto L_00A0DEC0;
    a0 = 2; v0 = func_00BBB8C0(a0);
    if (v0 != 0) goto L_00A0DEC0;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
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
    v0 = (*(volatile u8 *) (u32) (v0 + 108));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48; v0 = func_00BBB780(a0);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00A0DEC0;
    v0 = 1; goto L_00A0DF30;
L_00A0DEC0:;
    v0 = 0; goto L_00A0DF30;
L_00A0DEC8:;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
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
    v0 = (*(volatile u8 *) (u32) (v0 + 108));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48; v0 = func_00BBB780(a0);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00A0DEC0;
    v0 = 1;
L_00A0DF30:;
    return v0;
}
