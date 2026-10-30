/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CDFA00[];

void func_00B91520(void) {
    M2C_UNK (*temp_v1)(M2C_UNK *);
    M2C_UNK *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00CDFA00);
    do {
        if (M2C_FIELD(var_s0, u8 *, 0x10) == 1) {
            temp_v1 = M2C_FIELD(var_s0, M2C_UNK (**)(M2C_UNK *), 4);
            if (temp_v1 != NULL) {
                temp_v1(var_s0);
                M2C_FIELD(var_s0, s8 *, 0x11) = 0;
            }
        }
        var_s1 += 1;
        var_s0 += 0x18;
    } while (var_s1 < 0x39);
}
