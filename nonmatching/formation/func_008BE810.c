/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0028D6E0(s32, s32, s32, s32);
void func_008BE9B0(s32, s32);
void func_008BFA90(s32, s32);

void func_008BE810(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[60];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    s0 = a1; func_008BE9B0(a0, a1);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = s0; func_008BFA90(a0, a1);
    a2 = 0;
    a1 = (s32) ((u32) sp + 0x1c0U);
    a0 = (s32) ((u32) sp + 0x30U);
    v1 = 1;
L_008BE848:;
    v0 = a2 < 11;
    if (v0 != 0) goto L_008BE868;
    at = a2 < 22;
    if (at == 0) goto L_008BE868;
    (*(volatile u8 *) (u32) a1) = (u8) 0; goto L_008BE870;
L_008BE868:;
    (*(volatile u8 *) (u32) a1) = (u8) v1;
L_008BE870:;
    a2 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u8 *) (u32) (a0 + 133)) = (u8) 0;
    v0 = a2 < 32;
    a1 = (s32) ((u32) a1 + 0x1U);
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x1U); if (c_) goto L_008BE848; }
    v0 = 255;
    a2 = 1;
    a0 = (s32) ((u32) sp + 0x30U);
    (*(volatile u8 *) (u32) (sp + 51)) = (u8) v0;
    a1 = (s32) ((u32) sp + 0x1c0U);
    (*(volatile u8 *) (u32) (sp + 52)) = (u8) v0;
    a3 = a2; func_0028D6E0(a0, a1, a2, a3);
    a2 = 0;
    a3 = (s32) ((u32) sp + 0x30U);
L_008BE8B0:;
    a0 = (*(volatile u8 *) (u32) (a3 + 5));
    a1 = (s32) ((u32) s0 + (u32) a2);
    a2 = (s32) ((u32) a2 + 0x8U);
    v1 = a2 < 32;
    (*(volatile u8 *) (u32) (a1 + 1894)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a3 + 6));
    (*(volatile u8 *) (u32) (a1 + 1895)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a3 + 7));
    (*(volatile u8 *) (u32) (a1 + 1896)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a3 + 8));
    (*(volatile u8 *) (u32) (a1 + 1897)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a3 + 9));
    (*(volatile u8 *) (u32) (a1 + 1898)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a3 + 10));
    (*(volatile u8 *) (u32) (a1 + 1899)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a3 + 11));
    (*(volatile u8 *) (u32) (a1 + 1900)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a3 + 12));
    (*(volatile u8 *) (u32) (a1 + 1901)) = (u8) a0;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_008BE8B0; }
    a3 = 0;
L_008BE908:;
    a2 = (s32) ((u32) s0 + (u32) a3);
    a1 = (s32) ((u32) s1 + (u32) a3);
    a0 = (*(volatile u8 *) (u32) (a2 + 1894));
    a3 = (s32) ((u32) a3 + 0x5U);
    v1 = a3 < 6;
    (*(volatile u8 *) (u32) (a1 + 1905)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 1895));
    (*(volatile u8 *) (u32) (a1 + 1906)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 1896));
    (*(volatile u8 *) (u32) (a1 + 1907)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 1897));
    (*(volatile u8 *) (u32) (a1 + 1908)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 1898));
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (a1 + 1909)) = (u8) a0; if (c_) goto L_008BE908; }
    a0 = (s32) ((u32) a3 + (u32) s0);
    v1 = (s32) ((u32) a3 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) (a0 + 1894));
    a3 = 22;
    (*(volatile u8 *) (u32) (v1 + 1905)) = (u8) a0;
L_008BE958:;
    a2 = (s32) ((u32) s0 + (u32) a3);
    a1 = (s32) ((u32) s1 + (u32) a3);
    a0 = (*(volatile u8 *) (u32) (a2 + 1894));
    a3 = (s32) ((u32) a3 + 0x5U);
    v1 = a3 < 32;
    (*(volatile u8 *) (u32) (a1 + 1894)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 1895));
    (*(volatile u8 *) (u32) (a1 + 1895)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 1896));
    (*(volatile u8 *) (u32) (a1 + 1896)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 1897));
    (*(volatile u8 *) (u32) (a1 + 1897)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 1898));
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (a1 + 1898)) = (u8) a0; if (c_) goto L_008BE958; }
    return;
}
