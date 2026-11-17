/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 Pes6Scene_Get(s32);
s32 func_001454A0(s32);
s32 func_001454B0(s32);
s32 func_001454C0(s32);
s32 func_00145750(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0014EAE0(s32, s32);
s32 func_0014ED60(s32, s32, s32, s32, s32);
s32 func_00150FF0(s32, s32, s32);
s32 func_001515E0(s32, s32, s32, s32, s32, s32, s32);
s32 func_00151AB0(s32, s32, s32);
s32 func_00153FD0(s32, s32, s32, s32);
s32 func_0024EC90(s32, s32, s32, s32);
s32 func_00267110(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00266C70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 gp = 0x3ef370;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    v0 = 8;
    v1 = (s32) ((u32) sp + 0xa8U);
    s7 = a0;
    s6 = a2;
    s5 = a1;
    if (v1 == 0) goto L_00266CD0;
L_00266CB4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_00266CB4;
L_00266CD0:;
    s2 = (s32) 0x590000U;
    a0 = 0;
    a1 = s5;
    a2 = 0;
    s2 = (s32) ((u32) s2 + 0xffffd460U); v0 = func_00267110(a0, a1, a2, a3, a4, a5, a6, a7);
    s3 = v0;
    a0 = 1;
    a1 = s5;
    a2 = 0; v0 = func_00267110(a0, a1, a2, a3, a4, a5, a6, a7);
    fp = v0;
    a0 = s6;
    a1 = s5;
    a2 = 0; v0 = func_00267110(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (sp + 164)) = (u32) v0;
    s4 = 0;
    s1 = s2;
    s0 = (s32) ((u32) s0 + 0xffffb168U);
L_00266D24:;
    a0 = (*(volatile s32 *) (u32) (s1 + 212));
    if (a0 == 0) goto L_00266D68;
    v0 = (s32) ((u32) s2 + (u32) s4);
    v0 = (*(volatile u8 *) (u32) (v0 + 200));
    if (v0 == 0) goto L_00266D68;
    v0 = func_001454C0(a0);
    if (v0 == 0) goto L_00266D68;
    a4 = (*(volatile u8 *) (u32) s0);
    a1 = v0;
    a2 = (*(volatile s16 *) (u32) (s1 + 252));
    a3 = (*(volatile s16 *) (u32) (s1 + 254));
    a0 = s3; v0 = func_0014ED60(a0, a1, a2, a3, a4);
L_00266D68:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 10;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x1U); if (c_) goto L_00266D24; }
    a0 = s7; v0 = func_0024EC90(a0, a1, a2, a3);
    if (v0 != 0) { a0 = fp; goto L_00266E90; }
    a0 = 0; v0 = Pes6Scene_Get(a0);
    v1 = 6;
    if (v0 != v1) goto L_00266E8C;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -10708));
    if (v0 == 0) goto L_00266E8C;
    a0 = s3; v0 = func_001454B0(a0);
    { s32 c_ = v0 >= 0; s0 = (s32) v0 >> 3; if (c_) goto L_00266DC8; }
    v0 = (s32) ((u32) v0 + 0x7U);
    s0 = (s32) v0 >> 3;
L_00266DC8:;
    a0 = s3; v0 = func_001454A0(a0);
    { s32 c_ = v0 >= 0; a2 = (s32) v0 >> 3; if (c_) goto L_00266DE0; }
    v0 = (s32) ((u32) v0 + 0x7U);
    a2 = (s32) v0 >> 3;
L_00266DE0:;
    a1 = s0;
    a0 = 2; v0 = func_00151AB0(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (gp + -32332));
    v1 = 28;
    if (a0 != v1) { a1 = 1; goto L_00266E10; }
    a0 = 1;
    a1 = v0; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s1 = v0; goto L_00266E1C;
L_00266E10:;
    a2 = v0; v0 = func_00153FD0(a0, a1, a2, a3);
    s1 = v0;
L_00266E1C:;
    a0 = s3; v0 = func_001454B0(a0);
    { s32 c_ = v0 >= 0; s0 = (s32) v0 >> 3; if (c_) goto L_00266E34; }
    v0 = (s32) ((u32) v0 + 0x7U);
    s0 = (s32) v0 >> 3;
L_00266E34:;
    a0 = s3; v0 = func_001454A0(a0);
    { s32 c_ = v0 >= 0; a4 = (s32) v0 >> 3; if (c_) goto L_00266E4C; }
    v0 = (s32) ((u32) v0 + 0x7U);
    a4 = (s32) v0 >> 3;
L_00266E4C:;
    v0 = (s32) ((u32) s5 << 1);
    a0 = s1;
    v0 = (s32) ((u32) v0 + 0x26e8U);
    a3 = s0;
    a1 = (s32) ((u32) s6 + (u32) v0);
    a2 = 2; v0 = func_001515E0(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0;
    a1 = s3;
    a0 = s0; v0 = func_0014EAE0(a0, a1);
    a1 = (*(volatile s32 *) (u32) (sp + 164));
    a0 = s0; v0 = func_00150FF0(a0, a1, a2);
    a0 = s0; v0 = func_00145750(a0, a1, a2, a3, a4, a5, a6, a7);
L_00266E8C:;
    a0 = fp;
L_00266E90:;
    a1 = s3; v0 = func_0014EAE0(a0, a1);
    return v0;
}
