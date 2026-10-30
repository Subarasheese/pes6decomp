/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001C6158(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_00873EB0(s32 *);                           /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_008740E0(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */
extern M2C_UNK func_0086A860;

s32 func_0086FC60(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s5;
    s32 var_s5_2;
    void *temp_a1;
    void *temp_s3;
    void *temp_s4;

    var_s0 = arg2 & 0xFF;
    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x4302) {
            return -0x46;
        }
        var_s1 = *arg1;
        if (var_s1 < 0) {
            var_s1 = 0;
        }
        if (var_s1 >= 0x65) {
            var_s1 = 0x64;
        }
        if (var_s0 < 4) {
            var_s0 = 4;
        }
        if (var_s0 >= 9) {
            var_s0 = 8;
        }
        func_00874470(arg0);
loop_30:
        if (var_s1 < 0x64) {
            if (func_00873EB0(arg0) != -1) {
                temp_s4 = arg1 + (var_s1 * 0xBC) + 4;
                func_00873F60(arg0, temp_s4);
                func_00874120(arg0, temp_s4 + 0x45);
                func_00874120(arg0, temp_s4 + 0x46);
                func_001C48E8(temp_s4 + 4, 0, 0x41);
                func_00873EE0(arg0, temp_s4 + 4, 0x40);
                func_00874120(arg0, temp_s4 + 0x47);
                var_a2 = 0;
                do {
                    temp_v0 = var_a2 * 0xC;
                    var_a2 += 1;
                    temp_a1 = temp_s4 + temp_v0;
                    M2C_FIELD(temp_a1, s32 *, 0x4C) = 0;
                    M2C_FIELD(temp_a1, s8 *, 0x50) = 0;
                    M2C_FIELD(temp_a1, s8 *, 0x51) = 0;
                    M2C_FIELD(temp_a1, s8 *, 0x52) = -1;
                    M2C_FIELD(temp_a1, s8 *, 0x53) = 0;
                    M2C_FIELD(temp_a1, s8 *, 0x54) = 0xFF;
                    M2C_FIELD(temp_a1, s8 *, 0x55) = 0xFF;
                } while (var_a2 < 8);
                var_s5 = 0;
loop_22:
                if (var_s5 < var_s0) {
                    temp_s3 = temp_s4 + (var_s5 * 0xC);
                    func_00873F60(arg0, temp_s3 + 0x4C);
                    func_008740E0(arg0, temp_s3 + 0x50);
                    func_008740E0(arg0, temp_s3 + 0x51);
                    func_00874120(arg0, temp_s3 + 0x52);
                    func_00874120(arg0, temp_s3 + 0x53);
                    func_008740E0(arg0, temp_s3 + 0x54);
                    func_008740E0(arg0, temp_s3 + 0x55);
                    if (M2C_FIELD(temp_s3, s32 *, 0x4C) == 0) {
                        M2C_FIELD(temp_s3, s8 *, 0x50) = 0;
                        M2C_FIELD(temp_s3, s8 *, 0x51) = 0;
                        M2C_FIELD(temp_s3, s8 *, 0x52) = -1;
                        M2C_FIELD(temp_s3, s8 *, 0x53) = 0;
                        M2C_FIELD(temp_s3, s8 *, 0x54) = 0xFF;
                        M2C_FIELD(temp_s3, s8 *, 0x55) = 0xFF;
                    }
                    var_s5 += 1;
                    goto loop_22;
                }
                func_001C6158(temp_s4 + 0x4C, 8, 0xC, &func_0086A860);
                var_s3 = 0;
                do {
                    func_00874040(arg0, temp_s4 + (var_s3 * 2) + 0xAC);
                    var_s5_2 = 0;
loop_27:
                    func_008740E0(arg0, temp_s4 + (var_s3 * 5) + var_s5_2 + 0xB0);
                    var_s5_2 += 1;
                    if (var_s5_2 < 5) {
                        goto loop_27;
                    }
                    var_s3 += 1;
                } while (var_s3 < 2);
                func_00874120(arg0, temp_s4 + 0x4A);
                func_00874120(arg0, temp_s4 + 0x4B);
                func_00874120(arg0, temp_s4 + 0xBA);
                func_00874120(arg0, temp_s4 + 0xBB);
                func_00874120(arg0, temp_s4 + 0x48);
                func_00874120(arg0, temp_s4 + 0x49);
                var_s1 += 1;
                goto loop_30;
            }
        }
        func_00874460(arg0);
        *arg1 = var_s1;
        return 0;
    }
    return -0x18;
}
