/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229460(void);
s32 func_00233EF0(s32, s32);                        /* extern */
s32 func_00234580(s32, s32);                        /* extern */

s32 func_00AE1880(s32 arg0) {
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    u8 temp_s0;
    void *temp_v0;

    temp_v0 = func_00229460();
    if (temp_v0 != NULL) {
        if ((arg0 & 0xFF) != 0xFE) {
            temp_s0 = M2C_FIELD(temp_v0, u8 *, 0x4ABA);
            var_s2 = 0;
            var_s1 = 0;
            if ((s32) temp_s0 > 0) {
                do {
                    temp_s4 = func_00234580(var_s2 & 0xFF, arg0) & 0xFF;
                    if ((func_00233EF0(arg0, var_s2 & 0xFF) == 1) && ((temp_s4 & 0xFF) != 0xFE)) {
                        var_s1 += 1;
                    }
                    var_s2 += 1;
                } while (var_s2 < (s32) temp_s0);
            }
            return var_s1;
        }
        return 0xFF;
    }
    return 0xFF;
}
