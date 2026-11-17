/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Free(s32, s32);
s32 func_001454C0(s32);
s32 func_0014EAE0(s32, s32);
s32 func_0014F2F0(s32, s32, s32, s32, s32);
s32 func_00150420(s32, s32, s32, s32, s32, s32);
s32 func_001511C0(s32, s32);
s32 func_001515F0(s32, s32, s32, s32, s32, s32, s32);
s32 func_001CDAD0(s32);

s32 func_001B2CB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 gp = 0x3ef370;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3a0000U;
    v0 = (s32) ((u32) v0 + 0xffff8220U);
    s4 = a1;
    s3 = a0;
    s1 = a2;
    v1 = (*(volatile u8 *) (u32) (a0 + 16));
    s0 = s1;
    a0 = (s32) ((u32) s1 << 4);
    { s32 c_ = v1 == 0; s2 = (s32) ((u32) v0 + (u32) a0); if (c_) goto L_001B2E08; }
    v0 = 3;
    if (v1 == v0) goto L_001B2E08;
L_001B2D08:;
    a0 = s4; v0 = func_001CDAD0(a0);
    if (s1 == 0) { v0 = (*(volatile u8 *) (u32) (s3 + 102)); goto L_001B2E10; }
    v0 = (*(volatile u8 *) (u32) (s3 + 102));
    v1 = (s32) 0x3a0000U;
    a0 = (s32) ((u32) s0 << 1);
    v1 = (s32) ((u32) v1 + 0xffff82b0U);
    s1 = (s32) ((u32) v1 + (u32) a0);
    s0 = (s32) ((u32) s4 + 0x4U);
    a0 = (s32) ((u32) v0 + 0xfa0U); v0 = func_001454C0(a0);
    a0 = v0;
    a2 = (*(volatile s16 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) s0);
    a3 = (*(volatile s16 *) (u32) s2);
    a4 = (*(volatile s16 *) (u32) (s2 + 2));
    a1 = (*(volatile s32 *) (u32) v0);
    a5 = s2; v0 = func_00150420(a0, a1, a2, a3, a4, a5);
    v0 = (*(volatile u8 *) (u32) (s3 + 102));
    a0 = (s32) ((u32) v0 + 0xfa0U); v0 = func_001454C0(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = v0;
    a2 = (*(volatile s16 *) (u32) s1);
    a3 = (*(volatile s16 *) (u32) (s2 + 8));
    a4 = (*(volatile s16 *) (u32) (s2 + 10));
    a1 = (*(volatile s32 *) (u32) v1);
    a5 = (s32) ((u32) s2 + 0x8U); v0 = func_00150420(a0, a1, a2, a3, a4, a5);
    v1 = (*(volatile s32 *) (u32) (gp + -23176));
    at = v1 < 7;
    if (at == 0) goto L_001B2F70;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    if (v0 != 0) { v1 = (*(volatile s16 *) (u32) s2); goto L_001B2E50; }
    a1 = 1;
    a0 = 0;
    a2 = 2;
    a3 = 256;
    a4 = 128;
    a5 = a1; v0 = func_001515F0(a0, a1, a2, a3, a4, a5, a6);
    s2 = v0;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = s2; v0 = func_0014EAE0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s3 + 102));
    a0 = (s32) ((u32) v0 + 0xfb9U); v0 = func_001454C0(a0);
    a4 = (*(volatile s16 *) (u32) s1);
    a0 = v0;
    a1 = s2;
    a2 = 0;
    a3 = 0; v0 = func_0014F2F0(a0, a1, a2, a3, a4);
    a0 = s2; v0 = Pes6Heap_Free(a0, a1);
    goto L_001B2F74;
L_001B2E08:;
    s0 = 0; goto L_001B2D08;
L_001B2E10:;
    s0 = (s32) ((u32) s4 + 0x4U);
    a0 = (s32) ((u32) v0 + 0xfa0U); v0 = func_001454C0(a0);
    a0 = v0;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = (*(volatile s32 *) (u32) v0); v0 = func_001511C0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s3 + 102));
    a0 = (s32) ((u32) v0 + 0xfb9U); v0 = func_001454C0(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    a1 = (*(volatile s32 *) (u32) (v1 + 4));
    a0 = v0; v0 = func_001511C0(a0, a1);
    goto L_001B2F70;
L_001B2E50:;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001B2E60; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001B2E60:;
    v1 = (*(volatile s16 *) (u32) (s2 + 2));
    s6 = (s32) ((u32) sp + 0x8aU);
    (*(volatile u16 *) (u32) (sp + 136)) = (u16) v0;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001B2E7C; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001B2E7C:;
    v1 = (*(volatile s16 *) (u32) (s2 + 4));
    s5 = (s32) ((u32) sp + 0x8cU);
    (*(volatile u16 *) (u32) s6) = (u16) v0;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001B2E98; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001B2E98:;
    v1 = (*(volatile s16 *) (u32) (s2 + 6));
    s4 = (s32) ((u32) sp + 0x8eU);
    (*(volatile u16 *) (u32) s5) = (u16) v0;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001B2EB4; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001B2EB4:;
    (*(volatile u16 *) (u32) s4) = (u16) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 102));
    a0 = (s32) ((u32) v0 + 0xfb9U); v0 = func_001454C0(a0);
    a0 = v0;
    a2 = (*(volatile s16 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) s0);
    a3 = (*(volatile s16 *) (u32) (sp + 136));
    a4 = (*(volatile s16 *) (u32) s6);
    a1 = (*(volatile s32 *) (u32) (v0 + 4));
    a5 = (s32) ((u32) sp + 0x88U); v0 = func_00150420(a0, a1, a2, a3, a4, a5);
    v1 = (*(volatile s16 *) (u32) (s2 + 8));
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001B2EF8; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001B2EF8:;
    v1 = (*(volatile s16 *) (u32) (s2 + 10));
    (*(volatile u16 *) (u32) (sp + 136)) = (u16) v0;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001B2F10; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001B2F10:;
    v1 = (*(volatile s16 *) (u32) (s2 + 12));
    (*(volatile u16 *) (u32) s6) = (u16) v0;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001B2F28; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001B2F28:;
    v1 = (*(volatile s16 *) (u32) (s2 + 14));
    (*(volatile u16 *) (u32) s5) = (u16) v0;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001B2F40; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001B2F40:;
    (*(volatile u16 *) (u32) s4) = (u16) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 102));
    a0 = (s32) ((u32) v0 + 0xfb9U); v0 = func_001454C0(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = v0;
    a2 = (*(volatile s16 *) (u32) s1);
    a4 = (*(volatile s16 *) (u32) s6);
    a3 = (*(volatile s16 *) (u32) (sp + 136));
    a1 = (*(volatile s32 *) (u32) (v1 + 4));
    a5 = (s32) ((u32) sp + 0x88U); v0 = func_00150420(a0, a1, a2, a3, a4, a5);
L_001B2F70:;
L_001B2F74:;
    return v0;
}
