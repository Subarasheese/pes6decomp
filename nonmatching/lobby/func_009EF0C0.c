/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_009EF0C0(void *arg0) {
    s32 temp_s0;
    s32 var_s1;

    temp_s0 = M2C_FIELD(arg0, s32 *, 8);
    var_s1 = 0;
    if (temp_s0 > 0) {
        do {
            M2C_FIELD(arg0, M2C_UNK (**)(s32, s32), 0x18)(M2C_FIELD(arg0, s32 *, 4), var_s1);
            var_s1 += 1;
        } while (var_s1 < temp_s0);
    }
}
