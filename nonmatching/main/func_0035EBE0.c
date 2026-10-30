/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0035EBE0(void *arg0, void *arg1) {
    s32 var_v1;
    void *temp_a3;
    void *var_a4;

    M2C_FIELD(arg1, void **, 0x10) = NULL;
    M2C_FIELD(arg1, void **, 0x14) = NULL;
    temp_a3 = M2C_FIELD(arg0, void **, 8);
    if (temp_a3 != NULL) {
        var_a4 = temp_a3;
loop_5:
        var_v1 = 1;
        if (fabsf(M2C_FIELD(var_a4, f32 *, 8)) < fabsf(M2C_FIELD(arg1, f32 *, 8))) {
            var_v1 = 0;
        }
        if ((var_v1 ^ 1) != 0) {
            if (var_a4 != M2C_FIELD(arg0, void **, 0xC)) {
                var_a4 = M2C_FIELD(var_a4, void **, 0x10);
                if (var_a4 != NULL) {
                    goto loop_5;
                }
            } else {
                M2C_FIELD(var_a4, void **, 0x10) = arg1;
                M2C_FIELD(arg1, void **, 0x14) = var_a4;
                M2C_FIELD(arg0, void **, 0xC) = arg1;
            }
        } else if (var_a4 != temp_a3) {
            M2C_FIELD(M2C_FIELD(var_a4, void **, 0x14), void **, 0x10) = arg1;
            M2C_FIELD(arg1, void **, 0x14) = (void *) M2C_FIELD(var_a4, void **, 0x14);
            M2C_FIELD(arg1, void **, 0x10) = var_a4;
            M2C_FIELD(var_a4, void **, 0x14) = arg1;
        } else {
            M2C_FIELD(var_a4, void **, 0x14) = arg1;
            M2C_FIELD(arg1, void **, 0x10) = var_a4;
            M2C_FIELD(arg0, void **, 8) = arg1;
        }
    } else {
        M2C_FIELD(arg0, void **, 8) = arg1;
        M2C_FIELD(arg0, void **, 0xC) = arg1;
    }
    M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) + 1);
}
