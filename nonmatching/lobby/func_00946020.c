/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK sprintf(void *, M2C_UNK *, s32, s32); /* extern */
void *func_0082C2A0();                              /* extern */
extern char D_00A010B8[];

s32 func_00946020(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s3;
    s32 var_v1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;
    void *var_v1_3;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_v1 = M2C_FIELD(temp_v0, void **, 0x117E8);
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        var_s3 = M2C_FIELD(var_v1, s32 *, 0xB540);
        if (var_s3 >= 0) {
            if (var_s3 >= 0x65) {
                var_s3 = 0x64;
            }
        } else {
            var_s3 = 0;
        }
    } else {
        var_s3 = 0;
    }
    temp_v0_2 = func_0082C2A0();
    if (temp_v0_2 != NULL) {
        var_v1_2 = M2C_FIELD(temp_v0_2, s32 *, 0x117E8);
    } else {
        var_v1_2 = 0;
    }
    if (var_v1_2 == 0) {
        var_v1_3 = NULL;
    } else if (arg0 < 0) {
        var_v1_3 = NULL;
    } else if (arg0 < var_s3) {
        var_v1_3 = var_v1_2 + (arg0 * 0x1D0);
    } else {
        var_v1_3 = NULL;
    }
    if (var_v1_3 != NULL) {
        M2C_FIELD(var_v1_3, s32 *, 0x50) = arg1;
        M2C_FIELD(var_v1_3, s32 *, 0x54) = arg2;
        M2C_FIELD(var_v1_3, s8 *, 0x5F) = 0;
        sprintf(var_v1_3 + 0x5F, ((void *)D_00A010B8), arg1 % 12, arg2);
        return 1;
    }
    return 0;
}
