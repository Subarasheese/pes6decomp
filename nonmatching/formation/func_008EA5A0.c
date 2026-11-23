/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008B2D70(s64, s64, s64, s64);
void func_008B2DB0(s64, s64, s64, s64, s64, s64, s64, s64, f32);
void func_008B3050(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32);
s64 func_008B4920(void);
void func_008B6E60(s64, s64, s64, s64);
void func_008B6EB0(s64, s64);
s64 func_008B93A0(void);
s64 func_008B9660(void);
s64 func_008BC3B0(void);
void func_008C9DB0(s64, s64, f32, f32);
void func_008D31A0(s64, s64, s64);
void func_008D3980(s64, s64, s64, s64);
s64 func_008D3B00(s64, s64, s64, s64);
void func_008E5110(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008EA4C0(s64, s64, s64, s64, f32, f32);
void func_008EACC0(s64, s64);
void func_008EB3B0(s64, s64, s64);

s64 func_008EA5A0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 2;
    s2 = a0;
    if (a1 == v0) goto L_008EAA30;
    v0 = 1;
    if (a1 == v0) { a1 = (*(volatile u8 *) (u32) (s2 + 25)); goto L_008EA744; }
    if (a1 == 0) { a0 = (s32) ((u32) s2 + 0xb0cU); goto L_008EA5DC; }
    v0 = 0; goto L_008EAA3C;
L_008EA5DC:;
    a1 = 5; func_008C9DB0(a0, a1, f12.f, f13.f);
    a1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) s2 + 0x1ca8U);
    a1 = (s32) ((u32) a1 + 0xffffe100U);
    a2 = 10; func_008D3980(a0, a1, a2, a3);
    a0 = s2; func_008B6E60(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x129cU);
    a1 = 1; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s2; func_008B2DB0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    v0 = func_008BC3B0();
    if (v0 == 0) goto L_008EA640;
    v0 = (*(volatile u8 *) (u32) s2);
    if (v0 == 0) goto L_008EA640;
    a0 = (s32) ((u32) s2 + 0x1ca8U);
    a1 = 7;
    a2 = 0; func_008D31A0(a0, a1, a2);
L_008EA640:;
    v0 = func_008B93A0();
    if (v0 != 0) goto L_008EA660;
    a0 = (s32) ((u32) s2 + 0x1ca8U);
    a1 = 5;
    a2 = 0; func_008D31A0(a0, a1, a2);
L_008EA660:;
    v0 = func_008BC3B0();
    if (v0 != 0) { a0 = (s32) ((u32) s2 + 0x1ca8U); goto L_008EA6A0; }
    v0 = func_008B9660();
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 8;
    if (v1 == v0) goto L_008EA69C;
    v0 = func_008B4920();
    if (v0 == 0) { s0 = (*(volatile u8 *) (u32) (s2 + 7337)); goto L_008EA6B0; }
L_008EA69C:;
    a0 = (s32) ((u32) s2 + 0x1ca8U);
L_008EA6A0:;
    a1 = 8;
    a2 = 0; func_008D31A0(a0, a1, a2);
    s0 = (*(volatile u8 *) (u32) (s2 + 7337));
L_008EA6B0:;
    a0 = s2;
    a1 = s0; func_008EA4C0(a0, a1, a2, a3, f12.f, f13.f);
    v1 = s0 & 0xff;
    v0 = 8;
    if (v1 == v0) { a0 = (s32) ((u32) s2 + 0x24c4U); goto L_008EA724; }
    a1 = 4;
    if (v1 == a1) { a0 = (s32) ((u32) s2 + 0x24c4U); goto L_008EA714; }
    v0 = 3;
    if (v1 == v0) { a0 = (s32) ((u32) s2 + 0x24c4U); goto L_008EA704; }
    if (v1 == 0) { a0 = (s32) ((u32) s2 + 0x24c4U); goto L_008EA6F4; }
    a0 = (s32) ((u32) s2 + 0x24c4U); goto L_008EA734;
L_008EA6F4:;
    a1 = 0; func_008EACC0(a0, a1);
    goto L_008EAA38;
L_008EA704:;
    a1 = 1; func_008EACC0(a0, a1);
    goto L_008EAA38;
L_008EA714:;
    a1 = 2; func_008EACC0(a0, a1);
    goto L_008EAA38;
L_008EA724:;
    a1 = 3; func_008EACC0(a0, a1);
    goto L_008EAA38;
L_008EA734:;
    func_008EACC0(a0, a1);
    goto L_008EAA38;
L_008EA744:;
    s0 = (*(volatile u8 *) (u32) (s2 + 2374));
    a0 = (s32) ((u32) s2 + 0x1ca8U); v0 = func_008D3B00(a0, a1, a2, a3);
    v1 = 3;
    if (v0 == v1) { s1 = (*(volatile u8 *) (u32) (s2 + 7337)); goto L_008EA8E8; }
    v1 = 2;
    if (v0 == v1) { s0 = (*(volatile u8 *) (u32) (s2 + 7337)); goto L_008EA7C8; }
    a0 = 1;
    if (v0 == a0) { (*(volatile u8 *) (u32) (s2 + 2374)) = (u8) 0; goto L_008EA77C; }
    goto L_008EAA38;
L_008EA77C:;
    v0 = s0 & 0xff;
    v1 = (*(volatile u8 *) (u32) (s2 + 2374));
    if (v0 == v1) { v0 = 39; goto L_008EAA3C; }
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 2525));
    if (v0 != a0) goto L_008EA7BC;
    a0 = s2;
    a1 = (s32) ((u32) s2 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
L_008EA7BC:;
    v0 = 39;
    goto L_008EAA3C;
L_008EA7C8:;
    a0 = s2;
    a1 = s0; func_008B6EB0(a0, a1);
    a0 = s0 & 0xff;
    at = (u64) a0 < (u64) (s64) 9;
    if (at == 0) goto L_008EAA38;
    v1 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffe120U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8ea800U) goto L_008EA800; if (t_ == 0x8ea808U) goto L_008EA808; if (t_ == 0x8ea810U) goto L_008EA810; if (t_ == 0x8ea818U) goto L_008EA818; if (t_ == 0x8ea820U) goto L_008EA820; if (t_ == 0x8ea840U) goto L_008EA840; if (t_ == 0x8ea848U) goto L_008EA848; if (t_ == 0x8ea850U) goto L_008EA850; }
L_008EA800:;
    v0 = 10; goto L_008EAA3C;
L_008EA808:;
    v0 = 8; goto L_008EAA3C;
L_008EA810:;
    v0 = 9; goto L_008EAA3C;
L_008EA818:;
    v0 = 11; goto L_008EAA3C;
L_008EA820:;
    v1 = (*(volatile u8 *) (u32) (s2 + 2388));
    v0 = 1;
    if (v1 == v0) { v0 = 23; goto L_008EAA3C; }
    if (v1 == 0) { v0 = 22; goto L_008EAA3C; }
    v0 = 24; goto L_008EAA3C;
L_008EA840:;
    v0 = 25; goto L_008EAA3C;
L_008EA848:;
    v0 = 13; goto L_008EAA3C;
L_008EA850:;
    v0 = 1;
    if (a0 != v0) { v0 = 2; goto L_008EA85C; }
L_008EA85C:;
    a5 = v0 & 0xff;
    v0 = (s32) ((u32) a5 << 2);
    v0 = (s32) ((u32) v0 + (u32) a5);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a5);
    a4 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) a4 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v1 + 2525));
    if (v0 != 0) { (*(volatile u8 *) (u32) (s2 + 2374)) = (u8) a5; goto L_008EA8D4; }
    a3 = (s32) ((u32) v1 + 0x9ddU);
    a2 = (s32) ((u32) s2 + 0x9ddU);
    a0 = 41;
    a1 = a3;
L_008EA894:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    a2 = (s32) ((u32) a2 + 0x2U);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_008EA894; }
    v0 = 1;
    v1 = (s32) ((u32) a4 + (u32) s2);
    (*(volatile u8 *) (u32) a3) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 2602));
    (*(volatile u8 *) (u32) (v1 + 2602)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 2604));
    (*(volatile u8 *) (u32) (v1 + 2604)) = (u8) v0;
    (*(volatile u8 *) (u32) (s2 + 2374)) = (u8) a5;
L_008EA8D4:;
    a0 = s2;
    a1 = (s32) ((u32) s2 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    v0 = 30; goto L_008EAA3C;
L_008EA8E8:;
    v0 = 2;
    if (s1 == v0) { (*(volatile u8 *) (u32) (s2 + 2374)) = (u8) v0; goto L_008EA904; }
    v0 = 1;
    if (s1 == v0) { (*(volatile u8 *) (u32) (s2 + 2374)) = (u8) v0; goto L_008EA904; }
    (*(volatile u8 *) (u32) (s2 + 2374)) = (u8) 0;
L_008EA904:;
    v0 = 8;
    if (s1 == v0) { a0 = (s32) ((u32) s2 + 0x24c4U); goto L_008EA968; }
    a1 = 4;
    if (s1 == a1) { a0 = (s32) ((u32) s2 + 0x24c4U); goto L_008EA958; }
    v0 = 3;
    if (s1 == v0) { a0 = (s32) ((u32) s2 + 0x24c4U); goto L_008EA948; }
    if (s1 == 0) { a0 = (s32) ((u32) s2 + 0x24c4U); goto L_008EA938; }
    a0 = (s32) ((u32) s2 + 0x24c4U); goto L_008EA978;
L_008EA938:;
    a1 = 0; func_008EACC0(a0, a1);
    a0 = (*(volatile u8 *) (u32) (s2 + 2374)); goto L_008EA984;
L_008EA948:;
    a1 = 1; func_008EACC0(a0, a1);
    goto L_008EA980;
L_008EA958:;
    a1 = 2; func_008EACC0(a0, a1);
    goto L_008EA980;
L_008EA968:;
    a1 = 3; func_008EACC0(a0, a1);
    goto L_008EA980;
L_008EA978:;
    func_008EACC0(a0, a1);
L_008EA980:;
    a0 = (*(volatile u8 *) (u32) (s2 + 2374));
L_008EA984:;
    v0 = s0 & 0xff;
    if (v0 == a0) { a0 = s2; goto L_008EAA20; }
    v1 = (s32) ((u32) a0 << 2);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile u8 *) (u32) (v1 + 2525));
    if (v1 != v0) goto L_008EAA1C;
    a0 = s2;
    a1 = (s32) ((u32) s2 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    v1 = (*(volatile u8 *) (u32) (s2 + 2374));
    a0 = (s32) ((u32) s2 + 0x24c4U);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    a2 = (*(volatile u8 *) (u32) (v0 + 2602));
    a1 = 0; func_008EB3B0(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s2 + 2374));
    a0 = (s32) ((u32) s2 + 0x24c4U);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    a2 = (*(volatile u8 *) (u32) (v0 + 2604));
    a1 = 1; func_008EB3B0(a0, a1, a2);
L_008EAA1C:;
    a0 = s2;
L_008EAA20:;
    a1 = s1; func_008EA4C0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_008EAA38;
L_008EAA30:;
    func_008B2D70(a0, a1, a2, a3);
L_008EAA38:;
    v0 = 0;
L_008EAA3C:;
    return v0;
}
