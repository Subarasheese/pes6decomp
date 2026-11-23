/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s64);
s64 func_001454C0(s64);
void func_00145590(s64, s64, s64, s64, s64, s64, s64, s64);
void func_00145750(s64, s64, s64, s64, s64, s64, s64, s64);
void func_0014EAE0(s64, s64);
void func_0014F2F0(s64, s64, s64, s64, s64);
void func_00150B60(s64, s64, s64);
s64 func_001515E0(s64, s64, s64, s64, s64);
void func_001AE570(s64, s64, s64);
void sprintf(s64, s64, s64, s64, s64, s64, s64, s64);
s64 strcmp(s64, s64);
void strcpy(s64, s64);

void func_001ADDE0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0x2350U);
    v1 = (s32) ((u32) v1 + 0x2210U);
    s2 = a0;
    a2 = (*(volatile u8 *) (u32) (a0 + 498));
    a1 = (*(volatile u8 *) (u32) a0);
    at = a2 < 100;
    a0 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) v0);
    s3 = (*(volatile u8 *) (u32) (v0 + 102));
    { s32 c_ = at == 0; s0 = (s32) ((u32) v1 + (u32) a0); if (c_) goto L_001ADE68; }
    a1 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) sp + 0x5cU);
    a1 = (s32) ((u32) a1 + 0x12f0U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0x1U);
L_001ADE44:;
    a1 = (s32) ((u32) sp + 0x5cU); v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_001ADE80;
    v1 = (*(volatile s8 *) (u32) s0);
    if (v1 != s3) goto L_001ADE80;
    goto L_001ADF64;
L_001ADE68:;
    a1 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) sp + 0x5cU);
    a1 = (s32) ((u32) a1 + 0x12f8U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0x1U); goto L_001ADE44;
L_001ADE80:;
    a0 = (s32) ((u32) s0 + 0x1U);
    a1 = (s32) ((u32) sp + 0x5cU); strcpy(a0, a1);
    a1 = 1;
    a3 = 64;
    a0 = 0;
    a2 = a1;
    a4 = a3;
    (*(volatile u8 *) (u32) s0) = (u8) s3; v0 = func_001515E0(a0, a1, a2, a3, a4);
    a1 = 1;
    a3 = 32;
    s1 = v0;
    a0 = 0;
    a2 = a1;
    a4 = a3; v0 = func_001515E0(a0, a1, a2, a3, a4);
    s0 = v0;
    a0 = s1; func_00145750(a0, a1, a2, a3, a4, a5, a6, a7);
    a2 = (s32) ((u32) s3 + 0xfaaU);
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x5cU); func_001AE570(a0, a1, a2);
    a0 = s1; func_00145590(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile u8 *) (u32) s2);
    a0 = (s32) ((u32) v0 + 0x24b8U); v0 = func_001454C0(a0);
    a0 = v0;
    a1 = s1;
    a2 = 0; func_00150B60(a0, a1, a2);
    a0 = s0;
    a1 = s1; func_0014EAE0(a0, a1);
    s2 = (*(volatile u8 *) (u32) s2);
    a0 = 9489; v0 = func_001454C0(a0);
    a1 = s2 & 0xff;
    a0 = v0;
    v1 = a1 & 0x7;
    v0 = (s32) ((u32) a1 >> 3);
    v1 = (s32) ((u32) v1 << 5);
    v0 = (s32) ((u32) v0 << 5);
    a2 = (s64) ((u64) v1 << 48);
    a3 = (s64) ((u64) v0 << 48);
    a2 = a2 >> 48;
    a3 = a3 >> 48;
    a1 = s0;
    a4 = -1; func_0014F2F0(a0, a1, a2, a3, a4);
    a0 = s1; Pes6Heap_Free(a0);
    a0 = s0; Pes6Heap_Free(a0);
L_001ADF64:;
    return;
}
