/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_002BD6F0(s32, s32);                    /* extern */
s16 func_002C1D20(s32, s32, s32, M2C_UNK);          /* extern */
s32 func_00C121C0(s32);                             /* extern */
s32 func_00C17E10(s32, s32);                        /* extern */
s32 func_00C18DA0(s32);                             /* extern */

void func_002BD4C0(s16 *arg0, s32 arg1) {
    s16 *var_s3_2;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_s4;
    s32 var_s2;
    s32 var_s3;

    func_001C48E8(0, 0x2F4);
    var_s3 = 0;
    do {
        temp_a0 = func_00C17E10(arg1, var_s3 & 0xFF) & 0xFF;
        if (temp_a0 != 0xFF) {
            func_002BD6F0(arg0 + (temp_a0 * 0x28) + 0x24, (((arg1 & 0xFF) << 5) | (var_s3 & 0xFF & 0x1F)) & 0xFF);
        }
        var_s3 += 1;
    } while (var_s3 < 0x20);
    var_s2 = 0;
    var_s3_2 = arg0;
    do {
        temp_s4 = func_00C18DA0(var_s2 & 0xFF) & 0xFF;
        *var_s3_2 = func_002C1D20(temp_s4, func_00C18DA0(((var_s2 & 0xFF) + 1) & 0xFF) & 0xFF, arg1, 0);
        var_s2 += 1;
        temp_v1 = *var_s3_2;
        var_s3_2 += 2;
        M2C_FIELD(arg0, s16 *, 8) = (s16) (M2C_FIELD(arg0, s16 *, 8) + temp_v1);
    } while (var_s2 < 4);
    M2C_FIELD(arg0, s16 *, 0xA) = func_002C1D20(0, 0xFF, arg1, 2);
    M2C_FIELD(arg0, s16 *, 0xC) = func_002C1D20(0, 0xFF, arg1, 5);
    M2C_FIELD(arg0, s16 *, 0xE) = func_002C1D20(0, 0xFF, arg1, 6);
    M2C_FIELD(arg0, s16 *, 0x10) = func_002C1D20(0, 0xFF, arg1, 0xC);
    M2C_FIELD(arg0, s16 *, 0x12) = func_002C1D20(0, 0xFF, arg1, 0xA);
    M2C_FIELD(arg0, s16 *, 0x14) = func_002C1D20(0, 0xFF, arg1, 0xE);
    M2C_FIELD(arg0, s16 *, 0x16) = func_002C1D20(0, 0xFF, arg1, 0xF);
    M2C_FIELD(arg0, s16 *, 0x18) = func_002C1D20(0, 0xFF, arg1, 0x15);
    M2C_FIELD(arg0, s16 *, 0x1A) = func_002C1D20(0, 0xFF, arg1, 0x16);
    M2C_FIELD(arg0, s8 *, 0x1C) = func_002C1D20(0, 0xFF, arg1, 0x10);
    M2C_FIELD(arg0, s8 *, 0x1D) = func_002C1D20(0, 0xFF, arg1, 0x11);
    M2C_FIELD(arg0, s32 *, 0x20) = func_00C121C0(arg1);
}
