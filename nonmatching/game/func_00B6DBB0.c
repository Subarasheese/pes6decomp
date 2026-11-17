/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00207D10(s32);
void func_00209A00(s32, s32, s32);
void func_00930240(s32);
s32 func_009B3220(s32, s32, s32);
void func_00BA90E0(s32, s32, f32);

void func_00B6DBB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    s1 = a0;
    s0 = (*(volatile s32 *) (u32) a0);
    a1 = (*(volatile u16 *) (u32) (s0 + 38));
    a2 = (*(volatile u16 *) (u32) (s0 + 56));
    a0 = (*(volatile u16 *) (u32) (s0 + 44)); v0 = func_009B3220(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s1);
    (*(volatile u16 *) (u32) (v1 + 38)) = (u16) v0;
    a0 = (*(volatile s32 *) (u32) s1); func_00930240(a0);
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); v0 = func_00207D10(a0);
    if (v0 == 0) goto L_00B6DD90;
    a2 = (*(volatile s32 *) (u32) s1);
    a1 = (*(volatile s32 *) (u32) (a2 + 152));
    if (a1 == 0) goto L_00B6DD0C;
    a5 = (s32) 0x590000U;
    a5 = (s32) ((u32) a5 + 0xffffe7f0U);
    a4 = (*(volatile u8 *) (u32) a5);
    at = a4 < 23;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00B6DC58; }
    v1 = 7;
L_00B6DC28:;
    a0 = (*(volatile s32 *) (u32) (a5 + 148));
    a0 = a0 & 0x4;
    if (a0 == 0) goto L_00B6DC48;
    a0 = (*(volatile u16 *) (u32) (a5 + 24));
    if (a0 != v1) goto L_00B6DC48;
    a3 = (s32) ((u32) a3 + 0x1U);
L_00B6DC48:;
    a4 = (s32) ((u32) a4 + 0x1U);
    at = a4 < 23;
    { s32 c_ = at != 0; a5 = (s32) ((u32) a5 + 0x240U); if (c_) goto L_00B6DC28; }
L_00B6DC58:;
    at = a3 < 3;
    if (at == 0) goto L_00B6DD0C;
    if (a1 == 0) goto L_00B6DD90;
    a4 = (s32) 0x590000U;
    a4 = (s32) ((u32) a4 + 0xffffe7f0U);
    a3 = (*(volatile u8 *) (u32) a4);
    at = a3 < 23;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_00B6DCB8; }
    v1 = 7;
L_00B6DC88:;
    a0 = (*(volatile s32 *) (u32) (a4 + 148));
    a0 = a0 & 0x4;
    if (a0 == 0) goto L_00B6DCA8;
    a0 = (*(volatile u16 *) (u32) (a4 + 24));
    if (a0 != v1) goto L_00B6DCA8;
    a1 = (s32) ((u32) a1 + 0x1U);
L_00B6DCA8:;
    a3 = (s32) ((u32) a3 + 0x1U);
    at = a3 < 23;
    { s32 c_ = at != 0; a4 = (s32) ((u32) a4 + 0x240U); if (c_) goto L_00B6DC88; }
L_00B6DCB8:;
    at = a1 < 3;
    if (at == 0) goto L_00B6DD90;
    v0 = (*(volatile u16 *) (u32) (a2 + 38));
    at = 0xa001;
    at = v0 < at;
    if (at == 0) goto L_00B6DD34;
    v0 = v0 < 24576;
    if (v0 != 0) goto L_00B6DD34;
    a0 = (*(volatile s32 *) (u32) (a2 + 4));
    a1 = 1062;
    a2 = 0; func_00209A00(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = 7;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0;
    v1 = (*(volatile s32 *) (u32) s1);
    (*(volatile u32 *) (u32) (v1 + 28)) = (u32) 0; goto L_00B6DD90;
L_00B6DD0C:;
    a0 = (*(volatile s32 *) (u32) (a2 + 4));
    a1 = 1161;
    a2 = 0; func_00209A00(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = 4;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0;
    v1 = (*(volatile s32 *) (u32) s1);
    (*(volatile u32 *) (u32) (v1 + 28)) = (u32) 0; goto L_00B6DD90;
L_00B6DD34:;
    a0 = (*(volatile s32 *) (u32) (a2 + 4));
    a1 = 900;
    a2 = 0; func_00209A00(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s1);
    a1 = 0x8000;
    v1 = 5;
    a0 = s1;
    (*(volatile u16 *) (u32) (v0 + 44)) = (u16) a1;
    v0 = (*(volatile s32 *) (u32) s1);
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) v1;
    a1 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile s32 *) (u32) s1);
    v1 = (*(volatile s32 *) (u32) (gp + -32420));
    a2 = (*(volatile u16 *) (u32) (a1 + 48));
    a1 = (*(volatile u16 *) (u32) (v0 + 44));
    v0 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (v0 + 12248));
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; func_00BA90E0(a0, a1, f12.f);
L_00B6DD90:;
    return;
}
