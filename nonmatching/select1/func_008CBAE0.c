/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void func_0017B050(s32, s32, s32);
void func_0017B060(s32, s32, s32);
void func_001A58E0(s32, s32);
void func_001AAF40(s32, s32);
void func_001AAF50(s32, s32, s32, s32);
void func_001ABA60(s32);
void func_001AFD70(s32);
void func_001B0640(s32, s32, s32, s32);

void func_008CBAE0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v0 = 255;
    s1 = a0;
    if (s1 == v0) goto L_008CBB10;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s1 / (s32) v0); hi = (s32) ((s32) s1 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_008CBB18;
L_008CBB10:;
    a0 = 1;
    v1 = (s32) ((u32) a0 << 3);
L_008CBB18:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = (*(volatile s32 *) (u32) v0);
    a0 = s0; func_001ABA60(a0);
    a0 = s0; func_001B0640(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s0 + 444));
    if (v0 <= 0) { a0 = s0; goto L_008CBB60; }
    a0 = s0;
    a1 = 0; func_001AAF50(a0, a1, a2, a3);
    a0 = s0;
L_008CBB60:;
    a1 = 1; func_001AAF40(a0, a1);
    a0 = s0; func_001AFD70(a0);
    v0 = 255;
    { s32 c_ = s1 == v0; a2 = 1; if (c_) goto L_008CBB90; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s1 / (s32) v0); hi = (s32) ((s32) s1 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_008CBB98;
L_008CBB90:;
    a0 = a2;
    v1 = (s32) ((u32) a0 << 3);
L_008CBB98:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = s0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u8 *) (u32) (v0 + 44)) = (u8) a2; func_001A58E0(a0, a1);
    v1 = 1;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) (gp + -20136));
    if (a0 == 0) goto L_008CBBF0;
    v1 = (*(volatile s32 *) (u32) a0);
L_008CBBD8:;
    if (v1 != s1) { a0 = (*(volatile s32 *) (u32) (a0 + 36)); goto L_008CBBE8; }
    goto L_008CBBF4;
L_008CBBE8:;
    if (a0 != 0) { v1 = (*(volatile s32 *) (u32) a0); goto L_008CBBD8; }
L_008CBBF0:;
    a0 = 0;
L_008CBBF4:;
    if (a0 != 0) { ; goto L_008CBC80; }
    a0 = 40;
    a1 = 1; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) v0) = (u32) s1;
    s0 = v0;
    v0 = 255;
    if (s1 == v0) { a0 = 1; goto L_008CBC28; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s1 / (s32) v0); hi = (s32) ((s32) s1 % (s32) v0); lo = q_; }
    a0 = hi;
L_008CBC28:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) 0x8d0000U;
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) ((u32) a1 + 0xffffc7c0U);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (s1 + 16));
    a2 = s0; func_0017B060(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 16));
    a1 = (s32) 0x8d0000U;
    a1 = (s32) ((u32) a1 + 0xffffc7b0U);
    a2 = 0; func_0017B050(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (gp + -20136));
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1;
    (*(volatile u32 *) (u32) (gp + -20136)) = (u32) s0;
L_008CBC80:;
    return;
}
