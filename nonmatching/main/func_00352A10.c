/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00311C50(s32, s32);
extern s64 func_00311C20(void);
extern int func_0030E830(void);
extern s32 func_0030E0E0(void *, s32, s32);
extern int Pes6BitSet_Write(void *, int, int);
extern int func_0030F1E0(void);
extern s32 func_0030E170(void *, s32, s32);
M2C_UNK func_00311CD0(u8 *, u8, u8);                /* extern */

s32 func_00352A10(void *arg0, void *arg1) {
    s16 sp8A;
    s16 sp8C;
    u8 sp8E;
    u8 sp8F;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;

    func_00311C20();
    func_00311CD0(&sp8F, M2C_FIELD(arg1, u8 *, 5), M2C_FIELD(arg1, u8 *, 6));
    func_00311CD0(&sp8E, M2C_FIELD(arg1, u8 *, 5), M2C_FIELD(arg1, u8 *, 7));
    temp_s3 = (s32) sp8E >= 3;
    temp_s1 = M2C_FIELD(arg1, s32 *, 0x10) & 0x10;
    temp_s2 = func_00311C50((s32) M2C_FIELD(arg1, u8 *, 5), (s32) M2C_FIELD(arg1, u8 *, 7));
    temp_s0 = M2C_FIELD(arg1, s32 *, 0x14);
    func_0030E170(&sp8C, (s32) M2C_FIELD(arg1, u8 *, 5), (s32) M2C_FIELD(arg1, u8 *, 7));
    func_0030E0E0(&sp8A, (s32) M2C_FIELD(arg1, u8 *, 5), (s32) M2C_FIELD(arg1, u8 *, 7));
    Pes6BitSet_Write(arg0, 0x20, M2C_FIELD(arg1, s32 *, 0x10) & 0x20);
    Pes6BitSet_Write(arg0, 0x40, func_0030E830() == 1);
    Pes6BitSet_Write(arg0, 0x21, temp_s1 == 0);
    Pes6BitSet_Write(arg0, 0x22, temp_s2);
    var_a2 = func_0030F1E0() != 0;
    if (var_a2 != 0) {
        var_a2 = func_00311C50((s32) M2C_FIELD(arg1, u8 *, 5), (s32) M2C_FIELD(arg1, u8 *, 6)) != 0;
    }
    if (var_a2 != 0) {
        var_a2 = temp_s3 != 0;
        if (var_a2 == 0) {
            var_a2 = temp_s1 != 0;
        }
    }
    Pes6BitSet_Write(arg0, 0x33, var_a2);
    Pes6BitSet_Write(arg0, 0x36, (s32) sp8C);
    Pes6BitSet_Write(arg0, 0x38, sp8C >= 4);
    Pes6BitSet_Write(arg0, 0x37, sp8C == 3);
    Pes6BitSet_Write(arg0, 0x39, sp8C < 3);
    Pes6BitSet_Write(arg0, 0x3A, (s32) sp8A);
    Pes6BitSet_Write(arg0, 0x3B, temp_s3);
    Pes6BitSet_Write(arg0, 0x3D, (s32) sp8F >= 3);
    temp_s3_2 = temp_s0 & 0x1FF00000;
    Pes6BitSet_Write(arg0, 0x26, temp_s3_2);
    Pes6BitSet_Write(arg0, 0x28, temp_s3_2);
    Pes6BitSet_Write(arg0, 0x29, temp_s0 & 0x100000);
    Pes6BitSet_Write(arg0, 0x2A, temp_s0 & 0x200000);
    Pes6BitSet_Write(arg0, 0x2B, temp_s0 & 0x400000);
    Pes6BitSet_Write(arg0, 0x2C, temp_s0 & 0x800000);
    Pes6BitSet_Write(arg0, 0x2D, temp_s0 & 0x01000000);
    Pes6BitSet_Write(arg0, 0x2E, temp_s0 & 0x02000000);
    Pes6BitSet_Write(arg0, 0x2F, temp_s0 & 0x04000000);
    Pes6BitSet_Write(arg0, 0x30, temp_s0 & 0x08000000);
    Pes6BitSet_Write(arg0, 0x31, temp_s0 & 0x10000000);
    var_a2_2 = temp_s2 != 0;
    if (var_a2_2 != 0) {
        var_a2_2 = temp_s1 != 0;
    }
    Pes6BitSet_Write(arg0, 0x3E, var_a2_2);
    var_a2_3 = temp_s2 != 0;
    if (var_a2_3 != 0) {
        var_a2_3 = temp_s1 != 0;
    }
    Pes6BitSet_Write(arg0, 0x3F, var_a2_3);
    return 1;
}
