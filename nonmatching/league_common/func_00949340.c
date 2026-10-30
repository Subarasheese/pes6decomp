/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C02F0(s64);                             /* extern */

s32 func_00949340(s16 *arg0, s64 arg1, s64 arg2) {
    s16 var_v0;
    s32 temp_s4_2;
    s32 temp_s4_3;
    s64 temp_s4;
    s64 var_s0;

    temp_s4 = (s64) (arg2 << 0x30) >> 0x30;
    if (temp_s4 > 0) {
        var_s0 = (s64) (arg1 << 0x30) >> 0x30;
        temp_s4_2 = var_s0 - *arg0;
        if (func_001C02F0(temp_s4) >= temp_s4_2) {
            *arg0 = (s16) arg1;
        } else {
            var_v0 = *arg0 + arg2;
            goto block_12;
        }
        goto block_13;
    }
    if (temp_s4 >= 0) {
        return 1;
    }
    var_s0 = (s64) (arg1 << 0x30) >> 0x30;
    temp_s4_3 = func_001C02F0(*arg0 - var_s0);
    if (func_001C02F0(temp_s4) >= temp_s4_3) {
        *arg0 = (s16) arg1;
    } else {
        var_v0 = *arg0 + arg2;
block_12:
        *arg0 = var_v0;
    }
block_13:
    return *arg0 == var_s0;
}
