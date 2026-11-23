/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_008B2FF0(s32);
void func_008D76B0(s32, s32, s32, s32);
void func_008D7F40(s32, s32, s32, s32, s32);
s32 func_008D90A0(s32, s32, s32, s32);
s32 func_008D9220(s32, s32, s32, s32);
s32 func_008D9300(s32, s32, s32, s32);

s32 func_008D5010(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;

    v0 = (s32) 0x42700000U;
    f1.i = (s32) v0;
    v0 = (s32) 0x590000U;
    s2 = a0;
    v0 = (*(volatile u8 *) (u32) (v0 + 7664));
    { s32 c_ = v0 < 0; s1 = a1; if (c_) goto L_008D5054; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_008D5070;
L_008D5054:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008D5070:;
    f0.f = f1.f / f0.f;
    f0.i = (s32) f0.f;
    s0 = f0.i;
    if (s2 != 0) goto L_008D5098;
    v0 = 0; goto L_008D53E8;
L_008D5098:;
    if (s2 == 0) { a0 = s1; goto L_008D50D8; }
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_008B2FF0(a0);
    a1 = v0 & 0xff;
    v1 = (*(volatile s32 *) (u32) (s2 + 244));
    v0 = (*(volatile u8 *) (u32) (s2 + 3));
    a0 = (s32) ((u32) s2 + 0x15cU);
    a3 = 0;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile u8 *) (u32) (v0 + 65));
    a4 = 0; func_008D7F40(a0, a1, a2, a3, a4);
    a0 = s1;
L_008D50D8:;
    v0 = func_008D90A0(a0, a1, a2, a3);
    v1 = v0 & 0x1060;
    v0 = 4096;
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) s2); goto L_008D51B0; }
    v0 = 32;
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) s2); goto L_008D5174; }
    v0 = 64;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008D5110; }
    v0 = (*(volatile u8 *) (u32) s2); goto L_008D51EC;
L_008D5110:;
    a0 = v0 | 0x8401; SD_call(a0);
    a0 = (*(volatile u8 *) (u32) (s2 + 3));
    v0 = (*(volatile s32 *) (u32) (s2 + 244));
    v1 = (*(volatile u8 *) (u32) s2);
    a0 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (a0 + 43));
    { s32 c_ = v1 != v0; a1 = (s32) ((u32) a0 + 0x2bU); if (c_) goto L_008D5150; }
    v0 = (*(volatile u8 *) (u32) (a0 + 44));
    v1 = (*(volatile u8 *) (u32) (s2 + 1));
    if (v1 != v0) { v1 = (*(volatile u8 *) (u32) a1); goto L_008D5154; }
    v0 = 1; goto L_008D53E8;
L_008D5150:;
    v1 = (*(volatile u8 *) (u32) a1);
L_008D5154:;
    a0 = (s32) ((u32) s2 + 0x15cU);
    v0 = (*(volatile u8 *) (u32) (a1 + 1));
    (*(volatile u8 *) (u32) s2) = (u8) v1;
    a1 = s2;
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v0; func_008D76B0(a0, a1, a2, a3);
    v0 = 3; goto L_008D53E8;
L_008D5174:;
    v0 = func_008B2FF0(a0);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 5));
    if (v0 == 0) { v0 = (s32) 0x8c000000U; goto L_008D51A0; }
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 2; goto L_008D53E8;
L_008D51A0:;
    a0 = v0 | 0x8005; SD_call(a0);
    v0 = 5; goto L_008D53E8;
L_008D51B0:;
    v0 = func_008B2FF0(a0);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 5));
    if (v0 == 0) { v0 = (s32) 0x8c000000U; goto L_008D51DC; }
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 6; goto L_008D53E8;
L_008D51DC:;
    a0 = v0 | 0x8005; SD_call(a0);
    v0 = 5; goto L_008D53E8;
L_008D51EC:;
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008D5200; }
    f0.i = (s32) v0;
    f20.f = (f32) f0.i; goto L_008D5218;
L_008D5200:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f20.f = (f32) f0.i;
    f20.f = f20.f + f20.f;
L_008D5218:;
    v0 = (*(volatile u8 *) (u32) (s2 + 1));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008D5230; }
    f0.i = (s32) v0;
    f21.f = (f32) f0.i; goto L_008D5248;
L_008D5230:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f21.f = (f32) f0.i;
    f21.f = f21.f + f21.f;
L_008D5248:;
    v0 = (*(volatile u8 *) (u32) (s2 + 4));
    if (v0 == 0) { a0 = s1; goto L_008D5264; }
    a0 = s1; v0 = func_008D9220(a0, a1, a2, a3);
    v1 = v0 & 0x1; goto L_008D5270;
L_008D5264:;
    v0 = func_008D9300(a0, a1, a2, a3);
    v1 = v0 & 0x1;
L_008D5270:;
    if (v1 == 0) { v1 = v0 & 0x2; goto L_008D5290; }
    v1 = (*(volatile u8 *) (u32) (s2 + 1));
    a0 = (s32) ((u32) s0 << 1);
    a0 = a0 & 0xff;
    v1 = (s32) ((u32) v1 - (u32) a0);
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v1; goto L_008D52AC;
L_008D5290:;
    if (v1 == 0) { v1 = v0 & 0x8; goto L_008D52B0; }
    v1 = (*(volatile u8 *) (u32) (s2 + 1));
    a0 = (s32) ((u32) s0 << 1);
    a0 = a0 & 0xff;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v1;
L_008D52AC:;
    v1 = v0 & 0x8;
L_008D52B0:;
    if (v1 == 0) { v0 = v0 & 0x4; goto L_008D52CC; }
    v1 = (*(volatile u8 *) (u32) s2);
    v0 = s0 & 0xff;
    v0 = (s32) ((u32) v1 - (u32) v0);
    (*(volatile u8 *) (u32) s2) = (u8) v0; goto L_008D52E4;
L_008D52CC:;
    if (v0 == 0) { a0 = (*(volatile s16 *) (u32) (s2 + 10)); goto L_008D52E8; }
    v0 = (*(volatile u8 *) (u32) s2);
    v1 = s0 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) s2) = (u8) v0;
L_008D52E4:;
    a0 = (*(volatile s16 *) (u32) (s2 + 10));
L_008D52E8:;
    v1 = (*(volatile u8 *) (u32) s2);
    at = a0 < v1;
    if (at != 0) { v0 = (*(volatile s16 *) (u32) (s2 + 14)); goto L_008D5304; }
    v0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u8 *) (u32) s2) = (u8) v0; goto L_008D5318;
L_008D5304:;
    v0 = (s32) ((u32) a0 + (u32) v0);
    at = v0 < v1;
    if (at == 0) { a0 = (*(volatile s16 *) (u32) (s2 + 12)); goto L_008D531C; }
    (*(volatile u8 *) (u32) s2) = (u8) v0;
L_008D5318:;
    a0 = (*(volatile s16 *) (u32) (s2 + 12));
L_008D531C:;
    v1 = (*(volatile u8 *) (u32) (s2 + 1));
    at = a0 < v1;
    if (at != 0) { v0 = (*(volatile s16 *) (u32) (s2 + 16)); goto L_008D5338; }
    v0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v0; goto L_008D534C;
L_008D5338:;
    v0 = (s32) ((u32) a0 + (u32) v0);
    at = v0 < v1;
    if (at == 0) { v0 = (*(volatile u8 *) (u32) s2); goto L_008D5350; }
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v0;
L_008D534C:;
    v0 = (*(volatile u8 *) (u32) s2);
L_008D5350:;
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008D5364; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_008D537C;
L_008D5364:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008D537C:;
    fcc = f20.f == f0.f;
    if (!fcc) { a0 = (s32) ((u32) s2 + 0x15cU); goto L_008D53D0; }
    v0 = (*(volatile u8 *) (u32) (s2 + 1));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008D53A0; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_008D53B8;
L_008D53A0:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008D53B8:;
    fcc = f21.f == f0.f;
    if (!fcc) goto L_008D53CC;
    v0 = 0; goto L_008D53E8;
L_008D53CC:;
    a0 = (s32) ((u32) s2 + 0x15cU);
L_008D53D0:;
    a1 = s2; func_008D76B0(a0, a1, a2, a3);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = 3;
L_008D53E8:;
    return v0;
}
