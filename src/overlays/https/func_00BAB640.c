/* compiler: ee-gcc-2.96-nsa-G0 */
#include "pes6/m2c.h"

s32 func_00BAB640(void *arg0, void *arg1, void *arg2) {
    s32 var_a3;

    var_a3 = 0;
    if (arg1 != NULL) {
        var_a3 = 1;
        M2C_FIELD(arg1, s32 *, 0) = 6;
        M2C_FIELD(arg1, s32 *, 0x10) = (s32)M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x10);
        M2C_FIELD(arg1, s64 *, 8) = (s64)M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0xC);
    }
    if (arg2 != NULL) {
        var_a3 = 1;
        M2C_FIELD(arg2, s32 *, 0) = (s32)M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4);
        M2C_FIELD(arg2, s32 *, 0x10) = (s32)M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8);
        M2C_FIELD(arg2, s64 *, 8) = (s64)M2C_FIELD(M2C_FIELD(arg0, void **, 8), u32 *, 0);
    }
    return var_a3;
}
