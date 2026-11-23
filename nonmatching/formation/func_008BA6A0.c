/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001C83D8(s32, s32, s32);
s32 func_001E4B50(s32, s32, s32, s32);
s32 func_008B2C00(s32);
s32 func_008B2C60(void);
void strncpy(s32, s32, s32);

s32 func_008BA6A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[48];
    s32 sp = (s32) (u32) frame;

    fp = a0;
    a0 = 8;
    s5 = a1;
    a1 = (s32) ((u32) sp + 0x130U);
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) a2;
    a2 = (s32) 0x8f0000U;
    a2 = (s32) ((u32) a2 + 0xffffbd00U);
L_008BA6EC:;
    v1 = (*(volatile s32 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v0;
    a2 = (s32) ((u32) a2 + 0x8U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_008BA6EC; }
    a2 = (s32) 0x8f0000U;
    a1 = (s32) ((u32) sp + 0xc0U);
    a2 = (s32) ((u32) a2 + 0xffffbd40U);
    a0 = 14;
L_008BA71C:;
    v1 = (*(volatile s32 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v0;
    a2 = (s32) ((u32) a2 + 0x8U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_008BA71C; }
    if (s5 != 0) { a0 = fp; goto L_008BA74C; }
    v0 = 0; goto L_008BAA08;
L_008BA74C:;
    s1 = 0;
    s2 = 0;
    s3 = 0;
    s6 = s5;
    s7 = 0;
    s0 = 0; v0 = func_008B2C00(a0);
    if (v0 == 0) { v0 = (s32) 0x3f800000U; goto L_008BA778; }
    f20.f = (*(volatile f32 *) (u32) v0); goto L_008BA77C;
L_008BA778:;
    f20.i = (s32) v0;
L_008BA77C:;
    v1 = (*(volatile s8 *) (u32) s5);
    { s32 c_ = v1 == 0; s4 = 0; if (c_) goto L_008BA8E8; }
    v0 = 10;
L_008BA78C:;
    if (v1 != v0) { v0 = 32; goto L_008BA7A0; }
    s5 = (s32) ((u32) s5 + 0x1U);
    s7 = s5; goto L_008BA8E8;
L_008BA7A0:;
    if (v1 != v0) goto L_008BA7B0;
    s7 = (s32) ((u32) s5 + 0x1U);
L_008BA7B0:;
    v0 = 40;
    if (v1 == v0) goto L_008BA7C8;
    v0 = 91;
    if (v1 != v0) goto L_008BA7F0;
L_008BA7C8:;
    if (s5 == s6) goto L_008BA7F0;
    v1 = (*(volatile s8 *) (u32) (s5 + -1));
    v0 = 40;
    if (v1 == v0) goto L_008BA7F0;
    v0 = 91;
    if (v1 == v0) goto L_008BA7F0;
    s7 = s5;
L_008BA7F0:;
    a0 = (s32) ((u32) sp + 0x170U);
    a1 = s5;
    a2 = 9; strncpy(a0, a1, a2);
    s3 = s2 & 0xff;
    a0 = fp;
    s2 = s1 & 0xff;
    a1 = (s32) ((u32) sp + 0x170U);
    a2 = (s32) ((u32) sp + 0x17fU);
    s1 = s4 & 0xff; v0 = func_001E4B50(a0, a1, a2, a3);
    s4 = v0 & 0xff;
    if (s4 != 0) { v1 = (*(volatile u8 *) (u32) (sp + 383)); goto L_008BA830; }
    v0 = 0; goto L_008BAA08;
L_008BA830:;
    v0 = (*(volatile s32 *) (u32) (sp + 188));
    s0 = (s32) ((u32) s0 + (u32) v1);
    f1.i = (s32) s0;
    f1.f = (f32) f1.i;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f1.f = f1.f * f20.f;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_008BA8E8;
    v1 = (*(volatile s8 *) (u32) s5);
    v0 = 45;
    if (v1 == v0) goto L_008BA898;
    v0 = 47;
    if (v1 == v0) goto L_008BA898;
    v0 = 41;
    if (v1 == v0) goto L_008BA898;
    v0 = 93;
    if (v1 != v0) goto L_008BA8D0;
L_008BA898:;
    v1 = (*(volatile s8 *) (u32) (s5 + 1));
    v0 = 41;
    if (v1 == v0) goto L_008BA8D0;
    v0 = 93;
    if (v1 == v0) goto L_008BA8D0;
    v0 = 46;
    if (v1 == v0) goto L_008BA8D0;
    v0 = 44;
    if (v1 == v0) goto L_008BA8D0;
    s7 = (s32) ((u32) s5 + 0x1U);
L_008BA8D0:;
    v0 = s4 & 0xff;
    s5 = (s32) ((u32) s5 + (u32) v0);
    v1 = (*(volatile s8 *) (u32) s5);
    if (v1 != 0) { v0 = 10; goto L_008BA78C; }
L_008BA8E8:;
    if (s6 != s5) goto L_008BA8F8;
    v0 = 0; goto L_008BAA08;
L_008BA8F8:;
    v0 = func_008B2C60();
    if (v0 == 0) goto L_008BA9D8;
    s0 = 0;
L_008BA90C:;
    s6 = (s32) ((u32) sp + 0xc0U);
    fp = s4 & 0xff;
L_008BA918:;
    a1 = (*(volatile s32 *) (u32) s6);
    a0 = s5;
    a2 = fp; v0 = func_001C83D8(a0, a1, a2);
    if (v0 != 0) goto L_008BA948;
    s4 = s1 & 0xff;
    s1 = s2 & 0xff;
    s5 = (s32) ((u32) s5 - (u32) s4);
    s2 = s3 & 0xff;
    s3 = 0; goto L_008BA958;
L_008BA948:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = (u64) s0 < (u64) (s64) 28;
    { s32 c_ = v0 != 0; s6 = (s32) ((u32) s6 + 0x4U); if (c_) goto L_008BA918; }
L_008BA958:;
    at = (u64) s0 < (u64) (s64) 28;
    if (at == 0) goto L_008BA970;
    v0 = s4 & 0xff;
    if (v0 != 0) { s0 = 0; goto L_008BA90C; }
L_008BA970:;
    s4 = s1 & 0xff;
    s0 = 0;
    s6 = (s32) ((u32) sp + 0x130U);
    fp = (s32) ((u32) s5 - (u32) s4);
L_008BA980:;
    a1 = (*(volatile s32 *) (u32) s6);
    a0 = fp;
    a2 = s4; v0 = func_001C83D8(a0, a1, a2);
    if (v0 != 0) goto L_008BA9B0;
    s1 = s2 & 0xff;
    s5 = (s32) ((u32) s5 - (u32) s4);
    s2 = s3 & 0xff;
    s3 = 0; goto L_008BA9C0;
L_008BA9B0:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = (u64) s0 < (u64) (s64) 16;
    { s32 c_ = v0 != 0; s6 = (s32) ((u32) s6 + 0x4U); if (c_) goto L_008BA980; }
L_008BA9C0:;
    at = (u64) s0 < (u64) (s64) 16;
    if (at == 0) goto L_008BA9D8;
    v0 = s1 & 0xff;
    if (v0 != 0) goto L_008BA970;
L_008BA9D8:;
    v0 = (*(volatile s8 *) (u32) s5);
    if (v0 != 0) goto L_008BA9EC;
    v0 = 0; goto L_008BAA08;
L_008BA9EC:;
    v0 = func_008B2C60();
    if (v0 != 0) { v0 = s5; goto L_008BAA08; }
    if (s7 != 0) { v0 = s7; goto L_008BAA08; }
    v0 = s5;
L_008BAA08:;
    return v0;
}
