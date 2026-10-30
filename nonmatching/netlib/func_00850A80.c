/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B1580[];

s32 func_00850A80(s8 arg0) {
    s32 var_a3;
    void *var_a2;

    var_a3 = 0;
    do {
        var_a2 = M2C_FIELD((((void *)D_008B1580) + ((var_a3 & 0xFF & 1) * 4)), void **, 0x18);
        if (var_a2 != NULL) {
            do {
                if (M2C_FIELD(var_a2, u8 *, 0x18) != 0xFF) {
                    M2C_FIELD(var_a2, s8 *, 0x14) = arg0;
                }
                var_a2 = M2C_FIELD(var_a2, void **, 4);
            } while (var_a2 != NULL);
        }
        var_a3 += 1;
    } while (var_a3 < 2);
    return 0;
}
