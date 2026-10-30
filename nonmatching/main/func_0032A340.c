/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0032A340(s32 arg0, s32 *arg1) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg0 & 0xFFFF;
    if (temp_v1 < 0x1800) {
        *arg1 = 0;
    } else if (temp_v1 < 0xE801) {
        if (temp_v1 >= 0x3000) {
            if (temp_v1 >= 0x6000) {
                if (temp_v1 >= 0xA000) {
                    if (temp_v1 >= 0xD000) {
                        var_v0 = 5;
                    } else {
                        var_v0 = 4;
                    }
                } else {
                    var_v0 = 3;
                }
            } else {
                var_v0 = 2;
            }
        } else {
            var_v0 = 1;
        }
        *arg1 = var_v0;
    } else {
        *arg1 = 0;
    }
    return 1;
}
