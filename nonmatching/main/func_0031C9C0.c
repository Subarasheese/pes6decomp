/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_003197C0(void *, s32);
extern int func_0030E780(void);
extern int Pes6BitSet_Write(void *, int, int);
extern s32 func_00333740(void *, s32);
extern int func_003395B0(void *);
extern s32 func_00340C80(f32);
extern int func_0030E830(void);
extern s32 func_00325CE0(void *, void *, s32);
s64 func_0030DAF0(M2C_UNK);                         /* extern */
s32 func_003414D0(u8 *, M2C_UNK, M2C_UNK);          /* extern */

s32 func_0031C9C0(void *arg0, void *arg1) {
    s32 sp88;
    u8 sp8F;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1_2;
    s32 temp_s6_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_s2;
    s64 temp_s0;
    void *temp_s1;
    void *temp_s3;
    void *temp_s4;
    void *temp_s6;

    temp_s6 = M2C_FIELD(arg1, void **, 0x40);
    temp_s4 = M2C_FIELD(arg1, void **, 0x44);
    temp_s3 = M2C_FIELD(arg1, void **, 0x50);
    temp_s1 = M2C_FIELD(arg1, void **, 0x4C);
    if (func_003414D0(&sp8F, 1, 0xFF) == 0) {
        var_s2 = 0xD;
    } else {
        var_s2 = func_00333740(temp_s4, (s32) sp8F);
    }
    temp_s0 = (s64) (func_0030DAF0(0) << 0x30) >> 0x30;
    temp_s1_2 = temp_s0 + ((s64) (func_0030DAF0(1) << 0x30) >> 0x30);
    func_00325CE0(&sp88, temp_s1, (s32) M2C_FIELD(temp_s3, u8 *, 5));
    temp_s0_2 = func_003197C0(temp_s3, (s32) M2C_FIELD(temp_s3, u8 *, 5)) & 0xFF;
    var_a2 = func_0030E830() == 0;
    if (var_a2 != 0) {
        var_a2 = temp_s1_2 == 1;
    }
    Pes6BitSet_Write(arg0, 0x29, var_a2);
    temp_s0_3 = temp_s0_2 & 0xFF;
    var_a2_2 = 0;
    if ((temp_s0_3 < 0xB) && (sp88 >= 5)) {
        var_a2_2 = 1;
    }
    Pes6BitSet_Write(arg0, 0x2A, var_a2_2);
    temp_s6_2 = func_003395B0(temp_s6);
    Pes6BitSet_Write(arg0, 0x2B, temp_s6_2 < func_00340C80(40.0f));
    var_a2_3 = (temp_s0_3 % 45) == 0;
    if (var_a2_3 != 0) {
        var_a2_3 = func_0030E780() != 0;
    }
    Pes6BitSet_Write(arg0, 0xAC, var_a2_3);
    Pes6BitSet_Write(arg0, 0x2C, temp_s1_2 == 1);
    Pes6BitSet_Write(arg0, 0x30, var_s2 < 0xD);
    var_a2_4 = temp_s1_2 == 2;
    if (var_a2_4 != 0) {
        var_a2_4 = func_00333740(temp_s4, (s32) M2C_FIELD(temp_s3, u8 *, 5)) == 0x11;
    }
    Pes6BitSet_Write(arg0, 0x31, var_a2_4);
    return 1;
}
