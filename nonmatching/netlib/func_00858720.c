/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B21C0[];

u8 func_00858720(s64 arg0) {
    s64 temp_v0;
    u8 var_v0;
    void *var_v0_2;

    if (((void *)D_008B21C0) == NULL) {
        var_v0_2 = NULL;
    } else {
        temp_v0 = (s64) (arg0 << 0x30) >> 0x30;
        if ((temp_v0 > 0) && (temp_v0 < 9)) {
            var_v0_2 = ((void *)D_008B21C0) + ((temp_v0 - 1) * 0x1C);
        } else {
            var_v0_2 = NULL;
        }
    }
    if (var_v0_2 == NULL) {
        var_v0 = 0;
    } else {
        var_v0 = M2C_FIELD(var_v0_2, u8 *, 0xF);
    }
    return var_v0;
}
