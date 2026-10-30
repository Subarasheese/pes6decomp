/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00333710(void *, s32);
extern s32 func_00325C20(s32);
extern int Pes6BitSet_Write(void *, int, int);
extern s32 func_00325FE0(void *, void *, s32);
s32 func_0031D080(void *arg0, void *arg1) {
    s32 sp8C;
    s32 *temp_s4;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s6;
    s32 var_s0;
    void *temp_s2;

    temp_s2 = M2C_FIELD(arg1, void **, 0x50);
    temp_s4 = M2C_FIELD(arg1, s32 **, 0x4C);
    temp_s1 = func_00333710(M2C_FIELD(arg1, void **, 0x44), (s32) M2C_FIELD(temp_s2, u8 *, 5));
    temp_s3 = temp_s1 >= 0xE;
    temp_s6 = temp_s1 < 0xD;
    func_00325FE0(&sp8C, temp_s4, (s32) M2C_FIELD(temp_s2, u8 *, 5));
    var_s0 = temp_s1 == 0xF;
    if (var_s0 == 0) {
        var_s0 = temp_s1 == 0xB;
    }
    Pes6BitSet_Write(arg0, 2, (temp_s1 >= 0xE) & ((sp8C != 1) & func_00325C20(*temp_s4)));
    Pes6BitSet_Write(arg0, 4, M2C_FIELD(temp_s2, u8 *, 5) == 1);
    Pes6BitSet_Write(arg0, 5, sp8C == 1);
    Pes6BitSet_Write(arg0, 6, sp8C == 2);
    Pes6BitSet_Write(arg0, 7, sp8C == 3);
    Pes6BitSet_Write(arg0, 8, M2C_FIELD(temp_s2, u8 *, 5) == 0);
    Pes6BitSet_Write(arg0, 9, sp8C == 1);
    Pes6BitSet_Write(arg0, 0xA, sp8C == 2);
    Pes6BitSet_Write(arg0, 0xB, sp8C == 3);
    Pes6BitSet_Write(arg0, 0xD, var_s0);
    Pes6BitSet_Write(arg0, 0x10, var_s0);
    Pes6BitSet_Write(arg0, 0x12, temp_s3);
    Pes6BitSet_Write(arg0, 0x13, temp_s6);
    Pes6BitSet_Write(arg0, 0x14, temp_s1 == 0xD);
    Pes6BitSet_Write(arg0, 0x15, var_s0);
    Pes6BitSet_Write(arg0, 0x16, temp_s3);
    Pes6BitSet_Write(arg0, 0x17, temp_s6);
    return 1;
}
