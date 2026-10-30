/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
extern int Pes6BitSet_Lookup(void *, int);
s32 func_00369CF0(void *arg0, void *arg1) {
    s32 temp_s2;
    s32 temp_s2_2;
    s32 var_a2;
    void *temp_s0;

    temp_s0 = arg1 + 0x18;
    Pes6BitSet_Write(arg0, 0xB3, M2C_FIELD(arg1, s32 *, 0x2C) == 3);
    Pes6BitSet_Write(arg0, 0xB4, M2C_FIELD(temp_s0, s32 *, 0x2C) & 1);
    Pes6BitSet_Write(arg0, 0xB6, M2C_FIELD(temp_s0, s32 *, 0x24) == 6);
    Pes6BitSet_Write(arg0, 0xB8, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x800000);
    Pes6BitSet_Write(arg0, 0xB9, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x01000000);
    temp_s2 = Pes6BitSet_Lookup(arg0, 0xB8);
    Pes6BitSet_Write(arg0, 0xB7, temp_s2 | Pes6BitSet_Lookup(arg0, 0xB8));
    temp_s2_2 = Pes6BitSet_Lookup(arg0, 0xB6);
    Pes6BitSet_Write(arg0, 0xB5, temp_s2_2 | Pes6BitSet_Lookup(arg0, 0xB7));
    Pes6BitSet_Write(arg0, 0xBA, (M2C_FIELD(temp_s0, s32 *, 0x2C) & 1) == 0);
    Pes6BitSet_Write(arg0, 0xBB, M2C_FIELD(temp_s0, u8 *, 0x30) == 1);
    Pes6BitSet_Write(arg0, 0xBD, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x02000000);
    Pes6BitSet_Write(arg0, 0xBE, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x04000000);
    var_a2 = Pes6BitSet_Lookup(arg0, 0xBD) != 0;
    if (var_a2 == 0) {
        var_a2 = Pes6BitSet_Lookup(arg0, 0xBE) != 0;
    }
    Pes6BitSet_Write(arg0, 0xBC, var_a2);
    Pes6BitSet_Write(arg0, 0xBF, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x04000000);
    Pes6BitSet_Write(arg0, 0xC0, M2C_FIELD(temp_s0, s32 *, 0x34) & 0x200000);
    Pes6BitSet_Write(arg0, 0xC2, M2C_FIELD(temp_s0, u8 *, 0x30) == 2);
    Pes6BitSet_Write(arg0, 0xC4, M2C_FIELD(temp_s0, s32 *, 0x24) != 6);
    return 1;
}
