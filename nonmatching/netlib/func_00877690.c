/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00877690(void *arg0, void *arg1) {
    s32 var_a7;
    s8 temp_v0;
    s8 var_a6;
    void *temp_a5;

    var_a6 = 0;
    if (arg1 != NULL) {
        var_a7 = 0;
        do {
            temp_a5 = arg1 + (var_a7 * 0xC8);
            if (M2C_FIELD(temp_a5, s32 *, 0) != 0) {
                temp_v0 = M2C_FIELD(temp_a5, s8 *, 0x7D);
                if ((temp_v0 != 4) && (temp_v0 != 0)) {
                    if ((temp_v0 != 3) && (temp_v0 != 2) && (temp_v0 != 1)) {

                    } else {
                        var_a6 = (var_a6 + 1) & 0xFF;
                    }
                }
            }
            var_a7 += 1;
        } while (var_a7 < 0x1E);
        M2C_FIELD(arg1, s32 *, 0x1770) = (s32) (var_a6 & 0xFF);
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s8 *, 0x45) = var_a6;
        }
        return 1;
    }
    return 0;
}
