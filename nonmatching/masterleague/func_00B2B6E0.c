/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void func_00B2B6E0(s32 arg0) {
    s32 var_a2;
    s32 var_a3;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0;
    void *var_a1;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_a3 = 0;
        var_a1 = temp_v0;
loop_2:
        if ((arg0 & 0xFFFF) != M2C_FIELD(var_a1, u16 *, 0x3397A)) {
            var_a3 += 1;
            var_a1 += 2;
            if (var_a3 >= 0x32) {

            } else {
                goto loop_2;
            }
        } else {
            temp_v1 = (var_a3 * 2) + temp_v0;
            var_a2 = 0x31;
            M2C_FIELD(temp_v1, u16 *, 0x3397A) = 0U;
            if (var_a3 < 0x31) {
                var_a0 = temp_v0 + 0x62;
loop_7:
                if (M2C_FIELD(var_a0, u16 *, 0x3397A) == 0) {
                    var_a2 -= 1;
                    var_a0 -= 2;
                    if (var_a3 >= var_a2) {
                        return;
                    }
                    goto loop_7;
                }
                temp_v1_2 = (var_a2 * 2) + temp_v0;
                M2C_FIELD(temp_v1, u16 *, 0x3397A) = (u16) M2C_FIELD(temp_v1_2, u16 *, 0x3397A);
                M2C_FIELD(temp_v1_2, u16 *, 0x3397A) = 0U;
            }
        }
    }
}
