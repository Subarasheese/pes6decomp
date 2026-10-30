/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00339640(int, int);
extern s32 func_0031C840(s32, void *);
extern int Pes6BitSet_Write(void *, int, int);
extern int func_003395B0(void *);
extern s32 func_00333710(void *, s32);
extern s32 func_00340C80(f32);
extern s16 func_00310340(void *, s32);
extern s32 func_00341010(s32);
extern int Pes6BitSet_Lookup(void *, int);
extern s32 func_0030EA70(void);
extern int func_0030E830(void);
s64 func_0030DAF0(M2C_UNK);                         /* extern */
M2C_UNK func_0031C9C0();                            /* extern */
M2C_UNK func_003414D0(u8 *, M2C_UNK, M2C_UNK);      /* extern */

s32 func_0031CBA0(void *arg0, void *arg1) {
    s16 sp8C;
    u8 sp8F;
    s32 temp_s0;
    s32 temp_s0_3;
    s32 temp_s0_5;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_7;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s64 temp_s1_4;
    s64 temp_s1_6;
    void *temp_s0_2;
    void *temp_s0_4;
    void *temp_s1;
    void *temp_s1_5;
    void *temp_s1_8;
    void *temp_s2_2;
    void *temp_s2_3;
    void *temp_s3;
    void *temp_s6;

    func_0031C9C0();
    temp_s1 = M2C_FIELD(arg1, void **, 0x50);
    temp_s0 = func_0030EA70();
    func_00310340(&sp8C, (M2C_FIELD(temp_s1, u8 *, 5) ^ 1) & 0xFF);
    Pes6BitSet_Write(arg0, 0x38, temp_s0 >= 0x23);
    Pes6BitSet_Write(arg0, 0x3A, sp8C == 0);
    func_0031C840((s32) arg0, arg1);
    temp_s0_2 = M2C_FIELD(arg1, void **, 0x50);
    temp_s6 = M2C_FIELD(arg1, void **, 0x44);
    temp_s3 = M2C_FIELD(arg1, void **, 0x40);
    temp_s2 = func_00333710(temp_s6, (s32) M2C_FIELD(temp_s0_2, u8 *, 5));
    temp_v0 = func_0030E830();
    Pes6BitSet_Write(arg0, 0x4B, temp_v0 == 1);
    temp_s1_2 = func_003395B0(temp_s3);
    temp_s1_3 = temp_s1_2 - func_00339640((s32) temp_s3, temp_v0);
    Pes6BitSet_Write(arg0, 0x4C, temp_s1_3 < func_00340C80(60.0f));
    temp_s1_4 = (s64) (func_0030DAF0(0) << 0x30) >> 0x30;
    Pes6BitSet_Write(arg0, 0x4D, (temp_s1_4 + ((s64) (func_0030DAF0(1) << 0x30) >> 0x30)) == 1);
    var_a2 = func_00341010(temp_s2) != 0;
    if (var_a2 != 0) {
        var_a2 = M2C_FIELD(temp_s6, u8 *, 0x37) == M2C_FIELD(temp_s0_2, u8 *, 5);
    }
    Pes6BitSet_Write(arg0, 0x52, var_a2);
    Pes6BitSet_Write(arg0, 0x55, temp_s2 == 0x11);
    temp_s2_2 = M2C_FIELD(arg1, void **, 0x50);
    temp_s1_5 = M2C_FIELD(arg1, void **, 0x44);
    temp_s0_3 = func_00333710(temp_s1_5, (s32) M2C_FIELD(temp_s2_2, u8 *, 5));
    func_003414D0(&sp8F, 0, 0xFF);
    Pes6BitSet_Write(arg0, 0x58, func_0030EA70() >= 0x50);
    var_a2_2 = temp_s0_3 == 0x10;
    if (var_a2_2 == 0) {
        var_a2_2 = temp_s0_3 == 0xF;
    }
    if (var_a2_2 != 0) {
        var_a2_2 = M2C_FIELD(temp_s1_5, u8 *, 0x37) == M2C_FIELD(temp_s2_2, u8 *, 5);
    }
    Pes6BitSet_Write(arg0, 0x59, var_a2_2);
    temp_s1_6 = (s64) (func_0030DAF0(0) << 0x30) >> 0x30;
    Pes6BitSet_Write(arg0, 0x5C, (temp_s1_6 + ((s64) (func_0030DAF0(1) << 0x30) >> 0x30)) == 1);
    Pes6BitSet_Write(arg0, 0x62, M2C_FIELD(temp_s2_2, u8 *, 5) == sp8F);
    Pes6BitSet_Write(arg0, 0x63, M2C_FIELD(temp_s2_2, u8 *, 5) == (sp8F ^ 1));
    var_a2_3 = temp_s0_3 == 0xD;
    if (var_a2_3 != 0) {
        temp_s1_7 = Pes6BitSet_Lookup(arg0, 0x62);
        var_a2_3 = (temp_s1_7 | Pes6BitSet_Lookup(arg0, 0x63)) != 0;
    }
    Pes6BitSet_Write(arg0, 0x5F, var_a2_3);
    Pes6BitSet_Write(arg0, 0x68, temp_s0_3 == 0x11);
    temp_s1_8 = M2C_FIELD(arg1, void **, 0x50);
    temp_s0_4 = M2C_FIELD(arg1, void **, 0x44);
    temp_s2_3 = M2C_FIELD(arg1, void **, 0x4C);
    func_0030EA70();
    temp_s0_5 = func_00333710(temp_s0_4, (s32) M2C_FIELD(temp_s1_8, u8 *, 5));
    var_a2_4 = func_0030E830() >= 2;
    if (var_a2_4 != 0) {
        var_a2_4 = M2C_FIELD(temp_s2_3, s32 *, 4) == 2;
    }
    Pes6BitSet_Write(arg0, 0x6B, var_a2_4);
    Pes6BitSet_Write(arg0, 0x6C, temp_s0_5 == 0x10);
    Pes6BitSet_Write(arg0, 0x6D, M2C_FIELD(temp_s1_8, u8 *, 0x10) == 1);
    Pes6BitSet_Write(arg0, 0x70, (s32) M2C_FIELD(temp_s1_8, u8 *, 0x10) >= 2);
    Pes6BitSet_Write(arg0, 0x73, temp_s0_5 == 0xD);
    return 1;
}
