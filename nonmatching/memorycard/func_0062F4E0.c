/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
s32 func_001F08B0(s32);
s32 func_00220EF0(s32);
s32 func_0062F7B0(s32, s32, s32);
void func_0063AC20(s32);
void func_0063AC30(s32, s32, s32, s32, f32);
void func_0063AD20(s32, s32, s32, s32);
void func_0063B410(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00645820(s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_0062F4E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    v0 = (*(volatile u8 *) (u32) (a0 + 58));
    s0 = a1;
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffffac98U);
    a0 = (s32) 0x650000U;
    a2 = (s32) ((u32) v0 + 0x7d5U);
    a0 = (s32) ((u32) a0 + 0x7930U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (s32) 0x650000U;
    a1 = (s32) ((u32) a1 + 0x7930U);
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) a1;
    a0 = (*(volatile s32 *) (u32) (s0 + 404)); func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s1 + 103));
    if (v0 != 0) { v0 = (s32) 0x660000U; goto L_0062F540; }
    v0 = (s32) 0x660000U;
    a0 = v0 | 0x13; goto L_0062F544;
L_0062F540:;
    a0 = v0 | 0x14;
L_0062F544:;
    v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 436));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s1 + 102));
    v0 = 3;
    if (v1 == v0) { a0 = 10; goto L_0062F588; }
    v0 = 2;
    if (v1 == v0) { a0 = 9; goto L_0062F588; }
    v0 = 1;
    if (v1 == v0) { a0 = 8; goto L_0062F588; }
    a0 = 7;
L_0062F588:;
    a1 = 1; v0 = func_00220EF0(a0);
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 440));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a4 = (*(volatile u8 *) (u32) (s0 + 596));
    v1 = (s32) 0x650000U;
    v0 = (s32) 0x650000U;
    v1 = (s32) ((u32) v1 + 0x7818U);
    v0 = (s32) ((u32) v0 + 0x7829U);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (s32) ((u32) a4 << 1);
    a4 = (s32) ((u32) a1 + (u32) a4);
    a3 = (*(volatile s32 *) (u32) (sp + 60));
    a1 = (s32) ((u32) v1 + (u32) a4);
    v1 = (s32) ((u32) a4 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) a1);
    a1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = (*(volatile s32 *) (u32) (s0 + 440)); func_0063AC30(a0, a1, a2, a3, f12.f);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x3cU);
    a2 = (s32) ((u32) sp + 0x38U); v0 = func_0062F7B0(a0, a1, a2);
    a1 = (*(volatile s32 *) (u32) (sp + 60));
    a0 = (*(volatile s32 *) (u32) (s0 + 444)); func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 444)); func_0063AC20(a0);
    a2 = (*(volatile u8 *) (u32) (s1 + 98));
    if (a2 != 0) { v0 = 254; goto L_0062F62C; }
    a0 = 100; v0 = func_00645820(a0);
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0; goto L_0062F6A8;
L_0062F62C:;
    if (a2 != v0) { v0 = 255; goto L_0062F648; }
    v0 = (s32) 0x190000U;
    a0 = v0 | 0xcf; v0 = func_001F08B0(a0);
    goto L_0062F6A4;
L_0062F648:;
    if (a2 != v0) goto L_0062F664;
    v0 = (s32) 0x190000U;
    a0 = v0 | 0x53; v0 = func_001F08B0(a0);
    goto L_0062F6A4;
L_0062F664:;
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffffd630U);
    a1 = (s32) ((u32) a1 + 0xffffac98U); func_0063B410(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x190000U;
    a0 = v0 | 0x46; v0 = func_001F08B0(a0);
    a0 = (s32) 0x660000U;
    a2 = (s32) 0x660000U;
    a1 = v0;
    a0 = (s32) ((u32) a0 + 0xffffd430U);
    a2 = (s32) ((u32) a2 + 0xffffd630U); func_0063B410(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffd430U);
L_0062F6A4:;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0;
L_0062F6A8:;
    a0 = (*(volatile s32 *) (u32) (s0 + 448));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a2 = (*(volatile u8 *) (u32) (s0 + 596));
    v1 = (s32) 0x650000U;
    v1 = (s32) ((u32) v1 + 0x7818U);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (s32) ((u32) a2 << 1);
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001D7D60(a0, a1);
    return;
}
