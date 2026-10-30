/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00311340(void *, s32);
extern int Pes6BitSet_Write(void *, int, int);
extern int func_00335370(void);
extern int func_00326730(int, int, int, int);
s32 func_00292D50();                                /* extern */
M2C_UNK func_003414D0(u8 *, M2C_UNK, M2C_UNK);      /* extern */
extern u8 D_003EA504;
extern char D_00591A90[];

s32 func_008F8F00(void *arg0, s32 arg1, s32 arg2) {
    s32 sp78;
    u8 sp7D;
    u8 sp7E;
    u8 sp7F;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s0;
    void *var_a2;

    func_003414D0(&sp7F, 2, 0xFF);
    temp_s3 = (sp7F ^ 1) & 0xFF;
    func_00326730((s32) &sp7D, (s32) &sp78, arg1, temp_s3);
    if (sp78 == 1) {
        return 0;
    }
    if (sp7D != 0) {
        func_00311340(&sp7E, temp_s3);
        temp_a1 = func_00292D50() & 0xFF;
        var_a3 = 0;
        var_s0 = 0;
        if (temp_a1 > 0) {
            var_a2 = ((void *)D_00591A90) + ((temp_s3 & 0xFF) * 0x8B);
            do {
                if (sp7E == M2C_FIELD(var_a2, u8 *, 7)) {
                    var_s0 = 1;
                }
                var_a3 += 1;
                var_a2 += 1;
            } while (var_a3 < temp_a1);
        }
        M2C_FIELD(func_00335370(), s32 *, 0x1008) = temp_s3;
        M2C_FIELD(func_00335370(), u8 *, 0x1004) = sp7E;
        M2C_FIELD(func_00335370(), s8 *, 0x1003) = (s8) temp_s3;
        var_a2_2 = sp7D != 0;
        temp_s2 = (s32) sp7D >= 2;
        temp_s1 = sp7D == 1;
        if (var_a2_2 != 0) {
            var_a2_2 = D_003EA504 == 0;
        }
        Pes6BitSet_Write(arg0, 0xC, var_a2_2);
        Pes6BitSet_Write(arg0, 0xF, temp_s2);
        Pes6BitSet_Write(arg0, 0x10, temp_s1);
        Pes6BitSet_Write(arg0, 0x14, temp_s2);
        Pes6BitSet_Write(arg0, 0x16, temp_s3 == 0);
        Pes6BitSet_Write(arg0, 0x17, temp_s3 == 1);
        Pes6BitSet_Write(arg0, 0x19, temp_s1);
        Pes6BitSet_Write(arg0, 0x1C, var_s0);
        Pes6BitSet_Write(arg0, 0x1D, var_s0 == 0);
        Pes6BitSet_Write(arg0, 0x1F, sp78 != 1);
        Pes6BitSet_Write(arg0, 0x20, sp78 == 2);
        Pes6BitSet_Write(arg0, 0x21, sp78 == 3);
        Pes6BitSet_Write(arg0, 0x22, sp78 == 4);
        Pes6BitSet_Write(arg0, 0x24, sp78 == 5);
        Pes6BitSet_Write(arg0, 0x25, sp78 == 6);
        Pes6BitSet_Write(arg0, 0x26, sp78 == 7);
        Pes6BitSet_Write(arg0, 0x28, sp78 == 8);
        Pes6BitSet_Write(arg0, 0x29, sp78 == 9);
        Pes6BitSet_Write(arg0, 0x2A, sp78 == 0xA);
        Pes6BitSet_Write(arg0, 0x2B, sp78 == 0xB);
        Pes6BitSet_Write(arg0, 0x2C, sp78 == 0xC);
        Pes6BitSet_Write(arg0, 0x2D, sp78 == 0xD);
        temp_s0 = arg2 == 0;
        Pes6BitSet_Write(arg0, 0x30, temp_s0);
        Pes6BitSet_Write(arg0, 0x31, temp_s0);
        Pes6BitSet_Write(arg0, 0x32, temp_s0);
        return 1;
    }
    return 0;
}
