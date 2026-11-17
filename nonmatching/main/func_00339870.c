/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00291BC0(s32, s32, s32, s32);
s32 func_00291FF0(s32, s32, s32, s32);
s32 func_00311330(s32, s32, s32, s32);

s32 func_00339870(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v0 = 1;
    s3 = a0;
    a0 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = a0 == v0; s2 = a1; if (c_) goto L_003398C0; }
    v0 = 3;
    if (a0 == v0) { v0 = 8; goto L_00339B20; }
    v0 = 2;
    if (a0 == v0) goto L_003398C0;
    v0 = 18;
    if (a0 != v0) { v1 = (*(volatile s32 *) (u32) (s3 + 20)); goto L_003398CC; }
L_003398C0:;
    v0 = 8;
    goto L_00339B20;
L_003398CC:;
    v0 = 5;
    if (v1 != v0) { v1 = s2 ^ 0x1; goto L_00339908; }
    v0 = (s32) ((u32) a0 + 0xfffffff5U);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_00339904;
    v0 = func_00311330(a0, a1, a2, a3);
    if (s2 != v0) { v0 = 8; goto L_003398FC; }
    v0 = 1;
L_003398FC:;
    goto L_00339B20;
L_00339904:;
    v1 = s2 ^ 0x1;
L_00339908:;
    v0 = (s32) ((u32) s2 << 1);
    v1 = (s32) ((u32) v1 << 1);
    s0 = (s32) ((u32) a2 + (u32) v0);
    s1 = (s32) ((u32) a2 + (u32) v1);
    a0 = s2;
    a2 = (*(volatile s16 *) (u32) s0);
    a3 = (*(volatile s16 *) (u32) s1);
    a1 = 4; v0 = func_00291FF0(a0, a1, a2, a3);
    if (v0 == 0) { a2 = (*(volatile s16 *) (u32) s0); goto L_0033999C; }
    v1 = (*(volatile s32 *) (u32) (s3 + 44));
    v0 = 26;
    if (v1 == v0) { v0 = 1; goto L_00339B20; }
    v0 = 24;
    if (v1 == v0) goto L_00339988;
    v0 = 22;
    if (v1 == v0) goto L_00339988;
    v0 = 20;
    if (v1 == v0) goto L_00339988;
    v0 = 18;
    if (v1 == v0) goto L_00339988;
    v0 = 15;
    if (v1 == v0) goto L_00339988;
    v0 = 2; goto L_00339994;
L_00339988:;
    v0 = 1;
    goto L_00339B20;
L_00339994:;
    goto L_00339B20;
L_0033999C:;
    a0 = s2;
    a3 = (*(volatile s16 *) (u32) s1);
    a1 = 1; v0 = func_00291FF0(a0, a1, a2, a3);
    if (v0 == 0) { a2 = (*(volatile s16 *) (u32) s0); goto L_003399D4; }
    v0 = (s32) 0x590000U;
    v1 = 14;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) goto L_003399D0;
    v0 = 2; goto L_00339B20;
L_003399D0:;
    a2 = (*(volatile s16 *) (u32) s0);
L_003399D4:;
    a0 = s2;
    a3 = (*(volatile s16 *) (u32) s1);
    a1 = 0; v0 = func_00291FF0(a0, a1, a2, a3);
    if (v0 == 0) { a2 = (*(volatile s16 *) (u32) s0); goto L_003399F4; }
    v0 = 1; goto L_00339B20;
L_003399F4:;
    a0 = s2;
    a3 = (*(volatile s16 *) (u32) s1);
    a1 = 5; v0 = func_00291FF0(a0, a1, a2, a3);
    if (v0 == 0) { a2 = (*(volatile s16 *) (u32) s0); goto L_00339A14; }
    v0 = 3; goto L_00339B20;
L_00339A14:;
    a0 = s2;
    a3 = (*(volatile s16 *) (u32) s1);
    a1 = 6; v0 = func_00291FF0(a0, a1, a2, a3);
    if (v0 == 0) { a2 = (*(volatile s16 *) (u32) s0); goto L_00339A34; }
    v0 = 5; goto L_00339B20;
L_00339A34:;
    a0 = s2;
    a3 = (*(volatile s16 *) (u32) s1);
    a1 = 6; v0 = func_00291BC0(a0, a1, a2, a3);
    if (v0 == 0) { a2 = (*(volatile s16 *) (u32) s0); goto L_00339A54; }
    v0 = 4; goto L_00339B20;
L_00339A54:;
    a0 = s2;
    a3 = (*(volatile s16 *) (u32) s1);
    a1 = 0; v0 = func_00291BC0(a0, a1, a2, a3);
    if (v0 == 0) { a2 = (*(volatile s16 *) (u32) s0); goto L_00339A74; }
    v0 = 7; goto L_00339B20;
L_00339A74:;
    a0 = s2;
    a3 = (*(volatile s16 *) (u32) s1);
    a1 = 4; v0 = func_00291BC0(a0, a1, a2, a3);
    if (v0 == 0) { a2 = (*(volatile s16 *) (u32) s0); goto L_00339A94; }
    v0 = 6; goto L_00339B20;
L_00339A94:;
    a0 = s2;
    a3 = (*(volatile s16 *) (u32) s1);
    a1 = 1; v0 = func_00291BC0(a0, a1, a2, a3);
    if (v0 == 0) { a2 = (*(volatile s16 *) (u32) s0); goto L_00339AE8; }
    v0 = (s32) 0x590000U;
    v1 = 14;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) goto L_00339AE4;
    a2 = (*(volatile s16 *) (u32) s0);
    a0 = s2;
    a3 = (*(volatile s16 *) (u32) s1);
    a1 = 3; v0 = func_00291BC0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00339AE4;
    v0 = 6; goto L_00339B20;
L_00339AE4:;
    a2 = (*(volatile s16 *) (u32) s0);
L_00339AE8:;
    a0 = s2;
    a3 = (*(volatile s16 *) (u32) s1);
    a1 = 4; v0 = func_00291BC0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 8; goto L_00339B20; }
    v0 = (s32) 0x590000U;
    v1 = 14;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) goto L_00339B1C;
    v0 = 6; goto L_00339B20;
L_00339B1C:;
    v0 = 8;
L_00339B20:;
    return v0;
}
