/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001AAF40(s32, s32);
void func_002BB820(s32, s32);
void func_002BB870(s32, s32);
void func_002BBF20(s32, s32, s32);
void func_002BC000(s32, s32, s32, s32, s32, f32, f32, f32);
void func_002BC2B0(void);
s32 func_002DCA30(void);
s32 func_009E1C90(s32);
s32 func_00BBB8C0(s32);
void func_00BBB960(s32);
void func_00BBBF40(s32, s32, s32, s32, s32);
s32 func_00BF6260(void);
s32 func_00BF6270(void);
s32 func_00BF6280(void);
s32 func_00BF62A0(s32);
void func_00C99300(s32, s32, s32);

void func_00C99460(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s32 hi = 0, lo = 0;

    v0 = func_00BF6280();
    v1 = 18;
    if (v0 == v1) goto L_00C994D4;
    v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { a1 = 1; goto L_00C994B8; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a1 = hi;
    a0 = (s32) ((u32) a1 << 3); goto L_00C994BC;
    a1 = 1;
L_00C994B8:;
    a0 = (s32) ((u32) a1 << 3);
L_00C994BC:;
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    s1 = (s32) ((u32) v1 + (u32) a0); goto L_00C99580;
L_00C994D4:;
    v0 = func_00BF62A0(a0);
    if (v0 == 0) goto L_00C99534;
    v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { a1 = 1; goto L_00C99518; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a1 = hi;
    a0 = (s32) ((u32) a1 << 3); goto L_00C9951C;
    a1 = 1;
L_00C99518:;
    a0 = (s32) ((u32) a1 << 3);
L_00C9951C:;
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    s1 = (s32) ((u32) v1 + (u32) a0); goto L_00C99580;
L_00C99534:;
    v0 = func_00BF6260();
    v1 = 255;
    if (v0 == v1) { a1 = 1; goto L_00C99568; }
    v0 = func_00BF6260();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a1 = hi;
    a0 = (s32) ((u32) a1 << 3); goto L_00C9956C;
    a1 = 1;
L_00C99568:;
    a0 = (s32) ((u32) a1 << 3);
L_00C9956C:;
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    s1 = (s32) ((u32) v1 + (u32) a0);
L_00C99580:;
    v1 = (s32) 0x590000U;
    s0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 10048));
    v1 = 1;
    { s32 c_ = a0 == v1; s0 = (s32) ((u32) s0 + 0xffffe7f0U); if (c_) goto L_00C9976C; }
    if (a0 == 0) goto L_00C995A8;
    goto L_00C99778;
L_00C995A8:;
    func_002BC2B0();
    a0 = (*(volatile u8 *) (u32) s1);
    a1 = 70; func_002BB870(a0, a1);
    v0 = func_00BF6280();
    v1 = 7;
    if (v0 == v1) { a0 = 3; goto L_00C9970C; }
    v1 = 6;
    if (v0 == v1) { a0 = 3; goto L_00C996B0; }
    v1 = 5;
    if (v0 == v1) { a0 = s1; goto L_00C9969C; }
    v1 = 18;
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) (s1 + 4)); goto L_00C99624; }
    v1 = 8;
    if (v0 == v1) goto L_00C99620;
    v1 = 4;
    if (v0 == v1) goto L_00C99620;
    v1 = 3;
    if (v0 == v1) goto L_00C99620;
    a0 = 1; goto L_00C99760;
L_00C99620:;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
L_00C99624:;
    v1 = (*(volatile u8 *) (u32) (v1 + 44));
    if (v1 == 0) goto L_00C99774;
    v1 = (*(volatile u8 *) (u32) s1);
    v1 = v1 < 23;
    if (v1 != 0) { s2 = 0; goto L_00C9964C; }
    goto L_00C99774;
    s2 = 0;
L_00C9964C:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001AAF40(a0, a1);
    v0 = (s32) ((u32) s2 + 0x1U);
    s2 = v0 & 0xff;
    v0 = s2 < 22;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_00C9964C; }
    a0 = (*(volatile u8 *) (u32) s1);
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7604)) = (u8) 0;
    a1 = 29; func_002BB820(a0, a1);
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0xffff91b0U); func_002BBF20(a0, a1, a2);
    goto L_00C9975C;
    a0 = s1;
L_00C9969C:;
    func_00C99300(a0, a1, a2);
    goto L_00C9975C;
    a0 = 3;
L_00C996B0:;
    v0 = func_009E1C90(a0);
    a0 = v0 & 0xff;
    v1 = 2;
    if (a0 != v1) goto L_00C99774;
    v0 = func_002DCA30();
    if (v0 == 0) { a0 = 2; goto L_00C996E8; }
    v0 = (s32) 0x8b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 5212)); func_00BBB960(a0);
    a0 = 2;
L_00C996E8:;
    v0 = func_00BBB8C0(a0);
    a0 = (*(volatile u8 *) (u32) s1);
    v0 = (s32) ((u32) v0 + 0x3U);
    a1 = v0 & 0xff; func_00BBBF40(a0, a1, a2, a3, a4);
    goto L_00C9975C;
    a0 = 3;
L_00C9970C:;
    v0 = func_009E1C90(a0);
    a0 = v0 & 0xff;
    v1 = 2;
    if (a0 != v1) goto L_00C99774;
    v0 = func_002DCA30();
    if (v0 == 0) { a0 = 2; goto L_00C99744; }
    v0 = (s32) 0x8b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 5212)); func_00BBB960(a0);
    a0 = 2;
L_00C99744:;
    v0 = func_00BBB8C0(a0);
    a0 = (*(volatile u8 *) (u32) s1);
    v0 = (s32) ((u32) v0 + 0x1U);
    a1 = v0 & 0xff; func_00BBBF40(a0, a1, a2, a3, a4);
L_00C9975C:;
    a0 = 1;
L_00C99760:;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 10048)) = (u8) a0; goto L_00C99774;
L_00C9976C:;
    func_002BC000(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f);
L_00C99774:;
L_00C99778:;
    return;
}
