/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
void func_00258720(void);
void func_00258CB0(void);
void func_0025E080(s32);
s32 func_0025E0E0(s32);
void func_0025EC20(s32);

void func_00258470(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;

    a0 = 3; v0 = func_0025E0E0(a0);
    if (v0 == 0) goto L_00258688;
    v1 = 5;
    if (v0 == v1) goto L_002585AC;
    v1 = 4;
    if (v0 == v1) goto L_00258594;
    a0 = 3;
    if (v0 == a0) goto L_00258584;
    v1 = 2;
    if (v0 == v1) goto L_00258574;
    v1 = 1;
    if (v0 == v1) goto L_002584CC;
    goto L_00258640;
L_002584CC:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12496));
    a6 = 0;
    a1 = (*(volatile u8 *) (u32) (v1 + -12484));
    v0 = (s32) 0x590000U;
    a3 = (*(volatile s32 *) (u32) (v0 + -12500));
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 << 2);
    v1 = (*(volatile s32 *) (u32) (v1 + -12492));
    a5 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -12486));
    at = 0 < v0;
    { s32 c_ = at == 0; a4 = (s32) ((u32) v1 + (u32) a1); if (c_) goto L_00258648; }
    v0 = (s32) 0x590000U;
L_00258510:;
    a2 = (*(volatile u8 *) (u32) a3);
    a6 = (s32) ((u32) a6 + 0x1U);
    a1 = (*(volatile u8 *) (u32) (a3 + 1));
    a0 = (*(volatile u8 *) (u32) (a3 + 2));
    v1 = (*(volatile u8 *) (u32) (a3 + 3));
    (*(volatile u8 *) (u32) a5) = (u8) a2;
    (*(volatile u8 *) (u32) (a5 + 1)) = (u8) a1;
    (*(volatile u8 *) (u32) (a5 + 2)) = (u8) a0;
    (*(volatile u8 *) (u32) (a5 + 3)) = (u8) v1;
    a2 = (*(volatile u8 *) (u32) a3);
    a5 = (s32) ((u32) a5 + 0x4U);
    a1 = (*(volatile u8 *) (u32) (a3 + 1));
    a0 = (*(volatile u8 *) (u32) (a3 + 2));
    v1 = (*(volatile u8 *) (u32) (a3 + 3));
    (*(volatile u8 *) (u32) a4) = (u8) a2;
    a3 = (s32) ((u32) a3 + 0x4U);
    (*(volatile u8 *) (u32) (a4 + 1)) = (u8) a1;
    (*(volatile u8 *) (u32) (a4 + 2)) = (u8) a0;
    (*(volatile u8 *) (u32) (a4 + 3)) = (u8) v1;
    v1 = (*(volatile u16 *) (u32) (v0 + -12486));
    v1 = a6 < v1;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x4U); if (c_) goto L_00258510; }
    a0 = 1; goto L_0025864C;
L_00258574:;
    func_0025E080(a0);
    goto L_00258640;
L_00258584:;
    func_00258CB0();
    goto L_00258640;
L_00258594:;
    func_00258720();
    a0 = 3; func_0025E080(a0);
    goto L_00258640;
L_002585AC:;
    v0 = (s32) 0x590000U;
    a5 = (*(volatile s32 *) (u32) (v0 + -12508));
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -12502));
    at = 0 < v0;
    { s32 c_ = at == 0; a6 = 0; if (c_) goto L_00258630; }
    v0 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a2 = (s32) 0x590000U;
L_002585DC:;
    a3 = (*(volatile s16 *) (u32) (a2 + -12504));
    at = 0 < a3;
    { s32 c_ = at == 0; a7 = 0; if (c_) goto L_00258618; }
L_002585F0:;
    a4 = (*(volatile u8 *) (u32) a5);
    a3 = (*(volatile u8 *) (u32) (a1 + -12483));
    if (a4 == a3) goto L_00258678;
L_00258600:;
    a3 = (*(volatile s16 *) (u32) (a0 + -12504));
    a7 = (s32) ((u32) a7 + 0x1U);
    a3 = a7 < a3;
    { s32 c_ = a3 != 0; a5 = (s32) ((u32) a5 + 0x1U); if (c_) goto L_002585F0; }
L_00258618:;
    a3 = (*(volatile s16 *) (u32) (v1 + -12502));
    a6 = (s32) ((u32) a6 + 0x1U);
    a3 = a6 < a3;
    if (a3 != 0) goto L_002585DC;
L_00258630:;
    a0 = 1; func_0025EC20(a0);
    a0 = 3; func_0025E080(a0);
L_00258640:;
    goto L_00258688;
L_00258648:;
    a0 = 1;
L_0025864C:;
    func_0025EC20(a0);
    a0 = 2; func_0025EC20(a0);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12500)); Pes6Heap_Free(a0);
    a0 = 3; func_0025E080(a0);
    goto L_00258640;
L_00258678:;
    a3 = (*(volatile u8 *) (u32) (v0 + -12482));
    (*(volatile u8 *) (u32) a5) = (u8) a3; goto L_00258600;
L_00258688:;
    return;
}
