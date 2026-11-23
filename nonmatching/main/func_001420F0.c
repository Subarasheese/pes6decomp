/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6BonePalette_GetCount(void);
s64 Pes6BonePalette_GetMatrices(void);
s64 Pes6BonePalette_IsActive(void);
s64 sceVu0MulMatrix(s64, s64, s64);

s64 func_001420F0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 gp = 0x3ef370;
    s64 frame[30];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x500000U;
    v1 = 63;
    (*(volatile u8 *) (u32) (v0 + -8436)) = (u8) 0;
    v0 = (s32) 0x500000U;
    (*(volatile u8 *) (u32) (v0 + -8435)) = (u8) v1;
    v0 = (s32) 0x500000U;
    (*(volatile u8 *) (u32) (v0 + -8434)) = (u8) 0;
    v0 = (s32) 0x500000U;
    (*(volatile u8 *) (u32) (v0 + -8433)) = (u8) v1;
    v0 = (*(volatile s32 *) (u32) (a1 + 36));
    v0 = (s32) ((u32) v0 << 6);
    v0 = (s64) ((u64) v0 << 40);
    v0 = (s64) ((u64) v0 >> 40);
    (*(volatile u32 *) (u32) (a1 + 36)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (a0 + 96));
    { s32 c_ = v0 != 0; s5 = a1; if (c_) goto L_00142168; }
    v0 = 0; goto L_001422EC;
L_00142168:;
    v0 = (s32) ((u32) a0 + (u32) v0);
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (v0 + 12));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -23412)); goto L_00142184; }
    v0 = 0; goto L_001422EC;
L_00142184:;
    s6 = (s32) ((u32) v0 + 0xf0U);
    s7 = (s32) ((u32) v0 + 0x110U); v0 = Pes6BonePalette_GetMatrices();
    s0 = v0; v0 = Pes6BonePalette_IsActive();
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -23412)); goto L_001421B4; }
    v0 = Pes6BonePalette_GetCount();
    fp = v0;
    s4 = (s32) ((u32) sp + 0xb0U); goto L_001421BC;
L_001421B4:;
    fp = 1;
    s4 = (*(volatile s32 *) (u32) v0);
L_001421BC:;
    at = 0 < fp;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_001422E8; }
L_001421C8:;
    s3 = 4095;
    s2 = 0; v0 = Pes6BonePalette_IsActive();
    if (v0 == 0) goto L_001421F0;
    v0 = (*(volatile s32 *) (u32) (gp + -23412));
    a0 = (s32) ((u32) sp + 0xb0U);
    a2 = (*(volatile s32 *) (u32) v0);
    a1 = s0; v0 = sceVu0MulMatrix(a0, a1, a2);
L_001421F0:;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) s4) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) s4) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) s4) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) s4) : "memory");
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) s6) : "memory");
    __asm__ volatile("lqc2 $vf9, 16(%0)" : : "r"((u32) s6) : "memory");
    __asm__ volatile("lqc2 $vf10, 0(%0)" : : "r"((u32) s7) : "memory");
    __asm__ volatile("lqc2 $vf11, 16(%0)" : : "r"((u32) s7) : "memory");
    a0 = 0;
    v1 = (*(volatile s32 *) (u32) (sp + 160));
L_00142218:;
    __asm__ volatile("lqc2 $vf1, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vmulaw.xyzw ACC, $vf7, $vf0w");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf1z");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf1y");
    __asm__ volatile("vmaddx.xyzw $vf1, $vf4, $vf1x");
    __asm__ volatile("vmulaw.xyzw ACC, $vf11, $vf0w");
    __asm__ volatile("vmadd.xyzw $vf3, $vf10, $vf1");
    __asm__ volatile("vmulaw.xyzw ACC, $vf9, $vf0w");
    __asm__ volatile("vmadd.xyzw $vf2, $vf8, $vf1");
    __asm__ volatile("vclipw.xyz $vf3, $vf3w");
    __asm__ volatile("vclipw.xyz $vf2, $vf2w");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi18" : "=r"(t_)); v0 = t_; }
    a0 = (s32) ((u32) a0 + 0x1U);
    s3 = s3 & v0;
    s2 = s2 | v0;
    v0 = a0 < 8;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x10U); if (c_) goto L_00142218; }
    v0 = (s32) ((u32) s3 >> 6);
    v1 = s3 & 0x3f;
    a1 = v0 & 0x3f;
    a0 = s2 & 0x3f;
    v0 = (s32) 0x500000U;
    (*(volatile u8 *) (u32) (v0 + -8436)) = (u8) v1;
    v0 = (s32) 0x500000U;
    v1 = (s32) ((u32) s2 >> 6);
    (*(volatile u8 *) (u32) (v0 + -8435)) = (u8) a0;
    a0 = v1 & 0x3f;
    v0 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    (*(volatile u8 *) (u32) (v0 + -8433)) = (u8) a0;
    (*(volatile u8 *) (u32) (v1 + -8434)) = (u8) a1;
    v0 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    a0 = (*(volatile u8 *) (u32) (v1 + -8436));
    v1 = (*(volatile s32 *) (u32) (s5 + 36));
    v1 = v1 | a0;
    (*(volatile u32 *) (u32) (s5 + 36)) = (u32) v1;
    v0 = (*(volatile u8 *) (u32) (v0 + -8436));
    if (v0 != 0) { s1 = (s32) ((u32) s1 + 0x1U); goto L_001422D8; }
    v0 = 0; goto L_001422EC;
L_001422D8:;
    v0 = s1 < fp;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x40U); if (c_) goto L_001421C8; }
L_001422E8:;
    v0 = 1;
L_001422EC:;
    return v0;
}
