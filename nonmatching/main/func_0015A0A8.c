/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C4698(void *, M2C_UNK *, M2C_UNK, void *, s32); /* extern */
extern char D_003C7CB8[];

s32 func_0015A0A8(void *arg0, s32 arg1, s16 *arg2) {
    s32 temp_v1;
    s32 var_v0;

    var_v0 = 0;
    if (arg1 >= 0x10) {
        if ((M2C_FIELD(arg0, u8 *, 1) | (M2C_FIELD(arg0, u8 *, 0) << 8)) == 0x8000) {
            temp_v1 = (M2C_FIELD(arg0, u8 *, 2) << 8) | M2C_FIELD(arg0, u8 *, 3);
            if (arg1 > 0x7FFF) {
                var_v0 = 0;
                if (func_001C4698(arg0 + (temp_v1 - 2), ((void *)D_003C7CB8), 6, arg0, arg1) == 0) {
                    if (arg2 != NULL) {
                        *arg2 = temp_v1 + 4;
                    }
                    var_v0 = 1;
                }
            }
        }
    }
    return var_v0;
}
