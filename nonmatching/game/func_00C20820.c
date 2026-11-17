/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Ball_SetByte0(s32);
void func_001A5670(f32);
void func_001AAF40(s32, s32);
void func_00209A00(s32, s32, s32);
void func_0027CB60(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002A96D0(s32, s32, s32, s32, f32);
void func_00B25220(void);
void func_00BF6240(s32);
s32 func_00BF6270(void);

void func_00C20820(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;

    v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00C20858; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00C20858:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001AAF40(a0, a1);
    s0 = (s32) 0x590000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffffe5b0U);
L_00C2088C:;
    s2 = (*(volatile u8 *) (u32) s0); v0 = func_00BF6270();
    if (s2 != v0) { a0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00C209C8; }
    a1 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 248));
    if (v0 != 0) goto L_00C20918;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u16 *) (u32) (a0 + 48));
    at = v0 < 1434;
    if (at == 0) goto L_00C20A60;
L_00C20900:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = 253;
    (*(volatile u8 *) (u32) (v1 + 80)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v0;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) 0;
L_00C20918:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001AAF40(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 23;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_00C2088C; }
    v0 = (s32) 0x44b20000U;
    v0 = v0 | 0xc000;
    f12.i = (s32) v0;
    func_001A5670(f12.f);
    func_00B25220();
    a0 = 1; Pes6Ball_SetByte0(a0);
    func_002A96D0(a0, a1, a2, a3, f12.f);
    a0 = 5; func_0027CB60(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00C20994; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00C20994:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a1 = (s32) ((u32) a0 << 6);
    v0 = 253;
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = 1;
    (*(volatile u8 *) (u32) (v1 + 22)) = (u8) v0;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) 0; func_00BF6240(a0);
    goto L_00C20A78;
L_00C209C8:;
    a1 = 447;
    a2 = 0; func_00209A00(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v0 + 80)) = (u8) 0;
    v0 = (*(volatile u8 *) (u32) s0);
    if (v0 == 0) goto L_00C20A50;
    a1 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v1 + 212));
    if (v0 == 0) goto L_00C20918;
    v0 = (*(volatile u8 *) (u32) (v1 + 248));
    if (v0 != 0) goto L_00C20918;
    v0 = 253;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v0;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) 0; goto L_00C20918;
L_00C20A50:;
    v0 = 224;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v0;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) 0; goto L_00C20918;
L_00C20A60:;
    a1 = 447;
    a2 = 0; func_00209A00(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v0 + 80)) = (u8) 0; goto L_00C20900;
L_00C20A78:;
    return;
}
