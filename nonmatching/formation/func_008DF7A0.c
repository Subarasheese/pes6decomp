/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_001F08B0(s32);
void func_008B3B20(s32, s32, s32, s32);
void func_008B66C0(s32, s32, s32, s32);
s32 func_008B94E0(s32, s32, s32, s32);
void func_008BF050(s32);
void func_008C9B10(s32, s32, s32, s32);
void func_008C9B50(s32, s32, s32, s32);
s32 func_008C9DA0(s32);
void func_008C9DB0(s32, s32, f32, f32);
void func_008CACD0(s32, s32, s32, s32);
s32 func_008CB960(s32, s32, s32, s32, f32, f32);
void func_008CBFA0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008D90A0(s32, s32, s32, s32);
void func_008DF480(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008E2F70(s32, s32, s32, s32);
void func_008E2F80(s32, s32, s32, s32);
void func_008E5110(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008E72A0(s32, s32, s32, s32);

s32 func_008DF7A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_008DFA10; }
    v0 = 1;
    if (a1 == v0) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008DF88C; }
    if (a1 == 0) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008DF7D4; }
    v0 = 0; goto L_008DFA40;
L_008DF7D4:;
    v0 = func_008C9DA0(a0);
    v1 = v0 & 0xff;
    v0 = 7;
    if (v1 == v0) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008DF800; }
    a0 = s0;
    a1 = 0;
    a2 = 0; func_008B3B20(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb0cU);
L_008DF800:;
    a1 = 6; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0xb34U);
    a1 = 0; func_008E72A0(a0, a1, a2, a3);
    v0 = (s32) 0x3c0000U;
    a0 = v0 | 0x7; v0 = func_001F08B0(a0);
    a1 = v0;
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008C9B50(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 2; func_008CBFA0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 0; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 0; func_008E2F80(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 1; func_008E2F70(a0, a1, a2, a3);
    a0 = s0;
    a1 = 26; func_008B66C0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) gp + 0xffff85c8U);
    a0 = s0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile u8 *) (u32) v0);
    a2 = 1; func_008DF480(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008DFA3C;
L_008DF88C:;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a2 = 0; v0 = func_008CB960(a0, a1, a2, a3, f12.f, f13.f);
    v1 = 3;
    if (v0 == v1) { a0 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008DF918; }
    v1 = 2;
    if (v0 == v1) { a0 = (*(volatile u8 *) (u32) s0); goto L_008DF8F0; }
    v1 = 1;
    if (v0 == v1) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008DF8C4; }
    goto L_008DF914;
L_008DF8C4:;
    func_008CACD0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x208U); func_008BF050(a0);
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = (s32) ((u32) gp + 0xffff85c8U);
    a1 = 3;
    v0 = 39;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) v1) = (u8) a1; goto L_008DFA40;
L_008DF8F0:;
    v0 = func_008B94E0(a0, a1, a2, a3);
    if (v0 != 0) goto L_008DF914;
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 16; goto L_008DFA40;
L_008DF914:;
    a0 = (*(volatile u8 *) (u32) (s0 + 25));
L_008DF918:;
    v0 = func_008D90A0(a0, a1, a2, a3);
    v1 = v0 & 0x180;
    v0 = 128;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008DF9A0; }
    v0 = 256;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008DF944; }
    goto L_008DFA3C;
L_008DF944:;
    a0 = v0 | 0xf803; SD_call(a0);
    v1 = (*(volatile u8 *) (u32) s0);
    a3 = (s32) ((u32) gp + 0xffff85c8U);
    v0 = 5;
    a0 = s0;
    a1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) s0);
    a1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) a1);
    if ((u32) v0 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) v0); hi = (s32) ((u32) v1 % (u32) v0); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) a1) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) a3 + (u32) v0);
    a1 = (*(volatile u8 *) (u32) v0);
    a2 = 1; func_008DF480(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008DFA3C;
L_008DF9A0:;
    a0 = v0 | 0xf803; SD_call(a0);
    v1 = (*(volatile u8 *) (u32) s0);
    a3 = (s32) ((u32) gp + 0xffff85c8U);
    v0 = 5;
    a0 = s0;
    a1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0x5U);
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) s0);
    a1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) s0);
    a1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) a1);
    if ((u32) v0 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) v0); hi = (s32) ((u32) v1 % (u32) v0); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) a1) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) a3 + (u32) v0);
    a1 = (*(volatile u8 *) (u32) v0);
    a2 = 1; func_008DF480(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008DFA3C;
L_008DFA10:;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 0; func_008CBFA0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008C9B10(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 1; func_008E2F80(a0, a1, a2, a3);
    a0 = s0;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
L_008DFA3C:;
    v0 = 0;
L_008DFA40:;
    return v0;
}
