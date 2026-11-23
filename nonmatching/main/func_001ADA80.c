/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s64);
s64 func_001454C0(s64);
void func_0014EAE0(s64, s64);
void func_0014F2F0(s64, s64, s64, s64, s64);
s64 func_001515E0(s64, s64, s64, s64, s64);
void func_001AE7B0(s64, s64, s64, s64, s64, s64);
void memset(s64, s64, s64);
s64 strcmp(s64, s64);
void strcpy(s64, s64);
void strncpy(s64, s64, s64);

void func_001ADA80(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x520000U;
    a2 = (s32) 0x520000U;
    v1 = (s32) ((u32) v1 + 0x2350U);
    a2 = (s32) ((u32) a2 + 0x2050U);
    s4 = a0;
    v0 = 2;
    a4 = (*(volatile u8 *) (u32) a0);
    a1 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) a4 << 3);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) (a0 + 20));
    a1 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a1 << 1);
    a1 = (*(volatile s32 *) (u32) v1);
    a3 = (s32) ((u32) a3 + (u32) a4);
    v1 = (*(volatile u8 *) (u32) (a0 + 8));
    s0 = (*(volatile u8 *) (u32) (a1 + 102));
    { s32 c_ = v1 != v0; s1 = (s32) ((u32) a2 + (u32) a3); if (c_) goto L_001ADAF4; }
    s3 = 0; goto L_001ADAF8;
L_001ADAF4:;
    s3 = (*(volatile u8 *) (u32) (a0 + 6));
L_001ADAF8:;
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = 0;
    a2 = 17; memset(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s4 + 20));
    v0 = (*(volatile u8 *) (u32) (v0 + 8));
    if (v0 == 0) goto L_001ADB28;
    a1 = (*(volatile s32 *) (u32) (s4 + 24));
    a0 = (s32) ((u32) sp + 0x70U);
    a2 = 16; strncpy(a0, a1, a2);
L_001ADB28:;
    a0 = (s32) ((u32) s1 + 0x2U);
    a1 = (s32) ((u32) sp + 0x70U); v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_001ADB54;
    v1 = (*(volatile s8 *) (u32) s1);
    if (v1 != s0) goto L_001ADB54;
    v1 = (*(volatile s8 *) (u32) (s1 + 1));
    if (v1 == s3) goto L_001ADC08;
L_001ADB54:;
    a0 = (s32) ((u32) s1 + 0x2U);
    a1 = (s32) ((u32) sp + 0x70U); strcpy(a0, a1);
    (*(volatile u8 *) (u32) s1) = (u8) s0;
    a1 = 1;
    (*(volatile u8 *) (u32) (s1 + 1)) = (u8) s3;
    a0 = 0;
    v0 = (*(volatile u8 *) (u32) s4);
    a2 = a1;
    a3 = 32;
    a4 = 8;
    s5 = (s32) ((u32) v0 + 0x2422U); v0 = func_001515E0(a0, a1, a2, a3, a4);
    s2 = v0;
    a3 = (s32) ((u32) s0 + 0xfb4U);
    a2 = (s32) ((u32) s1 + 0x2U);
    a4 = s3;
    a0 = 0;
    a1 = s5;
    a5 = 230; func_001AE7B0(a0, a1, a2, a3, a4, a5);
    a0 = s5; v0 = func_001454C0(a0);
    a1 = v0;
    a0 = s2; func_0014EAE0(a0, a1);
    s0 = (*(volatile u8 *) (u32) s4);
    a0 = 9489; v0 = func_001454C0(a0);
    a1 = s0 & 0xff;
    a0 = v0;
    v0 = (s32) ((u32) a1 >> 3);
    v1 = a1 & 0x7;
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) v1 << 5);
    v0 = (s32) ((u32) v0 + 0x60U);
    a2 = (s64) ((u64) v1 << 48);
    a3 = (s64) ((u64) v0 << 48);
    a2 = a2 >> 48;
    a3 = a3 >> 48;
    a1 = s2;
    a4 = -1; func_0014F2F0(a0, a1, a2, a3, a4);
    a0 = s2; Pes6Heap_Free(a0);
L_001ADC08:;
    return;
}
