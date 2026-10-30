/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E9828;
extern s32 D_003E982C;
extern M2C_UNK *D_0050AC78;

void func_001463C0(s32 arg0, s32 *arg1, s32 *arg2) {
    M2C_UNK *var_a6;
    M2C_UNK *var_a7;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_t0;
    void *temp_a5;

    var_a0 = arg0;
    var_t0 = var_a0;
    var_a7 = D_0050AC78;
    var_a6 = NULL;
    if (var_a7 != NULL) {
loop_1:
        if (M2C_FIELD(var_a7, s32 *, 4) != var_a0) {
            var_a6 = var_a7;
            var_a7 = M2C_FIELD(var_a7, M2C_UNK **, 0);
            if (var_a7 == NULL) {

            } else {
                goto loop_1;
            }
        } else {
            temp_a5 = M2C_FIELD(var_a7, void **, 8);
            if (var_a6 != NULL) {
                *var_a6 = M2C_FIELD(var_a7, M2C_UNK **, 0);
                M2C_FIELD(var_a7, M2C_UNK **, 0) = D_0050AC78;
                D_0050AC78 = var_a7;
            }
            temp_v1 = M2C_FIELD(temp_a5, s32 *, 8);
            if (temp_v1 != 0) {
                var_a0 = temp_v1;
            }
            temp_v1_2 = M2C_FIELD(temp_a5, s32 *, 0xC);
            if (temp_v1_2 != 0) {
                var_t0 = temp_v1_2;
            }
        }
    }
    if (arg1 != NULL) {
        *arg1 = var_a0;
        D_003E982C = var_a0;
    }
    if (arg2 != NULL) {
        *arg2 = var_t0;
        D_003E9828 = var_t0;
    }
}
