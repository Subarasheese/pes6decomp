/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A4728();                            /* extern */
M2C_UNK func_001A4778();                            /* extern */

void func_0019F108(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v1;

    func_001A4728();
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    temp_v0 = M2C_FIELD(arg6, void **, 8);
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = arg4;
    M2C_FIELD(arg0, s32 *, 0x14) = arg5;
    M2C_FIELD(arg0, void **, 0x40) = arg6;
    if (temp_v0 == NULL) {
        M2C_FIELD(arg6, void **, 8) = arg0;
    } else {
        var_a0 = temp_v0;
        var_v1 = M2C_FIELD(var_a0, void **, 0x38);
        if (var_v1 != NULL) {
            do {
                var_a0 = var_v1;
                temp_v0_2 = M2C_FIELD(var_a0, void **, 0x38);
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        M2C_FIELD(var_a0, void **, 0x38) = arg0;
    }
    func_001A4778();
}
