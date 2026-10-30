/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D07200(void *);                      /* extern */
extern char D_0088B030[];

s32 func_0080A5D0(s32 arg0) {
    s32 var_a0;
    s32 var_s1;
    void *temp_v1;
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
        M2C_FIELD(var_s0, s32 *, 0) = 0;
        var_s1 = 0;
        do {
            temp_v1 = var_s0 + (var_s1 * 0x15C);
            if ((temp_v1 + 0xF8) != NULL) {
                M2C_FIELD(temp_v1, s32 *, 0xF8) = -1;
                func_00D07200(temp_v1 + 0xFC);
            }
            var_s1 += 1;
        } while (var_s1 < 0x38);
        M2C_FIELD(var_s0, s32 *, 0xC) = 0;
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
        M2C_FIELD(var_s0, s32 *, 8) = 0;
        M2C_FIELD(var_s0, s32 *, 0) = 1;
        return 1;
    }
    return 0;
}
