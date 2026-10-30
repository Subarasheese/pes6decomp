/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EADF0;

void func_00B15300(s32 arg0) {
    s32 var_v1;
    s8 var_a0;
    s8 var_v1_2;

    if (D_003EADF0 != NULL) {
        var_v1 = arg0 >> 5;
        if (arg0 < 0) {
            var_v1 = (s32) (arg0 + 0x1F) >> 5;
        }
        var_a0 = (arg0 % 32) & 0xFF;
        if (var_a0 < 0xB) {
            var_v1_2 = 0;
        } else {
            var_v1_2 = (var_a0 - 0xA) & 0xFF;
            var_a0 = 0xA;
        }
        M2C_FIELD(D_003EADF0, s8 *, 0xC0A) = (s8) (var_v1 & 0xFF);
        M2C_FIELD(D_003EADF0, s8 *, 0xC0E) = var_a0;
        M2C_FIELD(D_003EADF0, s8 *, 0xC1A) = var_v1_2;
    }
}
