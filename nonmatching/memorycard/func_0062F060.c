/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
void func_001DF2F0(s32);
s32 func_001F08B0(s32);
s32 func_00220B70(s32);
s32 func_0062FD90(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0063AC30(s32, s32, s32, s32, f32);
void func_0063AD20(s32, s32, s32, s32);

void func_0062F060(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    s1 = a0;
    a0 = (*(volatile s32 *) (u32) (a1 + 436));
    s0 = a1;
    v0 = (s32) ((u32) s1 + 0x1115U);
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 436));
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s1 + 52)); goto L_0062F0A4; }
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001DF2F0(a0);
    v0 = (*(volatile u8 *) (u32) (s1 + 52));
L_0062F0A4:;
    v0 = (s32) ((u32) v0 + 0xffffffd8U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) { v1 = 19; goto L_0062F128; }
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffac30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x62f0d0U) goto L_0062F0D0; if (t_ == 0x62f0dcU) goto L_0062F0DC; if (t_ == 0x62f0e4U) goto L_0062F0E4; if (t_ == 0x62f0ecU) goto L_0062F0EC; if (t_ == 0x62f0f4U) goto L_0062F0F4; if (t_ == 0x62f0fcU) goto L_0062F0FC; if (t_ == 0x62f104U) goto L_0062F104; if (t_ == 0x62f10cU) goto L_0062F10C; if (t_ == 0x62f114U) goto L_0062F114; if (t_ == 0x62f11cU) goto L_0062F11C; if (t_ == 0x62f124U) goto L_0062F124; }
L_0062F0D0:;
    v1 = 19;
    goto L_0062F128;
L_0062F0DC:;
    v1 = 20; goto L_0062F128;
L_0062F0E4:;
    v1 = 21; goto L_0062F128;
L_0062F0EC:;
    v1 = 22; goto L_0062F128;
L_0062F0F4:;
    v1 = 23; goto L_0062F128;
L_0062F0FC:;
    v1 = 24; goto L_0062F128;
L_0062F104:;
    v1 = 15; goto L_0062F128;
L_0062F10C:;
    v1 = 16; goto L_0062F128;
L_0062F114:;
    v1 = 17; goto L_0062F128;
L_0062F11C:;
    v1 = 18; goto L_0062F128;
L_0062F124:;
    v1 = 25;
L_0062F128:;
    v0 = 25;
    if (v1 != v0) goto L_0062F144;
    a0 = 18; v0 = func_00220B70(a0);
    s2 = v0; goto L_0062F160;
L_0062F144:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffa1f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    s2 = v0;
L_0062F160:;
    a0 = (*(volatile s32 *) (u32) (s0 + 440));
    a1 = s2; func_0063AD20(a0, a1, a2, a3);
    a4 = (*(volatile u8 *) (u32) (s0 + 596));
    v1 = (s32) 0x650000U;
    v0 = (s32) 0x650000U;
    v1 = (s32) ((u32) v1 + 0x7818U);
    v0 = (s32) ((u32) v0 + 0x7829U);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (s32) ((u32) a4 << 1);
    a2 = (*(volatile s32 *) (u32) (s0 + 440));
    a4 = (s32) ((u32) a1 + (u32) a4);
    a1 = (s32) ((u32) v1 + (u32) a4);
    v1 = (s32) ((u32) a4 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) a1);
    a1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a3 = s2; func_0063AC30(a0, a1, a2, a3, f12.f);
    v1 = (*(volatile u8 *) (u32) (s1 + 52));
    v0 = 44;
    { s32 c_ = v1 == v0; a0 = 25; if (c_) goto L_0062F1D4; }
    v0 = 56;
    if (v1 != v0) { v0 = 45; goto L_0062F1DC; }
L_0062F1D4:;
    a0 = 2; goto L_0062F1F4;
L_0062F1DC:;
    if (v1 == v0) { a0 = 3; goto L_0062F1F4; }
    v0 = 57;
    if (v1 != v0) { v0 = 25; goto L_0062F1F8; }
    a0 = 3;
L_0062F1F4:;
    v0 = 25;
L_0062F1F8:;
    if (a0 != v0) goto L_0062F20C;
    v0 = (s32) 0x650000U;
    v0 = (s32) ((u32) v0 + 0x7898U); goto L_0062F224;
L_0062F20C:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffa1f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
L_0062F224:;
    a0 = (*(volatile s32 *) (u32) (s0 + 444));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s1 + 52));
    v0 = 46;
    if (v1 != v0) { a0 = s1; goto L_0062F24C; }
    v0 = (s32) 0x650000U;
    v0 = (s32) ((u32) v0 + 0x7898U); goto L_0062F254;
L_0062F24C:;
    v0 = func_0062FD90(a0, a1, a2, a3, a4, a5, a6, a7);
L_0062F254:;
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
