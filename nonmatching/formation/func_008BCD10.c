/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C84D0(s64, s64, s64);
void func_002C86A0(s64, s64, s64);
void func_002C89A0(s64, s64, s64, s64);
void func_002C8CD0(s64, s64, s64, s64);
void func_002C9100(s64, s64, s64);
s64 func_008BD0F0(s64, s64);
s64 func_008BD210(s64);
void func_008BD2E0(s64, s64);

void func_008BCD10(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    s0 = (s32) ((u32) s3 + 0x6U);
    { s32 c_ = s0 == 0; s1 = 0; if (c_) goto L_008BD0C4; }
    v1 = (*(volatile s8 *) (u32) (s0 + 5));
    v0 = (*(volatile s8 *) (u32) (s2 + 5));
    if (v1 != v0) { a0 = (s32) ((u32) s4 + 0x1U); goto L_008BCD68; }
    v1 = (*(volatile s8 *) (u32) (s0 + 7));
    v0 = (*(volatile s8 *) (u32) (s2 + 7));
    if (v1 == v0) { a1 = 5; goto L_008BCD7C; }
    a0 = (s32) ((u32) s4 + 0x1U);
L_008BCD68:;
    a1 = s4;
    a2 = s3; func_002C9100(a0, a1, a2);
    a0 = s4; goto L_008BCD88;
L_008BCD7C:;
    func_008BD2E0(a0, a1);
    a0 = s4;
L_008BCD88:;
    a1 = 6; func_008BD2E0(a0, a1);
    a0 = (*(volatile s8 *) (u32) (s0 + 8));
    v0 = 1;
    v1 = (*(volatile s8 *) (u32) (s0 + 6));
    v1 = (s32) ((u32) a0 + (u32) v1);
    if (v1 != v0) goto L_008BCE48;
    v0 = (*(volatile s8 *) (u32) (s0 + 11));
    if (v0 != 0) goto L_008BCE48;
    a6 = 0;
    a0 = 23;
    a1 = 16;
    a2 = 22;
    a3 = 15;
    a4 = 30;
    v1 = -15;
    a5 = 29;
    v0 = (s32) ((u32) s4 + (u32) a6);
L_008BCDD8:;
    v0 = (*(volatile u8 *) (u32) (v0 + 74));
    if (v0 == a5) goto L_008BCE28;
    if (v0 == a4) goto L_008BCE28;
    if (v0 == a3) goto L_008BCE20;
    if (v0 == a2) goto L_008BCE20;
    if (v0 == a1) goto L_008BCE18;
    if (v0 == a0) goto L_008BCE18;
    goto L_008BCE38;
L_008BCE18:;
    s1 = v1; goto L_008BCE38;
L_008BCE20:;
    s1 = a3; goto L_008BCE38;
L_008BCE28:;
    v0 = (*(volatile s8 *) (u32) (s0 + 10));
    if (v0 <= 0) goto L_008BCE38;
    s1 = 0;
L_008BCE38:;
    a6 = (s32) ((u32) a6 + 0x1U);
    v0 = a6 < 11;
    if (v0 != 0) { v0 = (s32) ((u32) s4 + (u32) a6); goto L_008BCDD8; }
L_008BCE48:;
    v1 = (*(volatile s8 *) (u32) (s0 + 5));
    v0 = (*(volatile s8 *) (u32) (s2 + 5));
    if (v1 != v0) { v0 = (*(volatile s8 *) (u32) (s0 + 9)); goto L_008BCE7C; }
    v1 = (*(volatile s8 *) (u32) (s0 + 7));
    v0 = (*(volatile s8 *) (u32) (s2 + 7));
    if (v1 != v0) goto L_008BCE78;
    v1 = (*(volatile s8 *) (u32) (s0 + 9));
    v0 = (*(volatile s8 *) (u32) (s2 + 9));
    if (v1 == v0) { a0 = s4; goto L_008BCEAC; }
L_008BCE78:;
    v0 = (*(volatile s8 *) (u32) (s0 + 9));
L_008BCE7C:;
    if (v0 != 0) { v0 = 0; goto L_008BCE8C; }
    v0 = (s64) ((u64) s1 << 56);
    v0 = v0 >> 56;
L_008BCE8C:;
    a3 = (s64) ((u64) v0 << 56);
    a0 = (s32) ((u32) s4 + 0x1U);
    a3 = a3 >> 56;
    a1 = s4;
    a2 = s3; func_002C8CD0(a0, a1, a2, a3);
    a0 = s4; goto L_008BCEB8;
L_008BCEAC:;
    a1 = 7; func_008BD2E0(a0, a1);
    a0 = s4;
L_008BCEB8:;
    a1 = 8; func_008BD2E0(a0, a1);
    v1 = (*(volatile s8 *) (u32) (s0 + 9));
    v0 = (*(volatile s8 *) (u32) (s2 + 9));
    if (v1 != v0) { v0 = (s64) ((u64) s1 << 56); goto L_008BCEF4; }
    v1 = (*(volatile s8 *) (u32) (s0 + 7));
    v0 = (*(volatile s8 *) (u32) (s2 + 7));
    if (v1 != v0) goto L_008BCEF0;
    v1 = (*(volatile s8 *) (u32) (s0 + 11));
    v0 = (*(volatile s8 *) (u32) (s2 + 11));
    if (v1 == v0) { a0 = s4; goto L_008BCFA4; }
L_008BCEF0:;
    v0 = (s64) ((u64) s1 << 56);
L_008BCEF4:;
    v0 = v0 >> 56;
    if (v0 != 0) goto L_008BCF88;
    a0 = (*(volatile s8 *) (u32) (s0 + 8));
    v1 = 1;
    v0 = (*(volatile s8 *) (u32) (s0 + 6));
    v0 = (s32) ((u32) a0 + (u32) v0);
    if (v0 == v1) goto L_008BCF88;
    v0 = (*(volatile s8 *) (u32) (s0 + 11));
    if (v0 != 0) goto L_008BCF88;
    v0 = (*(volatile s8 *) (u32) (s0 + 10));
    if (v0 != v1) goto L_008BCF88;
    a3 = 0;
    a1 = 30;
    v1 = 16;
    a0 = -16;
    a2 = 29;
    v0 = (s32) ((u32) s4 + (u32) a3);
L_008BCF48:;
    v0 = (*(volatile u8 *) (u32) (v0 + 74));
    if (v0 == a2) goto L_008BCF70;
    if (v0 == a1) goto L_008BCF68;
    goto L_008BCF78;
L_008BCF68:;
    s1 = a0; goto L_008BCF78;
L_008BCF70:;
    s1 = v1;
L_008BCF78:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < 11;
    if (v0 != 0) { v0 = (s32) ((u32) s4 + (u32) a3); goto L_008BCF48; }
L_008BCF88:;
    a3 = s1;
    a0 = (s32) ((u32) s4 + 0x1U);
    a1 = s4;
    a2 = s3; func_002C89A0(a0, a1, a2, a3);
    v0 = (*(volatile s8 *) (u32) (s0 + 10)); goto L_008BCFB0;
L_008BCFA4:;
    a1 = 9; func_008BD2E0(a0, a1);
    v0 = (*(volatile s8 *) (u32) (s0 + 10));
L_008BCFB0:;
    if (v0 <= 0) { v0 = 38; goto L_008BCFC8; }
    a0 = s4;
    a1 = 10; func_008BD2E0(a0, a1);
    v0 = 38;
L_008BCFC8:;
    (*(volatile u8 *) (u32) (s3 + 5)) = (u8) v0;
    v1 = (*(volatile s8 *) (u32) (s0 + 11));
    v0 = (*(volatile s8 *) (u32) (s2 + 11));
    if (v1 != v0) { v0 = (*(volatile s8 *) (u32) (s0 + 11)); goto L_008BCFF4; }
    a0 = s4;
    a1 = 11; v0 = func_008BD0F0(a0, a1);
    if (v0 == 0) { a0 = s4; goto L_008BD05C; }
    v0 = (*(volatile s8 *) (u32) (s0 + 11));
L_008BCFF4:;
    if (v0 <= 0) { v1 = (*(volatile s8 *) (u32) (s0 + 12)); goto L_008BD068; }
    v0 = (*(volatile s8 *) (u32) (s0 + 12));
    at = v0 < 2;
    if (at != 0) { v0 = 31; goto L_008BD018; }
    v0 = 33;
    (*(volatile u8 *) (u32) (s3 + 3)) = (u8) v0; goto L_008BD01C;
L_008BD018:;
    (*(volatile u8 *) (u32) (s3 + 3)) = (u8) v0;
L_008BD01C:;
    a0 = (*(volatile s8 *) (u32) (s0 + 8));
    v0 = 1;
    v1 = (*(volatile s8 *) (u32) (s0 + 6));
    v1 = (s32) ((u32) a0 + (u32) v1);
    if (v1 != v0) { a0 = (s32) ((u32) s4 + 0x1U); goto L_008BD044; }
    a0 = s4; v0 = func_008BD210(a0);
    (*(volatile u8 *) (u32) (s3 + 3)) = (u8) v0;
    a0 = (s32) ((u32) s4 + 0x1U);
L_008BD044:;
    a1 = s4;
    a2 = s3; func_002C86A0(a0, a1, a2);
    v0 = 40;
    (*(volatile u8 *) (u32) (s3 + 5)) = (u8) v0; goto L_008BD064;
L_008BD05C:;
    a1 = 11; func_008BD2E0(a0, a1);
L_008BD064:;
    v1 = (*(volatile s8 *) (u32) (s0 + 12));
L_008BD068:;
    v0 = (*(volatile s8 *) (u32) (s2 + 12));
    if (v1 != v0) { a2 = s3; goto L_008BD0A8; }
    v0 = (*(volatile s8 *) (u32) (s0 + 10));
    if (v0 != 0) { a0 = s4; goto L_008BD094; }
    v1 = (*(volatile s8 *) (u32) (s0 + 11));
    v0 = (*(volatile s8 *) (u32) (s2 + 11));
    if (v1 != v0) goto L_008BD0A4;
    a0 = s4;
L_008BD094:;
    a1 = 12; v0 = func_008BD0F0(a0, a1);
    if (v0 == 0) { a0 = s4; goto L_008BD0BC; }
L_008BD0A4:;
    a2 = s3;
L_008BD0A8:;
    a0 = (s32) ((u32) s4 + 0x1U);
    a1 = s4; func_002C84D0(a0, a1, a2);
    goto L_008BD0C8;
L_008BD0BC:;
    a1 = 12; func_008BD2E0(a0, a1);
L_008BD0C4:;
L_008BD0C8:;
    return;
}
