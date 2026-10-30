/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK *D_00507A90;
extern M2C_UNK *D_00507A94;

void func_00145CF0(s32 arg0) {
    M2C_UNK *temp_a1;
    M2C_UNK *temp_a3;
    M2C_UNK *var_a4;

    var_a4 = D_00507A94;
    if (var_a4 != &D_00507A90) {
loop_1:
        if (M2C_FIELD(var_a4, s32 *, 8) != arg0) {
            var_a4 = M2C_FIELD(var_a4, M2C_UNK **, 4);
            if (var_a4 == &D_00507A90) {

            } else {
                goto loop_1;
            }
        } else {
            temp_a3 = M2C_FIELD(var_a4, M2C_UNK **, 4);
            if (temp_a3 != &D_00507A90) {
                temp_a1 = M2C_FIELD(var_a4, M2C_UNK **, 0);
                M2C_FIELD(temp_a1, M2C_UNK **, 4) = temp_a3;
                *temp_a3 = temp_a1;
                M2C_FIELD(var_a4, M2C_UNK **, 0) = D_00507A90;
                M2C_FIELD(M2C_FIELD(var_a4, M2C_UNK **, 0), M2C_UNK **, 4) = var_a4;
                M2C_FIELD(var_a4, M2C_UNK **, 4) = &D_00507A90;
                D_00507A90 = var_a4;
            }
            M2C_FIELD(var_a4, s32 *, 8) = 0;
        }
    }
}
