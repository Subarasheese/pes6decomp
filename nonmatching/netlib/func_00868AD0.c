/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00873FD0(s32 *, s32);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_00868AD0(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 var_s0;
    void *temp_s4;
    void *temp_v0;

    if ((arg0 != NULL) && (arg2 != 0)) {
        if (*arg0 == 0x2002) {
            *arg1 = 0;
            var_s0 = 0;
            do {
                temp_v0 = arg1 + (var_s0 << 6);
                M2C_FIELD(temp_v0, s32 *, 4) = 0;
                temp_s4 = temp_v0 + 4;
                M2C_FIELD(temp_v0, s32 *, 8) = 0;
                func_001C48E8(temp_s4 + 8, 0, 0x21);
                func_001C48E8(temp_s4 + 0x2C, 0, 0x10);
                M2C_FIELD(temp_s4, s16 *, 0x2A) = 0;
                var_s0 += 1;
                M2C_FIELD(temp_s4, s16 *, 0x3C) = 0;
                M2C_FIELD(temp_s4, s16 *, 0x3E) = 0;
            } while (var_s0 < 0xC8);
            func_00874470(arg0);
            func_00873FD0(arg0, arg2);
            func_00874460(arg0);
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
