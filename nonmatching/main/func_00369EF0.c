/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
extern int Pes6BitSet_Lookup(void *, int);
s32 func_00369EF0(void *arg0, void *arg1) {
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 var_a2;
    void *temp_s0;

    temp_s0 = arg1 + 0x18;
    Pes6BitSet_Write(arg0, 0x97, M2C_FIELD(arg1, s32 *, 0x4C) & 0x80000);
    Pes6BitSet_Write(arg0, 0x98, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x100000);
    Pes6BitSet_Write(arg0, 0x99, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x200000);
    Pes6BitSet_Write(arg0, 0x9A, M2C_FIELD(temp_s0, s32 *, 0x34) & 1);
    Pes6BitSet_Write(arg0, 0x9B, M2C_FIELD(temp_s0, s32 *, 0x34) & 2);
    Pes6BitSet_Write(arg0, 0x9C, M2C_FIELD(temp_s0, s32 *, 0x34) & 4);
    Pes6BitSet_Write(arg0, 0x9D, M2C_FIELD(temp_s0, s32 *, 0x34) & 8);
    Pes6BitSet_Write(arg0, 0x9E, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x10);
    Pes6BitSet_Write(arg0, 0x9F, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x20);
    Pes6BitSet_Write(arg0, 0xA0, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x40);
    Pes6BitSet_Write(arg0, 0xA1, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x80);
    Pes6BitSet_Write(arg0, 0xA2, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x100);
    Pes6BitSet_Write(arg0, 0xA3, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x200);
    Pes6BitSet_Write(arg0, 0xA4, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x400);
    Pes6BitSet_Write(arg0, 0xA5, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x800);
    Pes6BitSet_Write(arg0, 0xA6, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x1000);
    Pes6BitSet_Write(arg0, 0xA7, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x1400);
    Pes6BitSet_Write(arg0, 0x94, M2C_FIELD(temp_s0, u8 *, 0x30) == 1);
    Pes6BitSet_Write(arg0, 0xAB, M2C_FIELD(temp_s0, s32 *, 0x38) & 1);
    Pes6BitSet_Write(arg0, 0xAC, M2C_FIELD(temp_s0, s32 *, 0x38) & 2);
    Pes6BitSet_Write(arg0, 0xAD, M2C_FIELD(temp_s0, s32 *, 0x38) & 4);
    Pes6BitSet_Write(arg0, 0xAE, M2C_FIELD(temp_s0, s32 *, 0x38) & 8);
    Pes6BitSet_Write(arg0, 0xAF, M2C_FIELD(temp_s0, s32 *, 0x38) & 0x10);
    Pes6BitSet_Write(arg0, 0xB0, M2C_FIELD(temp_s0, s32 *, 0x38) & 0x20);
    Pes6BitSet_Write(arg0, 0xB1, M2C_FIELD(temp_s0, s32 *, 0x38) & 0x40);
    Pes6BitSet_Write(arg0, 0xB2, M2C_FIELD(temp_s0, s32 *, 0x38) & 0x80);
    Pes6BitSet_Write(arg0, 0xA8, M2C_FIELD(temp_s0, u8 *, 0x30) == 2);
    Pes6BitSet_Write(arg0, 0x8D, M2C_FIELD(temp_s0, s32 *, 0x20) == 2);
    Pes6BitSet_Write(arg0, 0x8E, M2C_FIELD(temp_s0, s32 *, 0x20) == 4);
    Pes6BitSet_Write(arg0, 0x90, M2C_FIELD(temp_s0, s32 *, 0x2C) & 0x80);
    Pes6BitSet_Write(arg0, 0x91, M2C_FIELD(temp_s0, s32 *, 0x24) == 4);
    Pes6BitSet_Write(arg0, 0x92, M2C_FIELD(temp_s0, s32 *, 0x24) == 3);
    Pes6BitSet_Write(arg0, 0x8B, M2C_FIELD(temp_s0, s32 *, 0xC) == 2);
    var_a2 = (M2C_FIELD(temp_s0, s32 *, 0x2C) & 1) == 0;
    if (var_a2 != 0) {
        temp_s0_2 = Pes6BitSet_Lookup(arg0, 0x8B);
        temp_s0_3 = temp_s0_2 | Pes6BitSet_Lookup(arg0, 0x94);
        var_a2 = (Pes6BitSet_Lookup(arg0, 0xA8) | temp_s0_3) != 0;
    }
    Pes6BitSet_Write(arg0, 0x8A, var_a2);
    return 1;
}
