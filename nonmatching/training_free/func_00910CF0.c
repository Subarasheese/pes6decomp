/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0098EC40(M2C_UNK);                       /* extern */
s32 func_00BDB8B0(void *);                          /* extern */

s32 func_00910CF0(s32 arg0) {
    s32 var_s1;
    s32 var_s2;
    void *var_s3;

    var_s1 = 0;
    var_s3 = func_0098EC40(0);
    var_s2 = 0;
    do {
        if ((func_00BDB8B0(var_s3) != 0) && ((s32) M2C_FIELD(var_s3, u8 *, 0x1D4) >= (arg0 & 0xFF))) {
            var_s1 += 1;
        }
        var_s2 += 1;
        var_s3 += 0x240;
    } while (var_s2 < 0xA);
    return var_s1 & 0xFF;
}
