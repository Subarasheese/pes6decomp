/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00936B90(void);
s32 func_00958900(void) {
    s32 *var_v0_4;
    s32 var_v0_5;
    s64 temp_v1;
    s64 temp_v1_2;
    s8 var_v0_2;
    s8 var_v0_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_a0;
    void *var_v0;

    temp_v0 = func_00936B90();
    if (temp_v0 != NULL) {
        var_v0 = temp_v0 + 0x78;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_v0_2 = M2C_FIELD(var_v0, s8 *, 0x24);
    } else {
        var_v0_2 = 5;
    }
    temp_v0_2 = func_00936B90();
    if (temp_v0_2 != NULL) {
        var_a0 = temp_v0_2 + 0x78;
    } else {
        var_a0 = NULL;
    }
    if (var_a0 == NULL) {
        var_a0 = NULL;
    }
    temp_v1 = (s64) (((s64) ((s64) var_v0_2 << 0x38) >> 0x38) << 0x38) >> 0x38;
    if ((temp_v1 != 4) && (temp_v1 != 3) && (temp_v1 != 2) && (temp_v1 != 1) && (temp_v1 != 0)) {
        return 0;
    }
    if (var_a0 != NULL) {
        var_v0_3 = M2C_FIELD(var_a0, s8 *, 0x25);
    } else {
        var_v0_3 = 5;
    }
    temp_v1_2 = (s64) ((s64) var_v0_3 << 0x38) >> 0x38;
    if ((temp_v1_2 != 4) && (temp_v1_2 != 3) && (temp_v1_2 != 2) && (temp_v1_2 != 1) && (temp_v1_2 != 0)) {
        return 0;
    }
    temp_v0_3 = func_00936B90();
    if (temp_v0_3 != NULL) {
        var_v0_4 = temp_v0_3 + 0x78;
    } else {
        var_v0_4 = NULL;
    }
    if (var_v0_4 == NULL) {
        var_v0_4 = NULL;
    }
    if (var_v0_4 != NULL) {
        var_v0_5 = *var_v0_4;
    } else {
        var_v0_5 = 0;
    }
    if (var_v0_5 != 0) {
        return 1;
    }
    return 0;
}
