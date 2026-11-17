/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0023A170(void);
s32 func_00291FF0(s32, s32, s32, s32);
s32 func_002D4C40(s32, s32, s32, s32, s32, s32, s32);
s32 func_002FF160(s32, s32, s32, s32);
s32 func_00305E60(s32, s32);
s32 func_00305EC0(s32, s32, s32);

s32 func_002FF310(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = 0;
    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    a0 = (s32) ((u32) sp + 0x4cU); v0 = func_002FF160(a0, a1, a2, a3);
    v1 = 255;
    { s32 c_ = v0 == v1; (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0; if (c_) goto L_002FF488; }
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4fe0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = (s32) 0x3b0000U;
    a1 = (s32) 0x300000U;
    v0 = (s32) ((u32) v0 + 0x4fe0U);
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0xfffff220U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) v0; v0 = func_00305E60(a0, a1);
    v1 = (*(volatile s32 *) (u32) (sp + 76));
    v0 = 2;
    if (v1 != v0) { v0 = 1; goto L_002FF48C; }
    v0 = (s32) 0xcb0000U;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + 13056));
    a1 = 0;
    s2 = (*(volatile s16 *) (u32) (v0 + 8));
    s0 = (*(volatile s16 *) (u32) (v0 + 764));
    a2 = s2;
    a3 = s0; v0 = func_00291FF0(a0, a1, a2, a3);
    a2 = s0;
    a3 = s2;
    s0 = v0;
    a0 = 1;
    a1 = 0; v0 = func_00291FF0(a0, a1, a2, a3);
    v1 = (s32) 0x590000U;
    a0 = 2;
    a1 = (*(volatile u8 *) (u32) (v1 + 7980));
    if (a1 == a0) goto L_002FF43C;
    if (a1 == 0) goto L_002FF448;
    v1 = 3;
    if (a1 == v1) goto L_002FF420;
    v0 = 1;
    if (a1 == v0) goto L_002FF410;
    goto L_002FF448;
L_002FF410:;
    if (s0 == 0) goto L_002FF448;
    s1 = v0; goto L_002FF448;
L_002FF420:;
    if (s0 != 0) { s1 = 1; goto L_002FF448; }
    if (v0 == 0) goto L_002FF448;
    s1 = 1;
    goto L_002FF448;
L_002FF43C:;
    if (v0 == 0) goto L_002FF448;
    s1 = 1;
L_002FF448:;
    if (s1 == 0) goto L_002FF47C;
    v0 = func_0023A170();
    v0 = v0 & 0xff;
    if (v0 <= 0) goto L_002FF47C;
    a0 = (s32) 0x300000U;
    a2 = (s32) 0x5f0000U;
    a0 = (s32) ((u32) a0 + 0xffffe860U);
    a1 = 38;
    a2 = (s32) ((u32) a2 + 0xffffb0f0U); v0 = func_00305EC0(a0, a1, a2);
L_002FF47C:;
    v0 = 1;
    goto L_002FF48C;
L_002FF488:;
    v0 = 0;
L_002FF48C:;
    return v0;
}
