/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D4F40(s32, s32, s32, s32);
s32 func_001D5A10(s32);
void func_001D7D60(s32, s32);
void func_001D7E40(s32, s32, s32, s32);
s32 func_001D7F90(s32, s32, s32, s32);
s32 func_001E6E10(s32);
s32 D_001B86B0(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_001B86B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = (s32) 0x3a0000U;
    s1 = a0;
    v0 = (*(volatile s32 *) (u32) (v0 + -31692));
    s0 = (s32) 0x3a0000U;
    { s32 c_ = v0 == 0; s0 = (s32) ((u32) s0 + 0xffff8400U); if (c_) goto L_001B86EC; }
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
    a1 = 0; func_001D7D60(a0, a1);
    (*(volatile u8 *) (u32) (s0 + 46)) = (u8) 0;
L_001B86EC:;
    at = (u64) s1 < (u64) (s64) 9;
    if (at == 0) { v0 = 1; goto L_001B8D34; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (s32) ((u32) v1 + 0x1530U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x1b8714U) goto L_001B8714; if (t_ == 0x1b873cU) goto L_001B873C; if (t_ == 0x1b87bcU) goto L_001B87BC; if (t_ == 0x1b8900U) goto L_001B8900; if (t_ == 0x1b8a64U) goto L_001B8A64; if (t_ == 0x1b8b9cU) goto L_001B8B9C; if (t_ == 0x1b8cd8U) goto L_001B8CD8; }
L_001B8714:;
    v0 = (s32) 0x3a0000U;
    s1 = (s32) 0x3a0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -31692));
    { s32 c_ = v0 == 0; s1 = (s32) ((u32) s1 + 0xffff8400U); if (c_) goto L_001B873C; }
    a0 = (*(volatile s32 *) (u32) (s1 + 12));
    a1 = 1; func_001D7D60(a0, a1);
    v0 = 1;
    (*(volatile u8 *) (u32) (s1 + 46)) = (u8) v0;
L_001B873C:;
    a0 = (*(volatile s32 *) (u32) (s0 + 20));
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 24)); goto L_001B8754; }
    a1 = 0; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
L_001B8754:;
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 48)); goto L_001B8768; }
    a1 = 0; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 48));
L_001B8768:;
    if (a0 == 0) { v0 = (s32) 0x10000U; goto L_001B877C; }
    a1 = 0; func_001D7D60(a0, a1);
    v0 = (s32) 0x10000U;
L_001B877C:;
    a0 = v0 | 0x3f; v0 = func_001D5A10(a0);
    if (v0 != 0) { a0 = v0; goto L_001B8794; }
    v0 = 0; goto L_001B8D34;
L_001B8794:;
    func_001D4F40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 1; func_001D7D60(a0, a1);
    goto L_001B8D30;
L_001B87BC:;
    a0 = 20015; v0 = func_001E6E10(a0);
    if (v0 != 0) { v0 = (s32) 0x10000U; goto L_001B880C; }
    s0 = (s32) 0x3a0000U;
    a0 = 0;
    s0 = (s32) ((u32) s0 + 0xffff8400U); v0 = D_001B86B0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 0; goto L_001B8D34; }
    v0 = (*(volatile s32 *) (u32) (s0 + 52));
    if (v0 == 0) goto L_001B8800;
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (v0 == 0) goto L_001B8800;
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) 0;
L_001B8800:;
    v0 = 0;
    goto L_001B8D34;
L_001B880C:;
    a0 = v0 | 0x3c; v0 = func_001D5A10(a0);
    s2 = v0;
    if (s2 != 0) { v0 = (s32) 0x10000U; goto L_001B8828; }
    v0 = 0; goto L_001B8D34;
L_001B8828:;
    a0 = v0 | 0x3f; v0 = func_001D5A10(a0);
    if (v0 == 0) goto L_001B885C;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 0; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 8));
    a1 = 0; func_001D7D60(a0, a1);
L_001B885C:;
    v0 = (s32) 0x3a0000U;
    s1 = (s32) 0x3a0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -31692));
    { s32 c_ = v0 == 0; s1 = (s32) ((u32) s1 + 0xffff8400U); if (c_) goto L_001B8880; }
    a0 = (*(volatile s32 *) (u32) (s1 + 12));
    a1 = 0; func_001D7D60(a0, a1);
    (*(volatile u8 *) (u32) (s1 + 46)) = (u8) 0;
L_001B8880:;
    a0 = (*(volatile s32 *) (u32) (s0 + 20));
    if (a0 == 0) { a0 = s2; goto L_001B88A8; }
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a1 = 1; func_001D7D60(a0, a1);
    v0 = 1; goto L_001B8D34;
L_001B88A8:;
    func_001D4F40(a0, a1, a2, a3);
    a0 = s2; v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 20));
    a1 = 1; func_001D7D60(a0, a1);
    a0 = s2; v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a1 = 1; func_001D7D60(a0, a1);
    goto L_001B8D30;
L_001B8900:;
    a0 = 20015; v0 = func_001E6E10(a0);
    if (v0 != 0) { v0 = (s32) 0x10000U; goto L_001B8950; }
    s0 = (s32) 0x3a0000U;
    a0 = 0;
    s0 = (s32) ((u32) s0 + 0xffff8400U); v0 = D_001B86B0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 0; goto L_001B8D34; }
    v0 = (*(volatile s32 *) (u32) (s0 + 52));
    if (v0 == 0) goto L_001B8944;
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (v0 == 0) goto L_001B8944;
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) 0;
L_001B8944:;
    v0 = 0;
    goto L_001B8D34;
L_001B8950:;
    a0 = v0 | 0x3c; v0 = func_001D5A10(a0);
    s2 = v0;
    if (s2 != 0) { v0 = (s32) 0x10000U; goto L_001B896C; }
    v0 = 0; goto L_001B8D34;
L_001B896C:;
    a0 = v0 | 0x3f; v0 = func_001D5A10(a0);
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 48)); goto L_001B89B0; }
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 0; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
    a1 = 0; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 8));
    a1 = 0; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 48));
L_001B89B0:;
    if (a0 == 0) goto L_001B89C0;
    a1 = 0; func_001D7D60(a0, a1);
L_001B89C0:;
    v0 = (s32) 0x3a0000U;
    s1 = (s32) 0x3a0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -31692));
    { s32 c_ = v0 == 0; s1 = (s32) ((u32) s1 + 0xffff8400U); if (c_) goto L_001B89E4; }
    a0 = (*(volatile s32 *) (u32) (s1 + 12));
    a1 = 0; func_001D7D60(a0, a1);
    (*(volatile u8 *) (u32) (s1 + 46)) = (u8) 0;
L_001B89E4:;
    a0 = s2; func_001D4F40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 20));
    if (a0 == 0) { a0 = s2; goto L_001B8A14; }
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a1 = 1; func_001D7D60(a0, a1);
    v0 = 1; goto L_001B8D34;
L_001B8A14:;
    v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) v0;
    a0 = v0;
    a1 = 2; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 20));
    a1 = 1; func_001D7D60(a0, a1);
    a0 = s2; v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a1 = 1; func_001D7D60(a0, a1);
    goto L_001B8D30;
L_001B8A64:;
    a0 = 20015; v0 = func_001E6E10(a0);
    if (v0 != 0) { v0 = (s32) 0x10000U; goto L_001B8AB4; }
    s0 = (s32) 0x3a0000U;
    a0 = 0;
    s0 = (s32) ((u32) s0 + 0xffff8400U); v0 = D_001B86B0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 0; goto L_001B8D34; }
    v0 = (*(volatile s32 *) (u32) (s0 + 52));
    if (v0 == 0) goto L_001B8AA8;
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (v0 == 0) goto L_001B8AA8;
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) 0;
L_001B8AA8:;
    v0 = 0;
    goto L_001B8D34;
L_001B8AB4:;
    a0 = v0 | 0x3c; v0 = func_001D5A10(a0);
    s2 = v0;
    if (s2 != 0) { v0 = (s32) 0x10000U; goto L_001B8AD0; }
    v0 = 0; goto L_001B8D34;
L_001B8AD0:;
    a0 = v0 | 0x3f; v0 = func_001D5A10(a0);
    if (v0 == 0) goto L_001B8AF8;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 0; func_001D7D60(a0, a1);
L_001B8AF8:;
    v0 = (s32) 0x3a0000U;
    s1 = (s32) 0x3a0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -31692));
    { s32 c_ = v0 == 0; s1 = (s32) ((u32) s1 + 0xffff8400U); if (c_) goto L_001B8B1C; }
    a0 = (*(volatile s32 *) (u32) (s1 + 12));
    a1 = 0; func_001D7D60(a0, a1);
    (*(volatile u8 *) (u32) (s1 + 46)) = (u8) 0;
L_001B8B1C:;
    a0 = (*(volatile s32 *) (u32) (s0 + 20));
    if (a0 == 0) { a0 = s2; goto L_001B8B44; }
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a1 = 1; func_001D7D60(a0, a1);
    v0 = 1; goto L_001B8D34;
L_001B8B44:;
    func_001D4F40(a0, a1, a2, a3);
    a0 = s2; v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 20));
    a1 = 1; func_001D7D60(a0, a1);
    a0 = s2; v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a1 = 1; func_001D7D60(a0, a1);
    goto L_001B8D30;
L_001B8B9C:;
    v0 = (s32) 0x10000U;
    a0 = v0 | 0x3c; v0 = func_001D5A10(a0);
    s2 = v0;
    if (s2 != 0) { a0 = 20015; goto L_001B8BBC; }
    v0 = 0; goto L_001B8D34;
L_001B8BBC:;
    v0 = func_001E6E10(a0);
    if (v0 != 0) { v0 = (s32) 0x10000U; goto L_001B8C0C; }
    s0 = (s32) 0x3a0000U;
    a0 = 0;
    s0 = (s32) ((u32) s0 + 0xffff8400U); v0 = D_001B86B0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 0; goto L_001B8D34; }
    v0 = (*(volatile s32 *) (u32) (s0 + 52));
    if (v0 == 0) goto L_001B8C00;
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (v0 == 0) goto L_001B8C00;
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) 0;
L_001B8C00:;
    v0 = 0;
    goto L_001B8D34;
L_001B8C0C:;
    a0 = v0 | 0x3f; v0 = func_001D5A10(a0);
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 20)); goto L_001B8C5C; }
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 0; func_001D7D60(a0, a1);
    v0 = (s32) 0x3a0000U;
    s1 = (s32) 0x3a0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -31692));
    { s32 c_ = v0 == 0; s1 = (s32) ((u32) s1 + 0xffff8400U); if (c_) goto L_001B8C58; }
    a0 = (*(volatile s32 *) (u32) (s1 + 12));
    a1 = 0; func_001D7D60(a0, a1);
    (*(volatile u8 *) (u32) (s1 + 46)) = (u8) 0;
L_001B8C58:;
    a0 = (*(volatile s32 *) (u32) (s0 + 20));
L_001B8C5C:;
    if (a0 == 0) { a0 = s2; goto L_001B8C80; }
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a1 = 1; func_001D7D60(a0, a1);
    v0 = 1; goto L_001B8D34;
L_001B8C80:;
    func_001D4F40(a0, a1, a2, a3);
    a0 = s2; v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 20));
    a1 = 1; func_001D7D60(a0, a1);
    a0 = s2; v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a1 = 1; func_001D7D60(a0, a1);
    goto L_001B8D30;
L_001B8CD8:;
    a0 = (*(volatile s32 *) (u32) (s0 + 20));
    if (a0 == 0) { v0 = (s32) 0x10000U; goto L_001B8CF0; }
    a1 = 0; func_001D7D60(a0, a1);
    v0 = (s32) 0x10000U;
L_001B8CF0:;
    a0 = v0 | 0x3c; v0 = func_001D5A10(a0);
    if (v0 == 0) goto L_001B8D0C;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; func_001D7D60(a0, a1);
L_001B8D0C:;
    v0 = (s32) 0x3a0000U;
    s0 = (s32) 0x3a0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -31692));
    { s32 c_ = v0 == 0; s0 = (s32) ((u32) s0 + 0xffff8400U); if (c_) goto L_001B8D30; }
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
    a1 = 0; func_001D7D60(a0, a1);
    (*(volatile u8 *) (u32) (s0 + 46)) = (u8) 0;
L_001B8D30:;
    v0 = 1;
L_001B8D34:;
    return v0;
}
