/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s64 func_0030DAF0(M2C_UNK);                         /* extern */
s32 func_0030E830();                                /* extern */
s32 func_0030EA70();                                /* extern */
s32 Pes6BitSet_Lookup(s32, M2C_UNK);                    /* extern */
M2C_UNK Pes6BitSet_Write(s32, M2C_UNK, s32);           /* extern */
s32 func_00325C20(s32);                             /* extern */
s32 func_003336B0(s32);                             /* extern */
s32 func_00333710(void *, u8);                      /* extern */
s32 func_00341010(s32);                             /* extern */
M2C_UNK func_003414D0(u8 *, M2C_UNK, M2C_UNK);      /* extern */

s32 func_0031C380(s32 arg0, void *arg1) {
    u8 sp8F;
    s32 temp_s0;
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s6;
    s64 temp_s3_3;
    void *temp_s1;
    void *temp_s4;
    void *temp_s5;

    temp_s5 = M2C_FIELD(arg1, void **, 0x4C);
    temp_s4 = M2C_FIELD(arg1, void **, 0x50);
    temp_s1 = M2C_FIELD(arg1, void **, 0x44);
    temp_s3 = func_0030EA70();
    func_003414D0(&sp8F, 2, 0xFF);
    temp_s0 = func_00333710(temp_s1, sp8F);
    temp_s6 = func_0030E830() >= 2;
    temp_s3_2 = (temp_s3 >= 0x2D) & (temp_s3 < 0x51);
    Pes6BitSet_Write(arg0, 0xAD, temp_s3_2);
    Pes6BitSet_Write(arg0, 0xAE, temp_s3_2);
    temp_s3_3 = (s64) (func_0030DAF0(0) << 0x30) >> 0x30;
    Pes6BitSet_Write(arg0, 0xAF, (temp_s3_3 + ((s64) (func_0030DAF0(1) << 0x30) >> 0x30)) == 1);
    Pes6BitSet_Write(arg0, 0xB4, func_00325C20(M2C_FIELD(temp_s5, s32 *, 0)));
    Pes6BitSet_Write(arg0, 0xB5, M2C_FIELD(temp_s4, u8 *, 5) == sp8F);
    Pes6BitSet_Write(arg0, 0xB6, temp_s0 == 0xF);
    Pes6BitSet_Write(arg0, 0xB9, temp_s0 == 0xD);
    Pes6BitSet_Write(arg0, 0xBC, temp_s0 == 0xB);
    Pes6BitSet_Write(arg0, 0xBF, Pes6BitSet_Lookup(arg0, 0xB5));
    Pes6BitSet_Write(arg0, 0xC0, temp_s0 == 0x10);
    Pes6BitSet_Write(arg0, 0xC3, temp_s0 == 0x11);
    Pes6BitSet_Write(arg0, 0xC6, temp_s0 == 0x12);
    Pes6BitSet_Write(arg0, 0xC9, temp_s0 == 0x13);
    Pes6BitSet_Write(arg0, 0xCC, Pes6BitSet_Lookup(arg0, 0xB5));
    Pes6BitSet_Write(arg0, 0xCD, temp_s0 == 0xA);
    Pes6BitSet_Write(arg0, 0xD0, temp_s0 == 9);
    Pes6BitSet_Write(arg0, 0xD3, temp_s0 == 8);
    Pes6BitSet_Write(arg0, 0xD6, temp_s0 == 7);
    Pes6BitSet_Write(arg0, 0xD9, Pes6BitSet_Lookup(arg0, 0xB5) == 0);
    Pes6BitSet_Write(arg0, 0xDA, temp_s0 == 0xF);
    Pes6BitSet_Write(arg0, 0xDD, temp_s0 == 0xD);
    Pes6BitSet_Write(arg0, 0xE0, temp_s0 == 0xB);
    Pes6BitSet_Write(arg0, 0xE3, Pes6BitSet_Lookup(arg0, 0xD9));
    Pes6BitSet_Write(arg0, 0xE4, temp_s0 == 0x10);
    Pes6BitSet_Write(arg0, 0xE7, temp_s0 == 0x11);
    Pes6BitSet_Write(arg0, 0xEA, temp_s0 == 0x12);
    Pes6BitSet_Write(arg0, 0xED, temp_s0 == 0x13);
    Pes6BitSet_Write(arg0, 0xF0, Pes6BitSet_Lookup(arg0, 0xD9));
    Pes6BitSet_Write(arg0, 0xF1, temp_s0 == 0xA);
    Pes6BitSet_Write(arg0, 0xF4, temp_s0 == 9);
    Pes6BitSet_Write(arg0, 0xF7, temp_s0 == 8);
    Pes6BitSet_Write(arg0, 0xFA, temp_s0 == 7);
    Pes6BitSet_Write(arg0, 0xFD, temp_s6 & ((M2C_FIELD(temp_s5, s32 *, 4) == 2) & (temp_s0 == 0x11)));
    Pes6BitSet_Write(arg0, 0x100, temp_s6 & ((M2C_FIELD(temp_s5, s32 *, 4) == 2) & (temp_s0 == 0x10)));
    Pes6BitSet_Write(arg0, 0x106, (M2C_FIELD(temp_s1, u8 *, 0x37) == sp8F) & func_00341010(temp_s0));
    temp_s1_2 = M2C_FIELD(temp_s1, u8 *, 0x37) == (sp8F ^ 1);
    Pes6BitSet_Write(arg0, 0x10A, temp_s1_2 & func_003336B0(temp_s0));
    Pes6BitSet_Write(arg0, 0x10E, temp_s0 == 0x11);
    Pes6BitSet_Write(arg0, 0x10F, M2C_FIELD(temp_s4, u8 *, 5) == sp8F);
    Pes6BitSet_Write(arg0, 0x113, M2C_FIELD(temp_s4, u8 *, 5) == (sp8F ^ 1));
    Pes6BitSet_Write(arg0, 0x116, temp_s0 == 0x12);
    Pes6BitSet_Write(arg0, 0x117, M2C_FIELD(temp_s4, u8 *, 5) == sp8F);
    Pes6BitSet_Write(arg0, 0x11B, M2C_FIELD(temp_s4, u8 *, 5) == (sp8F ^ 1));
    return 1;
}
