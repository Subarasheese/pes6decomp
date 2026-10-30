/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00211AB0(void *, s32, s8, M2C_UNK, M2C_UNK); /* extern */
extern void *D_003E9A00;

void func_00212C70(void *arg0, s32 *arg1) {
    s32 *var_s0_2;
    s32 *var_s1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s1_2;
    void *temp_v1;
    void *temp_v1_2;

    if (arg1 != NULL) {
        if (arg0 == NULL) {
            var_s0 = 0;
            if (M2C_FIELD(D_003E9A00, s8 *, 0xC) > 0) {
                var_s1 = arg1;
                do {
                    if ((*var_s1 == 1) && (D_003E9A00 != NULL) && (M2C_FIELD(D_003E9A00, u8 *, 9) != 0)) {
                        var_a0 = M2C_FIELD(D_003E9A00, s8 *, 0xC) - 1;
                        if (var_a0 < var_s0) {

                        } else if (var_s0 >= 0) {
                            var_a0 = var_s0;
                        } else {
                            var_a0 = 0;
                        }
                        temp_v1 = D_003E9A00 + (var_a0 * 0x7C);
                        M2C_FIELD(temp_v1, s8 *, 0x12) = 1;
                        func_00211AB0(temp_v1 + 0x10, var_s0, M2C_FIELD(D_003E9A00, s8 *, 0xD), 0xA, 0xA);
                    }
                    var_s0 += 1;
                    var_s1 += 4;
                } while (var_s0 < M2C_FIELD(D_003E9A00, s8 *, 0xC));
            }
        } else {
            var_s1_2 = 0;
            if (M2C_FIELD(arg0, s8 *, 0xC) > 0) {
                var_s0_2 = arg1;
                do {
                    if ((*var_s0_2 == 1) && (arg0 != NULL) && (M2C_FIELD(arg0, u8 *, 9) != 0)) {
                        var_a0_2 = M2C_FIELD(arg0, s8 *, 0xC) - 1;
                        if (var_a0_2 < var_s1_2) {

                        } else if (var_s1_2 >= 0) {
                            var_a0_2 = var_s1_2;
                        } else {
                            var_a0_2 = 0;
                        }
                        temp_v1_2 = arg0 + (var_a0_2 * 0x7C);
                        M2C_FIELD(temp_v1_2, s8 *, 0x12) = 1;
                        func_00211AB0(temp_v1_2 + 0x10, var_s1_2, M2C_FIELD(arg0, s8 *, 0xD), 0xA, 0xA);
                    }
                    var_s1_2 += 1;
                    var_s0_2 += 4;
                } while (var_s1_2 < M2C_FIELD(arg0, s8 *, 0xC));
            }
        }
    }
}
