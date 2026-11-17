/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00188910(s32);
void func_001AFD20(void);
void func_00270530(s32, s32);
void func_0027A770(void);
s32 func_009B4070(void);

void func_00BD0D90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s0 = a0; func_001AFD20();
    a0 = (s32) ((u32) sp + 0x30U); func_00188910(a0);
    if (s0 == 0) goto L_00BD0F04;
    { s32 c_ = s0 < 0; v0 = s0; if (c_) goto L_00BD0F18; }
L_00BD0DC0:;
    a0 = v0 & 0xff;
L_00BD0DC4:;
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v0 + -22008));
    v0 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) (v0 + -22008)) = (u8) v1;
L_00BD0DD8:;
    v0 = (s32) 0xcc0000U;
    a1 = 23;
    v0 = (*(volatile u8 *) (u32) (v0 + -22008));
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) v0 / (u32) a1); hi = (s32) ((u32) v0 % (u32) a1); lo = q_; }
    a0 = hi;
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -22008)) = (u8) a0;
    v1 = (*(volatile u8 *) (u32) (v0 + -22008));
    if (v1 == 0) goto L_00BD0ED8;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00BD0E18; }
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a1); hi = (s32) ((s32) v1 % (s32) a1); lo = q_; }
    a0 = hi;
L_00BD0E18:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    { s32 c_ = s0 <= 0; s1 = (s32) ((u32) v0 + (u32) v1); if (c_) goto L_00BD0E3C; }
    s0 = 1; goto L_00BD0E40;
L_00BD0E3C:;
    s0 = 22;
L_00BD0E40:;
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x50U); func_00270530(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
L_00BD0E50:;
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_00BD1058;
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    v0 = (s32) 0x46e00000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00BD1058;
    v0 = (*(volatile u8 *) (u32) s1);
    if (v0 <= 0) goto L_00BD10DC;
    a1 = (*(volatile u8 *) (u32) (s1 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 248));
    if (v0 != 0) goto L_00BD1058;
    goto L_00BD10DC;
L_00BD0ED8:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v1 = (s32) ((u32) v0 << 3);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_00BD0EF4; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_00BD0EF4:;
    (*(volatile u8 *) (u32) (gp + -19488)) = (u8) v0; func_0027A770();
    goto L_00BD1104;
L_00BD0F04:;
    v0 = func_009B4070();
    v1 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -22008)) = (u8) v0; goto L_00BD0DD8;
L_00BD0F18:;
    a0 = 22;
    v1 = (s32) 0xb2160000U;
    a1 = (s32) ((u32) a0 - (u32) s0);
    v1 = v1 | 0x42c9;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a1 >> 31);
    v1 = hi;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) v1 >> 4;
    v1 = (s32) ((u32) v1 + (u32) a0);
    at = v1 < 9;
    if (at != 0) goto L_00BD1010;
    a4 = 0;
    a3 = 0;
    a0 = 0;
    { s32 c_ = s0 <= 0; v1 = 0; if (c_) goto L_00BD103C; }
L_00BD0F64:;
    if (v1 == 0) goto L_00BD0F7C;
    v1 = (s32) 0x80000000U;
    if (s0 == v1) goto L_00BD0F7C;
    a0 = 1;
L_00BD0F7C:;
    if (a0 == 0) goto L_00BD0FB0;
    a0 = (s32) ((u32) 0 - (u32) s0);
    v1 = (s32) 0x80000000U;
    v1 = a0 & v1;
    { s32 c_ = v1 != 0; a2 = 1; if (c_) goto L_00BD0FA4; }
    if (v1 == 0) goto L_00BD0FA4;
    a2 = 0;
L_00BD0FA4:;
    if (a2 == 0) goto L_00BD0FB0;
    a3 = 1;
L_00BD0FB0:;
    if (a3 == 0) goto L_00BD0FE8;
    v1 = (s32) ((u32) 0 - (u32) s0);
    a0 = (s32) 0x80000000U;
    v1 = v1 & a0;
    { s32 c_ = v1 != 0; a2 = 1; if (c_) goto L_00BD0FDC; }
    v1 = a1 & a0;
    if (v1 == 0) goto L_00BD0FDC;
    a2 = 0;
L_00BD0FDC:;
    if (a2 == 0) goto L_00BD0FE8;
    a4 = 1;
L_00BD0FE8:;
    if (a4 == 0) goto L_00BD1010;
L_00BD0FF0:;
    v0 = (s32) ((u32) v0 + 0xb8U);
    v1 = v0 < -184;
    if (v1 != 0) goto L_00BD0FF0;
L_00BD1010:;
    if (v0 >= 0) goto L_00BD0DC0;
L_00BD1018:;
    v0 = (s32) ((u32) v0 + 0x17U);
    if (v0 < 0) goto L_00BD1018;
    a0 = v0 & 0xff; goto L_00BD0DC4;
L_00BD103C:;
    at = (s32) 0x7fff0000U;
    at = at | 0xffe9;
    at = s0 < at;
    if (at == 0) goto L_00BD0F64;
    v1 = 1; goto L_00BD0F64;
L_00BD1058:;
    v0 = (s32) 0xcc0000U;
    a2 = s0 & 0xff;
    a0 = (*(volatile u8 *) (u32) (v0 + -22008));
    v1 = (s32) 0xcc0000U;
    a1 = 23;
    a0 = (s32) ((u32) a0 + (u32) a2);
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -22008)) = (u8) a0;
    v0 = (*(volatile u8 *) (u32) (v0 + -22008));
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) v0 / (u32) a1); hi = (s32) ((u32) v0 % (u32) a1); lo = q_; }
    a0 = hi;
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -22008)) = (u8) a0;
    v1 = (*(volatile u8 *) (u32) (v0 + -22008));
    if (v1 == 0) goto L_00BD0ED8;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00BD10B0; }
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a1); hi = (s32) ((s32) v1 % (s32) a1); lo = q_; }
    a0 = hi;
L_00BD10B0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a1 = (s32) ((u32) sp + 0x50U);
    s1 = (s32) ((u32) v0 + (u32) v1);
    a0 = s1; func_00270530(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s1 + 4)); goto L_00BD0E50;
L_00BD10DC:;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -22008));
    v1 = (s32) ((u32) v1 + 0xffffafb0U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) goto L_00BD1058;
    goto L_00BD0ED8;
L_00BD1104:;
    return;
}
