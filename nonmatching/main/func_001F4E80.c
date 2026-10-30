/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001F4E80(void *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_a2;
    M2C_UNK *var_a4;
    u32 temp_a3;

    var_a4 = M2C_FIELD(arg0, M2C_UNK **, 8);
    if (var_a4 == NULL) {
        M2C_FIELD(arg1, M2C_UNK **, 0) = NULL;
        M2C_FIELD(arg1, M2C_UNK **, 4) = NULL;
        M2C_FIELD(arg0, M2C_UNK **, 8) = arg1;
        M2C_FIELD(arg0, M2C_UNK **, 0xC) = arg1;
    } else {
        temp_a3 = M2C_FIELD(arg1, u32 *, 8);
        if (temp_a3 < (u32) M2C_FIELD(var_a4, u32 *, 8)) {
            M2C_FIELD(arg1, M2C_UNK **, 0) = NULL;
            M2C_FIELD(arg1, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 8);
            M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 8), M2C_UNK **, 0) = arg1;
            M2C_FIELD(arg0, M2C_UNK **, 8) = arg1;
        } else {
            temp_a2 = M2C_FIELD(arg0, M2C_UNK **, 0xC);
            if ((u32) M2C_FIELD(temp_a2, u32 *, 8) < temp_a3) {
                M2C_FIELD(arg1, M2C_UNK **, 0) = temp_a2;
                M2C_FIELD(arg1, M2C_UNK **, 4) = NULL;
                M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0xC), M2C_UNK **, 4) = arg1;
                M2C_FIELD(arg0, M2C_UNK **, 0xC) = arg1;
            } else {
loop_9:
                if (temp_a3 >= (u32) M2C_FIELD(var_a4, u32 *, 8)) {
                    var_a4 = M2C_FIELD(var_a4, M2C_UNK **, 4);
                    if (var_a4 != NULL) {
                        goto loop_9;
                    }
                }
                M2C_FIELD(*var_a4, M2C_UNK **, 4) = arg1;
                M2C_FIELD(arg1, M2C_UNK **, 0) = *var_a4;
                M2C_FIELD(arg1, M2C_UNK **, 4) = var_a4;
                *var_a4 = arg1;
            }
        }
    }
}
