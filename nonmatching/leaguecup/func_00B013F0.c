/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B01540(s32);                             /* extern */
extern s32 D_003EAD54;

s32 func_00B013F0(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 var_s0;
    s32 var_s3;

    var_s0 = 0;
    if (D_003EAD54 == 0) {
        return 0;
    }
    temp_s2 = arg0 & 0xFF;
    var_s3 = 0;
    if (temp_s2 > 0) {
        do {
            var_s0 += func_00B01540(var_s3 & 0xFF);
            var_s3 += 1;
        } while (var_s3 < temp_s2);
    }
    return var_s0 + (arg1 & 0xFF);
}
