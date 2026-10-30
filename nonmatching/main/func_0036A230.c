/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
s32 func_0036A230(void *arg0, void *arg1) {
    s32 temp_s0;
    s32 var_a2;
    void *temp_s1;

    temp_s1 = arg1 + 0x18;
    temp_s0 = M2C_FIELD(arg1, s32 *, 0x28);
    Pes6BitSet_Write(arg0, 0x5E, M2C_FIELD(arg1, s32 *, 0x44) & 1);
    Pes6BitSet_Write(arg0, 0x60, (M2C_FIELD(temp_s1, s32 *, 0x34) & 0x08000000) == 0);
    Pes6BitSet_Write(arg0, 0x61, M2C_FIELD(temp_s1, s32 *, 0x2C) & 2);
    Pes6BitSet_Write(arg0, 0x62, temp_s0 == 2);
    Pes6BitSet_Write(arg0, 0x63, temp_s0 == 4);
    var_a2 = temp_s0 == 2;
    if (var_a2 != 0) {
        var_a2 = (M2C_FIELD(temp_s1, s32 *, 0x34) & 0x1D30) == 0;
    }
    Pes6BitSet_Write(arg0, 0x65, var_a2);
    Pes6BitSet_Write(arg0, 0x68, M2C_FIELD(temp_s1, s32 *, 0xC) == 1);
    Pes6BitSet_Write(arg0, 0x69, M2C_FIELD(temp_s1, s32 *, 0x34) & 1);
    Pes6BitSet_Write(arg0, 0x6A, M2C_FIELD(temp_s1, s32 *, 0x34) & 2);
    Pes6BitSet_Write(arg0, 0x6B, M2C_FIELD(temp_s1, s32 *, 0x34) & 4);
    Pes6BitSet_Write(arg0, 0x6C, M2C_FIELD(temp_s1, s32 *, 0x34) & 8);
    Pes6BitSet_Write(arg0, 0x6D, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x10);
    Pes6BitSet_Write(arg0, 0x6E, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x20);
    Pes6BitSet_Write(arg0, 0x6F, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x40);
    Pes6BitSet_Write(arg0, 0x70, temp_s0 == 2);
    Pes6BitSet_Write(arg0, 0x71, temp_s0 != 2);
    Pes6BitSet_Write(arg0, 0x72, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x80);
    Pes6BitSet_Write(arg0, 0x73, temp_s0 == 2);
    Pes6BitSet_Write(arg0, 0x74, temp_s0 != 2);
    Pes6BitSet_Write(arg0, 0x75, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x100);
    Pes6BitSet_Write(arg0, 0x76, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x200);
    Pes6BitSet_Write(arg0, 0x77, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x400);
    Pes6BitSet_Write(arg0, 0x78, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x800);
    Pes6BitSet_Write(arg0, 0x79, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x1000);
    Pes6BitSet_Write(arg0, 0x7A, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x2000);
    Pes6BitSet_Write(arg0, 0x7B, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x4000);
    Pes6BitSet_Write(arg0, 0x7C, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x8000);
    Pes6BitSet_Write(arg0, 0x7D, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x10000);
    Pes6BitSet_Write(arg0, 0x7E, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x20000);
    Pes6BitSet_Write(arg0, 0x7F, M2C_FIELD(temp_s1, s32 *, 0x34) & 0x40000);
    Pes6BitSet_Write(arg0, 0x5F, M2C_FIELD(temp_s1, u8 *, 0x30) == 1);
    Pes6BitSet_Write(arg0, 0x80, M2C_FIELD(temp_s1, u8 *, 0x30) == 2);
    Pes6BitSet_Write(arg0, 0x81, (M2C_FIELD(temp_s1, s32 *, 0x38) & 0x100) == 0);
    Pes6BitSet_Write(arg0, 0x83, M2C_FIELD(temp_s1, s32 *, 0x38) & 8);
    Pes6BitSet_Write(arg0, 0x84, M2C_FIELD(temp_s1, s32 *, 0x38) & 0x10);
    Pes6BitSet_Write(arg0, 0x85, M2C_FIELD(temp_s1, s32 *, 0x38) & 0x100);
    Pes6BitSet_Write(arg0, 0x86, M2C_FIELD(temp_s1, s32 *, 0x38) & 0x200);
    Pes6BitSet_Write(arg0, 0x87, M2C_FIELD(temp_s1, s32 *, 0x38) & 1);
    Pes6BitSet_Write(arg0, 0x88, M2C_FIELD(temp_s1, s32 *, 0x38) & 2);
    Pes6BitSet_Write(arg0, 0x89, M2C_FIELD(temp_s1, s32 *, 0x38) & 4);
    return 1;
}
