/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00989410(void);
M2C_UNK func_00949340(void *, M2C_UNK, s16);        /* extern */
M2C_UNK func_00987300(s32);                         /* extern */

s32 func_009892D0(void) {
    s32 var_s2;
    u32 temp_v0;
    u32 var_s1;

    temp_v0 = func_00989410();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x488) == 2) {
            return 1;
        }
        var_s1 = temp_v0;
        var_s2 = 0;
        do {
            if (M2C_FIELD(var_s1, s16 *, 0x45E) != 0) {
                func_00949340(var_s1 + 0x45E, 0, M2C_FIELD(var_s1, s16 *, 0x45A));
                M2C_FIELD(var_s1, s16 *, 0x462) = (s16) (M2C_FIELD(var_s1, s16 *, 0x45E) * 0);
                func_00987300(var_s2 & 0xFF);
            }
            var_s2 += 1;
            var_s1 += 2;
        } while (var_s2 < 2);
        return 0;
    }
    return 1;
}
