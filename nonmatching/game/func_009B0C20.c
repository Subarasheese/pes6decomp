/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);
void func_00851E70(s32, s32, s32, s32);
s32 func_00853240(s32, s32, s32, s32);
s32 func_00853430(s32, s32, s32, s32);
void memset(s32, s32, s32);

s32 func_009B0C20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, t8 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    a0 = 5;
    a1 = (s32) ((u32) sp + 0x28U);
    a2 = 964;
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) 0; v0 = func_00853430(a0, a1, a2, a3);
    s0 = v0;
    v0 = (*(volatile s32 *) (u32) (sp + 40));
    if (v0 != 0) goto L_009B0E34;
    a0 = s0;
    a1 = 0;
    a2 = 964; memset(a0, a1, a2);
    v1 = 23;
    v0 = 5;
    (*(volatile u16 *) (u32) s0) = (u16) v1;
    a0 = s0;
    (*(volatile u16 *) (u32) (s0 + 2)) = (u16) v0; func_00851E70(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    a6 = (s32) 0x590000U;
    a7 = (*(volatile u8 *) (u32) (v0 + 9985));
    a5 = (s32) 0x590000U;
    a4 = (s32) 0x590000U;
    a3 = (s32) 0x590000U;
    a2 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = 0xffff;
    (*(volatile u8 *) (u32) (s0 + 796)) = (u8) a7;
    v0 = (s32) 0x8b0000U;
    a6 = (*(volatile u8 *) (u32) (a6 + 9400));
    (*(volatile u8 *) (u32) (s0 + 797)) = (u8) a6;
    a5 = (*(volatile u8 *) (u32) (a5 + 7952));
    (*(volatile u8 *) (u32) (s0 + 798)) = (u8) a5;
    a4 = (*(volatile u8 *) (u32) (a4 + 9072));
    (*(volatile u8 *) (u32) (s0 + 799)) = (u8) a4;
    a3 = (*(volatile u8 *) (u32) (a3 + 7757));
    (*(volatile u8 *) (u32) (s0 + 800)) = (u8) a3;
    a2 = (*(volatile u8 *) (u32) (a2 + 7801));
    (*(volatile u8 *) (u32) (s0 + 801)) = (u8) a2;
    a1 = (*(volatile u8 *) (u32) (a1 + 8000));
    (*(volatile u8 *) (u32) (s0 + 802)) = (u8) a1;
    v1 = (*(volatile s32 *) (u32) (v1 + 7692));
    (*(volatile u32 *) (u32) (s0 + 816)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 816));
    (*(volatile u32 *) (u32) (v0 + 5364)) = (u32) v1; v0 = Pes6Random_Below(a0);
    (*(volatile u16 *) (u32) (s0 + 824)) = (u16) v0;
    a3 = 1;
    v0 = (s32) 0x590000U;
    t8 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7759));
    a5 = 0;
    a4 = (s32) ((u32) sp + 0x2cU);
    a2 = 0;
    a1 = s0;
    t8 = (s32) ((u32) t8 + 0xffffe5b0U);
    a0 = 255;
    t6 = a3;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (sp + 44)) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) (v0 + 7761));
    v1 = 23;
    (*(volatile u8 *) (u32) (sp + 45)) = (u8) v0;
    v0 = a3;
L_009B0D34:;
    a6 = (*(volatile u8 *) (u32) a4);
    if (a6 == a0) { a7 = v0; goto L_009B0D48; }
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) v1); hi = (s32) ((s32) a6 % (s32) v1); lo = q_; }
    a7 = hi;
L_009B0D48:;
    a6 = (s32) ((u32) a7 << 3);
    a6 = (s32) ((u32) a6 + (u32) a7);
    a6 = (s32) ((u32) a6 << 6);
    { s32 c_ = a3 == a0; t7 = (s32) ((u32) t8 + (u32) a6); if (c_) goto L_009B0D6C; }
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v1); hi = (s32) ((s32) a2 % (s32) v1); lo = q_; }
    a6 = hi;
    a7 = (s32) ((u32) a6 + 0x1U); goto L_009B0D70;
L_009B0D6C:;
    a7 = t6;
L_009B0D70:;
    t4 = (*(volatile u16 *) (u32) (t7 + 48));
    t5 = (s32) ((u32) s0 + (u32) a5);
    a6 = (s32) ((u32) a7 << 3);
    a5 = (s32) ((u32) a5 + 0x1U);
    a6 = (s32) ((u32) a6 + (u32) a7);
    a4 = (s32) ((u32) a4 + 0x1U);
    a6 = (s32) ((u32) a6 << 6);
    a3 = (s32) ((u32) a3 + 0xbU);
    a7 = (s32) ((u32) t8 + (u32) a6);
    a2 = (s32) ((u32) a2 + 0xbU);
    a6 = a5 < 2;
    (*(volatile u8 *) (u32) (t5 + 820)) = (u8) t4;
    t4 = (*(volatile s32 *) (u32) (t7 + 152));
    (*(volatile u8 *) (u32) (t5 + 822)) = (u8) t4;
    a7 = (*(volatile u16 *) (u32) (a7 + 56));
    (*(volatile u16 *) (u32) (a1 + 828)) = (u16) a7;
    { s32 c_ = a6 != 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_009B0D34; }
    v0 = (s32) 0x590000U;
    a7 = (*(volatile u16 *) (u32) (s0 + 824));
    f0.f = (*(volatile f32 *) (u32) (v0 + 7768));
    a6 = (s32) 0x8b0000U;
    a5 = (s32) 0x590000U;
    a4 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    a3 = (s32) 0x8b0000U;
    a2 = (s32) 0x8b0000U;
    a1 = (s32) 0x8b0000U;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (a6 + 5212)) = (u32) a7;
    (*(volatile f32 *) (u32) (s0 + 804)) = f0.f;
    v0 = (s32) 0x8b0000U;
    f0.f = (*(volatile f32 *) (u32) (a5 + 7772));
    (*(volatile f32 *) (u32) (s0 + 808)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a4 + 7776));
    (*(volatile f32 *) (u32) (s0 + 808)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 9944));
    (*(volatile u16 *) (u32) (a1 + 5220)) = (u16) 0;
    a0 = (*(volatile s32 *) (u32) (a3 + 5212));
    f0.i = (s32) f0.f;
    (*(volatile u32 *) (u32) (a2 + 5204)) = (u32) a0;
    a0 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 826)) = (u16) a0;
    f0.f = (*(volatile f32 *) (u32) (v1 + 9944));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u16 *) (u32) (v0 + 5362)) = (u16) v1;
L_009B0E34:;
    v0 = (s32) ((u32) s0 + 0x31cU);
    a0 = s0;
    v0 = (s32) ((u32) v0 - (u32) s0);
    a1 = (s32) ((u32) v0 + 0x24U); v0 = func_00853240(a0, a1, a2, a3);
    v0 = 0;
    return v0;
}
