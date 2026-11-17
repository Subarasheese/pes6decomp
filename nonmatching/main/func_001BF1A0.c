/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001520F0(void);
s64 func_001BF560(void);
s64 func_001CDAA0(void);
void func_001D6E40(s64, s64, s64, s64);
void func_001D76B0(s64, s64);
void func_001D7D60(s64, s64);
void func_001D7F10(s64, s64, s64, s64);
s64 func_001E6E10(s64);
void func_001EDA30(s64, s64);
void func_001EDAE0(s64, s64);
void func_001EDD90(s64, s64, s64, s64);
void func_001EEAC0(s64, s64);
void func_00342B60(s64, s64, s64, s64);
void func_00342BD0(s64, s64, s64, s64);
void func_00342C40(s64, s64, s64, s64);
void func_00342CD0(s64, s64, s64, s64);
s64 func_0035A410(s64, s64, s64, s64, s64, s64, s64);
void memset(s64, s64, s64);

void func_001BF1A0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s4 = a0;
    s3 = a1;
    s2 = (s32) ((u32) s4 + 0x64U);
    s1 = (*(volatile u8 *) (u32) (a0 + 128));
    s0 = (s32) ((u32) s4 + 0x80U); v0 = func_001520F0();
    if (v0 != 0) { a0 = (*(volatile u8 *) (u32) (s4 + 136)); goto L_001BF1F8; }
    a0 = (*(volatile u8 *) (u32) (s4 + 136));
    v0 = -3;
    v1 = (s64) ((u64) 0 + (u64) (s64) 2);
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s4 + 136)) = (u8) v0;
    a0 = (*(volatile u8 *) (u32) (s4 + 136));
L_001BF1F8:;
    v0 = (s64) ((u64) a0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) s3); goto L_001BF2C4; }
    v0 = -2;
    v1 = 0 & 0x1;
    v0 = a0 & v0;
    v0 = v0 | v1;
    a0 = (s32) ((u32) v1 << 1);
    (*(volatile u8 *) (u32) (s4 + 136)) = (u8) v0;
    v1 = -3;
    a1 = (*(volatile u8 *) (u32) (s4 + 136));
    v0 = 6;
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (s4 + 136)) = (u8) v1;
    (*(volatile u32 *) (u32) (s4 + 124)) = (u32) 0;
    (*(volatile u32 *) (u32) (s4 + 36)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s4 + 52));
    if (v0 == 0) { (*(volatile u32 *) (u32) s3) = (u32) 0; goto L_001BF2BC; }
    a0 = (*(volatile s32 *) (u32) (s4 + 68));
    if (a0 == 0) { s1 = 0; goto L_001BF268; }
    func_001D6E40(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s4 + 68)) = (u32) 0;
    s1 = 0;
L_001BF268:;
    s0 = s4;
L_001BF26C:;
    a0 = (*(volatile s32 *) (u32) (s0 + 52)); func_001D7F10(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    s0 = (s32) ((u32) s0 + 0x4U);
    v0 = (u64) s1 < (u64) (s64) 4;
    if (v0 != 0) goto L_001BF26C;
    v0 = -1;
    a0 = (s32) ((u32) s4 + 0x34U);
    (*(volatile u32 *) (u32) (s4 + 48)) = (u32) v0;
    a1 = 0;
    a2 = 16; memset(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s4 + 92));
    if (a0 == 0) goto L_001BF2B8;
    func_001EDD90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s4 + 92)) = (u32) 0;
L_001BF2B8:;
    (*(volatile u32 *) (u32) s3) = (u32) 0;
L_001BF2BC:;
    v0 = 1; goto L_001BF540;
L_001BF2C4:;
    at = (u64) a0 < (u64) (s64) 7;
    if (at == 0) { v0 = 1; goto L_001BF540; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0x1910U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x1bf2ecU) goto L_001BF2EC; if (t_ == 0x1bf30cU) goto L_001BF30C; if (t_ == 0x1bf338U) goto L_001BF338; if (t_ == 0x1bf3b8U) goto L_001BF3B8; if (t_ == 0x1bf43cU) goto L_001BF43C; if (t_ == 0x1bf4a4U) goto L_001BF4A4; if (t_ == 0x1bf504U) goto L_001BF504; }
L_001BF2EC:;
    v0 = (*(volatile u8 *) (u32) s0);
    if (v0 <= 0) { v0 = (s32) ((u32) a0 + 0x2U); goto L_001BF304; }
    v0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) s3) = (u32) v0; goto L_001BF53C;
L_001BF304:;
    (*(volatile u32 *) (u32) s3) = (u32) v0; goto L_001BF53C;
L_001BF30C:;
    v0 = (*(volatile u8 *) (u32) s0);
    if (v0 == 0) { v0 = (s32) ((u32) a0 + 0x2U); goto L_001BF330; }
    a0 = v0 & 0xff; func_00342BD0(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) v0 + 0xfffffffbU);
    (*(volatile u8 *) (u32) s0) = (u8) v0; goto L_001BF53C;
L_001BF330:;
    (*(volatile u32 *) (u32) s3) = (u32) v0; goto L_001BF53C;
L_001BF338:;
    v0 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) v0 + 0x5U);
    (*(volatile u8 *) (u32) s0) = (u8) v0;
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = 1; func_001EDA30(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s4 + 8)); v0 = func_001E6E10(a0);
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    a1 = v0; func_001EEAC0(a0, a1);
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = 1; func_001EDAE0(a0, a1);
    v0 = 255;
    (*(volatile u32 *) (u32) (s2 + 12)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s4 + 8));
    (*(volatile u32 *) (u32) (s4 + 4)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s4 + 60));
    a1 = 1; func_001D7D60(a0, a1);
    a1 = (*(volatile u8 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (s4 + 60)); func_001D76B0(a0, a1);
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = 255;
    if (v1 != v0) goto L_001BF53C;
    v0 = (*(volatile s32 *) (u32) s3);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) s3) = (u32) v0; goto L_001BF53C;
L_001BF3B8:;
    a1 = (*(volatile u8 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (s4 + 56)); func_001D76B0(a0, a1);
    v0 = (*(volatile u8 *) (u32) s0);
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s4 + 56)); goto L_001BF3DC; }
    v0 = (s32) ((u32) v0 + 0xfffffffbU);
    (*(volatile u8 *) (u32) s0) = (u8) v0; goto L_001BF53C;
L_001BF3DC:;
    a1 = 0; func_001D7D60(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s4 + 88));
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) s3); goto L_001BF430; }
    v0 = func_0035A410(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) goto L_001BF53C;
    v0 = func_001BF560();
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_00342CD0(a0, a1, a2, a3);
    func_00342C40(a0, a1, a2, a3);
    a0 = 0; func_00342BD0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) s0) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) s3);
L_001BF430:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) s3) = (u32) v0; goto L_001BF53C;
L_001BF43C:;
    v0 = (*(volatile s32 *) (u32) (s4 + 88));
    if (v0 == 0) { v1 = s1 & 0xff; goto L_001BF464; }
    func_00342C40(a0, a1, a2, a3);
    func_00342C40(a0, a1, a2, a3);
    func_00342C40(a0, a1, a2, a3);
    v1 = s1 & 0xff;
L_001BF464:;
    v0 = 255;
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) s0); goto L_001BF498; }
    v0 = (*(volatile s32 *) (u32) (s4 + 88));
    if (v0 == 0) { (*(volatile u8 *) (u32) s0) = (u8) 0; goto L_001BF488; }
    a0 = 0; func_00342BD0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) s0) = (u8) 0;
L_001BF488:;
    v0 = (*(volatile s32 *) (u32) s3);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) s3) = (u32) v0; goto L_001BF53C;
L_001BF498:;
    v0 = (s32) ((u32) v0 + 0x5U);
    (*(volatile u8 *) (u32) s0) = (u8) v0; goto L_001BF53C;
L_001BF4A4:;
    v0 = (*(volatile s32 *) (u32) (s4 + 88));
    if (v0 == 0) { a0 = s1 & 0xff; goto L_001BF4BC; }
    func_00342C40(a0, a1, a2, a3);
    a0 = s1 & 0xff;
L_001BF4BC:;
    v0 = 255;
    if (a0 != v0) { v0 = (*(volatile u8 *) (u32) s0); goto L_001BF4D8; }
    v0 = (*(volatile s32 *) (u32) s3);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) s3) = (u32) v0; goto L_001BF53C;
L_001BF4D8:;
    v0 = (s32) ((u32) v0 + 0x5U);
    (*(volatile u8 *) (u32) s0) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s4 + 88));
    if (v0 == 0) goto L_001BF53C;
    func_00342BD0(a0, a1, a2, a3);
    func_00342B60(a0, a1, a2, a3);
    goto L_001BF53C;
L_001BF504:;
    v0 = func_001CDAA0();
    a0 = (s32) 0x3c0000U;
    v1 = 4;
    a0 = (s32) ((u32) a0 + 0x54c0U);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 - (u32) a0);
    (*(volatile u32 *) (u32) (s4 + 20)) = (u32) v0;
    (*(volatile u32 *) (u32) (s4 + 36)) = (u32) v1;
    v0 = (*(volatile s8 *) (u32) (s4 + 24));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s4 + 24)) = (u8) v0;
L_001BF53C:;
    v0 = 1;
L_001BF540:;
    return;
}
