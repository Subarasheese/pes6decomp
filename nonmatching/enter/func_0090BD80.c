/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00188680(void);
s64 func_00907F90(s64);
s64 func_00907FC0(s64);
s64 func_00907FF0(s64);
s64 func_0090A100(s64);

s64 func_0090BD80(s64 a0) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    v1 = (s64) ((u64) a0 << 56);
    v1 = v1 >> 56;
    { s32 c_ = v1 <= 0; s0 = 0; if (c_) goto L_0090BDB4; }
    v0 = (s32) 0x930000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -3674)); goto L_0090BDE4;
L_0090BDB4:;
    if (v1 != 0) { v0 = -1; goto L_0090BDC8; }
    v0 = (s32) 0x930000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -3676)); goto L_0090BDE4;
L_0090BDC8:;
    if (v1 != v0) { v0 = -2; goto L_0090BDD8; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 18); goto L_0090BDE4;
L_0090BDD8:;
    if (v1 != v0) { v0 = 0; goto L_0090C03C; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 7);
L_0090BDE4:;
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 19;
    if (at == 0) { v0 = s0; goto L_0090C03C; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffdae0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x90be10U) goto L_0090BE10; if (t_ == 0x90be18U) goto L_0090BE18; if (t_ == 0x90beccU) goto L_0090BECC; if (t_ == 0x90c028U) goto L_0090C028; if (t_ == 0x90c030U) goto L_0090C030; if (t_ == 0x90c038U) goto L_0090C038; }
L_0090BE10:;
    s0 = 0; goto L_0090C038;
L_0090BE18:;
    v0 = func_00188680();
    v1 = 3;
    if (v0 == v1) goto L_0090BEA4;
    v1 = 2;
    if (v0 == v1) goto L_0090BE7C;
    v1 = 1;
    if (v0 == v1) goto L_0090BE54;
    if (v0 == 0) goto L_0090BE54;
    goto L_0090C038;
L_0090BE54:;
    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -3888));
    v0 = v0 & 0x800;
    if (v0 == 0) { v0 = (s32) 0x10000U; goto L_0090BE74; }
    v0 = (s32) 0x10000U;
    s0 = v0 | 0x10c; goto L_0090C038;
L_0090BE74:;
    s0 = v0 | 0x110; goto L_0090C038;
L_0090BE7C:;
    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -3888));
    v0 = v0 & 0x800;
    if (v0 == 0) { v0 = (s32) 0x10000U; goto L_0090BE9C; }
    v0 = (s32) 0x10000U;
    s0 = v0 | 0x10e; goto L_0090C038;
L_0090BE9C:;
    s0 = v0 | 0x111; goto L_0090C038;
L_0090BEA4:;
    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -3888));
    v0 = v0 & 0x800;
    if (v0 == 0) { v0 = (s32) 0x10000U; goto L_0090BEC4; }
    v0 = (s32) 0x10000U;
    s0 = v0 | 0x10f; goto L_0090C038;
L_0090BEC4:;
    s0 = v0 | 0x112; goto L_0090C038;
L_0090BECC:;
    s1 = 0;
L_0090BED0:;
    a0 = s1 & 0xff; v0 = func_0090A100(a0);
    s3 = v0 & 0xffff;
    v0 = s1 & 0xff;
    a0 = v0 ^ 0x1; v0 = func_0090A100(a0);
    s2 = v0 & 0xffff;
    a0 = s3;
    v0 = s1 & 0xff;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    s0 = (s32) ((u32) v0 + 0x58U);
    (*(volatile u32 *) (u32) s0) = (u32) 0; v0 = func_00907FF0(a0);
    if (v0 == 0) goto L_0090BF58;
    a0 = s2; v0 = func_00907F90(a0);
    if (v0 == 0) goto L_0090BF30;
    v0 = 7;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_0090BF88;
L_0090BF30:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) s3 << 1);
    v0 = (s32) ((u32) v0 + 0xffffd210U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0);
    v0 = v0 & 0xf000;
    v0 = (s32) v0 >> 12;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_0090BF88;
L_0090BF58:;
    a0 = s3; v0 = func_00907FC0(a0);
    if (v0 == 0) goto L_0090BF80;
    v0 = (s32) 0x930000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -11728));
    v0 = v0 & 0xf000;
    v0 = (s32) v0 >> 12;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_0090BF88;
L_0090BF80:;
    v0 = 7;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
L_0090BF88:;
    v0 = (s32) ((u32) s1 + 0x1U);
    s1 = v0 & 0xff;
    at = s1 < 2;
    if (at != 0) goto L_0090BED0;
    v0 = (*(volatile s32 *) (u32) (sp + 88));
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) { v0 = (s32) 0x10000U; goto L_0090BFD8; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffdac0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x90be10U) goto L_0090BE10; if (t_ == 0x90be18U) goto L_0090BE18; if (t_ == 0x90beccU) goto L_0090BECC; if (t_ == 0x90bfc8U) goto L_0090BFC8; if (t_ == 0x90bfd4U) goto L_0090BFD4; if (t_ == 0x90bfe0U) goto L_0090BFE0; if (t_ == 0x90c028U) goto L_0090C028; if (t_ == 0x90c030U) goto L_0090C030; if (t_ == 0x90c038U) goto L_0090C038; }
L_0090BFC8:;
    v0 = (s32) 0x10000U;
    s0 = v0 | 0x113; goto L_0090BFE8;
L_0090BFD4:;
    v0 = (s32) 0x10000U;
L_0090BFD8:;
    s0 = v0 | 0x116; goto L_0090BFE8;
L_0090BFE0:;
    v0 = (s32) 0x10000U;
    s0 = v0 | 0x119;
L_0090BFE8:;
    v0 = (*(volatile s32 *) (u32) (sp + 92));
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_0090C038; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffdaa0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x90be10U) goto L_0090BE10; if (t_ == 0x90be18U) goto L_0090BE18; if (t_ == 0x90beccU) goto L_0090BECC; if (t_ == 0x90bfc8U) goto L_0090BFC8; if (t_ == 0x90bfd4U) goto L_0090BFD4; if (t_ == 0x90bfe0U) goto L_0090BFE0; if (t_ == 0x90c014U) goto L_0090C014; if (t_ == 0x90c020U) goto L_0090C020; if (t_ == 0x90c028U) goto L_0090C028; if (t_ == 0x90c030U) goto L_0090C030; if (t_ == 0x90c038U) goto L_0090C038; }
L_0090C014:;
    s0 = (s32) ((u32) s0 + 0x1U);
    goto L_0090C038;
L_0090C020:;
    s0 = (s32) ((u32) s0 + 0x2U); goto L_0090C038;
L_0090C028:;
    s0 = 0; goto L_0090C038;
L_0090C030:;
    v0 = (s32) 0x10000U;
    s0 = v0 | 0x11c;
L_0090C038:;
    v0 = s0;
L_0090C03C:;
    return v0;
}
