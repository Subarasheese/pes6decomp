/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229380(void);
s32 func_0097EE50(void) {
    s32 temp_a1;
    s32 var_v0;
    u8 temp_s0;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00229380();
    if (temp_v0 != NULL) {
        temp_s0 = M2C_FIELD(temp_v0, u8 *, 1);
        temp_v0_2 = func_00229380();
        if (temp_v0_2 != NULL) {
            temp_a1 = temp_s0 & 0xFF;
            if (temp_a1 < 8) {
                if (!(M2C_FIELD(temp_v0_2, u8 *, 4) & (1 << temp_a1))) {
                    var_v0 = 0;
                } else {
                    var_v0 = 1 & 0xFF;
                }
            } else {
                var_v0 = 0;
            }
        } else {
            var_v0 = 0;
        }
        return (var_v0 & 0xFF) != 0;
    }
    return 0;
}
