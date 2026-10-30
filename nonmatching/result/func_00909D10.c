/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_002C7BF0(s32);
extern u8 func_002C7C40(s32);
extern s32 func_00366290(void);
extern s32 func_002C7D00(s32);
extern s32 func_002C7CD0(s32);
M2C_UNK func_002B51C0(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_002C7A90(s32, s32, s32, s32, s32);     /* extern */
extern char D_00591A90[];
extern char D_00591E00[];
extern char D_005E2C30[];

void func_00909D10(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s6;
    s32 temp_s7;
    s32 var_s5;

    var_s5 = 0;
    var_s2 = ((void *)D_00591A90);
    var_s1 = ((void *)D_00591E00);
    var_s0 = ((void *)D_005E2C30);
    do {
        M2C_FIELD(var_s1, s8 *, 0xF6) = 0;
        M2C_FIELD(var_s2, s8 *, 0x54) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x52) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x53) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x55) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x5C) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x5A) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x5B) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x5D) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x64) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x62) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x63) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x65) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x6C) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x6A) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x6B) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x6D) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x74) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x72) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x73) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x75) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x7C) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x7A) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x7B) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x7D) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x84) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x82) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x83) = 0xFF;
        M2C_FIELD(var_s1, s8 *, 0xF8) = 0;
        M2C_FIELD(var_s2, s8 *, 0x85) = 0xFF;
        M2C_FIELD(var_s1, s8 *, 0xFA) = 0;
        temp_s4 = func_002C7BF0(var_s5) & 0xFF;
        temp_s3 = func_002C7C40(var_s5) & 0xFF;
        temp_s6 = func_002C7D00(var_s5);
        temp_s7 = func_002C7CD0(var_s5);
        if (func_00366290() == 0) {
            func_002B51C0(var_s5, var_s0, 2);
        }
        func_002C7A90(var_s5, temp_s4, temp_s3, temp_s6, temp_s7);
        var_s5 += 1;
        var_s2 += 0x8B;
        var_s1 += 1;
        var_s0 += 0x166;
    } while (var_s5 < 2);
}
