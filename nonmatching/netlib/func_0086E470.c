/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0086A8E0(s32);                         /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_0086E470(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 var_a0;
    void *temp_v1;

    if ((arg0 != NULL) && (arg3 != 0)) {
        if (*arg0 == 0x434A) {
            func_001C48E8(arg3 + 0x8D8, 0, 0x11);
            func_00874470(arg0);
            func_00873FD0(arg0, arg1);
            func_00874460(arg0);
            if ((*arg1 == 0) && (arg2 != 0)) {
                var_a0 = 0;
                do {
                    temp_v1 = arg3 + (var_a0 * 0xB8);
                    if (arg2 == M2C_FIELD(temp_v1, s32 *, 0)) {
                        M2C_FIELD(temp_v1, s8 *, 0xB6) = 0;
                    }
                    var_a0 += 1;
                } while (var_a0 < 8);
            }
            func_0086A8E0(arg3);
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
