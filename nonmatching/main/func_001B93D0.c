/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(s32);
s32 func_001D5A10(s32);
s32 func_001DA380(s32);
s32 func_001DD3C0(s32);
s32 func_001F01D0(s32);
s32 func_001F7B30(s32);
s32 func_0021DF90(s32);

s32 func_001B93D0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = 1;
    s2 = a1;
    s1 = 0;
    s0 = a0; goto L_001B9490;
L_001B93F8:;
    at = (u64) v1 < (u64) (s64) 6;
    { s32 c_ = at == 0; a0 = (*(volatile s32 *) (u32) (s0 + 4)); if (c_) goto L_001B9488; }
    a1 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0x1580U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x1b9420U) goto L_001B9420; if (t_ == 0x1b9430U) goto L_001B9430; if (t_ == 0x1b9440U) goto L_001B9440; if (t_ == 0x1b9450U) goto L_001B9450; if (t_ == 0x1b9468U) goto L_001B9468; if (t_ == 0x1b9478U) goto L_001B9478; }
L_001B9420:;
    v0 = func_001DD3C0(a0);
    goto L_001B9488;
L_001B9430:;
    v0 = Pes6File_AllChannelsIdle(a0);
    goto L_001B9488;
L_001B9440:;
    v0 = func_001DA380(a0);
    goto L_001B9488;
L_001B9450:;
    v0 = func_0021DF90(a0);
    a0 = v0; v0 = func_001F01D0(a0);
    v0 = (u64) 0 < (u64) v0; goto L_001B9488;
L_001B9468:;
    v0 = func_001D5A10(a0);
    v0 = (u64) 0 < (u64) v0; goto L_001B9488;
L_001B9478:;
    v0 = func_001F7B30(a0);
    v0 = (u64) 0 < (u64) v0;
L_001B9488:;
    s0 = (s32) ((u32) s0 + 0xcU);
    s1 = (s32) ((u32) s1 + 0x1U);
L_001B9490:;
    v1 = 1;
    if (v0 != v1) goto L_001B94A8;
    v1 = s1 < s2;
    if (v1 != 0) { v1 = (*(volatile s32 *) (u32) s0); goto L_001B93F8; }
L_001B94A8:;
    return v0;
}
