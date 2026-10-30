/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001C6158(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0086A8E0(void *);                      /* extern */
M2C_UNK func_00873EE0(s32 *, s32, M2C_UNK);         /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */
extern M2C_UNK func_0086A7E0;

s32 func_0086E340(s32 *arg0, s32 *arg1, s32 arg2, void *arg3) {
    s32 var_a1;
    void *temp_a0;

    if ((arg0 != NULL) && (arg3 != NULL)) {
        if (*arg0 == 0x434B) {
            func_001C48E8(arg3 + 0x8D8, 0, 0x11);
            func_00874470(arg0);
            func_00873EE0(arg0, arg3 + 0x8D8, 0x10);
            func_00874460(arg0);
            if (M2C_FIELD(arg3, u8 *, 0x8D8) == 0) {
                M2C_FIELD(arg3, s8 *, 0x8D5) = 0;
            } else {
                M2C_FIELD(arg3, s8 *, 0x8D5) = 1;
            }
            *arg1 = 0;
            M2C_FIELD(arg3, s32 *, 0x888) = arg2;
            if ((*arg1 == 0) && (arg2 != 0)) {
                var_a1 = 0;
                do {
                    temp_a0 = arg3 + (var_a1 * 0xB8);
                    if (arg2 != M2C_FIELD(temp_a0, s32 *, 0)) {
                        M2C_FIELD(temp_a0, s8 *, 0xB6) = 0;
                    } else {
                        M2C_FIELD(temp_a0, s8 *, 0xB6) = 1;
                    }
                    var_a1 += 1;
                } while (var_a1 < 8);
            }
            func_001C6158(arg3, 8, 0xB8, &func_0086A7E0);
            func_0086A8E0(arg3);
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
