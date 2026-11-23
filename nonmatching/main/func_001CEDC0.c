/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6PacketStream_AppendGsAD(s64, s64, s64);
void func_001036F0(s64, s64);
void func_00103748(s64);
void func_00103778(s64, s64);
void func_00103790(s64);
s64 func_00129BA0(s64, s64, s64, s64);

void func_001CEDC0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 v0 = 0, v1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_a1 = 0;
    u64 qh_a6 = 0;
    u64 qh_a7 = 0;
    u64 qh_t4 = 0;
    u64 qh_t5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    f0.i = (s32) 0;
    s5 = a2;
    s4 = a0;
    f20.i = f12.i;
    fcc = f20.f <= f0.f;
    { s32 c_ = fcc; s3 = a1; if (c_) goto L_001CEEB4; }
    v0 = func_00129BA0(a0, a1, a2, a3);
    { u32 a_ = (u32) (v0 + 0) & ~15U; t5 = *(volatile s64 *) a_; qh_t5 = *(volatile u64 *) (a_ + 8); }
    a3 = (s32) 0x3f800000U;
    { u32 a_ = (u32) (v0 + 16) & ~15U; t4 = *(volatile s64 *) a_; qh_t4 = *(volatile u64 *) (a_ + 8); }
    a4 = (s32) 0x400000U;
    { u32 a_ = (u32) (v0 + 32) & ~15U; a7 = *(volatile s64 *) a_; qh_a7 = *(volatile u64 *) (a_ + 8); }
    a2 = (s32) 0x400000U;
    { u32 a_ = (u32) (v0 + 48) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) 0x400000U;
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) a3;
    a0 = (s32) 0x400000U;
    v1 = (s32) 0x400000U;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 184)) = f20.f;
    (*(volatile u32 *) (u32) (sp + 180)) = (u32) 0;
    a4 = (s32) ((u32) a4 + 0xffffb060U);
    a3 = (s32) ((u32) sp + 0xb0U);
    a5 = (s32) ((u32) sp + 0xc0U);
    { u32 a_ = (u32) (a2 + -20384) & ~15U; *(volatile u64 *) a_ = (u64) t5; *(volatile u64 *) (a_ + 8) = qh_t5; }
    v0 = 1;
    { u32 a_ = (u32) (a1 + -20368) & ~15U; *(volatile u64 *) a_ = (u64) t4; *(volatile u64 *) (a_ + 8) = qh_t4; }
    { u32 a_ = (u32) (a0 + -20352) & ~15U; *(volatile u64 *) a_ = (u64) a7; *(volatile u64 *) (a_ + 8) = qh_a7; }
    { u32 a_ = (u32) (v1 + -20336) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a4) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) a4) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) a4) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) a4) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmaddw.xyzw $vf8, $vf7, $vf8w");
    __asm__ volatile("vdiv Q, $vf0w, $vf8w");
    __asm__ volatile("vwaitq");
    __asm__ volatile("vmulq.xyz $vf8, $vf8, Q");
    { s32 c_ = v0 == 0; __asm__ volatile("vftoi4.xyzw $vf9, $vf8"); if (c_) goto L_001CEEA8; }
    __asm__ volatile("vftoi0.zw $vf9, $vf8");
L_001CEEA8:;
    __asm__ volatile("sqc2 $vf9, 0(%0)" : : "r"((u32) a5) : "memory");
    s0 = (*(volatile s32 *) (u32) (sp + 200)); goto L_001CEEB8;
L_001CEEB4:;
    s0 = 0;
L_001CEEB8:;
    a5 = (*(volatile s32 *) (u32) s4);
    v0 = (s32) 0x10260000U;
    v0 = v0 | 0x4000;
    a4 = (*(volatile s32 *) (u32) s3);
    v1 = (s64) ((u64) v0 << 32);
    a3 = (*(volatile s32 *) (u32) (s4 + 4));
    v0 = 0x8000;
    a2 = (*(volatile s32 *) (u32) (s3 + 4));
    v1 = v0 | v1;
    a1 = (*(volatile s32 *) (u32) (s4 + 8));
    a0 = (*(volatile s32 *) (u32) (s4 + 12));
    s1 = (s32) ((u32) sp + 0xe0U);
    v0 = (s32) ((u32) a5 << 4);
    s2 = (s32) ((u32) sp + 0xd0U);
    (*(volatile u32 *) (u32) (sp + 224)) = (u32) v0;
    v0 = (s32) ((u32) a4 << 4);
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v0;
    v0 = (s32) ((u32) a3 << 4);
    (*(volatile u32 *) (u32) (sp + 228)) = (u32) v0;
    s4 = (s32) 0x530000U;
    v0 = (s32) ((u32) a2 << 4);
    a3 = (*(volatile s32 *) (u32) (s3 + 8));
    (*(volatile u32 *) (u32) (sp + 212)) = (u32) v0;
    s4 = (s32) ((u32) s4 + 0xffffab10U);
    v0 = (s32) ((u32) a1 << 4);
    a2 = (*(volatile s32 *) (u32) (s3 + 12));
    (*(volatile u32 *) (u32) (sp + 232)) = (u32) v0;
    a1 = 0;
    v0 = (s32) ((u32) a0 << 4);
    (*(volatile u32 *) (u32) (sp + 236)) = (u32) v0;
    a0 = s4;
    v0 = (s32) 0x3a0000U;
    a3 = (s32) ((u32) a3 << 4);
    (*(volatile u32 *) (u32) (sp + 216)) = (u32) a3;
    (*(volatile u64 *) (u32) (v0 + -27936)) = (u64) v1;
    v0 = (s32) ((u32) a2 << 4);
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) v0; func_001036F0(a0, a1);
    v0 = (s32) 0x3a0000U;
    { u32 a_ = (u32) (v0 + -27936) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a0 = s4; func_00103778(a0, a1);
    v0 = (s64) ((u64) s0 << 32);
    s3 = 0;
    v0 = v0 >> 32;
    s6 = (s32) ((u32) sp + 0xf9U);
    s0 = (s64) ((u64) v0 << 32);
    s7 = (s32) ((u32) sp + 0xfaU);
    fp = (s32) ((u32) sp + 0xfbU);
L_001CEF7C:;
    a2 = (*(volatile u8 *) (u32) s5);
    v0 = 255;
    a1 = (*(volatile u8 *) (u32) (s5 + 1));
    a0 = (*(volatile u8 *) (u32) (s5 + 2));
    v1 = (*(volatile u8 *) (u32) (s5 + 3));
    (*(volatile u8 *) (u32) (sp + 248)) = (u8) a2;
    (*(volatile u8 *) (u32) s6) = (u8) a1;
    { s32 c_ = v1 != v0; (*(volatile u8 *) (u32) s7) = (u8) a0; if (c_) goto L_001CEFA8; }
    v0 = 128; goto L_001CEFAC;
L_001CEFA8:;
    v0 = (s32) v1 >> 1;
L_001CEFAC:;
    (*(volatile u8 *) (u32) fp) = (u8) v0;
    a0 = s4;
    v0 = (s32) ((u32) sp + 0xfcU);
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    a2 = (*(volatile s64 *) (u32) (sp + 248));
    a1 = 1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s2);
    a0 = s4;
    v1 = (*(volatile s32 *) (u32) s1);
    a1 = 5;
    v0 = (s64) ((u64) v0 << 16);
    v0 = v1 | v0;
    a2 = s0 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    s3 = (s32) ((u32) s3 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v0 = s3 < 4;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + 0x4U); if (c_) goto L_001CEF7C; }
    a0 = s4; func_00103790(a0);
    a0 = s4; func_00103748(a0);
    return;
}
