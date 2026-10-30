/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
extern int Pes6BitSet_Lookup(void *, int);
s32 func_0030D710(u8, u8);                          /* extern */

s32 func_0036A5D0(void *arg0, void *arg1) {
    s16 temp_s0;
    s16 temp_s6;
    s32 temp_s1;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_s5_3;
    s32 temp_s5_4;
    s32 temp_s5_5;
    s32 temp_s5_6;
    s32 temp_s5_7;
    s32 temp_s5_8;
    s32 temp_s5_9;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_v1;
    s64 temp_s0_2;
    s64 temp_s1_2;
    void *temp_s2;

    temp_s2 = arg1 + 0x18;
    temp_s1 = M2C_FIELD(arg1, s32 *, 0x3C);
    temp_s0 = M2C_FIELD(arg1, s16 *, 0x40);
    temp_s6 = M2C_FIELD(arg1, s16 *, 0x42);
    temp_s5 = M2C_FIELD(arg1, s32 *, 0x2C) == 3;
    Pes6BitSet_Write(arg0, 0x3B, (M2C_FIELD(arg1, s32 *, 0x44) & 1) == 0);
    Pes6BitSet_Write(arg0, 0x3D, temp_s5);
    Pes6BitSet_Write(arg0, 0x3E, temp_s5 & (M2C_FIELD(temp_s2, s32 *, 0x2C) & 0x10));
    Pes6BitSet_Write(arg0, 0x3F, M2C_FIELD(temp_s2, s32 *, 0x2C) & 2);
    Pes6BitSet_Write(arg0, 0x40, M2C_FIELD(temp_s2, s32 *, 0x14) == 1);
    Pes6BitSet_Write(arg0, 0x41, M2C_FIELD(temp_s2, s32 *, 0x2C) & 8);
    Pes6BitSet_Write(arg0, 0x43, M2C_FIELD(temp_s2, s32 *, 0x2C) & 0x400);
    Pes6BitSet_Write(arg0, 0x44, M2C_FIELD(temp_s2, s32 *, 0x2C) & 0x800);
    temp_s5_2 = Pes6BitSet_Lookup(arg0, 0x43);
    Pes6BitSet_Write(arg0, 0x42, ((u32) (M2C_FIELD(temp_s2, s32 *, 0x20) - 2) < 3U) & (M2C_FIELD(temp_s2, u8 *, 0x1A) & (((s32) M2C_FIELD(temp_s2, u8 *, 6) >= 0x50) & (temp_s5_2 | Pes6BitSet_Lookup(arg0, 0x44)))));
    Pes6BitSet_Write(arg0, 0x46, M2C_FIELD(temp_s2, s32 *, 0x2C) & 0x20);
    Pes6BitSet_Write(arg0, 0x47, M2C_FIELD(temp_s2, s32 *, 0x2C) & 0x80);
    Pes6BitSet_Write(arg0, 0x48, M2C_FIELD(temp_s2, s32 *, 0x2C) & 0x100);
    temp_s5_3 = Pes6BitSet_Lookup(arg0, 0x46);
    temp_s5_4 = temp_s5_3 | Pes6BitSet_Lookup(arg0, 0x47);
    Pes6BitSet_Write(arg0, 0x45, Pes6BitSet_Lookup(arg0, 0x48) | temp_s5_4);
    Pes6BitSet_Write(arg0, 0x4A, temp_s1 == 1);
    Pes6BitSet_Write(arg0, 0x4B, temp_s1 == 2);
    Pes6BitSet_Write(arg0, 0x4C, temp_s1 == 4);
    Pes6BitSet_Write(arg0, 0x4D, M2C_FIELD(temp_s2, s32 *, 0x2C) & 0x400);
    Pes6BitSet_Write(arg0, 0x4E, M2C_FIELD(temp_s2, s32 *, 0x2C) & 0x800);
    Pes6BitSet_Write(arg0, 0x4F, temp_s1 == 3);
    temp_s5_5 = Pes6BitSet_Lookup(arg0, 0x4A);
    temp_s5_6 = temp_s5_5 | Pes6BitSet_Lookup(arg0, 0x4B);
    temp_s5_7 = Pes6BitSet_Lookup(arg0, 0x4C) | temp_s5_6;
    temp_s5_8 = Pes6BitSet_Lookup(arg0, 0x4D) | temp_s5_7;
    temp_s5_9 = Pes6BitSet_Lookup(arg0, 0x4E) | temp_s5_8;
    Pes6BitSet_Write(arg0, 0x49, Pes6BitSet_Lookup(arg0, 0x4F) | temp_s5_9);
    Pes6BitSet_Write(arg0, 0x51, func_0030D710(M2C_FIELD(temp_s2, u8 *, 0x18), M2C_FIELD(temp_s2, u8 *, 0x19)));
    Pes6BitSet_Write(arg0, 0x52, temp_s1 == 8);
    Pes6BitSet_Write(arg0, 0x53, M2C_FIELD(arg1, u8 *, 2) == 2);
    var_a2 = M2C_FIELD(temp_s2, s32 *, 0x20) == 4;
    if (var_a2 != 0) {
        var_a2 = (M2C_FIELD(temp_s2, s32 *, 0x2C) & 0x1000) != 0;
    }
    Pes6BitSet_Write(arg0, 0x55, var_a2);
    Pes6BitSet_Write(arg0, 0x56, M2C_FIELD(temp_s2, s32 *, 0x20) == 4);
    Pes6BitSet_Write(arg0, 0x57, M2C_FIELD(temp_s2, s32 *, 0x20) == 7);
    temp_s1_2 = (s64) ((s64) temp_s6 << 0x30) >> 0x30;
    temp_s0_2 = (s64) ((s64) temp_s0 << 0x30) >> 0x30;
    Pes6BitSet_Write(arg0, 0x58, (temp_s0_2 + temp_s1_2) == 0);
    var_a2_2 = 0;
    if (M2C_FIELD(temp_s2, s32 *, 0x20) == 2) {
        var_v1 = temp_s0_2 - temp_s1_2;
        if (var_v1 <= 0) {
            var_v1 = -var_v1;
        }
        if (var_v1 == 1) {
            var_a2_2 = 1;
        }
    }
    Pes6BitSet_Write(arg0, 0x59, var_a2_2);
    Pes6BitSet_Write(arg0, 0x5A, 0);
    return 1;
}
