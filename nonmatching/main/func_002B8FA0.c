/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_005E2F50[];

void func_002B8FA0(s32 arg0) {
    u8 *var_a0_2;
    void *var_a0;
    void *var_a0_3;
    void *var_a0_4;
    void *var_a0_5;
    void *var_a0_6;
    void *var_a0_7;
    void *var_v1;

    if ((arg0 >= 0) && (arg0 < 2)) {
        var_a0 = ((void *)D_005E2F50) + (arg0 * 7);
    } else {
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        func_001C48E8(var_a0, 0, 7);
        if ((arg0 >= 0) && (arg0 < 2)) {
            var_a0_2 = ((void *)D_005E2F50) + (arg0 * 7);
        } else {
            var_a0_2 = NULL;
        }
        if (var_a0_2 != NULL) {
            *var_a0_2 &= 0xF8;
            *var_a0_2 |= 3;
        }
        if ((arg0 >= 0) && (arg0 < 2)) {
            var_a0_3 = ((void *)D_005E2F50) + (arg0 * 7);
        } else {
            var_a0_3 = NULL;
        }
        if (var_a0_3 != NULL) {
            M2C_FIELD(var_a0_3, s8 *, 1) = 1;
        }
        if ((arg0 >= 0) && (arg0 < 2)) {
            var_a0_4 = ((void *)D_005E2F50) + (arg0 * 7);
        } else {
            var_a0_4 = NULL;
        }
        if (var_a0_4 != NULL) {
            M2C_FIELD(var_a0_4, s8 *, 2) = 1;
        }
        if ((arg0 >= 0) && (arg0 < 2)) {
            var_a0_5 = ((void *)D_005E2F50) + (arg0 * 7);
        } else {
            var_a0_5 = NULL;
        }
        if (var_a0_5 != NULL) {
            M2C_FIELD(var_a0_5, s8 *, 3) = 1;
        }
        if ((arg0 >= 0) && (arg0 < 2)) {
            var_v1 = ((void *)D_005E2F50) + (arg0 * 7);
        } else {
            var_v1 = NULL;
        }
        if (var_v1 != NULL) {
            M2C_FIELD(var_v1, s8 *, 4) = 0;
        }
        if ((arg0 >= 0) && (arg0 < 2)) {
            var_a0_6 = ((void *)D_005E2F50) + (arg0 * 7);
        } else {
            var_a0_6 = NULL;
        }
        if (var_a0_6 != NULL) {
            M2C_FIELD(var_a0_6, s8 *, 5) = 0xFF;
        }
        if ((arg0 >= 0) && (arg0 < 2)) {
            var_a0_7 = ((void *)D_005E2F50) + (arg0 * 7);
        } else {
            var_a0_7 = NULL;
        }
        if (var_a0_7 != NULL) {
            M2C_FIELD(var_a0_7, s8 *, 6) = 0xFF;
        }
    }
}
