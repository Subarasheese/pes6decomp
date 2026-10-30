/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D07200(void *, void *, void *, void *); /* extern */
extern char D_0088B030[];

s32 func_0080A280(s32 arg0, s32 arg1) {
    s32 temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *var_a3;

    if (((void *)D_0088B030) == NULL) {
        var_a3 = NULL;
    } else if (arg0 < 0) {
        var_a3 = NULL;
    } else if (arg0 < 5) {
        var_a3 = ((void *)D_0088B030) + (arg0 * 0x4D18);
    } else {
        var_a3 = NULL;
    }
    if (var_a3 == NULL) {
        return -1;
    }
    if (arg1 >= 0) {
        if (arg1 < 0x38) {
            temp_a2 = (arg1 * 0x15C) + var_a3;
            temp_a0 = M2C_FIELD(temp_a2, s32 *, 0xF8);
            temp_a1 = temp_a2 + 0xF8;
            if (temp_a0 >= 0) {
                M2C_FIELD(((M2C_FIELD(var_a3, s32 *, 0xF4) * 4) + var_a3), s32 *, 0x10) = temp_a0;
                M2C_FIELD(var_a3, s32 *, 0xF4) = (s32) ((s32) (M2C_FIELD(var_a3, s32 *, 0xF4) + 1) % 56);
                M2C_FIELD(var_a3, s32 *, 4) = (s32) (M2C_FIELD(var_a3, s32 *, 4) - 1);
                if (temp_a1 != NULL) {
                    M2C_FIELD(temp_a2, s32 *, 0xF8) = -1;
                    func_00D07200(temp_a2 + 0xFC, temp_a1, temp_a2, var_a3);
                }
            }
            goto block_20;
        }
        return 1;
    }
block_20:
    return 1;
}
