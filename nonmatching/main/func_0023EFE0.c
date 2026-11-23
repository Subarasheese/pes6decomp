/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
s64 func_0023F240(s64, s64, s64, s64);
void func_002F2E80(s64);
void func_002F2ED0(s64, s64, s64, s64, f32);
s64 func_002F3850(s64);
void func_002F39A0(s64);
void func_002F3A00(s64);
void func_002F4980(s64, s64, s64, s64);
void func_002F4CE0(s64, s64);
void func_002F4E10(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_002F4E90(s64, s64, s64, s64);

s64 func_0023EFE0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[36];
    s64 sp = (s32) (u32) frame;

    v0 = 240;
    v1 = (s32) ((u32) sp + 0x30U);
    s1 = (*(volatile s8 *) (u32) (gp + -32380));
    if (v1 == 0) goto L_0023F01C;
L_0023F000:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0023F000;
L_0023F01C:;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    t6 = (*(volatile s32 *) (u32) (v0 + -25728));
    t5 = (*(volatile s32 *) (u32) (v1 + -25724));
    a1 = (*(volatile s32 *) (u32) (gp + -22836));
    v0 = (s32) 0x3b0000U;
    t4 = (*(volatile s32 *) (u32) (v0 + -25720));
    v1 = (s32) 0x3b0000U;
    a7 = (*(volatile s32 *) (u32) (v1 + -25712));
    v0 = (s32) 0x3b0000U;
    a6 = (*(volatile s32 *) (u32) (v0 + -25708));
    v1 = (s32) 0x3b0000U;
    a5 = (*(volatile s32 *) (u32) (v1 + -25704));
    v0 = (s32) 0x3b0000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -25696));
    v1 = (s32) 0x3b0000U;
    a3 = (*(volatile s32 *) (u32) (v1 + -25692));
    v0 = (s32) 0x3b0000U;
    v1 = 2;
    { s32 c_ = a1 == v1; a2 = (*(volatile s32 *) (u32) (v0 + -25688)); if (c_) goto L_0023F1D8; }
    v0 = 1;
    if (a1 == v0) goto L_0023F0E8;
    if (a1 == 0) { (*(volatile u32 *) (u32) (sp + 60)) = (u32) t6; goto L_0023F08C; }
    a0 = (*(volatile s32 *) (u32) (gp + -22840)); goto L_0023F208;
L_0023F08C:;
    a0 = 23;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) t5;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) t4;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) a7;
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) a6;
    (*(volatile u32 *) (u32) (sp + 164)) = (u32) a5;
    (*(volatile u32 *) (u32) (sp + 168)) = (u32) a4;
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) a3;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) a2;
    (*(volatile u8 *) (u32) (gp + -32380)) = (u8) v0; v0 = func_002F4E90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -22840)) = (u32) v0;
    a0 = v0; func_002F2E80(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -22840));
    a1 = (s32) ((u32) sp + 0x30U); func_002F4980(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -22840)); func_002F3A00(a0);
    v0 = (*(volatile s32 *) (u32) (gp + -22836));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22836)) = (u32) v0; goto L_0023F204;
L_0023F0E8:;
    v0 = (s32) 0x8e0000U;
    s0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc230U);
    v1 = (s32) ((u32) v0 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = 32;
    if (v1 == v0) { a1 = (*(volatile s8 *) (u32) (gp + -32380)); goto L_0023F120; }
    v0 = 16;
    if (v1 == v0) goto L_0023F11C;
    goto L_0023F158;
L_0023F11C:;
    a1 = (*(volatile s8 *) (u32) (gp + -32380));
L_0023F120:;
    a0 = v1 & 0xffff;
    a2 = 0;
    a3 = 1; v0 = func_0023F240(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (gp + -32380)) = (u8) v0;
    v1 = (s64) ((u64) s1 << 56);
    v0 = (s64) ((u64) v0 << 56);
    v1 = v1 >> 56;
    v0 = v0 >> 56;
    if (v1 == v0) goto L_0023F158;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
L_0023F158:;
    v1 = (s32) 0x8e0000U;
    v0 = 2;
    v1 = (s32) ((u32) v1 + 0xffffc270U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_0023F1B0; }
    v0 = 1;
    if (v1 == v0) { v0 = (s32) 0x84020000U; goto L_0023F188; }
    goto L_0023F204;
L_0023F188:;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -22840)); func_002F39A0(a0);
    v0 = (*(volatile s32 *) (u32) (gp + -22836));
    v1 = (*(volatile s8 *) (u32) (gp + -32380));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -32376)) = (u32) v1;
    (*(volatile u32 *) (u32) (gp + -22836)) = (u32) v0; goto L_0023F204;
L_0023F1B0:;
    a0 = v0 | 0x8401; SD_call(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -22840)); func_002F39A0(a0);
    v0 = (*(volatile s32 *) (u32) (gp + -22836));
    v1 = 1;
    (*(volatile u32 *) (u32) (gp + -32376)) = (u32) v1;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22836)) = (u32) v0; goto L_0023F204;
L_0023F1D8:;
    a0 = (*(volatile s32 *) (u32) (gp + -22840)); v0 = func_002F3850(a0);
    v1 = 4;
    if (v0 != v1) goto L_0023F204;
    a0 = (*(volatile s32 *) (u32) (gp + -22840)); func_002F4E10(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (gp + -32376));
    (*(volatile u32 *) (u32) (gp + -22840)) = (u32) 0;
    (*(volatile u32 *) (u32) (gp + -22836)) = (u32) 0; goto L_0023F224;
L_0023F204:;
    a0 = (*(volatile s32 *) (u32) (gp + -22840));
L_0023F208:;
    if (a0 == 0) { v0 = -1; goto L_0023F224; }
    a1 = (*(volatile s8 *) (u32) (gp + -32380)); func_002F4CE0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -22840)); func_002F2ED0(a0, a1, a2, a3, f12.f);
    v0 = -1;
L_0023F224:;
    return v0;
}
