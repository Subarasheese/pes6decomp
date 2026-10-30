/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void func_00B2B370(s32 arg0) {
    s32 var_a2;
    void *temp_v0;
    void *var_a1;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_a2 = 0;
        var_a1 = temp_v0;
loop_2:
        if ((arg0 & 0xFFFF) != M2C_FIELD(var_a1, u16 *, 0x32EEE)) {
            var_a2 += 1;
            var_a1 += 2;
            if (var_a2 >= 0x3E8) {

            } else {
                goto loop_2;
            }
        } else {
            M2C_FIELD(((var_a2 * 2) + temp_v0), s16 *, 0x32EEE) = 0;
        }
    }
}
