/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828160();                                /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_00838820(s32 arg0) {
    M2C_UNK *var_v0;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;

    temp_s0 = func_00828160();
    if (func_00D0BAF0() == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008A5CB0);
    }
    if (var_v0 == NULL) {
        return 0;
    }
    if (arg0 != 0) {
        if (M2C_FIELD(var_v0, s8 *, 0x2B6) != 1) {
            var_a3 = 0;
            do {
                temp_a2 = arg0 + (var_a3 * 0x10);
                temp_a0 = M2C_FIELD(temp_a2, s32 *, 0x7C0);
                temp_v1 = var_a3 * 0x88;
                var_a3 += 1;
                temp_a1 = var_v0 + temp_v1;
                M2C_FIELD(temp_a1, s32 *, 0) = temp_a0;
                M2C_FIELD(temp_a1, s32 *, 0x7C) = (s32) M2C_FIELD(temp_a2, s32 *, 0x7C4);
                M2C_FIELD(temp_a1, s8 *, 0x84) = (s8) M2C_FIELD(temp_a2, s8 *, 0x7CC);
            } while (var_a3 < 4);
            var_a2 = 0;
            do {
                temp_a1_2 = var_v0 + (var_a2 * 0x88);
                if (M2C_FIELD(temp_a1_2, s32 *, 0) == 0) {
                    M2C_FIELD(temp_a1_2, s8 *, 0x85) = 1;
                } else {
                    M2C_FIELD(var_v0, s32 *, 0x220) = (s32) (M2C_FIELD(var_v0, s32 *, 0x220) + 1);
                    if (temp_s0 == M2C_FIELD(temp_a1_2, s32 *, 0)) {
                        M2C_FIELD(var_v0, s32 *, 0x230) = var_a2;
                    }
                    M2C_FIELD(temp_a1_2, s8 *, 0x85) = 0;
                }
                var_a2 += 1;
            } while (var_a2 < 4);
            M2C_FIELD(var_v0, s32 *, 0x22C) = 0;
            return 1;
        }
        return 0;
    }
    return 0;
}
