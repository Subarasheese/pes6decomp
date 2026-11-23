/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0090B7A0(s64);
s64 func_0090B830(s64);
s64 func_0090C060(s64);

s64 func_0090B510(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    v0 = (s64) ((u64) s1 << 56);
    v0 = v0 >> 56;
    { s32 c_ = v0 <= 0; s0 = 0; if (c_) goto L_0090B548; }
    v0 = (s32) 0x930000U;
    a0 = (s32) 0x930000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -3674));
    a0 = (s32) ((u32) a0 + 0xfffff1acU); goto L_0090B558;
L_0090B548:;
    v0 = (s32) 0x930000U;
    a0 = (s32) 0x930000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -3676));
    a0 = (s32) ((u32) a0 + 0xfffff1a8U);
L_0090B558:;
    if (a1 == 0) { v0 = a1 & 0xff; goto L_0090B584; }
    v1 = (*(volatile u8 *) (u32) (a0 + 1));
    v0 = v1 & 0x1;
    if (v0 == 0) goto L_0090B580;
    v0 = v1 & 0x2;
    if (v0 == 0) { s0 = s0 | 0x3; goto L_0090B580; }
    s0 = s0 | 0x1003;
L_0090B580:;
    v0 = a1 & 0xff;
L_0090B584:;
    at = (u64) v0 < (u64) (s64) 21;
    if (at == 0) { v0 = s0 & 0x8000; goto L_0090B70C; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd970U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x90b5acU) goto L_0090B5AC; if (t_ == 0x90b5d8U) goto L_0090B5D8; if (t_ == 0x90b5e0U) goto L_0090B5E0; if (t_ == 0x90b610U) goto L_0090B610; if (t_ == 0x90b620U) goto L_0090B620; if (t_ == 0x90b624U) goto L_0090B624; if (t_ == 0x90b6d8U) goto L_0090B6D8; if (t_ == 0x90b6e0U) goto L_0090B6E0; if (t_ == 0x90b6e8U) goto L_0090B6E8; if (t_ == 0x90b6f4U) goto L_0090B6F4; if (t_ == 0x90b6fcU) goto L_0090B6FC; if (t_ == 0x90b704U) goto L_0090B704; if (t_ == 0x90b708U) goto L_0090B708; }
L_0090B5AC:;
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = 1;
    if (v1 != v0) { v0 = 2; goto L_0090B5C4; }
    s0 = s0 | 0x1c; goto L_0090B5D0;
L_0090B5C4:;
    if (v1 != v0) { s0 = s0 | 0xfc; goto L_0090B5D0; }
    s0 = s0 | 0xe0;
L_0090B5D0:;
    s0 = s0 | 0xe000; goto L_0090B708;
L_0090B5D8:;
    s0 = s0 | 0xe06c; goto L_0090B708;
L_0090B5E0:;
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = v1 & 0x1;
    if (v0 == 0) { v0 = v1 & 0x2; goto L_0090B5F8; }
    s0 = s0 | 0x1c;
    v0 = v1 & 0x2;
L_0090B5F8:;
    if (v0 == 0) { s0 = s0 | 0xc303; goto L_0090B708; }
    s0 = s0 | 0xe0;
    s0 = s0 | 0xc303;
    goto L_0090B708;
L_0090B610:;
    v0 = (s32) 0x10000U;
    v0 = v0 | 0x6000;
    s0 = s0 | v0; goto L_0090B708;
L_0090B620:;
    s0 = s0 | 0x2000;
L_0090B624:;
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = v1 & 0x8;
    if (v0 == 0) { v0 = v1 & 0x10; goto L_0090B684; }
    v0 = v1 & 0x10;
    if (v0 == 0) { v0 = v1 & 0x1; goto L_0090B664; }
    v0 = v1 & 0x1;
    if (v0 == 0) { v0 = v1 & 0x2; goto L_0090B654; }
    s0 = s0 | 0xc;
    v0 = v1 & 0x2;
L_0090B654:;
    if (v0 == 0) { s0 = s0 | 0xc000; goto L_0090B708; }
    s0 = s0 | 0x60; goto L_0090B6CC;
L_0090B664:;
    if (v0 == 0) { v0 = v1 & 0x2; goto L_0090B674; }
    s0 = s0 | 0x4;
    v0 = v1 & 0x2;
L_0090B674:;
    if (v0 == 0) goto L_0090B6CC;
    s0 = s0 | 0x20; goto L_0090B6CC;
L_0090B684:;
    if (v0 == 0) { v0 = v1 & 0x1; goto L_0090B6B0; }
    v0 = v1 & 0x1;
    if (v0 == 0) { v0 = v1 & 0x2; goto L_0090B6A0; }
    s0 = s0 | 0x8;
    v0 = v1 & 0x2;
L_0090B6A0:;
    if (v0 == 0) goto L_0090B6CC;
    s0 = s0 | 0x40; goto L_0090B6CC;
L_0090B6B0:;
    if (v0 == 0) { v0 = v1 & 0x2; goto L_0090B6C0; }
    s0 = s0 | 0x1c;
    v0 = v1 & 0x2;
L_0090B6C0:;
    if (v0 == 0) goto L_0090B6CC;
    s0 = s0 | 0xe0;
L_0090B6CC:;
    s0 = s0 | 0xc000;
    goto L_0090B708;
L_0090B6D8:;
    s0 = 0xc0fc; goto L_0090B708;
L_0090B6E0:;
    s0 = 0xc0fc; goto L_0090B708;
L_0090B6E8:;
    v0 = 0x80fc;
    s0 = v0 | 0x300; goto L_0090B708;
L_0090B6F4:;
    s0 = 0xc0fc; goto L_0090B708;
L_0090B6FC:;
    s0 = 0xc0fc; goto L_0090B708;
L_0090B704:;
    s0 = s0 | 0xfc;
L_0090B708:;
    v0 = s0 & 0x8000;
L_0090B70C:;
    if (v0 == 0) { v0 = (s32) 0x10000U; goto L_0090B734; }
    a0 = s1; v0 = func_0090B830(a0);
    if (v0 != 0) goto L_0090B730;
    v0 = (s32) 0xffff0000U;
    v0 = v0 | 0x7fff;
    s0 = s0 & v0;
L_0090B730:;
    v0 = (s32) 0x10000U;
L_0090B734:;
    v0 = s0 & v0;
    if (v0 == 0) { v0 = s0 & 0x2000; goto L_0090B760; }
    a0 = s1; v0 = func_0090B7A0(a0);
    if (v0 != 0) goto L_0090B75C;
    v0 = (s32) 0xfffe0000U;
    v0 = v0 | 0xffff;
    s0 = s0 & v0;
L_0090B75C:;
    v0 = s0 & 0x2000;
L_0090B760:;
    if (v0 == 0) { v0 = s0; goto L_0090B784; }
    a0 = s1; v0 = func_0090C060(a0);
    if (v0 != 0) goto L_0090B780;
    v0 = -8193;
    s0 = s0 & v0;
L_0090B780:;
    v0 = s0;
L_0090B784:;
    return v0;
}
