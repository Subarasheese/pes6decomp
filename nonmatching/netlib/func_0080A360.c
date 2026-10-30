/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D07200(void *);                      /* extern */
extern char D_0088B030[];

s32 func_0080A360(s32 arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a0;
    void *temp_a1;
    void *temp_v1_2;
    void *var_s0;
    void *var_v1;

    if (((void *)D_0088B030) == NULL) {
        var_s0 = NULL;
    } else if (arg0 < 0) {
        var_s0 = NULL;
    } else if (arg0 < 5) {
        var_s0 = ((void *)D_0088B030) + (arg0 * 0x4D18);
    } else {
        var_s0 = NULL;
    }
    if (var_s0 != NULL) {
        if (M2C_FIELD(var_s0, s32 *, 0) == 1) {
            temp_v0 = M2C_FIELD(var_s0, s32 *, 4);
            if (temp_v0 > 0) {
                if (temp_v0 >= 0x38) {
                    return -1;
                }
                temp_v1 = M2C_FIELD(var_s0, s32 *, 0xF0);
                if (temp_v1 == M2C_FIELD(var_s0, s32 *, 0xF4)) {
                    return -1;
                }
                if (M2C_FIELD(((temp_v1 * 4) + var_s0), s32 *, 0x10) == -1) {
                    return -1;
                }
                goto block_43;
            }
            if (((void *)D_0088B030) == NULL) {
                var_v1 = NULL;
            } else if (arg0 < 0) {
                var_v1 = NULL;
            } else if (arg0 < 5) {
                var_v1 = ((void *)D_0088B030) + (arg0 * 0x4D18);
            } else {
                var_v1 = NULL;
            }
            if (var_v1 != NULL) {
                var_a0 = 0;
                do {
                    M2C_FIELD((var_v1 + (var_a0 * 4)), s32 *, 0x10) = var_a0;
                    var_a0 += 1;
                } while (var_a0 < 0x38);
                M2C_FIELD(var_v1, s32 *, 0xF0) = 0;
                M2C_FIELD(var_v1, s32 *, 0xF4) = 0;
                M2C_FIELD(var_v1, s32 *, 4) = 0;
            }
block_43:
            temp_s1 = M2C_FIELD(((M2C_FIELD(var_s0, s32 *, 0xF0) * 4) + var_s0), s32 *, 0x10);
            temp_s2 = temp_s1 * 0x15C;
            temp_v1_2 = var_s0 + temp_s2;
            if ((temp_v1_2 + 0xF8) != NULL) {
                M2C_FIELD(temp_v1_2, s32 *, 0xF8) = -1;
                func_00D07200(temp_v1_2 + 0xFC);
            }
            temp_a1 = temp_s2 + var_s0;
            M2C_FIELD(var_s0, s32 *, 0xC) = (s32) (M2C_FIELD(var_s0, s32 *, 0xC) + 1);
            M2C_FIELD(temp_a1, s32 *, 0xF8) = temp_s1;
            M2C_FIELD(temp_a1, s32 *, 0x104) = (s32) M2C_FIELD(var_s0, s32 *, 0xC);
            M2C_FIELD(((M2C_FIELD(var_s0, s32 *, 0xF0) * 4) + var_s0), s32 *, 0x10) = -1;
            M2C_FIELD(var_s0, s32 *, 0xF0) = (s32) ((s32) (M2C_FIELD(var_s0, s32 *, 0xF0) + 1) % 56);
            temp_v1_3 = M2C_FIELD(var_s0, s32 *, 4) + 1;
            M2C_FIELD(var_s0, s32 *, 4) = temp_v1_3;
            if (M2C_FIELD(var_s0, s32 *, 8) < temp_v1_3) {
                M2C_FIELD(var_s0, s32 *, 8) = temp_v1_3;
            }
            return temp_s1;
        }
        return -1;
    }
    return -1;
}
