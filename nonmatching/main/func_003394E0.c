/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_003394E0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_a1;
    void *temp_v1;
    void *var_a0;

    var_a0 = arg0;
    temp_a1 = (arg1 * 0x14) + var_a0;
    temp_v1 = temp_a1 + (arg2 * 8);
    M2C_FIELD(temp_a1, s32 *, 0x60) = arg3;
    switch (arg3) {                                 /* irregular */
    case 1:
        var_a0 = M2C_FIELD(var_a0, void **, 8);
        break;
    case 2:
        var_a0 = M2C_FIELD(var_a0, void **, 0x3C);
        break;
    }
    M2C_FIELD((temp_v1 + 0x64), void **, 4) = (void *) M2C_FIELD(temp_v1, void **, 0x64);
    M2C_FIELD(temp_v1, void **, 0x64) = var_a0;
    return 1;
}
