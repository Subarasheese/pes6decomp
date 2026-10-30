/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_005F1CC0[];
extern M2C_UNK func_003385A0;

s32 func_00338EE0(s32 arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a2;
    s32 var_a4;
    s32 var_v1;

    if (M2C_FIELD(((void *)D_005F1CC0), u8 *, 0) != 0) {
        return 0;
    }
    func_001C48E8(((void *)D_005F1CC0), 0, 0x150);
    M2C_FIELD(((void *)D_005F1CC0), void **, 0x100) = (void *) (((void *)D_005F1CC0) + 0x94);
    M2C_FIELD(((void *)D_005F1CC0), void **, 0xA8) = (void *) (((void *)D_005F1CC0) + 0xF0);
    var_a0 = 0;
    M2C_FIELD(((void *)D_005F1CC0), M2C_UNK **, 0x94) = &func_003385A0;
    M2C_FIELD(((void *)D_005F1CC0), M2C_UNK **, 0xF0) = &func_003385A0;
    temp_v1 = arg1 - 1;
    M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) = arg0;
    M2C_FIELD(((void *)D_005F1CC0), u8 *, 0) = 1U;
    M2C_FIELD(((void *)D_005F1CC0), s32 *, 0xF8) = 0x21;
    M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x9C) = 0;
    M2C_FIELD(((void *)D_005F1CC0), s32 *, 0xB0) = 1;
    M2C_FIELD(((void *)D_005F1CC0), s32 *, 0xA4) = 0;
    M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x10C) = 1;
    M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x104) = 0;
    if (temp_v1 > 0) {
        if (temp_v1 >= 9) {
            var_a2 = 0;
            if ((temp_v1 >= 0) && (temp_v1 < 0x7FFFFFFF)) {
                var_a2 = 1;
            }
            if (var_a2 != 0) {
                var_v1 = 0;
                do {
                    var_a0 += 8;
                    M2C_FIELD((M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + var_v1), s32 *, 0x14) = (s32) (M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + (var_v1 + 0x5C));
                    temp_a3 = var_v1 + 0x2E0;
                    M2C_FIELD((M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + var_v1), s32 *, 0x70) = (s32) (M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + (var_v1 + 0xB8));
                    M2C_FIELD((M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + var_v1), s32 *, 0xCC) = (s32) (M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + (var_v1 + 0x114));
                    M2C_FIELD((M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + var_v1), s32 *, 0x128) = (s32) (M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + (var_v1 + 0x170));
                    M2C_FIELD((M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + var_v1), s32 *, 0x184) = (s32) (M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + (var_v1 + 0x1CC));
                    M2C_FIELD((M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + var_v1), s32 *, 0x1E0) = (s32) (M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + (var_v1 + 0x228));
                    M2C_FIELD((M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + var_v1), s32 *, 0x23C) = (s32) (M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + (var_v1 + 0x284));
                    M2C_FIELD((M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + var_v1), s32 *, 0x298) = (s32) (M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + temp_a3);
                    var_v1 = temp_a3;
                } while (var_a0 < (arg1 - 9));
            }
        }
        temp_a3_2 = arg1 - 1;
        if (var_a0 < temp_a3_2) {
            var_a4 = var_a0 * 0x5C;
            do {
                temp_a2 = var_a4 + 0x5C;
                var_a0 += 1;
                M2C_FIELD((M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + var_a4), s32 *, 0x14) = (s32) (M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x14C) + temp_a2);
                var_a4 = temp_a2;
            } while (var_a0 < temp_a3_2);
        }
    }
    return 1;
}
