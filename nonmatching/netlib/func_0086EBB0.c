/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00857B70(s32);                         /* extern */
M2C_UNK func_00873FD0(s32 *, s32);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_0086EBB0(s32 *arg0, s32 arg1, void *arg2) {
    s32 var_s0;
    s32 var_s0_2;
    void *temp_s2;
    void *temp_s2_2;

    if ((arg0 != NULL) && (arg1 != 0) && (arg2 != NULL)) {
        if (*arg0 != 0x4346) {
            return -0x46;
        }
        func_00874470();
        func_00873FD0(arg0, arg1);
        func_00874460(arg0);
        var_s0 = 0;
        do {
            temp_s2 = arg2 + (var_s0 * 0x38);
            func_00857B70(temp_s2 + 0x5C8);
            var_s0 += 1;
            M2C_FIELD(temp_s2, s32 *, 0x5C4) = 0;
            M2C_FIELD(temp_s2, s32 *, 0x5C0) = 0;
        } while (var_s0 < 8);
        M2C_FIELD(arg2, s8 *, 0x8FE) = 0;
        var_s0_2 = 0;
        do {
            temp_s2_2 = arg2 + (var_s0_2 * 0xB8);
            func_001C48E8(temp_s2_2, 0, 0xB8);
            var_s0_2 += 1;
            M2C_FIELD(temp_s2_2, s8 *, 0x35) = 0xFF;
            M2C_FIELD(temp_s2_2, s8 *, 0x49) = 0xFF;
            M2C_FIELD(temp_s2_2, s8 *, 0x7E) = -1;
        } while (var_s0_2 < 8);
        return 0;
    }
    return -0x18;
}
