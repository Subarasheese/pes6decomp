/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994750();                              /* extern */
void *func_00994C60(u8, u8);                        /* extern */

void *func_00B459B0(s32 arg0, s64 arg1) {
    s64 temp_s1;
    s64 var_s1;
    s64 var_s3;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_s2;
    void *var_v0;
    void *var_v0_2;

    temp_s1 = (s64) (arg1 << 0x30) >> 0x30;
    temp_s0 = func_00994750();
    temp_v0 = arg0 + (temp_s1 * 2);
    temp_v0_2 = func_00994C60(M2C_FIELD(temp_v0, u8 *, 0), M2C_FIELD(temp_v0, u8 *, 1));
    if (temp_v0_2 != NULL) {
        if (M2C_FIELD(temp_v0_2, u16 *, 4) != 0) {
            var_s2 = temp_v0_2;
        } else {
            goto block_7;
        }
    } else {
block_7:
        var_s2 = NULL;
    }
    if (var_s2 != NULL) {
        var_s3 = 0;
        if (temp_s1 > 0) {
loop_13:
            temp_v0_3 = arg0 + (((s64) (var_s3 << 0x30) >> 0x30) * 2);
            var_v0 = func_00994C60(M2C_FIELD(temp_v0_3, u8 *, 0), M2C_FIELD(temp_v0_3, u8 *, 1));
            if (var_v0 == NULL) {
                var_v0 = NULL;
            } else if (M2C_FIELD(var_v0, u16 *, 4) == 0) {
                var_v0 = NULL;
            }
            if ((var_v0 != NULL) && (M2C_FIELD(var_v0, u16 *, 4) == M2C_FIELD(var_s2, u16 *, 4))) {
                return NULL;
            }
            var_s3 += 1;
            if (var_s3 >= temp_s1) {
                goto block_22;
            }
            goto loop_13;
        }
block_22:
        if ((temp_s0 + 0x61A6D) == arg0) {
            var_s1 = 0;
            if ((s32) M2C_FIELD(temp_s0, u8 *, 0x61A21) > 0) {
loop_24:
                temp_a0 = temp_s0 + (((s64) (var_s1 << 0x30) >> 0x30) * 2);
                var_v0_2 = func_00994C60(M2C_FIELD(temp_a0, u8 *, 0x619D7), M2C_FIELD(temp_a0, u8 *, 0x619D8));
                if (var_v0_2 == NULL) {
                    var_v0_2 = NULL;
                } else if (M2C_FIELD(var_v0_2, u16 *, 4) == 0) {
                    var_v0_2 = NULL;
                }
                if ((var_v0_2 != NULL) && (M2C_FIELD(var_v0_2, u16 *, 4) == M2C_FIELD(var_s2, u16 *, 4))) {
                    return NULL;
                }
                var_s1 += 1;
                if (var_s1 >= (s32) M2C_FIELD(temp_s0, u8 *, 0x61A21)) {
                    goto block_35;
                }
                goto loop_24;
            }
        }
block_35:
        return var_s2;
    }
    return NULL;
}
