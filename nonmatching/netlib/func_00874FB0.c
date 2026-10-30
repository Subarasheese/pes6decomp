/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00873FD0(s32 *, s32);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_00874FB0(s32 *arg0, s16 *arg1, s32 arg2) {
    s32 var_s0;
    void *temp_s4;
    void *temp_v0;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != 0)) {
        if (*arg0 == 0x9411) {
            *arg1 = 0;
            var_s0 = 0;
            do {
                temp_v0 = arg1 + (var_s0 * 0x60);
                temp_s4 = temp_v0 + 4;
                M2C_FIELD(temp_v0, s32 *, 4) = 0;
                func_001C48E8(temp_s4 + 0xC, 0, 0x41);
                M2C_FIELD(temp_s4, s32 *, 4) = 0;
                M2C_FIELD(temp_s4, s32 *, 8) = 0;
                M2C_FIELD(temp_s4, s8 *, 0x4D) = 0;
                M2C_FIELD(temp_s4, s16 *, 0x58) = 0;
                M2C_FIELD(temp_s4, s16 *, 0x4E) = 0;
                func_001C48E8(temp_s4 + 0x50, 0, 6);
                var_s0 += 1;
                M2C_FIELD(temp_s4, s8 *, 0x5A) = 0;
                M2C_FIELD(temp_s4, s8 *, 0x5B) = 0;
            } while (var_s0 < 0x14);
            func_00874470(arg0);
            func_00873FD0(arg0, arg2);
            func_00874460(arg0);
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
